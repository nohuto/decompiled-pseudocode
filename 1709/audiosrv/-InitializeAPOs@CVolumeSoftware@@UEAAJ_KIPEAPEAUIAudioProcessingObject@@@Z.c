/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180069260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18006A60C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rdi
  CVolumeSoftware *v6; // rsi
  int v7; // edi
  unsigned int i; // r14d
  _QWORD *v9; // r13
  unsigned int v10; // eax
  unsigned int j; // edi
  __int64 v12; // rax
  int v13; // eax
  ATL::CAtlException *v15; // rbx
  unsigned int v16; // [rsp+30h] [rbp-A8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-A0h] BYREF
  char v18; // [rsp+40h] [rbp-98h]
  int v19; // [rsp+48h] [rbp-90h]
  __int64 v20; // [rsp+50h] [rbp-88h]
  ATL::CAtlException *v21; // [rsp+58h] [rbp-80h] BYREF
  _OWORD v22[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-48h]
  unsigned int v25; // [rsp+F0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v26; // [rsp+F8h] [rbp+20h]

  v26 = a4;
  v20 = -2LL;
  v4 = a4;
  v6 = this;
  v25 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  if ( a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 248);
    v18 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = 0; i < a3; ++i )
    {
      v9 = (_QWORD *)((char *)v6 + 240);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)v6 + 30);
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[i]->lpVtbl->QueryInterface)(
             v4[i],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 240) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v25);
        if ( v7 < 0 )
        {
LABEL_14:
          if ( v18 )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_39;
        }
        if ( *v9 )
          break;
        v4 = v26;
      }
    }
    if ( !*((_QWORD *)v6 + 30) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids);
      }
      v7 = -2147467262;
      if ( v18 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_40;
    }
    v10 = v25;
    if ( *((_DWORD *)v6 + 29) != v25 && *((_DWORD *)v6 + 29) )
    {
      for ( j = 1; ; ++j )
      {
        v16 = j;
        if ( j >= v10 )
          break;
        v12 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
        v22[0] = *(_OWORD *)v12;
        v22[1] = *(_OWORD *)(v12 + 16);
        v22[2] = *(_OWORD *)(v12 + 32);
        v23 = *(_QWORD *)(v12 + 48);
        try
        {
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v6 + 80, j, v22);
        }
        catch ( ATL::CAtlException *v21 )
        {
          v15 = v21;
          if ( *(_DWORD *)v21 == -1073741571 )
            _o__resetstkoflw();
          v19 = *(_DWORD *)v15;
          v7 = v19;
          if ( v19 < 0 )
            goto LABEL_14;
          v6 = this;
          j = v16;
        }
        v10 = v25;
      }
      *((_DWORD *)v6 + 29) = v10;
    }
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    v13 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 216LL))(v6);
    v7 = v13;
    if ( v13 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x39u,
          (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids,
          v6,
          v13);
      }
LABEL_39:
      if ( v7 >= 0 )
        return (unsigned int)v7;
    }
LABEL_40:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2087, v7);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
