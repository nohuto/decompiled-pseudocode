/*
 * XREFs of ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180119820
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18011827C (--0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x18011841C (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::SetActiveEndpoint(
        PhoneTopology *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IEndpointDevice *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *v9; // r14
  SetCellularRoutingWorkItem *v10; // rax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+80h] [rbp+40h] BYREF
  SetCellularRoutingWorkItem *v17; // [rsp+88h] [rbp+48h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 144));
  v6 = 0;
  bstrString = 0LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, BSTR *))(*(_QWORD *)a3 + 56LL))(a3, &bstrString);
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a3 + 48LL))(a3, &v15), v7 < 0) )
  {
    v6 = v7;
    goto LABEL_22;
  }
  v8 = v15;
  if ( a2 )
  {
    if ( v15 == *((_DWORD *)this + 327) )
    {
      if ( !(unsigned int)_o__wcsnicmp(bstrString, (char *)this + 788, 260LL) )
        goto LABEL_22;
      v8 = v15;
    }
    *((_DWORD *)this + 327) = v8;
    StringCchCopyW((char *)this + 788, 260LL, (char *)bstrString);
    v9 = (PhoneTopology *)((char *)this + 264);
  }
  else
  {
    v9 = (PhoneTopology *)((char *)this + 264);
    if ( v15 == *((_DWORD *)this + 196) )
    {
      if ( !(unsigned int)_o__wcsnicmp(bstrString, (char *)this + 264, 260LL) )
        goto LABEL_22;
      v8 = v15;
    }
    *((_DWORD *)this + 196) = v8;
    StringCchCopyW((char *)this + 264, 260LL, (char *)bstrString);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v10 = (SetCellularRoutingWorkItem *)operator new(0x438uLL);
    v17 = v10;
    if ( v10 )
      v10 = SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(v10, v9);
    if ( v10 )
    {
      v11 = PhoneTopology::AddWorkItemToQueue(this, v10);
      if ( v11 < 0 )
        v6 = v11;
    }
    else
    {
      v6 = -2147024882;
    }
  }
LABEL_22:
  SysFreeString(bstrString);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
