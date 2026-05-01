/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F35C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800F4F80 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  GUID *v4; // rbx
  unsigned __int8 (*v5)(void); // rax
  GUID *v6; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  GUID *v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  int v15; // edi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-C8h] BYREF
  GUID v22; // [rsp+58h] [rbp-B0h]
  GUID v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h]
  char v25; // [rsp+80h] [rbp-88h]
  GUID v26; // [rsp+88h] [rbp-80h]
  GUID v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  char v29; // [rsp+B0h] [rbp-58h]
  GUID v30; // [rsp+B8h] [rbp-50h]
  GUID v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  char v33; // [rsp+E0h] [rbp-28h]
  GUID v34; // [rsp+E8h] [rbp-20h]
  GUID v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+108h] [rbp+0h]
  char v37; // [rsp+110h] [rbp+8h]
  GUID v38; // [rsp+118h] [rbp+10h]
  GUID v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+138h] [rbp+30h]
  char v41; // [rsp+140h] [rbp+38h]
  GUID v42; // [rsp+148h] [rbp+40h]
  GUID v43; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+168h] [rbp+60h]
  char v45; // [rsp+170h] [rbp+68h]
  GUID v46; // [rsp+178h] [rbp+70h]
  GUID v47; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+198h] [rbp+90h]
  char v49; // [rsp+1A0h] [rbp+98h]
  GUID v50; // [rsp+1A8h] [rbp+A0h]
  GUID v51; // [rsp+1B8h] [rbp+B0h]
  __int64 v52; // [rsp+1C8h] [rbp+C0h]
  char v53; // [rsp+1D0h] [rbp+C8h]
  GUID v54; // [rsp+1D8h] [rbp+D0h]
  GUID v55; // [rsp+1E8h] [rbp+E0h]
  __int64 v56; // [rsp+1F8h] [rbp+F0h]
  char v57; // [rsp+200h] [rbp+F8h]
  GUID v58; // [rsp+208h] [rbp+100h]
  GUID v59; // [rsp+218h] [rbp+110h]
  __int64 v60; // [rsp+228h] [rbp+120h]
  char v61; // [rsp+230h] [rbp+128h]
  GUID v62; // [rsp+238h] [rbp+130h]
  GUID v63; // [rsp+248h] [rbp+140h]
  __int64 v64; // [rsp+258h] [rbp+150h]
  char v65; // [rsp+260h] [rbp+158h]
  GUID v66; // [rsp+268h] [rbp+160h]
  GUID v67; // [rsp+278h] [rbp+170h]
  __int64 v68; // [rsp+288h] [rbp+180h]
  char v69; // [rsp+290h] [rbp+188h]
  GUID v70; // [rsp+298h] [rbp+190h]
  GUID v71; // [rsp+2A8h] [rbp+1A0h]
  __int64 v72; // [rsp+2B8h] [rbp+1B0h]
  char v73; // [rsp+2C0h] [rbp+1B8h]
  GUID v74; // [rsp+2C8h] [rbp+1C0h]
  GUID v75; // [rsp+2D8h] [rbp+1D0h]
  __int64 v76; // [rsp+2E8h] [rbp+1E0h]
  char v77; // [rsp+2F0h] [rbp+1E8h]
  GUID v78; // [rsp+2F8h] [rbp+1F0h]
  GUID v79; // [rsp+308h] [rbp+200h]
  __int64 v80; // [rsp+318h] [rbp+210h]
  char v81; // [rsp+320h] [rbp+218h]
  GUID v82; // [rsp+328h] [rbp+220h]
  GUID v83; // [rsp+338h] [rbp+230h]
  __int64 v84; // [rsp+348h] [rbp+240h]
  char v85; // [rsp+350h] [rbp+248h]
  GUID v86; // [rsp+358h] [rbp+250h]
  GUID v87; // [rsp+368h] [rbp+260h]
  __int64 v88; // [rsp+378h] [rbp+270h]
  char v89; // [rsp+380h] [rbp+278h]
  GUID v90; // [rsp+388h] [rbp+280h]
  GUID v91; // [rsp+398h] [rbp+290h]
  char (*v92)(); // [rsp+3A8h] [rbp+2A0h]
  char v93; // [rsp+3B0h] [rbp+2A8h]
  GUID v94; // [rsp+3B8h] [rbp+2B0h]
  GUID v95; // [rsp+3C8h] [rbp+2C0h]
  char (*v96)(); // [rsp+3D8h] [rbp+2D0h]
  char v97; // [rsp+3E0h] [rbp+2D8h]
  GUID v98; // [rsp+3E8h] [rbp+2E0h]
  GUID v99; // [rsp+3F8h] [rbp+2F0h]
  __int64 v100; // [rsp+408h] [rbp+300h]
  char v101; // [rsp+410h] [rbp+308h]
  GUID v102; // [rsp+418h] [rbp+310h]
  GUID v103; // [rsp+428h] [rbp+320h]
  __int64 v104; // [rsp+438h] [rbp+330h]
  char v105; // [rsp+440h] [rbp+338h]
  GUID v106; // [rsp+448h] [rbp+340h]
  GUID v107; // [rsp+458h] [rbp+350h]
  __int64 v108; // [rsp+468h] [rbp+360h]
  char v109; // [rsp+470h] [rbp+368h]
  __int128 v110; // [rsp+478h] [rbp+370h]
  GUID v111; // [rsp+488h] [rbp+380h]
  char (*v112)(); // [rsp+498h] [rbp+390h]
  char v113; // [rsp+4A0h] [rbp+398h]
  GUID v114; // [rsp+4A8h] [rbp+3A0h]
  GUID v115; // [rsp+4B8h] [rbp+3B0h]
  char (*v116)(); // [rsp+4C8h] [rbp+3C0h]
  char v117; // [rsp+4D0h] [rbp+3C8h]
  GUID v118; // [rsp+4D8h] [rbp+3D0h]
  GUID v119; // [rsp+4E8h] [rbp+3E0h]
  char (*v120)(); // [rsp+4F8h] [rbp+3F0h]
  char v121; // [rsp+500h] [rbp+3F8h]
  GUID v122; // [rsp+508h] [rbp+400h]
  GUID v123; // [rsp+518h] [rbp+410h]
  __int64 v124; // [rsp+528h] [rbp+420h]
  char v125; // [rsp+530h] [rbp+428h]
  __int64 v126; // [rsp+538h] [rbp+430h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+580h] [rbp+478h]

  v21[1] = -2LL;
  v22 = GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a;
  v23 = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v24 = 0LL;
  v25 = 0;
  v26 = GUID_4675e67d_4b28_4692_bbd5_874fee2ae80e;
  v27 = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v28 = 0LL;
  v29 = 0;
  v30 = GUID_05ac56a6_baf7_414f_b92c_7156052701de;
  v31 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v32 = 0LL;
  v33 = 0;
  v34 = GUID_2c08adf0_a386_4b35_9250_0fe183476fcc;
  v35 = GUID_1258a377_0646_40fd_b5fc_b642b81befba;
  v36 = 0LL;
  v37 = 0;
  v38 = GUID_2c08adf0_a386_4b35_9250_0fe183476fcc;
  v39 = GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v40 = 0LL;
  v41 = 0;
  v42 = GUID_2c08adf0_a386_4b35_9250_0fe183476fcc;
  v43 = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v44 = 0LL;
  v45 = 0;
  v46 = SID_ViewEventDispatcher;
  v47 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v48 = 0LL;
  v49 = 0;
  v50 = SID_ViewEventDispatcher;
  v51 = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v52 = 0LL;
  v53 = 0;
  v54 = SID_ViewEventDispatcher;
  v55 = GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
  v56 = 0LL;
  v57 = 0;
  v58 = GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v59 = GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
  v60 = 0LL;
  v61 = 0;
  v62 = GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v63 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v64 = 0LL;
  v65 = 0;
  v66 = GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v67 = GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
  v68 = 0LL;
  v69 = 0;
  v70 = GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v71 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v72 = 0LL;
  v73 = 0;
  v74 = GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217;
  v75 = GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v76 = 0LL;
  v77 = 0;
  v78 = IID_ILockScreenViewManager;
  v79 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v80 = 0LL;
  v81 = 0;
  v82 = IID_IAboveLockViewManager;
  v83 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v84 = 0LL;
  v85 = 0;
  v86 = GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa;
  v87 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v88 = 0LL;
  v89 = 0;
  v90 = GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v91 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v92 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v93 = 1;
  v94 = GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v95 = GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v96 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v97 = 1;
  v98 = GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v99 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v100 = 0LL;
  v101 = 0;
  v102 = GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v103 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v104 = 0LL;
  v105 = 0;
  v106 = GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v107 = GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v108 = 0LL;
  v109 = 0;
  v110 = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
  v111 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v112 = wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled;
  v113 = 1;
  v114 = GUID_55ae97cc_507b_4db8_88ee_e0d5b5a889e9;
  v115 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v116 = wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled;
  v117 = 0;
  v118 = GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
  v119 = GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  v120 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v121 = 1;
  v122 = GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v123 = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v124 = 0LL;
  v125 = 0;
  v4 = &v23;
  while ( 1 )
  {
    v5 = *(unsigned __int8 (**)(void))&v4[1].Data1;
    if ( v5 && !v5() )
      goto LABEL_32;
    v21[0] = 0LL;
    v6 = v4 - 1;
    QueryService = a2->lpVtbl->QueryService;
    if ( !v4[1].Data4[0] )
      break;
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
           a2,
           v6,
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           v21);
    v9 = v21[0];
    if ( v8 >= 0 && v21[0] )
      goto LABEL_10;
LABEL_30:
    if ( v9 )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
LABEL_32:
    v4 += 3;
    if ( &v4[-1] == (GUID *)&v126 )
      return 0LL;
  }
  LODWORD(v20) = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
                   a2,
                   v6,
                   &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
                   v21);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v20,
         L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
         (const unsigned __int16 *)0x2FA,
         v10) )
  {
    v9 = v21[0];
LABEL_10:
    if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1
      && *(_QWORD *)v4->Data4 == *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4 )
    {
      v11 = *((_QWORD *)this + 25);
      v12 = &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
    }
    else if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1
           && *(_QWORD *)v4->Data4 == *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4 )
    {
      v11 = *((_QWORD *)this + 24);
      v12 = &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
    }
    else if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1
           && *(_QWORD *)v4->Data4 == *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4 )
    {
      v11 = *((_QWORD *)this + 23);
      v12 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    }
    else if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1
           && *(_QWORD *)v4->Data4 == *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4 )
    {
      v11 = *((_QWORD *)this + 22);
      v12 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
    }
    else
    {
      if ( *(_QWORD *)&v4->Data1 != *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1
        || *(_QWORD *)v4->Data4 != *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4 )
      {
        v15 = PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::PublishPrivilegedOperations(
                (char *)this + 128,
                v9,
                v4);
LABEL_28:
        LODWORD(v20) = v15;
        if ( !CRVPrivate::VerifyCriticalResult(
                (unsigned __int64)&v20,
                L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                (const unsigned __int16 *)0x2FE,
                v14) )
        {
          v17 = (unsigned int)v20;
          if ( (int)v20 >= 0 )
            goto LABEL_39;
          v18 = 766LL;
          goto LABEL_38;
        }
        v9 = v21[0];
        goto LABEL_30;
      }
      v11 = *((_QWORD *)this + 21);
      v12 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, char *))(*(_QWORD *)v9 + 24LL))(
            v9,
            v12,
            v11,
            (char *)this + 128);
    v15 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x247,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v13);
    goto LABEL_28;
  }
  v17 = (unsigned int)v20;
  if ( (int)v20 >= 0 )
    goto LABEL_39;
  v18 = 762LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)v17);
LABEL_39:
  v19 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v17;
}
