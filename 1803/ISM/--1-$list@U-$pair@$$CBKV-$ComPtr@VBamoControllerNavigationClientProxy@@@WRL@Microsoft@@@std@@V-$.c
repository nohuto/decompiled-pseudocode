/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18002F704
 * Callers:
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$43 @ 0x1800E4942 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$43.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$99 @ 0x1800E6DF9 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$99.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>::~list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      v5 = v2[3];
      if ( v5 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      operator delete(v2);
      v2 = v4;
      v3 = *(_QWORD **)a1;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3);
}
