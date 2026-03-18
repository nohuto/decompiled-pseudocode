/*
 * XREFs of CommonBuffer_Create @ 0x1C0055618
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilCoreCommonBuffer_Create @ 0x1C0040968 (XilCoreCommonBuffer_Create.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C005F770 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+28h] [rbp-58h]
  _QWORD v10[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+30h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[6] = off_1C004E2C8;
  v11[4] = *(_QWORD *)(a1 + 8);
  v11[1] = CommonBuffer_WdfEvtCleanupCallback;
  LODWORD(v11[0]) = 56;
  v11[3] = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v11,
         &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v12,
           off_1C004E2C8);
    *(_QWORD *)v6 = a1;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a1 + 72),
      4u,
      8u,
      0xBu,
      (__int64)&WPP_7d05ae32274238640bbafad5b1877db3_Traceguids,
      v12);
    KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 48));
    *(_QWORD *)(v6 + 64) = v6 + 56;
    *(_QWORD *)(v6 + 56) = v6 + 56;
    XilCoreCommonBuffer_Create(a1, v6, v6 + 80);
    KeInitializeEvent((PRKEVENT)(v6 + 24), NotificationEvent, 1u);
    if ( !Controller_IsSecureDevice(a1) )
    {
      memset(v11, 0, sizeof(v11));
      v11[4] = v12;
      LODWORD(v11[0]) = 56;
      v10[2] = 1LL;
      v10[1] = CommonBuffer_RebalanceResourcesWorkItem;
      v11[3] = 0x100000001LL;
      v10[0] = 24LL;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
             WdfDriverGlobals,
             v10,
             v11,
             v6 + 72);
      v5 = v7;
      if ( v7 < 0 )
      {
        LODWORD(v9) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          2u,
          8u,
          0xCu,
          (__int64)&WPP_7d05ae32274238640bbafad5b1877db3_Traceguids,
          v9);
      }
    }
    *(_QWORD *)(v6 + 8) = v6 + 280;
    Counter_CreateCommonBufferInstance(v6);
    *a2 = v6;
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 8u, 0xAu, (__int64)&WPP_7d05ae32274238640bbafad5b1877db3_Traceguids, v4);
  }
  return v5;
}
