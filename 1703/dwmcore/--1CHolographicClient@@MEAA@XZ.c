/*
 * XREFs of ??1CHolographicClient@@MEAA@XZ @ 0x1801A74A0
 * Callers:
 *     ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x1801A7660 (--_ECHolographicClient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801A8B84 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1801A8D20 (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

void __fastcall CHolographicClient::~CHolographicClient(CHolographicClient *this)
{
  __int64 *v2; // r15
  __int64 v3; // rcx
  union _SLIST_HEADER *v4; // rbx
  struct _SLIST_ENTRY *v5; // rax
  CHolographicInteropTaskQueue *v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx
  struct _SLIST_ENTRY *v8; // r14
  union _SLIST_HEADER *v9; // rbp
  struct MESSAGE *v10; // rbx
  void *v11; // rcx
  void *v12; // rcx

  *(_QWORD *)this = &CHolographicClient::`vftable'{for `CMILCOMBase'};
  v2 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CHolographicClient::`vftable'{for `IHolographicCompositorHost'};
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v2);
  }
  if ( *((_QWORD *)this + 3) )
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 176, 0x20u);
  v4 = (union _SLIST_HEADER *)*((_QWORD *)this + 27);
  v5 = InterlockedFlushSList(v4 + 1);
  v8 = CHolographicInteropTaskQueue::ReverseList(v6, v5);
  if ( v8 )
  {
    v9 = v4 + 2;
    do
    {
      v10 = (struct MESSAGE *)v8;
      v8 = v8->Next;
      CHolographicInteropTaskQueue::ClearMessage(v7, v10);
      InterlockedPushEntrySList(v9, (PSLIST_ENTRY)v10);
    }
    while ( v8 );
  }
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 27);
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 28);
  v11 = (void *)*((_QWORD *)this + 20);
  if ( v11 )
    CloseHandle(v11);
  v12 = (void *)*((_QWORD *)this + 26);
  if ( v12 )
    CloseHandle(v12);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 19);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 5);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
