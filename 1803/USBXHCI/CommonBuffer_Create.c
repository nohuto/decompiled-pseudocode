/*
 * XREFs of CommonBuffer_Create @ 0x1C00524D8
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilCoreCommonBuffer_Create @ 0x1C003F074 (XilCoreCommonBuffer_Create.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C005CB60 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, char a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-58h]
  _QWORD v12[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF

  memset(v13, 0, sizeof(v13));
  v13[6] = off_1C004B2C8;
  v13[4] = *(_QWORD *)(a1 + 8);
  v13[1] = CommonBuffer_WdfEvtCleanupCallback;
  LODWORD(v13[0]) = 56;
  v13[3] = 0x100000001LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         v13,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v14,
           off_1C004B2C8);
    *(_QWORD *)v8 = a1;
    *(_BYTE *)(v8 + 80) = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a1 + 72),
      4u,
      8u,
      0xBu,
      (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids,
      v14);
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 48));
    *(_QWORD *)(v8 + 64) = v8 + 56;
    *(_QWORD *)(v8 + 56) = v8 + 56;
    XilCoreCommonBuffer_Create(a1, v8, v8 + 88);
    KeInitializeEvent((PRKEVENT)(v8 + 24), NotificationEvent, 1u);
    if ( !Controller_IsSecureDevice(a1) )
    {
      memset(v13, 0, sizeof(v13));
      v13[4] = v14;
      LODWORD(v13[0]) = 56;
      v12[2] = 1LL;
      v12[1] = CommonBuffer_RebalanceResourcesWorkItem;
      v13[3] = 0x100000001LL;
      v12[0] = 24LL;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
             WdfDriverGlobals,
             v12,
             v13,
             v8 + 72);
      v7 = v9;
      if ( v9 < 0 )
      {
        LODWORD(v11) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          2u,
          8u,
          0xCu,
          (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids,
          v11);
      }
    }
    *(_QWORD *)(v8 + 8) = v8 + 288;
    Counter_CreateCommonBufferInstance(v8);
    *a3 = v8;
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 8u, 0xAu, (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids, v6);
  }
  return v7;
}
