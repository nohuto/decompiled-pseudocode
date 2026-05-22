/*
 * XREFs of ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800B29D0
 * Callers:
 *     ?Thunk_CancelDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800B2DF0 (-Thunk_CancelDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPE.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B1A2C (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800B2D08 (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::CancelDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  char *v3; // r15
  __int64 v7; // r12
  struct tagPOINT v8; // rdx
  HMONITOR v9; // r8
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-79h]
  unsigned int v13; // [rsp+60h] [rbp-39h] BYREF
  struct tagPOINT v14; // [rsp+68h] [rbp-31h] BYREF
  char v15[8]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-21h] BYREF
  struct tagPOINT v17; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v18[40]; // [rsp+90h] [rbp-9h] BYREF

  v3 = (char *)this + 144;
  v13 = a3;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 18,
    (__int64 **)&v17,
    &v13);
  if ( v17 != *((_QWORD *)this + 19) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)&v17 + 24LL);
    memset_0(v18, 0, sizeof(v18));
    if ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 4) + 112LL))(
           *((_QWORD *)this + 4),
           v7,
           v18) >= 0
      && operator==((__int64)v18, (__int64)a2) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)this + 10,
        (__int64 **)&v17,
        &v13);
      if ( v17 != *((_QWORD *)this + 11) )
      {
        v8 = *(struct tagPOINT *)(*(_QWORD *)&v17 + 24LL);
        v9 = *(HMONITOR *)(*(_QWORD *)&v17 + 32LL);
        v16 = 0LL;
        *(_QWORD *)v15 = 0LL;
        v17 = v8;
        v14 = v8;
        DragNDropProcessorLegacy::HitTest(this, v8, v9, &v14, &v16, (unsigned __int64 *)v15);
        InputETW::DragNDrop::DragCancelledLegacy(a3, &v17, &v14, v16, *(_QWORD *)v15);
        v16 = (unsigned __int64)v14;
        LOWORD(v12) = 3;
        v10 = *((_QWORD *)this + 8);
        *(_QWORD *)v15 = v7;
        CoreUICallSend(v10, v15, 1LL, 1LL, v12, &unk_1801000F6, a3);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4), v7);
        v14.x = 0;
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
          v3,
          &v17,
          &v13,
          &v14);
      }
    }
  }
  return 0LL;
}
