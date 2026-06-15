/*
 * XREFs of ?KsNotifications_ServiceStart@@YAJXZ @ 0x1800BE824
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180061F40 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800BE254 (--0-$CComQIPtr@UIPnpDeviceEnumerator@@$1-_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x1800BE6DC (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 KsNotifications_ServiceStart(void)
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  const unsigned __int16 *v2; // r8
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  LPVOID v5; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  struct IMMDevice *v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+30h] BYREF

  v6[1] = -2LL;
  ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(v6);
  v9 = 0LL;
  InitializeCriticalSection(&g_csKsNotificationMonitors);
  g_bKsNotificationLockInitialized = 1;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v6[0] + 32LL))(
         v6[0],
         &GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196,
         &v9) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7) >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v9 + 32LL))(v9, i, &v8) >= 0 )
      {
        v5 = 0LL;
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v8->lpVtbl->GetId)(v8, &v5) >= 0 )
        {
          v1 = 0LL;
          v4 = 0LL;
          if ( v8 )
          {
            ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_78b60045_08a6_4ac3_8ac7_d3307c2d2e63,
              &v4);
            v1 = v4;
          }
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v1 + 32LL))(v1, &pv) >= 0 )
          {
            KsNotifications_ProcessPnpInterface(v8, (unsigned __int16 *)pv, v2);
            CoTaskMemFree(pv);
          }
          CoTaskMemFree(v5);
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
      if ( v8 )
        ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
  return 0LL;
}
