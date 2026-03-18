/*
 * XREFs of ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@0AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180024150
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800207F0 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180022498 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800241E0 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 */

_QWORD *__fastcall std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  bool IsLessThan; // dl
  __int64 v10; // rax
  _QWORD *result; // rax

  v4 = a2;
  v6 = (a3 - a2) >> 3;
  if ( v6 > 0 )
  {
    v7 = *a4;
    do
    {
      v8 = v6 >> 1;
      IsLessThan = CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(
                     *(const struct CProcessAttributionManager::ProcessAttributionRecord **)(v4 + 8 * (v6 >> 1)),
                     v7);
      if ( IsLessThan )
        v6 += -1 - v8;
      else
        v6 >>= 1;
      v10 = v4 + 8 * (v8 + 1);
      if ( !IsLessThan )
        v10 = v4;
      v4 = v10;
    }
    while ( v6 > 0 );
  }
  result = a1;
  *a1 = v4;
  return result;
}
