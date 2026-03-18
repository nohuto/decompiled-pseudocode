/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x1800953FC
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B6EC0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800B4DE0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx

  v3 = (CContentBounder *)*((_QWORD *)this + 32);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  WPF::ProcessHeapImpl::Free(*((void **)this + 94));
  WPF::ProcessHeapImpl::Free(*((void **)this + 89));
  WPF::ProcessHeapImpl::Free(*((void **)this + 84));
  WPF::ProcessHeapImpl::Free(*((void **)this + 80));
  WPF::ProcessHeapImpl::Free(*((void **)this + 76));
  WPF::ProcessHeapImpl::Free(*((void **)this + 72));
  WPF::ProcessHeapImpl::Free(*((void **)this + 68));
  WPF::ProcessHeapImpl::Free(*((void **)this + 64));
  WPF::ProcessHeapImpl::Free(*((void **)this + 60));
  WPF::ProcessHeapImpl::Free(*((void **)this + 56));
  WPF::ProcessHeapImpl::Free(*((void **)this + 52));
  WPF::ProcessHeapImpl::Free(*((void **)this + 48));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 42);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  WPF::ProcessHeapImpl::Free(*((void **)this + 28));
  WPF::ProcessHeapImpl::Free(*((void **)this + 19));
  WPF::ProcessHeapImpl::Free(*((void **)this + 15));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 7));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
