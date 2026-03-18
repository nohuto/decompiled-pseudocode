/*
 * XREFs of NtTokenManagerThread @ 0x1C0089A60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0089BF0 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  char *v2; // r14
  _BYTE *v3; // rdi
  int v4; // ebx
  size_t v5; // r8
  void *Src[2]; // [rsp+28h] [rbp-F0h]
  unsigned int v8[2]; // [rsp+38h] [rbp-E0h]
  _BYTE v9[160]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0LL;
  Src[0] = 0LL;
  v8[0] = 0;
  memset(v9, 0, sizeof(v9));
  v3 = v9;
  v4 = 0;
  if ( !UserIsCurrentProcessDwm() )
    v4 = -1073741790;
  if ( v4 >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)a1;
    *(_QWORD *)v8 = *(_QWORD *)(a1 + 16);
    v2 = *(char **)(a1 + 8);
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    if ( !v8[0] )
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      if ( v8[0] > 5 )
        v3 = (_BYTE *)Win32AllocPool(32LL * v8[0], 0x62634D54u);
      if ( v3 )
      {
        v5 = 32LL * v8[0];
        if ( &v2[v5] < v2 || (unsigned __int64)&v2[v5] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v3, v2, v5);
      }
      else
      {
        v4 = -1073741801;
      }
      if ( v4 >= 0 )
        v4 = CTokenManager::TokenThread(Src[0], (struct CSM_TOKEN_ADAPTER_INFO *)v3, v8[0]);
    }
  }
  if ( v3 && v3 != v9 )
    Win32FreePool((__int64)v3);
  return (unsigned int)v4;
}
