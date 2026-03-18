/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x180055014
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180031910 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180045C5C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009E998 (--1CLightStack@@QEAA@XZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this)
{
  CContentBounder *v2; // rcx

  v2 = (CContentBounder *)*((_QWORD *)this + 66);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  WPF::ProcessHeapImpl::Free(*((void **)this + 125));
  WPF::ProcessHeapImpl::Free(*((void **)this + 120));
  WPF::ProcessHeapImpl::Free(*((void **)this + 115));
  WPF::ProcessHeapImpl::Free(*((void **)this + 111));
  WPF::ProcessHeapImpl::Free(*((void **)this + 107));
  WPF::ProcessHeapImpl::Free(*((void **)this + 103));
  WPF::ProcessHeapImpl::Free(*((void **)this + 99));
  WPF::ProcessHeapImpl::Free(*((void **)this + 95));
  WPF::ProcessHeapImpl::Free(*((void **)this + 91));
  WPF::ProcessHeapImpl::Free(*((void **)this + 87));
  WPF::ProcessHeapImpl::Free(*((void **)this + 83));
  WPF::ProcessHeapImpl::Free(*((void **)this + 79));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 568);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 536);
  WPF::ProcessHeapImpl::Free(*((void **)this + 62));
  CLightStack::~CLightStack((CPreComputeContext *)((char *)this + 200));
  WPF::ProcessHeapImpl::Free(*((void **)this + 23));
  WPF::ProcessHeapImpl::Free(*((void **)this + 19));
  WPF::ProcessHeapImpl::Free(*((void **)this + 15));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 7));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
