/*
 * XREFs of ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400100D0
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000EE70 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000F010 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F690 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F780 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001B080 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E5B0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E5C0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400125A0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400154C0 (-AddRef@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A60 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140015EE0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140016400 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::QueryInterface(
        volatile signed __int32 *a1,
        _DWORD *a2,
        volatile signed __int32 **a3)
{
  GUID **v3; // rbx
  GUID *v7; // rcx
  int v8; // esi
  __int64 result; // rax
  GUID *v10; // rax
  volatile signed __int32 *v11; // rbx
  void (__fastcall *v12)(volatile signed __int32 *); // rax
  __int64 (__fastcall *v13)(volatile signed __int32 *); // rax

  v3 = &`CAudioDeviceGraph::_GetEntries'::`2'::_entries;
  if ( !a1 )
    return 2147942487LL;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    v13 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL);
    if ( (char *)v13 == (char *)ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      _InterlockedIncrement(a1 + 8);
    }
    else
    {
      if ( (char *)v13 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::AddRef )
      {
        ATL::CComObject<CSystemAudioDeviceShared>::AddRef(a1);
        result = 0LL;
        *a3 = a1;
        return result;
      }
      if ( (char *)v13 == (char *)ATL::CComObject<CStreamGroup>::AddRef )
      {
        ATL::CComObject<CStreamGroup>::AddRef(a1);
        result = 0LL;
        *a3 = a1;
        return result;
      }
      if ( (char *)v13 == (char *)ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
      {
        ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(a1);
        result = 0LL;
        *a3 = a1;
        return result;
      }
      if ( (char *)v13 == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
      {
        ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(a1);
        result = 0LL;
        *a3 = a1;
        return result;
      }
      v13(a1);
    }
    *a3 = a1;
    return 0LL;
  }
  while ( 1 )
  {
    v7 = *v3;
    if ( !*v3 )
      break;
    v8 = 0;
    if ( v7->Data1 == *a2
      && *(_DWORD *)&v7->Data2 == a2[1]
      && *(_DWORD *)v7->Data4 == a2[2]
      && *(_DWORD *)&v7->Data4[4] == a2[3] )
    {
      goto LABEL_12;
    }
LABEL_6:
    v3 += 3;
    if ( !v3[2] )
      return 2147500034LL;
  }
  v8 = 1;
LABEL_12:
  v10 = v3[2];
  if ( v10 != (GUID *)1 )
  {
    result = ((__int64 (__fastcall *)(volatile signed __int32 *, _DWORD *, volatile signed __int32 **, GUID *))v10)(
               a1,
               a2,
               a3,
               v3[1]);
    if ( !(_DWORD)result || !v8 && (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  v11 = (volatile signed __int32 *)((char *)v3[1] + (_QWORD)a1);
  v12 = *(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL);
  if ( (char *)v12 == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(v11);
    result = 0LL;
    *a3 = v11;
  }
  else if ( (char *)v12 == (char *)ATL::CComObject<CAPOWrapperSrv>::AddRef )
  {
    ATL::CComObject<CAPOWrapperSrv>::AddRef(v11);
    result = 0LL;
    *a3 = v11;
  }
  else if ( (char *)v12 == (char *)ATL::CComObject<CStreamGroup>::AddRef )
  {
    ATL::CComObject<CStreamGroup>::AddRef(v11);
    result = 0LL;
    *a3 = v11;
  }
  else if ( (char *)v12 == (char *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
  {
    ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v11);
    result = 0LL;
    *a3 = v11;
  }
  else
  {
    if ( (char *)v12 == (char *)ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v11);
    else
      v12(v11);
    result = 0LL;
    *a3 = v11;
  }
  return result;
}
