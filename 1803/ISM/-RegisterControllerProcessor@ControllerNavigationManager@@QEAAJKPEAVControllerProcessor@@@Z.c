/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x18000A98C (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18002FABC (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180032D74 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800331AC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r15
  __int64 v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  ControllerProcessor *v13; // rsi
  __int64 v14; // rdx
  unsigned int **v15; // r9
  struct tagRECT *v16; // r8
  __int64 *v17; // rbx
  __int64 *v18; // r14
  unsigned int v19; // edi
  struct tagRECT v20; // xmm6
  struct tagPOINT v21; // r9
  char v22; // bl
  struct tagRECT v23; // xmm6
  __int64 *v24; // rax
  struct tagRECT v26; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int *v28; // [rsp+90h] [rbp+30h] BYREF
  int v29; // [rsp+98h] [rbp+38h] BYREF
  ControllerProcessor *v30; // [rsp+A0h] [rbp+40h] BYREF

  v30 = a3;
  v29 = a2;
  v4 = *((_QWORD *)this + 10) == 0LL;
  v5 = **((_QWORD **)this + 9);
  v6 = *(__int64 **)(v5 + 8);
  v7 = std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
         (_DWORD)this,
         v5,
         (_DWORD)v6,
         (unsigned int)&v29,
         (__int64)&v30);
  v8 = *((_QWORD *)this + 10);
  if ( v8 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 10) = v8 + 1;
  *(_QWORD *)(v5 + 8) = v7;
  *v6 = v7;
  v28 = (unsigned int *)**((_QWORD **)this + 9);
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
    (float *)this + 16,
    (__int64)&v26,
    v28 + 4,
    (__int64 *)v28);
  v10 = 196LL;
  if ( !*((_BYTE *)this + 228) )
    v10 = 27LL;
  v11 = ControllerProcessor::SetControllerVirtualKeyMappingFor(v9, v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18002F1D2LL);
  }
  v12 = *((_QWORD *)this + 24);
  v13 = v30;
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 32LL))(v12 + 8) )
    {
      v14 = 1LL;
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v23 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v24 = *(__int64 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v26 = v23;
      v28 = (unsigned int *)v24;
      v14 = 3LL;
      if ( (v22 & 0x10) != 0 )
      {
        v15 = &v28;
        v16 = &v26;
LABEL_10:
        if ( (int)ControllerProcessor::UpdateNavigationState(v13, v14, v16, v15) < 0 )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
        }
        goto LABEL_14;
      }
    }
    v15 = 0LL;
    v16 = 0LL;
    goto LABEL_10;
  }
LABEL_14:
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 128,
    &v28);
  if ( v28 != *((unsigned int **)this + 17) )
  {
    v17 = (__int64 *)*((_QWORD *)v28 + 3);
    v28 = (unsigned int *)v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64 *))*v17)(v17);
    v18 = v17 + 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v17[1] + 32))(v17 + 1) )
    {
      v19 = (*(__int64 (__fastcall **)(__int64 *))(*v18 + 40))(v17 + 1);
      v20 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64 *))(*v18 + 48))(v17 + 1);
      v21 = *(struct tagPOINT *)(*(__int64 (__fastcall **)(__int64 *))(*v18 + 56))(v17 + 1);
      v26 = v20;
      ControllerProcessor::NavigationEnable(v13, v19, &v26, v21, 1, v4);
    }
    else
    {
      ControllerProcessor::NavigationDisable(v13);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64 *))(*v17 + 8))(v17);
  }
  return 0LL;
}
