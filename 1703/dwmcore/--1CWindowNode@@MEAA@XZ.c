/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x1800538D0
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18004FE70 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x18004FCC0 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180050554 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180050588 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180162AC8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
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
  v2 = *((_QWORD *)this + 95);
  if ( v2 )
  {
    v11 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 95) + 160LL))(*((_QWORD *)this + 95), this);
    CResource::UnRegisterNotifierInternal(this, v11);
  }
  for ( i = 0; i < *((_DWORD *)this + 198); ++i )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 96) + 8LL * i);
    v13 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
    v14 = *(_QWORD *)(*((_QWORD *)this + 96) + 8LL * i);
    (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v14 + 160LL))(v14, this);
    CResource::UnRegisterNotifierInternal(this, v13);
  }
  *((_DWORD *)this + 198) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 768, 8LL);
  CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 112);
  CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 113);
  if ( *((_QWORD *)this + 115) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 115));
    *((_QWORD *)this + 115) = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 238); *(_QWORD *)(v15 + 8 * v16) = 0LL )
  {
    v15 = *((_QWORD *)this + 116);
    v16 = j;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v15 + 8LL * j++));
  }
  *((_DWORD *)this + 238) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 928, 8LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 102));
  *((_QWORD *)this + 102) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 114));
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 240) = 0;
  CWindowNode::CleanUpPendingUpdates(this, 1);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 121);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void *)*((_QWORD *)this + 122);
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  if ( *((_BYTE *)this + 989) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
  v7 = (void *)*((_QWORD *)this + 125);
  if ( v7 )
  {
    DeleteObject(v7);
    *((_QWORD *)this + 125) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 126);
  if ( v8 )
  {
    DeleteObject(v8);
    *((_QWORD *)this + 126) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 127);
  if ( v9 )
  {
    DeleteObject(v9);
    *((_QWORD *)this + 127) = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CWindowNode *)((char *)this + 1008));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 928);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 768);
  while ( 1 )
  {
    RestartKey = 0LL;
    v10 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 688), &RestartKey);
    if ( !v10 )
      break;
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 688),
      v10);
  }
  CVisual::~CVisual(this);
}
