/*
 * XREFs of ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171880
 * Callers:
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C001E860 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

void __fastcall HandleAdapterMultiPlaneDisableEvent(
        PVOID IoObject,
        unsigned int *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+28h] [rbp-30h]
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(IoObject, Context, IoWorkItem, a4);
  v6[3] = *(_QWORD *)Context;
  v6[4] = Context[2];
  v6[5] = Context[3];
  WdLogEvent5_WdEvent(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v10 = Context[3];
    v9 = Context[2];
    McTemplateK0pqq(v7, &MultiPlaneOverlayDisable, v8, *(_QWORD *)Context, v9, v10);
  }
  memset(v11, 0, 0x20uLL);
  LODWORD(v11[0]) = 14;
  v11[2] = 1LL;
  ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(v11, 0LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
