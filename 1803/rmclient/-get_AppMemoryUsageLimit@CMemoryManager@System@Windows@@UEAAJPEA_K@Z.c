/*
 * XREFs of ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x18000913C (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@.c)
 */

signed int __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  signed int result; // eax
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return -2147024809;
  result = Windows::System::CMemoryManager::GetAppMemoryInformation(this, &v4, 0LL);
  if ( result >= 0 )
  {
    *a2 = v4;
    return 0;
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
