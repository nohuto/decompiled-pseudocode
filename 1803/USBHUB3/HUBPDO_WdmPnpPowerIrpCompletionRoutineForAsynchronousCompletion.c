/*
 * XREFs of HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C0017BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *v8; // rax
  PWDF_DRIVER_GLOBALS v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+98h] [rbp+18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  memset(v12, 0, sizeof(v12));
  v6 = *(_QWORD *)(a3 + 16);
  v12[6] = off_1C005B098;
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v12[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v11[2] = 1LL;
  v11[1] = HUBPDO_EvtCompleteIrpWorkItem;
  v11[0] = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
         WdfDriverGlobals,
         v11,
         v12,
         &v13);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     v13,
                     off_1C005B098);
    v9 = WdfDriverGlobals;
    *v8 = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(v9, v13);
    return (unsigned int)-1073741802;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 1432LL),
      2u,
      5u,
      0x8Du,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v7);
  }
  return v3;
}
