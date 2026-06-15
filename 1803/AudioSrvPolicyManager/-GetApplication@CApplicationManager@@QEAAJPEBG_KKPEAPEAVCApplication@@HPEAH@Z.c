/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001D7E4 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001D8F4 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E180 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001EF6C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001F2B0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028CB0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000F8F4 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x1800104B8 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  const WCHAR *v8; // r15
  int *v10; // r12
  int v11; // edi
  struct CApplication *v12; // r14
  _QWORD *v13; // rsi
  int v14; // r13d
  struct CApplication **v15; // rbx
  struct CApplication *v16; // rcx
  struct CApplication *v17; // rbx
  __int64 result; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  ATL::CAtlException *v21; // rbx
  struct CApplication *v22; // [rsp+30h] [rbp-2F8h] BYREF
  struct CApplication **v23; // [rsp+38h] [rbp-2F0h]
  int v24; // [rsp+40h] [rbp-2E8h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+44h] [rbp-2E4h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+48h] [rbp-2E0h] BYREF
  UINT32 v27; // [rsp+4Ch] [rbp-2DCh] BYREF
  UINT32 v28; // [rsp+50h] [rbp-2D8h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-2D0h]
  int *v30; // [rsp+60h] [rbp-2C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-2C0h] BYREF
  char v32; // [rsp+70h] [rbp-2B8h]
  const unsigned __int16 *v33; // [rsp+78h] [rbp-2B0h]
  struct CApplication **v34; // [rsp+80h] [rbp-2A8h]
  __int64 v35; // [rsp+88h] [rbp-2A0h]
  ATL::CAtlException *v36; // [rsp+90h] [rbp-298h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+A0h] [rbp-288h] BYREF
  WCHAR v38[72]; // [rsp+130h] [rbp-1F8h] BYREF
  WCHAR v39[72]; // [rsp+1C0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+250h] [rbp-D8h] BYREF

  v35 = -2LL;
  v29 = a3;
  v8 = a2;
  v33 = a2;
  v23 = a5;
  v34 = a5;
  v10 = a7;
  v30 = a7;
  v11 = -2147023728;
  v12 = 0LL;
  v22 = 0LL;
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  memset_0(packageFamilyName, 0, 0x82uLL);
  memset_0(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    v8,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v13 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v13 )
  {
    v12 = (struct CApplication *)v13[2];
    v13 = (_QWORD *)*v13;
    v22 = v12;
    memset_0(v38, 0, 0x82uLL);
    memset_0(v39, 0, 0x84uLL);
    v28 = 65;
    v27 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v12 + 3), &v28, v38, &v27, v39);
    if ( *((_QWORD *)v12 + 74) == v29 && *((_DWORD *)v12 + 43) == a4 )
    {
      v11 = 0;
      goto LABEL_16;
    }
    if ( !(unsigned int)_o__wcsicmp(v38, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v39, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v12 + 43) == a4 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v8);
      }
      v11 = 0;
LABEL_16:
      v14 = 0;
      v15 = v23;
LABEL_17:
      *v15 = v12;
      v16 = 0LL;
      v22 = 0LL;
      goto LABEL_18;
    }
  }
  if ( !a6 )
    goto LABEL_16;
  v11 = CApplication::CreateInstance(v8, v29, a4, &v22);
  if ( v11 < 0 )
  {
    v16 = v22;
    v14 = 0;
    goto LABEL_18;
  }
  v11 = 0;
  try
  {
    v19 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
            (__int64)this + 72,
            (__int64 *)&v22,
            0LL,
            *((_QWORD *)this + 9));
    v20 = *((_QWORD *)this + 9);
    if ( v20 )
      *(_QWORD *)(v20 + 8) = v19;
    else
      *((_QWORD *)this + 10) = v19;
    *((_QWORD *)this + 9) = v19;
  }
  catch ( ATL::CAtlException *v36 )
  {
    v21 = v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v23) = *(_DWORD *)v21;
    v11 = (int)v23;
    v10 = v30;
    if ( (int)v23 >= 0 )
    {
      v8 = v33;
      v15 = v34;
LABEL_42:
      v14 = 1;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v8);
      }
      v12 = v22;
      goto LABEL_17;
    }
    v16 = v22;
    v14 = v24;
LABEL_18:
    if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = v22;
      (*(void (__fastcall **)(struct CApplication *))(*(_QWORD *)v22 + 16LL))(v22);
      (*(void (__fastcall **)(struct CApplication *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
    }
    if ( v10 )
      *v10 = v14;
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v11);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1528, v11);
    }
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v11;
  }
  v15 = v23;
  goto LABEL_42;
}
