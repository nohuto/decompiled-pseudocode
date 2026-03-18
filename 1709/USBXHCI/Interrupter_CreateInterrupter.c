/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C005BBD8
 * Callers:
 *     Interrupter_Create @ 0x1C005BB48 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     Counter_CreateInterrupterInstance @ 0x1C005F860 (Counter_CreateInterrupterInstance.c)
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
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int16 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 v17; // [rsp+28h] [rbp-A9h]
  _QWORD v18[8]; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v19[14]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD *v20; // [rsp+138h] [rbp+67h] BYREF

  memset(v19, 0, 0x68uLL);
  v19[4] = 0LL;
  v19[3] = Interrupter_WdfEvtInterruptIsr;
  LODWORD(v19[0]) = 104;
  v19[5] = Interrupter_WdfEvtInterruptEnable;
  v19[6] = Interrupter_WdfEvtInterruptDisable;
  v19[9] = a5;
  LODWORD(v19[2]) = 2;
  HIDWORD(v19[11]) = 2;
  v19[8] = a4;
  if ( Controller_IsSecureDevice(a2) )
    v19[7] = Interrupter_WdfEvtInterruptWorkItem;
  else
    v19[4] = Interrupter_WdfEvtInterruptDpc;
  memset(v18, 0, 0x38uLL);
  LODWORD(v18[0]) = 56;
  v18[3] = 0x100000001LL;
  v18[6] = off_1C004E340;
  v18[1] = Interrupter_WdfEvtCleanupCallback;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                               + 1128))(
          WdfDriverGlobals,
          a1,
          v19,
          v18,
          &a5);
  v12 = v11;
  if ( v11 >= 0 )
  {
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a2 + 72),
      4u,
      9u,
      0xCu,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      a5,
      a3);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a5,
            off_1C004E340);
    *(_QWORD *)v14 = a5;
    *(_QWORD *)(v14 + 8) = a2;
    *(_DWORD *)(v14 + 32) = a3;
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 208));
    Counter_CreateInterrupterInstance(v14);
    *a6 = v14;
    v15 = a7;
    if ( !a7 )
      return v12;
    memset(v18, 0, 0x38uLL);
    v18[3] = 0x100000001LL;
    v18[6] = off_1C004E1B0;
    LODWORD(v18[0]) = 56;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD **))(WdfFunctions_01015 + 1624))(
            WdfDriverGlobals,
            a5,
            v18,
            &v20);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *v20 = a1;
      v20[1] = a2;
      *v15 = v20;
      return v12;
    }
    v13 = 13;
  }
  else
  {
    v13 = 11;
  }
  LODWORD(v17) = v11;
  WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 9u, v13, (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids, v17);
  return v12;
}
