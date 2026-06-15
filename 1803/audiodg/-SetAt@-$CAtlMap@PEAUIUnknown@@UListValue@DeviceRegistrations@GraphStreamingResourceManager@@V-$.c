/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x140007724
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x1400040C0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x140007438 (-InitHashTable@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElem.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x14000752C (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14000769C (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v8 = -2LL;
  result = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
             a1,
             a2,
             (int *)&v7,
             (unsigned int *)&v11,
             v9);
  if ( result )
  {
    *(_OWORD *)(result + 8) = *(_OWORD *)a3;
    *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
  }
  else
  {
    if ( !*(_QWORD *)a1
      && !ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
            (void **)a1,
            *(_DWORD *)(a1 + 16),
            1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    result = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::NewNode(
               a1,
               a2,
               v7,
               v11);
    v11 = result;
    try
    {
      *(_OWORD *)(result + 8) = *(_OWORD *)a3;
      *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
    }
    catch ( ... )
    {
      ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
        a1,
        v11);
      throw;
    }
  }
  return result;
}
