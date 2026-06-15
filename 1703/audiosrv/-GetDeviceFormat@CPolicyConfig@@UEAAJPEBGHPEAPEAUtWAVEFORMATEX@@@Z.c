/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180033870
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x180032B30 (PolicyConfigGetDeviceFormat.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  struct IUnknown *v4; // rbx
  unsigned int v5; // esi
  int MMDeviceIdFromInterfaceId; // edi
  __int64 v10; // rax
  struct IUnknown *v11; // rcx
  int v13; // [rsp+30h] [rbp-40h] BYREF
  struct CEndpointCharacteristics *v14; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v16; // [rsp+48h] [rbp-28h] BYREF
  GUID v17; // [rsp+50h] [rbp-20h] BYREF

  v13 = 0;
  v4 = 0LL;
  v16 = 0LL;
  v5 = 0;
  pv = 0LL;
  v14 = 0LL;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a4 )
  {
    MMDeviceIdFromInterfaceId = -2147467261;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetDeviceFormat", 0xA24u, MMDeviceIdFromInterfaceId);
    goto LABEL_17;
  }
  *a4 = 0LL;
  if ( (int)GetAliasedEndpointCharacteristics(a2, 0, &v14) < 0 )
  {
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    MMDeviceIdFromInterfaceId = GetAliasedEndpointCharacteristics((const unsigned __int16 *)pv, 0, &v14);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v17);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
    v10 = *(_QWORD *)&v17.Data1 - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
    if ( *(_QWORD *)&v17.Data1 == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
      v10 = *(_QWORD *)v17.Data4 - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
    if ( !v10 )
      v5 = 3;
  }
  v4 = (struct IUnknown *)*((_QWORD *)v14 + 2);
  ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->AddRef)(v4);
  v11 = v16;
  if ( v16 != v4 )
  {
    ATL::AtlComQIPtrAssign(&v16, v4, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
    v11 = v16;
  }
  if ( v11 )
  {
    MMDeviceIdFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[3].Release)(v11, &v13);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
  }
  MMDeviceIdFromInterfaceId = CEndpointCharacteristics::GetDeviceFormat(v14, a3 != 0, v13 != 0, v5, a4);
  if ( MMDeviceIdFromInterfaceId < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v14 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)MMDeviceIdFromInterfaceId;
}
