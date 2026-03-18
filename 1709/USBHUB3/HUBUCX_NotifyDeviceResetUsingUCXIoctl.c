/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001F888
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x1C001A870 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001F594 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 i; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  _DWORD *v9; // rbx
  __int64 j; // rcx
  __int64 k; // rdx
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)(a1 + 96) )
  {
LABEL_12:
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1 + 432),
                     0LL);
    memset(v9, 0, 0x30uLL);
    *v9 = 48;
    *((_QWORD *)v9 + 1) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 240LL);
    *((_QWORD *)v9 + 2) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v9 + 3) = *(_QWORD *)(a1 + 88);
    *((_QWORD *)v9 + 5) = v3;
    v9[8] = v2;
    result = HUBUCX_SubmitUcxIoctl(a1, 0x49101Bu);
    if ( (int)result < 0 )
      goto LABEL_13;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 120);
  for ( i = *(_QWORD *)(v1 + 16); ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v1 + 16 == v6 + 8 )
      goto LABEL_12;
    v7 = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
      break;
LABEL_10:
    ;
  }
  while ( *(_DWORD *)(v6 + 72 * v7 + 48) != 4 )
  {
LABEL_9:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 24) )
      goto LABEL_10;
  }
  if ( v3 )
  {
    *(_DWORD *)(v6 + 72 * v7 + 48) = 5;
    *(_QWORD *)(v3 + 8 * v2) = *(_QWORD *)(v6 + 72 * v7 + 40);
    v2 = (unsigned int)(v2 + 1);
    goto LABEL_9;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x14u,
    (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
  LODWORD(result) = -1073741811;
LABEL_13:
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x15u,
             (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
             result);
  if ( v1 )
  {
    for ( j = *(_QWORD *)(v1 + 16); ; j = *(_QWORD *)(v12 + 8) )
    {
      v12 = j - 8;
      if ( v1 + 16 == v12 + 8 )
        break;
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v12 + 24); k = (unsigned int)(k + 1) )
      {
        if ( *(_DWORD *)(v12 + 72 * k + 48) == 5 )
          *(_DWORD *)(v12 + 72 * k + 48) = 4;
      }
    }
  }
  return result;
}
