/*
 * XREFs of ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x1800FD1D0
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD46C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetEndpointLevel(struct IUnknown *a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v8; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v9; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-40h] BYREF
  wchar_t Buffer[16]; // [rsp+50h] [rbp-30h] BYREF

  v10[1] = -2LL;
  v9 = 0LL;
  v8 = 0;
  v10[0] = 0LL;
  v5 = StringCchPrintfW(Buffer, 13LL, L"Level:%x", a2);
  if ( v5 < 0 )
    goto LABEL_9;
  v6 = v9;
  if ( v9 != a1 )
  {
    ATL::AtlComQIPtrAssign(&v9, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    v6 = v9;
  }
  if ( !v6 )
    goto LABEL_5;
  v8 = 8;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, wchar_t *, __int64, _QWORD *, int *))v6->lpVtbl[5].QueryInterface)(
         v6,
         Buffer,
         11LL,
         v10,
         &v8);
  if ( v5 < 0 )
  {
LABEL_9:
    v6 = v9;
  }
  else
  {
    v6 = v9;
    if ( v8 != 8 )
    {
LABEL_5:
      v5 = -2147024809;
      goto LABEL_10;
    }
    *a3 = v10[0];
  }
LABEL_10:
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v5;
}
