/*
 * XREFs of ??1?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18000A01C
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$12 @ 0x1800E389B (_TestCommandHost--TestCommandHost_--_1_--dtor$12.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$24 @ 0x1800E4480 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$24.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$16 @ 0x1800E4912 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$16.c)
 *     _HeatProcessor::Initialize_::_1_::dtor$14 @ 0x1800E4C7E (_HeatProcessor--Initialize_--_1_--dtor$14.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$18 @ 0x1800E6D53 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$18.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$72 @ 0x1800E6DC6 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$72.c)
 *     _InputConfigContextProvider::InputConfigContextProvider_::_1_::dtor$16 @ 0x1800E81D4 (_InputConfigContextProvider--InputConfigContextProvider_--_1_--dtor$16.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$19 @ 0x1800E955C (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$19.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$46 @ 0x1800E958C (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$46.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,unsigned __int64>>::~list<std::pair<unsigned long const,unsigned __int64>>(
        __int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

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
      operator delete(v2);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3);
}
