/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140039FA0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E880 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E890 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E8A0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400125A0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400154C0 (-AddRef@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A60 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140015EE0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140016400 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::QueryInterface(
        volatile signed __int32 *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  GUID **v3; // rsi
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  GUID *v9; // rbp
  GUID *v10; // rax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64); // rax

  v3 = &`CSystemAudioDeviceExclusive::_GetEntries'::`2'::_entries;
  if ( !a1 )
    return 2147942487LL;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL);
    if ( v8 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      _InterlockedIncrement(a1 + 8);
    }
    else if ( v8 == ATL::CComObject<CSystemAudioDeviceShared>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceShared>::AddRef((__int64)a1);
    }
    else if ( v8 == ATL::CComObject<CStreamGroup>::AddRef )
    {
      ATL::CComObject<CStreamGroup>::AddRef((__int64)a1);
    }
    else if ( v8 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef((__int64)a1);
    }
    else if ( v8 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
    {
      ATL::CComObjectCached<ATL::CComClassFactory>::AddRef((__int64)a1);
    }
    else
    {
      v8((__int64)a1);
    }
    *a3 = a1;
    return 0LL;
  }
  while ( 1 )
  {
    v9 = *v3;
    if ( !*v3
      || v9->Data1 == *a2
      && *(_DWORD *)&v9->Data2 == a2[1]
      && *(_DWORD *)v9->Data4 == a2[2]
      && *(_DWORD *)&v9->Data4[4] == a2[3] )
    {
      break;
    }
LABEL_29:
    v3 += 3;
    if ( !v3[2] )
      return 2147500034LL;
  }
  v10 = v3[2];
  if ( v10 != (GUID *)1 )
  {
    result = ((__int64 (__fastcall *)(volatile signed __int32 *, _DWORD *, _QWORD *, GUID *))v10)(a1, a2, a3, v3[1]);
    if ( !(_DWORD)result || v9 && (int)result < 0 )
      return result;
    goto LABEL_29;
  }
  v11 = (__int64)a1 + (_QWORD)v3[1];
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL);
  if ( v12 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(v11);
  }
  else if ( v12 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
  {
    ATL::CComObject<CAPOWrapperSrv>::AddRef(v11);
  }
  else if ( v12 == ATL::CComObject<CStreamGroup>::AddRef )
  {
    ATL::CComObject<CStreamGroup>::AddRef(v11);
  }
  else if ( v12 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
  {
    ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v11);
  }
  else if ( v12 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
  {
    ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v11);
  }
  else
  {
    v12(v11);
  }
  *a3 = v11;
  return 0LL;
}
