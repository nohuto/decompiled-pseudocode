/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400454A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400125A0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400154C0 (-AddRef@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A60 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140015EE0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140016400 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x140032AF8 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CVpoContext>::QueryInterface(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r8
  GUID **v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  GUID *v14; // rbp
  GUID *v15; // rax
  int v16; // eax

  if ( !a3 )
    return 2147500035LL;
  v6 = 0;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
  {
    *v8 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return v6;
  }
  v9 = &`CVpoContext::_GetEntries'::`2'::_entries;
  v10 = v7 + 24;
  if ( v7 == -24 )
    return (unsigned int)-2147024809;
  *v8 = 0LL;
  if ( !*(_DWORD *)a2 && !*(_DWORD *)(a2 + 4) && *(_DWORD *)(a2 + 8) == 192 && *(_DWORD *)(a2 + 12) == 1174405120 )
  {
    v11 = v7 + 32;
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 32) + 8LL);
    if ( v12 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 64));
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CSystemAudioDeviceShared>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceShared>::AddRef(v7 + 32);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CStreamGroup>::AddRef )
      goto LABEL_15;
    if ( v12 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v7 + 32);
      goto LABEL_20;
    }
    v13 = v7 + 32;
    if ( v12 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
      goto LABEL_35;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v14 = *v9;
    if ( *v9
      && (v14->Data1 != *(_DWORD *)a2
       || *(_DWORD *)&v14->Data2 != *(_DWORD *)(a2 + 4)
       || *(_DWORD *)v14->Data4 != *(_DWORD *)(a2 + 8)
       || *(_DWORD *)&v14->Data4[4] != *(_DWORD *)(a2 + 12)) )
    {
      goto LABEL_30;
    }
    v15 = v9[2];
    if ( v15 == (GUID *)1 )
      break;
    v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, GUID *))v15)(v10, a2, a3, v9[1]);
    if ( !v16 || v14 && v16 < 0 )
      return (unsigned int)v16;
LABEL_30:
    v9 += 3;
    if ( !v9[2] )
      return (unsigned int)-2147467262;
  }
  v11 = (__int64)v9[1] + v10;
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL);
  if ( v12 != ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
  {
    if ( v12 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      ATL::CComObject<CAPOWrapperSrv>::AddRef((__int64)v9[1] + v10);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CStreamGroup>::AddRef )
    {
LABEL_15:
      ATL::CComObject<CStreamGroup>::AddRef(v11);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
    {
      ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef((__int64)v9[1] + v10);
      goto LABEL_20;
    }
    v13 = (__int64)v9[1] + v10;
    if ( v12 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(v13);
      goto LABEL_20;
    }
LABEL_19:
    v12(v13);
    goto LABEL_20;
  }
  v13 = (__int64)v9[1] + v10;
LABEL_35:
  ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(v13);
LABEL_20:
  *a3 = v11;
  return v6;
}
