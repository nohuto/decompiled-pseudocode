/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x14001411C
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140004190 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140013E60 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceMana.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140013F60 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  _QWORD *v8; // r8
  __int64 v9; // rax
  __int64 i; // rcx

  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)a2 % *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_2;
  for ( i = v8[v6 % *(_DWORD *)(a1 + 16)]; i && (*(_DWORD *)(i + 40) != v6 || *(_QWORD *)i != *a2); i = *(_QWORD *)(i + 32) )
    ;
  if ( i )
  {
    *(_OWORD *)(i + 8) = *(_OWORD *)a3;
    *(_QWORD *)(i + 24) = *(_QWORD *)(a3 + 16);
    return i;
  }
  if ( !v8 )
  {
LABEL_2:
    if ( !ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::InitHashTable(
            (void **)a1,
            *(_DWORD *)(a1 + 16),
            1) )
      ATL::AtlThrowImpl(-2147024882);
  }
  v9 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::NewNode(
         a1,
         a2,
         v7,
         v6);
  i = v9;
  try
  {
    *(_OWORD *)(v9 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a3 + 16);
  }
  catch ( ... )
  {
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      a1,
      v9);
    throw;
  }
  return i;
}
