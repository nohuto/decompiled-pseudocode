/*
 * XREFs of ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1801F7E44
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1801FC168 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x1801F85C8 (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  bool v5; // di
  CompositorTracing *v6; // rcx
  unsigned int Ptr; // eax
  unsigned int v8; // edx
  int v9; // esi
  int v10; // eax
  CHolographicInteropTaskQueue *v11; // rcx
  struct IUnknown *v12; // r8
  CMILCOMBase *v14; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v15[4]; // [rsp+68h] [rbp-30h]

  v14 = a2;
  v3 = *((_DWORD *)a2 + 18);
  *(_OWORD *)v15 = *(_OWORD *)((char *)a2 + 108);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicViewerAdd_(v6, v3, v15[2]);
  }
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned int)this[26].Ptr;
  v8 = Ptr + 1;
  v9 = Ptr + 1 < Ptr ? 0x80070216 : 0;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > HIDWORD(this[25].Ptr) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[23], 8u, 1, &v14);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[23].Ptr + Ptr) = v14;
    LODWORD(this[26].Ptr) = v8;
  }
  if ( v9 >= 0 )
  {
    CMILCOMBase::InternalAddRef(v14);
    v11 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v11 )
    {
      v12 = (struct IUnknown *)((char *)v14 + 56);
      if ( !v14 )
        v12 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v11, 0x18u, v12, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v5;
}
