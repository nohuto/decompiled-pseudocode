/*
 * XREFs of ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x14003679C
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x1400031B0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140036F50 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(
        __int64 *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( !a1[1] )
    return 0LL;
  v1 = *((_DWORD *)a1 + 4);
  v2 = 0LL;
  if ( !v1 )
    return 0LL;
  v3 = *a1;
  while ( !*(_QWORD *)(v3 + 8 * v2) )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 8 * v2);
}
