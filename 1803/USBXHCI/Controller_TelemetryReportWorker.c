/*
 * XREFs of Controller_TelemetryReportWorker @ 0x1C000A110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     Controller_TelemetryReport @ 0x1C0009DB4 (Controller_TelemetryReport.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Controller_TelemetryReportWorker(__int64 a1)
{
  ULONG v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // r15
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 *v7; // rcx
  int v8; // r12d
  NTSTATUS v9; // eax
  int v10; // edx
  PDEVICE_OBJECT *PoolWithTag; // rax
  PDEVICE_OBJECT *v12; // rsi
  NTSTATUS v13; // eax
  int v14; // edx
  __int64 *i; // r14
  PDEVICE_OBJECT *v16; // rcx
  __int64 *v17; // rax
  __int64 *v19; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-8h]
  ULONG ActualNumberDeviceObjects; // [rsp+88h] [rbp+48h] BYREF
  ULONG v22; // [rsp+90h] [rbp+50h] BYREF

  v2 = 0;
  ActualNumberDeviceObjects = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v3,
                   off_1C004B430);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B110);
  WPP_RECORDER_SF_(v4[9], 4u, 4u, 0xD9u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  KeWaitForSingleObject((PVOID)(v5 + 24), Executive, 0, 0, 0LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
  v7 = *(__int64 **)v5;
  if ( *(_QWORD *)v5 == v5 )
  {
    v20 = &v19;
    v19 = (__int64 *)&v19;
  }
  else
  {
    v19 = *(__int64 **)v5;
    v20 = *(_QWORD **)(v5 + 8);
    v7[1] = (__int64)&v19;
    *v20 = &v19;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
  }
  v8 = *(_DWORD *)(v5 + 80);
  *(_DWORD *)(v5 + 80) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 16), v6);
  v9 = IoEnumerateDeviceObjectList(
         *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
         0LL,
         0,
         &ActualNumberDeviceObjects);
  if ( v9 == -1073741789 )
  {
    PoolWithTag = (PDEVICE_OBJECT *)ExAllocatePoolWithTag(
                                      *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                      8LL * ActualNumberDeviceObjects,
                                      0x49434858u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = IoEnumerateDeviceObjectList(
              *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
              PoolWithTag,
              8 * ActualNumberDeviceObjects,
              &v22);
      if ( v13 >= 0 )
      {
        for ( i = v19; &v19 != (__int64 **)i; i = (__int64 *)*i )
          Controller_TelemetryReport((__int64)v4, v5, (__int64)i, v12, ActualNumberDeviceObjects);
        v22 = 0;
        if ( ActualNumberDeviceObjects )
        {
          do
          {
            ObfDereferenceObject(v12[v2]);
            v2 = v22 + 1;
            v22 = v2;
          }
          while ( v2 < ActualNumberDeviceObjects );
        }
      }
      else
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(v4[9], v14, 4, 220, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v13);
      }
      v16 = v12;
      goto LABEL_16;
    }
    WPP_RECORDER_SF_(v4[9], 2u, 4u, 0xDBu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  }
  else
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(v4[9], v10, 4, 218, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
  }
  while ( 1 )
  {
    v16 = (PDEVICE_OBJECT *)v19;
    if ( v19 == (__int64 *)&v19 )
      break;
    if ( (__int64 **)v19[1] != &v19 || (v17 = (__int64 *)*v19, *(__int64 **)(*v19 + 8) != v19) )
      __fastfail(3u);
    v19 = (__int64 *)*v19;
    v17[1] = (__int64)&v19;
LABEL_16:
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  Controller_InitiateRecovery(v4, v5, v8);
  return KeReleaseMutex((PRKMUTEX)(v5 + 24), 0);
}
