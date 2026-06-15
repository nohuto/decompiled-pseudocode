/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C7264
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180042F88 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x18004054C (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SqD @ 0x1800C7D38 (WPP_SF_SqD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(
        CSpatialProperties *this,
        struct IMMDevice *a2,
        struct IPropertyStore *a3)
{
  int v5; // eax
  int v6; // r8d
  void *v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  void *v10; // rcx
  _OWORD *v11; // rax
  struct IMMDevice *v12; // rdx
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  _OWORD *v15; // [rsp+48h] [rbp-C0h]
  LPVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v19[5]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  LPCRITICAL_SECTION *v22; // [rsp+F8h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp-8h]
  __int64 *v24; // [rsp+108h] [rbp+0h]
  __int64 v25; // [rsp+110h] [rbp+8h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
  v7 = pv;
  if ( v5 < 0 )
    v7 = 0LL;
  pv = v7;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)v7);
    lpCriticalSection[0] = *((LPCRITICAL_SECTION *)this + 5);
    v22 = lpCriticalSection;
    v23 = 8LL;
    LODWORD(v17) = *((unsigned __int8 *)this + 72);
    v24 = &v17;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB68F, v8, v9, 5u, &pData);
    LODWORD(v7) = (_DWORD)pv;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SqD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)v7,
      v6,
      (_DWORD)v7 + 34,
      *((_QWORD *)this + 5),
      *((_BYTE *)this + 72));
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this, (__int64)lpCriticalSection);
  if ( a3 && *((_QWORD *)this + 5) )
  {
    *(_QWORD *)((char *)this + 52) = 0LL;
    memset(v19, 0, sizeof(v19));
    *(_QWORD *)&v19[0] = 0x100000050LL;
    LOWORD(v13) = 65;
    v15 = v19;
    LODWORD(v14) = 80;
    ((void (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, __int64 *))a3->lpVtbl->SetValue)(
      a3,
      &PKEY_SpatialAudioEndpoint_Settings,
      &v13);
    v13 = 19LL;
    v15 = 0LL;
    v14 = 0LL;
    ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int64 *))a3->lpVtbl->SetValue)(
      a3,
      &PKEY_SpatialAudioEndpoint_RenderingMode,
      &v13);
    v15 = 0LL;
    v13 = 19LL;
    v14 = 0LL;
    ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int64 *))a3->lpVtbl->SetValue)(
      a3,
      &PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode,
      &v13);
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v10 = (void *)*((_QWORD *)this + 8);
    if ( v10 )
      operator delete(v10);
    v11 = operator new[](0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    *((_QWORD *)this + 8) = v11;
    if ( v11 )
    {
      *v11 = v19[0];
      v11[1] = v19[1];
      v11[2] = v19[2];
      v11[3] = v19[3];
      v11[4] = v19[4];
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5));
    *((_BYTE *)this + 72) = 1;
    CSpatialProperties::InitSpatialTechList(this, v12);
  }
  CoTaskMemFree(pv);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
