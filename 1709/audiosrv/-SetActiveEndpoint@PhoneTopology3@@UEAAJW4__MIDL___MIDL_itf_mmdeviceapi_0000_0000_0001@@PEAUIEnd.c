/*
 * XREFs of ?SetActiveEndpoint@PhoneTopology3@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800EC660
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x1800EA6D8 (--0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EACEC (-AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology3::SetActiveEndpoint(
        PhoneTopology3 *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IEndpointDevice *a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // rcx
  SetCellularRoutingWorkItem *v10; // rax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+80h] [rbp+40h] BYREF
  SetCellularRoutingWorkItem *v17; // [rsp+88h] [rbp+48h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
  v6 = 0;
  bstrString = 0LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, BSTR *))(*(_QWORD *)a3 + 152LL))(a3, &bstrString);
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a3 + 144LL))(a3, &v15), v7 < 0) )
  {
    v6 = v7;
    goto LABEL_22;
  }
  v8 = v15;
  if ( a2 )
  {
    if ( v15 == *((_DWORD *)this + 329) )
    {
      if ( !(unsigned int)_o__wcsnicmp(bstrString, (char *)this + 796, 260LL) )
        goto LABEL_22;
      v8 = v15;
    }
    *((_DWORD *)this + 329) = v8;
    v9 = (unsigned __int16 *)((char *)this + 796);
  }
  else
  {
    if ( v15 == *((_DWORD *)this + 198) )
    {
      if ( !(unsigned int)_o__wcsnicmp(bstrString, (char *)this + 272, 260LL) )
        goto LABEL_22;
      v8 = v15;
    }
    *((_DWORD *)this + 198) = v8;
    v9 = (unsigned __int16 *)((char *)this + 272);
  }
  StringCchCopyW(v9, 0x104uLL, (size_t *)bstrString);
  if ( *((_QWORD *)this + 5) )
  {
    v10 = (SetCellularRoutingWorkItem *)operator new(0x438uLL);
    v17 = v10;
    if ( v10 )
      v10 = SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(v10, (PhoneTopology3 *)((char *)this + 272));
    if ( v10 )
    {
      v11 = PhoneTopology3::AddWorkItemToQueue(this, v10);
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
