/*
 * XREFs of ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180047240
 * Callers:
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180044920 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18007B414 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x1800259F0 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  LPVOID v3; // rax
  SIZE_T cb; // [rsp+40h] [rbp+18h] BYREF

  cb = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&cb, a2, 0x10uLL) < 0 )
    return 0;
  if ( cb > 0x7FFFFFFF )
    v3 = 0LL;
  else
    v3 = CoTaskMemAlloc((unsigned int)cb);
  *a1 = v3;
  return v3 != 0LL;
}
