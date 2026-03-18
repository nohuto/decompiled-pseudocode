/*
 * XREFs of ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000AB0C
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F79B0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGWORKQUEUE::FlushQueue(struct _LIST_ENTRY *this)
{
  DXGWORKQUEUE *v1; // rdi
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY v3; // rax
  PLIST_ENTRY v4; // rbx

  v1 = (DXGWORKQUEUE *)this;
  v2 = (KSPIN_LOCK *)&this[1];
  while ( 1 )
  {
    v3 = ExInterlockedRemoveHeadList(this, v2);
    v4 = v3;
    if ( !v3 )
      break;
    ((void (__fastcall *)(struct _LIST_ENTRY *))v3[1].Flink)(v3[1].Blink);
    ExFreePoolWithTag(v4, 0);
    v2 = (KSPIN_LOCK *)((char *)v1 + 16);
    this = (struct _LIST_ENTRY *)v1;
  }
}
