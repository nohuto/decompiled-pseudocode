/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180084300
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  struct IUnknown *v4; // rbx
  __int32 v5; // esi
  int MMDeviceIdFromInterfaceId; // edi
  __int64 v10; // rax
  struct IUnknown *v11; // rcx
  void (*v12)(void); // rax
  int v14; // [rsp+30h] [rbp-40h] BYREF
  CEndpointCharacteristics *v15; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v17; // [rsp+48h] [rbp-28h] BYREF
  GUID v18; // [rsp+50h] [rbp-20h] BYREF

  v14 = 0;
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0;
  pv = 0LL;
  v15 = 0LL;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a4 )
  {
    MMDeviceIdFromInterfaceId = -2147467261;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetDeviceFormat", 2598, MMDeviceIdFromInterfaceId);
    goto LABEL_17;
  }
  *a4 = 0LL;
  if ( (*(int (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v15) < 0 )
  {
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    MMDeviceIdFromInterfaceId = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                  g_pEndpointCharacteristicsCache,
                                  pv,
                                  0LL,
                                  &v15);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v18);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    v10 = *(_QWORD *)&v18.Data1 - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
    if ( *(_QWORD *)&v18.Data1 == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
      v10 = *(_QWORD *)v18.Data4 - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
    if ( !v10 )
      v5 = 3;
  }
  v4 = (struct IUnknown *)*((_QWORD *)v15 + 2);
  ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->AddRef)(v4);
  v11 = v17;
  if ( v17 != v4 )
  {
    ATL::AtlComQIPtrAssign(&v17, v4, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    v11 = v17;
  }
  if ( v11 )
  {
    MMDeviceIdFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[3].Release)(v11, &v14);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
  }
  MMDeviceIdFromInterfaceId = CEndpointCharacteristics::GetDeviceFormat(v15, a3 != 0, v14 != 0, v5, a4);
  if ( MMDeviceIdFromInterfaceId < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v15 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v15);
    else
      v12();
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)MMDeviceIdFromInterfaceId;
}
