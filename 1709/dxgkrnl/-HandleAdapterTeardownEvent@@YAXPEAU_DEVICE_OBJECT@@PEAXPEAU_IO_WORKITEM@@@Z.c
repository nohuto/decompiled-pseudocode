/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171950
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C001E778 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

void __fastcall HandleAdapterTeardownEvent(__int64 IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-48h]
  unsigned int v15; // [rsp+28h] [rbp-40h]
  _QWORD v16[5]; // [rsp+40h] [rbp-28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(IoObject) + 232);
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  v9[3] = *(_QWORD *)Context;
  v9[4] = Context[2];
  v9[5] = Context[3];
  WdLogEvent5_WdEvent(v9);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v15 = Context[3];
    v14 = Context[2];
    McTemplateK0pqq(v10, &HardwareContentProtectionTeardown, v11, *(_QWORD *)Context, v14, v15);
  }
  memset(v16, 0, 0x20uLL);
  LODWORD(v16[0]) = 11;
  v16[2] = 1LL;
  SMgrGdiCallout(v16, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 2163LL;
    WdLogEvent5_WdError(v13);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
