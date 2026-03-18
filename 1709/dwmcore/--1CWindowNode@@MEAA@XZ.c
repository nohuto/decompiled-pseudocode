/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x18009C498
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180098AD0 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800993DC (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180099410 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A9818 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB9B8 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180179940 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::~CWindowNode(CWindowNode *this)
{
  __int64 v2; // rcx
  unsigned int i; // ebp
  unsigned int j; // ebp
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  PVOID v10; // rax
  struct CResource *v11; // rbx
  __int64 v12; // rcx
  struct CResource *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWindowNode::`vftable';
  CWindowNode::Detach(this);
  v2 = *((_QWORD *)this + 98);
  if ( v2 )
  {
    v11 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 98) + 168LL))(*((_QWORD *)this + 98), this);
    CResource::UnRegisterNotifierInternal(this, v11);
  }
  for ( i = 0; i < *((_DWORD *)this + 204); ++i )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 99) + 8LL * i);
    v13 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 152LL))(v12);
    v14 = *(_QWORD *)(*((_QWORD *)this + 99) + 8LL * i);
    (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v14 + 168LL))(v14, this);
    CResource::UnRegisterNotifierInternal(this, v13);
  }
  *((_DWORD *)this + 204) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 792, 8u);
  CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 920);
  CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 928);
  if ( *((_QWORD *)this + 118) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 118));
    *((_QWORD *)this + 118) = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 244); *(_QWORD *)(v15 + 8 * v16) = 0LL )
  {
    v15 = *((_QWORD *)this + 119);
    v16 = j;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v15 + 8LL * j++));
  }
  *((_DWORD *)this + 244) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 952, 8u);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
  *((_QWORD *)this + 105) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 117));
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 246) = 0;
  CWindowNode::CleanUpPendingUpdates(this, 1);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 124);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void *)*((_QWORD *)this + 125);
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  if ( *((_BYTE *)this + 1013) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 256LL);
  v7 = (void *)*((_QWORD *)this + 128);
  if ( v7 )
  {
    DeleteObject(v7);
    *((_QWORD *)this + 128) = 0LL;
  }
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 78);
  v8 = (void *)*((_QWORD *)this + 129);
  if ( v8 )
  {
    DeleteObject(v8);
    *((_QWORD *)this + 129) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 130);
  if ( v9 )
  {
    DeleteObject(v9);
    *((_QWORD *)this + 130) = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CWindowNode *)((char *)this + 1032));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 119);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 99);
  while ( 1 )
  {
    RestartKey = 0LL;
    v10 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 712), &RestartKey);
    if ( !v10 )
      break;
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 712),
      v10);
  }
  CVisual::~CVisual(this);
}
