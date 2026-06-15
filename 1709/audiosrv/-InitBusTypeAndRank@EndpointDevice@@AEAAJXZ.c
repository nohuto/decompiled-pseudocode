/*
 * XREFs of ?InitBusTypeAndRank@EndpointDevice@@AEAAJXZ @ 0x1800E99E4
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E9EAC (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800089A0 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointDevice::InitBusTypeAndRank(EndpointDevice *this)
{
  unsigned int v2; // ebx
  int v3; // r14d
  int v4; // eax
  int i; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v10 = 0LL;
  v3 = 0;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>(
    &v11,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 4));
  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 4) + 32LL))(
         *((_QWORD *)this + 4),
         0LL,
         &v10);
  if ( v4 < 0 )
    goto LABEL_21;
  for ( i = 0; i < 3; ++i )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 72LL))(
           v11,
           (unsigned int)i,
           (char *)this + 4 * i + 100);
    if ( v4 < 0 )
      goto LABEL_21;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
         v10,
         &PKEY_Endpoint_IsBluetooth,
         &pvar);
  if ( v4 < 0 )
    goto LABEL_21;
  if ( (_WORD)pvar == 11 )
  {
    v3 = (__int16)v8;
  }
  else if ( (_WORD)pvar )
  {
LABEL_8:
    v2 = -2147418113;
    goto LABEL_22;
  }
  PropVariantClear(&pvar);
  v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
         v10,
         &PKEY_Device_EnumeratorName,
         &pvar);
  if ( v4 < 0 )
  {
LABEL_21:
    v2 = v4;
  }
  else
  {
    if ( (_WORD)pvar != 31 )
      goto LABEL_8;
    if ( (unsigned int)_o__wcsicmp(v8, L"BTHHFENUM") )
    {
      if ( v3 )
      {
        *((_DWORD *)this + 24) = 1;
      }
      else if ( (unsigned int)_o__wcsicmp(v8, L"HDAUDIO") )
      {
        if ( (unsigned int)_o__wcsicmp(v8, L"USB") )
          *((_DWORD *)this + 24) = ((unsigned int)_o__wcsicmp(v8, L"PCI") != 0) + 4;
        else
          *((_DWORD *)this + 24) = 3;
      }
      else
      {
        *((_DWORD *)this + 24) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 24) = 2;
    }
  }
LABEL_22:
  PropVariantClear(&pvar);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v2;
}
