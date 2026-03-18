/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801F7B74
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1801FA01C (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  bool v3; // di
  unsigned int Ptr; // eax
  unsigned int v5; // edx
  int v6; // esi
  int v7; // eax
  CHolographicInteropTaskQueue *v8; // rcx
  struct IUnknown *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  AcquireSRWLockExclusive(this + 10);
  v3 = 0;
  Ptr = (unsigned int)this[22].Ptr;
  v5 = Ptr + 1;
  v6 = Ptr + 1 < Ptr ? 0x80070216 : 0;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > HIDWORD(this[21].Ptr) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[19], 8u, 1, &v10);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[19].Ptr + Ptr) = v10;
    LODWORD(this[22].Ptr) = v5;
  }
  if ( v6 >= 0 )
  {
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->AddRef)(v10);
    v8 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v8 )
    {
      if ( LOBYTE(this[28].Ptr) )
        v3 = CHolographicInteropTaskQueue::PostMessageW(v8, 0xCu, v10, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v3;
}
