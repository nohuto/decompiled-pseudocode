/*
 * XREFs of ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180003090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180003498 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLevel(
        Windows::System::CMemoryManager *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    if ( Windows::System::CMemoryManager::s_pProxy )
      return ModernResourceManagerProxy::GetMemoryUsageLevel(Windows::System::CMemoryManager::s_pProxy, a2);
    else
      return 2147500037LL;
  }
  return result;
}
