/*
 * XREFs of ?UpdateEndpointDevices@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4EndpointCapability@@@Z @ 0x1800E7FE0
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::UpdateEndpointDevices(_QWORD **a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  struct IUnknown *v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v8; // [rsp+40h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v7[1] = -2LL;
  v3 = 0;
  v7[0] = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v4 = ((__int64 (__fastcall *)(_QWORD **, __int64, _QWORD *))(*a1)[3])(a1, a2, v7);
  if ( v4 < 0 )
  {
LABEL_10:
    v5 = v8;
    goto LABEL_11;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v7[0] + 64LL))(v7[0], &v9);
  v5 = v8;
  if ( v4 >= 0 )
  {
    if ( !v8 )
      goto LABEL_5;
    while ( 1 )
    {
      ATL::AtlComPtrAssign(&v8, 0LL);
LABEL_5:
      v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v9 + 24LL))(v9, &v8);
      if ( v4 < 0 )
        goto LABEL_10;
      v5 = v8;
      if ( !v8 )
        goto LABEL_12;
      v4 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *))(*a1[10] + 168LL))(a1[10], v8);
      v5 = v8;
      if ( v4 < 0 )
        break;
      if ( !v8 )
        goto LABEL_12;
    }
  }
LABEL_11:
  v3 = v4;
LABEL_12:
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
  return v3;
}
