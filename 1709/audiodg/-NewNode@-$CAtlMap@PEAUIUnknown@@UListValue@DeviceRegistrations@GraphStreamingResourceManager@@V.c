/*
 * XREFs of ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140004FF0
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400051E4 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14003735C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140037B40 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::NewNode(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  char *i; // rcx
  __int64 v11; // rdi
  unsigned int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-38h]

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x30uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (char *)v8 + 48 * (unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 48 )
    {
      *((_QWORD *)i + 4) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 32);
  try
  {
    *(_QWORD *)v11 = *a2;
    *(_DWORD *)(v11 + 40) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v14;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 32) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
