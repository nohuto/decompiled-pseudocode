/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x18000F030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::RpcCheckDataFlowAccess(CProcess *this, unsigned int a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // rdi
  IID *v7; // rax
  RPC_STATUS v8; // eax
  HRESULT v9; // eax
  __int64 v10; // rax
  int v11; // eax
  LPOLESTR lpsz; // [rsp+30h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-28h] BYREF
  IID rclsid; // [rsp+40h] [rbp-20h] BYREF

  ppv = 0LL;
  lpsz = 0LL;
  if ( a2 > 1 )
    return (unsigned int)-2147024809;
  v6 = (int)a2;
  v5 = *((_DWORD *)this + (int)a2 + 62);
  if ( v5 < 0 )
  {
    v7 = (IID *)&DEVINTERFACE_AUDIO_CAPTURE;
    if ( !a2 )
      v7 = (IID *)&DEVINTERFACE_AUDIO_RENDER;
    rclsid = *v7;
    v5 = StringFromCLSID(&rclsid, &lpsz);
    if ( v5 >= 0 )
    {
      v5 = CoInitializeEx(0LL, 0);
      if ( v5 >= 0 )
      {
        v8 = RpcImpersonateClient(0LL);
        if ( v8 )
        {
          v5 = (unsigned __int16)v8 | 0x80070000;
          if ( v8 <= 0 )
            v5 = v8;
          goto LABEL_23;
        }
        v9 = CoCreateInstance(&CLSID_DeviceAccessPolicyCheck, 0LL, 1u, &GUID_7d276ff2_ce90_4275_a2a8_9a48b10d3e0b, &ppv);
        v5 = v9;
        if ( v9 == -2147221164 )
          goto LABEL_18;
        if ( v9 < 0 )
        {
LABEL_22:
          RpcRevertToSelf();
LABEL_23:
          CoUninitialize();
          goto LABEL_24;
        }
        v10 = *(_QWORD *)ppv;
        v11 = a3
            ? (*(__int64 (__fastcall **)(LPVOID, LPOLESTR, _QWORD))(v10 + 48))(ppv, lpsz, a3)
            : (*(unsigned __int64 (__fastcall **)(LPVOID, LPOLESTR))(v10 + 40))(ppv, lpsz);
        v5 = v11;
        if ( v11 == -2147020646 )
        {
LABEL_18:
          v5 = 0;
        }
        else if ( v11 == -2147024891 )
        {
          v5 = -2005139338;
        }
        *((_DWORD *)this + v6 + 62) = v5;
        goto LABEL_22;
      }
    }
  }
LABEL_24:
  CoTaskMemFree(lpsz);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
