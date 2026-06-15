/*
 * XREFs of ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140007A74
 * Callers:
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400044B0 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400045E0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x140007438 (-InitHashTable@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElem.c)
 *     ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x1400077C0 (-NewNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // r14d
  _QWORD *v8; // rcx
  __int64 result; // rax

  v6 = a2 % *(_DWORD *)(a1 + 16);
  v7 = a2 % *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD **)a1;
  if ( v8 )
  {
    for ( result = v8[v6];
          result && (*(_DWORD *)(result + 40) != a2 || *(_DWORD *)result != a2);
          result = *(_QWORD *)(result + 32) )
    {
      ;
    }
    if ( result )
    {
      *(_OWORD *)(result + 8) = *(_OWORD *)a3;
      *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
      return result;
    }
  }
  else if ( !ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
               (void **)a1,
               *(_DWORD *)(a1 + 16),
               1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  result = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::NewNode(
             a1,
             a2,
             v7,
             a2);
  try
  {
    *(_OWORD *)(result + 8) = *(_OWORD *)a3;
    *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
  }
  catch ( ... )
  {
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      a1,
      result);
    throw;
  }
  return result;
}
