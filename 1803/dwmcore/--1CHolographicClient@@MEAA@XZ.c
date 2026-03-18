/*
 * XREFs of ??1CHolographicClient@@MEAA@XZ @ 0x1801FED14
 * Callers:
 *     ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x1801FEE90 (--_ECHolographicClient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801F92B4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801FE8DC (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1801FEB2C (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

void __fastcall CHolographicClient::~CHolographicClient(CHolographicClient *this)
{
  __int64 *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rdx
  struct _SLIST_ENTRY *v6; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx
  struct _SLIST_ENTRY *v9; // r14
  union _SLIST_HEADER *v10; // rbp
  struct MESSAGE *v11; // rbx
  void *v12; // rcx

  *(_QWORD *)this = &CHolographicClient::`vftable'{for `CMILCOMBase'};
  v2 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CHolographicClient::`vftable'{for `IHolographicCompositorHost'};
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  }
  if ( *((_QWORD *)this + 3) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x20u);
  v4 = *((_QWORD *)this + 30);
  wil::details::ResetEvent(*(wil::details **)(v4 + 48), v5);
  v6 = InterlockedFlushSList((PSLIST_HEADER)(v4 + 16));
  v9 = CHolographicInteropTaskQueue::ReverseList(v7, v6);
  if ( v9 )
  {
    v10 = (union _SLIST_HEADER *)(v4 + 32);
    do
    {
      v11 = (struct MESSAGE *)v9;
      v9 = v9->Next;
      CHolographicInteropTaskQueue::ClearMessage(v8, v11);
      InterlockedPushEntrySList(v10, (PSLIST_ENTRY)v11);
    }
    while ( v9 );
  }
  ReleaseInterface<CD3DSurface>((__int64 *)this + 30);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 31);
  v12 = (void *)*((_QWORD *)this + 29);
  if ( v12 )
    CloseHandle(v12);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
