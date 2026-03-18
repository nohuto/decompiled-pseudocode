/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C0058C58
 * Callers:
 *     Interrupter_Create @ 0x1C0058BC8 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Counter_CreateInterrupterInstance @ 0x1C005CC4C (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  __int64 (__fastcall *v11)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r9
  __int64 v17; // rbx
  __int64 v19; // [rsp+28h] [rbp-B9h]
  _QWORD *v20; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v21[7]; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v22[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v25; // [rsp+148h] [rbp+67h] BYREF

  v7 = a7;
  if ( a4 || a5 || a7 )
  {
    memset(v22, 0, 0x68uLL);
    v22[4] = 0LL;
    v22[3] = Interrupter_WdfEvtInterruptIsr;
    LODWORD(v22[0]) = 104;
    v22[5] = Interrupter_WdfEvtInterruptEnable;
    v22[6] = Interrupter_WdfEvtInterruptDisable;
    LODWORD(v22[2]) = 2;
    HIDWORD(v22[11]) = 2;
    v22[8] = a4;
    v22[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
      v22[7] = Interrupter_WdfEvtInterruptWorkItem;
    else
      v22[4] = Interrupter_WdfEvtInterruptDpc;
    memset(v21, 0, sizeof(v21));
    v21[6] = off_1C004B340;
    LODWORD(v21[0]) = 56;
    v21[1] = Interrupter_WdfEvtCleanupCallback;
    v21[3] = 0x100000001LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023
                                                                                                 + 1128))(
            WdfDriverGlobals,
            a1,
            v22,
            v21,
            &v25);
    v13 = *(_QWORD *)(a2 + 72);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = 13;
      goto LABEL_6;
    }
    v16 = 14;
  }
  else
  {
    memset(v21, 0, sizeof(v21));
    v21[6] = off_1C004B340;
    LODWORD(v21[0]) = 56;
    v21[3] = 0x100000001LL;
    v11 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656);
    v21[4] = a1;
    v12 = v11(WdfDriverGlobals, v21, &v25);
    v13 = *(_QWORD *)(a2 + 72);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = 11;
      goto LABEL_6;
    }
    v16 = 12;
  }
  WPP_RECORDER_SF_qd(v13, 4u, 9u, v16, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v25, a3);
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v25,
          off_1C004B340);
  *(_QWORD *)v17 = v25;
  *(_QWORD *)(v17 + 8) = a2;
  *(_DWORD *)(v17 + 32) = a3;
  KeInitializeSpinLock((PKSPIN_LOCK)(v17 + 208));
  Counter_CreateInterrupterInstance(v17);
  *a6 = v17;
  if ( !v7 )
    return v14;
  memset(v21, 0, sizeof(v21));
  v21[6] = off_1C004B1B0;
  LODWORD(v21[0]) = 56;
  v21[3] = 0x100000001LL;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD **))(WdfFunctions_01023 + 1624))(
          WdfDriverGlobals,
          v25,
          v21,
          &v20);
  v14 = v12;
  if ( v12 >= 0 )
  {
    *v20 = a1;
    v20[1] = a2;
    *v7 = v20;
    return v14;
  }
  v13 = *(_QWORD *)(a2 + 72);
  v15 = 15;
LABEL_6:
  LODWORD(v19) = v12;
  WPP_RECORDER_SF_d(v13, 2u, 9u, v15, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v19);
  return v14;
}
