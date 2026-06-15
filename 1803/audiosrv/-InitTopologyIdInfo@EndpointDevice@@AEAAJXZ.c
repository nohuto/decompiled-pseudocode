/*
 * XREFs of ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057950
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18005789C (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180057BD4 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x180057EBC (--4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EndpointDevice::InitTopologyIdInfo(EndpointDevice *this)
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
  _QWORD v12[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v13[528]; // [rsp+78h] [rbp-90h] BYREF

  v12[1] = -2LL;
  v2 = 0;
  v12[0] = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  IsPlugin = EndpointDevice::IsPlugin(this, v6);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  if ( v6[0] )
    goto LABEL_16;
  IsPlugin = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, _QWORD *))(**((_QWORD **)this + 4) + 24LL))(
               *((_QWORD *)this + 4),
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL,
               0LL,
               v12);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  IsPlugin = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v12[0] + 32LL))(v12[0], 0LL, &v11);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, &v10);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  IsPlugin = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
               v10,
               &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
               &v8);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  v6[0] = 0;
  IsPlugin = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 32LL))(v8, v6);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  *((_DWORD *)this + 19) = LOWORD(v6[0]);
  IsPlugin = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, &v9);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  IsPlugin = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 64LL))(v9, &pv);
  if ( IsPlugin < 0 )
    goto LABEL_27;
  v4 = -1LL;
  do
    ++v4;
  while ( *((_WORD *)pv + v4) );
  while ( *((_WORD *)pv + v4) != 92 )
    --v4;
  IsPlugin = StringCchCopyW(v13, 260LL, (char *)pv + 2 * v4 + 2);
  if ( IsPlugin < 0 )
  {
LABEL_27:
    v2 = IsPlugin;
  }
  else
  {
    ATL::CComBSTR::operator=((char *)this + 88, v13);
    ATL::CComBSTR::operator=((char *)this + 80, pv);
  }
LABEL_16:
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
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return v2;
}
