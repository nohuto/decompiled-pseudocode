/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C001317C
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C0019550 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C001157C (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 i; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // edi
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v12);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = v12[1];
  for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v3 == v6 - 8 )
      break;
    v7 = *(_DWORD *)(v6 + 24);
    v8 = 0LL;
    if ( v7 )
    {
      while ( *(_QWORD *)(v6 + 72 * v8 + 56) != *(_QWORD *)(v12[1] + 24LL) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_6;
      }
      v9 = v6 + 8 * (9 * v8 + 5);
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
    (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
    *(_QWORD *)(v4 + 24),
    v4);
  return v10;
}
