/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012C64 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180014D84 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180014E3C (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x1800150E4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015640 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001642C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180016750 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001F710 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000AC10 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000B6A4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     memset @ 0x1800275FE (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct CApplication **a4,
        int a5,
        int *a6)
{
  const WCHAR *v8; // r15
  int *v10; // r12
  int v11; // edi
  struct CApplication *v12; // r14
  _QWORD *v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rcx
  struct CApplication **v16; // rbx
  int v17; // r13d
  struct CApplication *v18; // rcx
  struct CApplication *v19; // rbx
  int *v21; // rbx
  struct CApplication *v22; // [rsp+30h] [rbp-2E8h] BYREF
  int v23[2]; // [rsp+38h] [rbp-2E0h]
  int v24; // [rsp+40h] [rbp-2D8h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+44h] [rbp-2D4h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+48h] [rbp-2D0h] BYREF
  UINT32 v27; // [rsp+4Ch] [rbp-2CCh] BYREF
  UINT32 v28; // [rsp+50h] [rbp-2C8h] BYREF
  int *v29; // [rsp+58h] [rbp-2C0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-2B8h] BYREF
  char v31; // [rsp+68h] [rbp-2B0h]
  const unsigned __int16 *v32; // [rsp+70h] [rbp-2A8h]
  struct CApplication **v33; // [rsp+78h] [rbp-2A0h]
  __int64 v34; // [rsp+80h] [rbp-298h]
  ATL::CAtlException *v35; // [rsp+88h] [rbp-290h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+90h] [rbp-288h] BYREF
  WCHAR v37[72]; // [rsp+120h] [rbp-1F8h] BYREF
  WCHAR v38[72]; // [rsp+1B0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+240h] [rbp-D8h] BYREF

  v34 = -2LL;
  *(_QWORD *)v23 = a4;
  v8 = a2;
  v32 = a2;
  v33 = a4;
  v10 = a6;
  v29 = a6;
  v11 = -2147023728;
  v12 = 0LL;
  v22 = 0LL;
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  memset(packageFamilyName, 0, 0x82uLL);
  memset(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a4 = 0LL;
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
    memset(v37, 0, 0x82uLL);
    memset(v38, 0, 0x84uLL);
    v28 = 65;
    v27 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v12 + 3), &v28, v37, &v27, v38);
    if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v12 + 3), v8) && *((_DWORD *)v12 + 43) == a3 )
    {
      v11 = 0;
LABEL_34:
      v17 = 0;
      v16 = *(struct CApplication ***)v23;
      goto LABEL_35;
    }
    if ( !(unsigned int)_o__wcsicmp(v37, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v38, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v12 + 43) == a3 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v8);
      }
      v11 = 0;
      goto LABEL_34;
    }
  }
  if ( !a5 )
    goto LABEL_34;
  v11 = CApplication::CreateInstance(v8, a3, &v22);
  if ( v11 < 0 )
  {
    v18 = v22;
    v17 = 0;
    goto LABEL_36;
  }
  v11 = 0;
  try
  {
    v14 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
            (__int64)this + 72,
            (__int64 *)&v22,
            0LL,
            *((_QWORD *)this + 9));
    v15 = *((_QWORD *)this + 9);
    if ( v15 )
      *(_QWORD *)(v15 + 8) = v14;
    else
      *((_QWORD *)this + 10) = v14;
    *((_QWORD *)this + 9) = v14;
  }
  catch ( ATL::CAtlException *v35 )
  {
    v21 = (int *)v35;
    if ( *(_DWORD *)v35 == -1073741571 )
      _o__resetstkoflw();
    v23[0] = *v21;
    v11 = v23[0];
    v10 = v29;
    if ( v23[0] < 0 )
    {
      v18 = v22;
      v17 = v24;
      goto LABEL_36;
    }
    v8 = v32;
    v16 = v33;
    goto LABEL_27;
  }
  v16 = *(struct CApplication ***)v23;
LABEL_27:
  v17 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v8);
  }
  v12 = v22;
LABEL_35:
  *v16 = v12;
  v18 = 0LL;
  v22 = 0LL;
LABEL_36:
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
  {
    v19 = v22;
    (*(void (__fastcall **)(struct CApplication *))(*(_QWORD *)v22 + 16LL))(v22);
    (*(void (__fastcall **)(struct CApplication *, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1LL);
  }
  if ( v10 )
    *v10 = v17;
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v11);
    }
    AudPolicyLogError("CApplicationManager::GetApplication", 1549, v11);
  }
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
