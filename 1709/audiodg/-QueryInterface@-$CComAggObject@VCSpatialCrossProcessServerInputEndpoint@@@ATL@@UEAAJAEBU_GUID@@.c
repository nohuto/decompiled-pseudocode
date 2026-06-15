/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005B4F0
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

__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::QueryInterface(
        volatile signed __int32 *a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  unsigned int v7; // edi
  _DWORD *v8; // rdx
  volatile signed __int32 **v9; // r8
  GUID **v10; // r14
  volatile signed __int32 *v11; // rbx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  GUID *v14; // rbp
  GUID *v15; // rax
  int v16; // eax

  if ( !a3 )
    return 2147500035LL;
  v7 = 0;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
  {
    *v9 = a1;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    return v7;
  }
  v10 = &`CSpatialCrossProcessServerInputEndpoint::_GetEntries'::`2'::_entries;
  v11 = a1 + 6;
  if ( !v11 )
    return (unsigned int)-2147024809;
  *v9 = 0LL;
  if ( !*v8 && !v8[1] && v8[2] == 192 && v8[3] == 1174405120 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL);
    if ( v12 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      _InterlockedIncrement(v11 + 8);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CSystemAudioDeviceShared>::AddRef )
    {
      ATL::CComObject<CSystemAudioDeviceShared>::AddRef((__int64)v11);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CStreamGroup>::AddRef )
      goto LABEL_15;
    if ( v12 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
      goto LABEL_17;
    v13 = (__int64)v11;
    if ( v12 == ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
      goto LABEL_35;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v14 = *v10;
    if ( *v10
      && (v14->Data1 != *(_DWORD *)a2
       || *(_DWORD *)&v14->Data2 != *(_DWORD *)(a2 + 4)
       || *(_DWORD *)v14->Data4 != *(_DWORD *)(a2 + 8)
       || *(_DWORD *)&v14->Data4[4] != *(_DWORD *)(a2 + 12)) )
    {
      goto LABEL_30;
    }
    v15 = v10[2];
    if ( v15 == (GUID *)1 )
      break;
    v16 = ((__int64 (__fastcall *)(volatile signed __int32 *, __int64, volatile signed __int32 **, GUID *))v15)(
            v11,
            a2,
            a3,
            v10[1]);
    if ( !v16 || v14 && v16 < 0 )
      return (unsigned int)v16;
LABEL_30:
    v10 += 3;
    if ( !v10[2] )
      return (unsigned int)-2147467262;
  }
  v11 = (volatile signed __int32 *)((char *)v11 + (_QWORD)v10[1]);
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL);
  if ( v12 != ATL::CComObjectCached<ATL::CComClassFactory>::AddRef )
  {
    if ( v12 == ATL::CComObject<CAPOWrapperSrv>::AddRef )
    {
      ATL::CComObject<CAPOWrapperSrv>::AddRef((__int64)v11);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CStreamGroup>::AddRef )
    {
LABEL_15:
      ATL::CComObject<CStreamGroup>::AddRef((__int64)v11);
      goto LABEL_20;
    }
    if ( v12 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
    {
      ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef((__int64)v11);
      goto LABEL_20;
    }
    v13 = (__int64)v11;
    if ( v12 == ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef )
    {
LABEL_17:
      ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef((__int64)v11);
      goto LABEL_20;
    }
LABEL_19:
    v12(v13);
    goto LABEL_20;
  }
  v13 = (__int64)v11;
LABEL_35:
  ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(v13);
LABEL_20:
  *a3 = v11;
  return v7;
}
