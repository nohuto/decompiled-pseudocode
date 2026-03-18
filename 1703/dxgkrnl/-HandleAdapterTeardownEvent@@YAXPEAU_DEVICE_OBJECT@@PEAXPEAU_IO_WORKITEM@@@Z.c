/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C016E190
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0021968 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall HandleAdapterTeardownEvent(
        __int64 IoObject,
        unsigned int *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+28h] [rbp-40h]
  _QWORD v15[5]; // [rsp+40h] [rbp-28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     IoObject,
                                                     (__int64)Context,
                                                     (__int64)IoWorkItem,
                                                     a4) + 232);
  v7 = (_QWORD *)WdLogNewEntry5_WdEvent(v6);
  v7[3] = *(_QWORD *)Context;
  v7[4] = Context[2];
  v7[5] = Context[3];
  WdLogEvent5_WdEvent(v7);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = Context[3];
    v13 = Context[2];
    Template_pqq(v8, &HardwareContentProtectionTeardown, v9, *(_QWORD *)Context, v13, v14);
  }
  memset(v15, 0, 0x20uLL);
  LODWORD(v15[0]) = 11;
  v15[2] = 1LL;
  SMgrGdiCallout(v15, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = 2097LL;
    WdLogEvent5_WdError(v12);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
