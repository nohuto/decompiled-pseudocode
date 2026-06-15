/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUISaDeviceProxy@@AEBVCEndpointResourcePool@Sarm@@@Z @ 0x1800F49F0
 * Callers:
 *     ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x1800F2420 (-Add@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResour.c)
 * Callees:
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2020 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUISaDeviceProxy@@II@Z @ 0x1800F2750 (-CreateNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISa.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x1800F2EDC (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 */

__int64 __fastcall ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v11 = -2LL;
  Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
           a1,
           a2,
           (int *)&v10,
           (unsigned int *)&v14,
           v12);
  v7 = Node;
  if ( Node )
  {
    *(_QWORD *)(Node + 8) = *(_QWORD *)a3;
    *(_BYTE *)(Node + 16) = *(_BYTE *)(a3 + 8);
    *(_DWORD *)(Node + 20) = *(_DWORD *)(a3 + 12);
    std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=((_QWORD *)(Node + 24), (_QWORD *)(a3 + 16));
  }
  else
  {
    v8 = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::CreateNode(
           a1,
           (__int64)a2,
           v10,
           v14);
    v7 = v8;
    v14 = v8;
    try
    {
      *(_QWORD *)(v8 + 8) = *(_QWORD *)a3;
      *(_BYTE *)(v8 + 16) = *(_BYTE *)(a3 + 8);
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a3 + 12);
      std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=((_QWORD *)(v8 + 24), (_QWORD *)(a3 + 16));
    }
    catch ( ... )
    {
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        a1,
        v14);
      throw;
    }
  }
  return v7;
}
