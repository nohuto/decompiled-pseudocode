/*
 * XREFs of ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1801F90A8
 * Callers:
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FC060 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801F867C (-DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  CompositorTracing *v6; // rcx
  unsigned int Ptr; // edx
  __int64 v8; // rcx
  struct CHolographicViewer **i; // r8
  CHolographicInteropTaskQueue *v10; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 18);
    if ( CompositorTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v5,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicViewerRemove_(v6, v4);
    }
  }
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned int)this[26].Ptr;
  v8 = 0LL;
  for ( i = (struct CHolographicViewer **)this[23].Ptr; (unsigned int)v8 < Ptr; v8 = (unsigned int)(v8 + 1) )
  {
    if ( a2 == i[v8] )
      break;
  }
  if ( (unsigned int)v8 < Ptr )
  {
    while ( (unsigned int)v8 < Ptr - 1 )
    {
      i[v8] = i[(unsigned int)(v8 + 1)];
      v8 = (unsigned int)(v8 + 1);
      Ptr = (unsigned int)this[26].Ptr;
    }
    LODWORD(this[26].Ptr) = Ptr - 1;
    v10 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v10 )
      CHolographicInteropTaskQueue::PostMessageW(
        v10,
        0x1Au,
        (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBase::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive(this + 10);
}
