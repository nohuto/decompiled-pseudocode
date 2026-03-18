/*
 * XREFs of ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149640
 * Callers:
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0025730 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

void __fastcall HandleAdapterMultiPlaneDisableEvent(PVOID IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // [rsp+20h] [rbp-38h]
  unsigned int v9; // [rsp+28h] [rbp-30h]
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(IoObject, Context);
  v5[3] = *(_QWORD *)Context;
  v5[4] = Context[2];
  v5[5] = Context[3];
  WdLogEvent5_WdEvent(v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v9 = Context[3];
    v8 = Context[2];
    McTemplateK0pqq(v6, &MultiPlaneOverlayDisable, v7, *(_QWORD *)Context, v8, v9);
  }
  memset(v10, 0, 0x20uLL);
  LODWORD(v10[0]) = 14;
  v10[2] = 1LL;
  ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(v10, 0LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
