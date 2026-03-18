/*
 * XREFs of ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801F7D24
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801F9950 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXI@Z @ 0x1801F8244 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  bool v5; // di
  CompositorTracing *v6; // rcx
  unsigned int Ptr; // eax
  unsigned int v8; // edx
  int v9; // esi
  int v10; // eax
  CHolographicInteropTaskQueue *v11; // rcx
  struct IUnknown *v12; // r8
  CMILCOMBase *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v2 = *((_DWORD *)a2 + 20);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicDisplayAdd_(v6, v2);
  }
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned int)this[14].Ptr;
  v8 = Ptr + 1;
  v9 = Ptr + 1 < Ptr ? 0x80070216 : 0;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > HIDWORD(this[13].Ptr) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[11], 8u, 1, &v14);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[11].Ptr + Ptr) = v14;
    LODWORD(this[14].Ptr) = v8;
  }
  if ( v9 >= 0 )
  {
    CMILCOMBase::InternalAddRef(v14);
    v11 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v11 )
    {
      v12 = (struct IUnknown *)((char *)v14 + 64);
      if ( !v14 )
        v12 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v11, 6u, v12, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v5;
}
