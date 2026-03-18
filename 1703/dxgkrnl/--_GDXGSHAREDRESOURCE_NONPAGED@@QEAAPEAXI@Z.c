/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C00257A8
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00FEAB0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00FEC54 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

DXGSHAREDRESOURCE_NONPAGED *__fastcall DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(
        DXGSHAREDRESOURCE_NONPAGED *this)
{
  CRefCountedBuffer *v2; // rcx

  v2 = (CRefCountedBuffer *)*((_QWORD *)this + 1);
  if ( v2 )
    CRefCountedBuffer::RefCountedBufferRelease(v2);
  operator delete(this);
  return this;
}
