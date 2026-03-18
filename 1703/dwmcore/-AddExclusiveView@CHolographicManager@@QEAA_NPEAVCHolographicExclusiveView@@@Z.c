/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801A5B20
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x18012FF50 (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  __int64 Ptr_low; // r8
  bool v4; // di
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  CHolographicInteropTaskQueue *Ptr; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h]
  struct IUnknown *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  AcquireSRWLockExclusive(this + 9);
  Ptr_low = LODWORD(this[17].Ptr);
  v4 = 0;
  v5 = v11;
  v6 = Ptr_low + 1;
  if ( (int)Ptr_low + 1 >= (unsigned int)Ptr_low )
    v5 = Ptr_low + 1;
  v7 = v6 < (unsigned int)Ptr_low ? 0x80070216 : 0;
  if ( v6 < (unsigned int)Ptr_low )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v5 > HIDWORD(this[16].Ptr) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[14], 8u, 1, &v12);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[14].Ptr + Ptr_low) = v12;
    LODWORD(this[17].Ptr) = v5;
  }
  if ( v7 >= 0 )
  {
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->AddRef)(v12);
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr )
      v4 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 9u, v12, 0LL, 0LL, 0LL, 0LL);
  }
  ReleaseSRWLockExclusive(this + 9);
  return v4;
}
