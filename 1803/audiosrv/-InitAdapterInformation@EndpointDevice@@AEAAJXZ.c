/*
 * XREFs of ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180057C90
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18005789C (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180057BD4 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x180057EBC (--4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EndpointDevice::InitAdapterInformation(EndpointDevice *this)
{
  unsigned int v2; // ebx
  int IsPlugin; // eax
  __int64 *v4; // rcx
  __int64 v5; // rax
  const GUID *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rax
  char *v10; // r14
  int v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  PROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  LPCOLESTR lpsz; // [rsp+70h] [rbp-98h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  OLECHAR sz[64]; // [rsp+88h] [rbp-80h] BYREF

  v20 = -2LL;
  v2 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v19 = 0LL;
  IsPlugin = EndpointDevice::IsPlugin(this, v11);
  if ( IsPlugin < 0 )
    goto LABEL_28;
  v4 = (__int64 *)*((_QWORD *)this + 4);
  v5 = *v4;
  if ( !v11[0] )
  {
    IsPlugin = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, __int64 *))(v5 + 24))(
                 v4,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL,
                 0LL,
                 &v16);
    if ( IsPlugin >= 0 )
    {
      IsPlugin = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v15);
      if ( IsPlugin >= 0 )
      {
        IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 64LL))(v15, &v14);
        if ( IsPlugin >= 0 )
        {
          IsPlugin = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                       v14,
                       &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                       &v13);
          if ( IsPlugin >= 0 )
          {
            v6 = (const GUID *)((char *)this + 56);
            IsPlugin = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56LL))(v13, (char *)this + 56);
            if ( IsPlugin >= 0 )
              goto LABEL_8;
          }
        }
      }
    }
LABEL_28:
    v2 = IsPlugin;
    goto LABEL_17;
  }
  IsPlugin = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 32))(v4, 2LL, &v12);
  if ( IsPlugin < 0 )
    goto LABEL_28;
  IsPlugin = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
               v12,
               &PKEY_AudioEndpoint_JackSubType,
               &pvar);
  if ( IsPlugin < 0 )
    goto LABEL_28;
  if ( (_WORD)pvar != 31 )
  {
    v2 = -2147024809;
    goto LABEL_17;
  }
  v6 = (const GUID *)((char *)this + 56);
  IIDFromString(lpsz, (LPIID)((char *)this + 56));
LABEL_8:
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)&v6->Data1 - *((_QWORD *)&unk_1801881F0 + 3 * (int)v7);
    if ( *(_QWORD *)&v6->Data1 == *((_QWORD *)&unk_1801881F0 + 3 * (int)v7) )
      v8 = *(_QWORD *)v6->Data4 - *((_QWORD *)&unk_1801881F0 + 3 * (int)v7 + 1);
    if ( !v8 )
      break;
    if ( ++v7 >= 0xB )
    {
      v10 = (char *)this + 48;
      goto LABEL_15;
    }
  }
  v10 = (char *)this + 48;
  ATL::CComBSTR::operator=(v10, *((_QWORD *)&unk_1801881F0 + 3 * (int)v7 + 2));
LABEL_15:
  if ( v7 >= 0xB )
  {
    StringFromGUID2(v6, sz, 64);
    ATL::CComBSTR::operator=(v10, sz);
  }
LABEL_17:
  PropVariantClear(&pvar);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v2;
}
