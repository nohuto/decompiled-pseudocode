/*
 * XREFs of ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800207F0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x18001F430 (-erase@-$vector@PEAURecord@CProcessAttributionManager@@V-$allocator@PEAURecord@CProcessAttributi.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@0AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180024150 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CProcessAttribution *__fastcall CProcessAttribution::`scalar deleting destructor'(CProcessAttribution *this, char a2)
{
  CProcessAttributionManager *v2; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = qword_1802D60A0;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v9,
    *(_QWORD *)v2,
    *((_QWORD *)v2 + 1),
    (char *)this + 16);
  v5 = v9;
  v6 = *(_QWORD *)v9;
  if ( *(_DWORD *)(*(_QWORD *)v9 + 124LL) )
  {
    *(_OWORD *)(v6 + 8) = *(_OWORD *)((char *)this + 24);
    v7 = *((_DWORD *)this + 10);
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_DWORD *)(v6 + 24) = v7;
  }
  else
  {
    operator delete((void *)v6, 0x80uLL);
    std::vector<CProcessAttributionManager::Record *>::erase((__int64)v2, &v9, v5);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
