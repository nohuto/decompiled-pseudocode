/*
 * XREFs of ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180064020
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006411C (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x180064374 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessor::OnHitTest(
        DragNDropProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int i; // edi
  __int64 v8; // rcx
  unsigned int v9; // esi
  LONG v10; // eax
  __int64 v11; // rcx
  HMONITOR v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  struct tagPOINT v16; // [rsp+68h] [rbp+20h]

  *(_DWORD *)a4 = 3;
  if ( (*(_BYTE *)a2 & 0x1A) == 0 || (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    {
      v8 = 32LL * i;
      if ( (*((_BYTE *)a2 + v8 + 60) & 2) != 0 )
      {
        v9 = *(_DWORD *)((char *)a2 + v8 + 56);
        v13 = 0LL;
        v15 = v9;
        v16.x = *((_DWORD *)a2 + 8 * i + 16);
        v10 = *(_DWORD *)((char *)a2 + v8 + 68);
        v11 = *((_QWORD *)a3 + 1);
        v16.y = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v11 + 24LL))(v11, &v13);
        DragNDropProcessor::UpdateVelocityForPointerId(this, v9, v16);
        DragNDropProcessor::StartGestureRecognition(this, v16, v13, v9);
        if ( *std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
                (_QWORD *)this + 13,
                &v14,
                &v15) != *((__int64 **)this + 14) )
          break;
      }
    }
  }
  return 0LL;
}
