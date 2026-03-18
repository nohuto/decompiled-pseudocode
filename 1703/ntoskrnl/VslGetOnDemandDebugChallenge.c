/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x140687E54
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x1406E4374 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11[8]; // [rsp+40h] [rbp-10D8h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-1098h] BYREF
  __int64 v13; // [rsp+88h] [rbp-1090h]
  size_t Size; // [rsp+90h] [rbp-1088h]
  unsigned __int64 v15; // [rsp+98h] [rbp-1080h]
  _BYTE Src[4096]; // [rsp+F0h] [rbp-1028h] BYREF

  result = VslpLockPagesForTransfer(v11, (__int64)Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 720);
    Size = v11[0];
    v15 = v11[7];
    v9 = VslpEnterIumSecureMode(1, 17LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v9 >= 0 )
    {
      v10 = Size;
      *a4 = Size;
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
