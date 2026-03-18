/*
 * XREFs of ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@0AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180009E0C
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??1CProcessAttribution@@UEAA@XZ @ 0x180129210 (--1CProcessAttribution@@UEAA@XZ.c)
 * Callees:
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x180009E98 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 */

const struct CProcessAttributionManager::ProcessAttributionRecord ***__fastcall std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
        const struct CProcessAttributionManager::ProcessAttributionRecord ***a1,
        const struct CProcessAttributionManager::ProcessAttributionRecord **a2,
        __int64 a3,
        __int64 *a4)
{
  const struct CProcessAttributionManager::ProcessAttributionRecord **v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  const struct CProcessAttributionManager::ProcessAttributionRecord **v8; // r14
  const struct CProcessAttributionManager::ProcessAttributionRecord ***result; // rax

  v4 = a2;
  v6 = (a3 - (__int64)a2) >> 3;
  if ( v6 > 0 )
  {
    v7 = *a4;
    do
    {
      v8 = &v4[v6 / 2];
      if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v8, v7) )
      {
        v4 = v8 + 1;
        v6 += -1 - v6 / 2;
      }
      else
      {
        v6 /= 2LL;
      }
    }
    while ( v6 > 0 );
  }
  result = a1;
  *a1 = v4;
  return result;
}
