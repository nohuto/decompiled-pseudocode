/*
 * XREFs of ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x1800E9BE4
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E9EAC (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800E9094 (--4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x1800EA27C (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EndpointDevice::InitTopologyIdInfo(BSTR *this)
{
  unsigned int v2; // ebx
  int IsPlugin; // eax
  __int64 v4; // rcx
  int v6[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  unsigned __int16 v14[264]; // [rsp+78h] [rbp-90h] BYREF

  v13 = -2LL;
  v2 = 0;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  IsPlugin = EndpointDevice::IsPlugin((EndpointDevice *)this, v6);
  if ( IsPlugin < 0 )
    goto LABEL_2;
  if ( !v6[0] )
  {
    IsPlugin = (*(__int64 (__fastcall **)(BSTR, GUID *, __int64))(*(_QWORD *)this[4] + 24LL))(
                 this[4],
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    IsPlugin = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v11);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, &v10);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    IsPlugin = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
                 v10,
                 &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                 &v8);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    v6[0] = 0;
    IsPlugin = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 32LL))(v8, v6);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    *((_DWORD *)this + 29) = LOWORD(v6[0]);
    IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, &v9);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    IsPlugin = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 64LL))(v9, &pv);
    if ( IsPlugin < 0 )
      goto LABEL_2;
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)pv + v4) );
    while ( *((_WORD *)pv + v4) != 92 )
      --v4;
    IsPlugin = StringCchCopyW(v14, 0x104uLL, (size_t *)((char *)pv + 2 * v4 + 2));
    if ( IsPlugin < 0 )
    {
LABEL_2:
      v2 = IsPlugin;
      goto LABEL_17;
    }
    ATL::CComBSTR::operator=(this + 16, v14);
    ATL::CComBSTR::operator=(this + 15, (const OLECHAR *)pv);
  }
LABEL_17:
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v2;
}
