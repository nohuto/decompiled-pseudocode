/*
 * XREFs of ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800B27D4
 * Callers:
 *     ?Thunk_StartDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800B2DE0 (-Thunk_StartDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEA.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x18000A98C (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18002FABC (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B15DC (-DragStartedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::StartDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  char *v3; // r14
  struct tagPOINT v7; // rbx
  HMONITOR v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-60h]
  char v17[8]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  struct tagPOINT v19; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+50h] BYREF
  struct tagPOINT v22; // [rsp+D8h] [rbp+58h] BYREF

  v21 = a3;
  v3 = (char *)this + 144;
  v20 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 18,
    (__int64 **)&v22,
    &v21);
  if ( v22 == *((_QWORD *)this + 19) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      (_QWORD *)this + 10,
      (__int64 **)&v22,
      &v21);
    v7 = v22;
    if ( v22 != *((_QWORD *)this + 11)
      && (*(int (__fastcall **)(_QWORD, struct tagMsgRoutingInfo *, unsigned __int64 *))(**((_QWORD **)this + 4) + 96LL))(
           *((_QWORD *)this + 4),
           a2,
           &v20) >= 0 )
    {
      v8 = *(HMONITOR *)(*(_QWORD *)&v7 + 32LL);
      v19 = *(struct tagPOINT *)(*(_QWORD *)&v7 + 24LL);
      v22 = v19;
      v18 = 0LL;
      *(_QWORD *)v17 = 0LL;
      DragNDropProcessorLegacy::HitTest(this, v19, v8, &v22, &v18, (unsigned __int64 *)v17);
      InputETW::DragNDrop::DragStartedLegacy(a3, &v19, &v22, v18, *(_QWORD *)v17);
      v9 = *((_QWORD *)this + 8);
      v18 = v20;
      LOWORD(v16) = 0;
      if ( (int)CoreUICallSend(v9, &v18, 1LL, 1LL, v16, &unk_1801000F6, a3) >= 0 )
      {
        v11 = (_QWORD *)**((_QWORD **)v3 + 1);
        v12 = (_QWORD *)v11[1];
        v13 = std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
                v10,
                v11,
                v12,
                &v21,
                &v20);
        v14 = *((_QWORD *)v3 + 2);
        if ( 0x7FFFFFFFFFFFFFELL == v14 )
          std::_Xlength_error("list<T> too long");
        *((_QWORD *)v3 + 2) = v14 + 1;
        v11[1] = v13;
        *v12 = v13;
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
          (float *)v3,
          (__int64)&v19,
          (unsigned int *)(**((_QWORD **)v3 + 1) + 16LL),
          **((__int64 ***)v3 + 1));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4), v20);
      }
    }
  }
  return 0LL;
}
