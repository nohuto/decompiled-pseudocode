/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005B750
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400200B0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400200C0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400200D0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400200E0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDII@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400200F0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020100 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020110 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDMI@EAAJAEBU_GUID.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400125A0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400154C0 (-AddRef@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A60 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140015EE0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140016400 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  GUID **v3; // rdi
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64); // rax
  GUID *v10; // rsi
  GUID *v11; // rax
  char *v12; // rbx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rcx

  v3 = &`CSpatialCrossProcessClientOutputEndpoint::_GetEntries'::`2'::_entries;
  if ( !a1 )
    return 2147942487LL;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    v8 = a1 + 912;
    v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 912) + 8LL);
    if ( v9 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 944));
    }
    else if ( v9 == ATL::CComObject<CSystemAudioDeviceShared>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceShared>::AddRef(v8);
    }
    else if ( v9 == ATL::CComObject<CStreamGroup>::AddRef )
    {
      ATL::CComObject<CStreamGroup>::AddRef(v8);
    }
    else if ( v9 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v8);
    }
    else if ( v9 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
    {
      ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(v8);
    }
    else
    {
      v9(v8);
    }
    *a3 = v8;
    return 0LL;
  }
  while ( 1 )
  {
    v10 = *v3;
    if ( !*v3
      || v10->Data1 == *a2
      && *(_DWORD *)&v10->Data2 == a2[1]
      && *(_DWORD *)v10->Data4 == a2[2]
      && *(_DWORD *)&v10->Data4[4] == a2[3] )
    {
      break;
    }
LABEL_29:
    v3 += 3;
    if ( !v3[2] )
      return 2147500034LL;
  }
  v11 = v3[2];
  if ( v11 != (GUID *)1 )
  {
    result = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64 *, GUID *))v11)(a1, a2, a3, v3[1]);
    if ( !(_DWORD)result || v10 && (int)result < 0 )
      return result;
    goto LABEL_29;
  }
  v12 = (char *)v3[1] + a1;
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL);
  if ( v13 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::AddRef((__int64)v3[1] + a1);
  }
  else if ( v13 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
  {
    ATL::CComObject<CAPOWrapperSrv>::AddRef((__int64)v3[1] + a1);
  }
  else if ( v13 == ATL::CComObject<CStreamGroup>::AddRef )
  {
    ATL::CComObject<CStreamGroup>::AddRef((__int64)v3[1] + a1);
  }
  else if ( v13 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
  {
    ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef((__int64)v3[1] + a1);
  }
  else
  {
    v14 = (__int64)v3[1] + a1;
    if ( v13 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v14);
    else
      v13(v14);
  }
  *a3 = (__int64)v12;
  return 0LL;
}
