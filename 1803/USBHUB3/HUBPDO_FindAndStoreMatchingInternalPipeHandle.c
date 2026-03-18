/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0013A00
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C001A080 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0011844 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  _QWORD **v4; // rdi
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned int v10; // edi
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v12);
  v3 = v12[1];
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
  for ( i = *v4; ; i = (_QWORD *)*i )
  {
    v6 = i - 1;
    if ( v4 == i )
      break;
    v7 = *((_DWORD *)v6 + 6);
    v8 = 0LL;
    if ( v7 )
    {
      while ( v6[9 * v8 + 7] != *(_QWORD *)(v12[1] + 24LL) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_6;
      }
      v9 = &v6[9 * v8 + 5];
      if ( v9 )
      {
        *(_QWORD *)(a1 + 1656) = v9;
        return 4077;
      }
      break;
    }
LABEL_6:
    ;
  }
  v10 = 4065;
  *(_DWORD *)(a1 + 1564) = -2147482112;
  *(_DWORD *)(a1 + 1560) = -1073741811;
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    3u,
    5u,
    0x2Cu,
    (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
    *(_QWORD *)(v3 + 24),
    v3);
  return v10;
}
