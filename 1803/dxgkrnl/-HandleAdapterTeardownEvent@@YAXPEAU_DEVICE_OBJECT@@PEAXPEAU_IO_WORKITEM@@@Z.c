/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149710
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0025648 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

void __fastcall HandleAdapterTeardownEvent(__int64 IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // [rsp+20h] [rbp-48h]
  unsigned int v13; // [rsp+28h] [rbp-40h]
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(IoObject) + 252);
  v7 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5);
  v7[3] = *(_QWORD *)Context;
  v7[4] = Context[2];
  v7[5] = Context[3];
  WdLogEvent5_WdEvent(v7);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v13 = Context[3];
    v12 = Context[2];
    McTemplateK0pqq(v8, &HardwareContentProtectionTeardown, v9, *(_QWORD *)Context, v12, v13);
  }
  memset(v14, 0, 0x20uLL);
  LODWORD(v14[0]) = 11;
  v14[2] = 1LL;
  SMgrGdiCallout(v14, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = 2178LL;
    WdLogEvent5_WdError(v11);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
