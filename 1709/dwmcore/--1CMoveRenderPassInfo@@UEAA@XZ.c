/*
 * XREFs of ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18014DDC8
 * Callers:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18014DE20 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CMoveRenderPassInfo::~CMoveRenderPassInfo(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  *this = &CMoveRenderPassInfo::`vftable';
  WPF::ProcessHeapImpl::Free(this[5]);
  WPF::ProcessHeapImpl::Free(this[6]);
  v2 = this[1];
  if ( v2 )
  {
    DeleteObject(v2);
    this[1] = 0LL;
  }
  v3 = this[2];
  if ( v3 )
  {
    DeleteObject(v3);
    this[2] = 0LL;
  }
}
