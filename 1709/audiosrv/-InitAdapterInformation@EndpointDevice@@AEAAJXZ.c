/*
 * XREFs of ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800E96C8
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E9EAC (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800E9094 (--4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x1800EA27C (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     ?SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z @ 0x1800EA3F0 (-SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EndpointDevice::InitAdapterInformation(BSTR *this)
{
  unsigned int v2; // ebx
  int IsPlugin; // eax
  __int64 *v4; // rcx
  __int64 v5; // rax
  const GUID *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h]
  PROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  LPCOLESTR lpsz; // [rsp+70h] [rbp-98h]
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  OLECHAR sz[64]; // [rsp+88h] [rbp-80h] BYREF

  v19 = -2LL;
  v2 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v18 = 0LL;
  IsPlugin = EndpointDevice::IsPlugin((EndpointDevice *)this, v11);
  if ( IsPlugin < 0 )
    goto LABEL_2;
  v4 = (__int64 *)this[4];
  v5 = *v4;
  if ( v11[0] )
  {
    IsPlugin = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 32))(v4, 2LL, &v12);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    IsPlugin = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
                 v12,
                 &PKEY_AudioEndpoint_JackSubType,
                 &pvar);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    if ( (_WORD)pvar != 31 )
    {
      v2 = -2147024809;
      goto LABEL_27;
    }
    v6 = (const GUID *)(this + 8);
    IIDFromString(lpsz, (LPIID)this + 4);
  }
  else
  {
    IsPlugin = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v5 + 24))(
                 v4,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
    if ( IsPlugin < 0
      || (IsPlugin = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v14),
          IsPlugin < 0)
      || (IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v13), IsPlugin < 0)
      || (IsPlugin = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
                       v13,
                       &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                       &v10),
          IsPlugin < 0)
      || (v6 = (const GUID *)(this + 8),
          IsPlugin = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 56LL))(v10, (char *)this + 64),
          IsPlugin < 0)
      || (IsPlugin = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, (char *)this + 112),
          IsPlugin < 0) )
    {
LABEL_2:
      v2 = IsPlugin;
      goto LABEL_27;
    }
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)&v6->Data1 - *((_QWORD *)&unk_18014A220 + 3 * (int)v7);
    if ( *(_QWORD *)&v6->Data1 == *((_QWORD *)&unk_18014A220 + 3 * (int)v7) )
      v8 = *(_QWORD *)v6->Data4 - *((_QWORD *)&unk_18014A220 + 3 * (int)v7 + 1);
    if ( !v8 )
      break;
    if ( ++v7 >= 0xB )
      goto LABEL_23;
  }
  ATL::CComBSTR::operator=(this + 7, *((const OLECHAR **)&unk_18014A220 + 3 * (int)v7 + 2));
LABEL_23:
  if ( v7 >= 0xB )
  {
    StringFromGUID2(v6, sz, 64);
    ATL::CComBSTR::operator=(this + 7, sz);
  }
  IsPlugin = EndpointDevice::SetAdapterClass((EndpointDevice *)this, &ADAPTERCLASS_OTHER);
  if ( IsPlugin < 0 )
    goto LABEL_2;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
LABEL_27:
  PropVariantClear(&pvar);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v2;
}
