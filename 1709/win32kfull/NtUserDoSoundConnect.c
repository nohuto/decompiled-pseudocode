/*
 * XREFs of NtUserDoSoundConnect @ 0x1C0124980
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00E0CD4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00E0D58 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall NtUserDoSoundConnect(CUserPlaySound *a1)
{
  NTSTATUS v1; // ebx
  void **v2; // rax
  void **v3; // rdi
  __int64 v4; // rdx
  CUserPlaySound *v5; // rcx
  __int64 v6; // r8
  ULONG TokenInformationLength; // [rsp+40h] [rbp+8h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+10h] BYREF

  CUserPlaySound::Disconnect(a1);
  v1 = OpenEffectiveToken(&TokenHandle);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741789 )
    {
      v2 = (void **)Win32AllocPool(TokenInformationLength, 1869902677LL);
      v3 = v2;
      if ( v2 )
      {
        v1 = ZwQueryInformationToken(TokenHandle, TokenUser, v2, TokenInformationLength, &TokenInformationLength);
        ZwClose(TokenHandle);
        if ( v1 >= 0 )
          v1 = CUserPlaySound::Connect(v5, *v3);
        Win32FreePool(v3, v4, v6);
      }
      else
      {
        ZwClose(TokenHandle);
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      ZwClose(TokenHandle);
    }
  }
  return (unsigned int)v1;
}
