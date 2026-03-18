/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFB00
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1801BDA0C (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  unsigned int v3; // edx
  __int64 Ptr_low; // rcx
  bool v5; // di
  unsigned int v6; // eax
  signed int v7; // esi
  signed int v8; // eax
  CHolographicInteropTaskQueue *Ptr; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h]
  struct IUnknown *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  AcquireSRWLockExclusive(this + 10);
  v3 = v11;
  Ptr_low = LODWORD(this[22].Ptr);
  v5 = 0;
  v6 = Ptr_low + 1;
  if ( (int)Ptr_low + 1 >= (unsigned int)Ptr_low )
    v3 = Ptr_low + 1;
  v7 = v6 < (unsigned int)Ptr_low ? 0x80070216 : 0;
  if ( v6 < (unsigned int)Ptr_low )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > HIDWORD(this[21].Ptr) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[19], 8u, 1, &v12);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[19].Ptr + Ptr_low) = v12;
    LODWORD(this[22].Ptr) = v3;
  }
  if ( v7 >= 0 )
  {
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->AddRef)(v12);
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr )
    {
      if ( LOBYTE(this[24].Ptr) )
        v5 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 0xCu, v12, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v5;
}
