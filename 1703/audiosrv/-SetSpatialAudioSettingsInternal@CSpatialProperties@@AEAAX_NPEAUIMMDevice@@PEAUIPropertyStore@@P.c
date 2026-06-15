/*
 * XREFs of ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18003DD18 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18002F2F8 (--1CPropertyStoreHelper@@QEAA@XZ.c)
 *     ??1?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@XZ @ 0x18002F4A0 (--1-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@XZ.c)
 *     ValidateRegistrySpatialSettingsBlob @ 0x18003BA74 (ValidateRegistrySpatialSettingsBlob.c)
 *     BlockSpatialAudioRegistryGates @ 0x18003BAEC (BlockSpatialAudioRegistryGates.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x18003BC38 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18003C938 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003D098 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     LogCurrentSettings @ 0x18003D104 (LogCurrentSettings.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x18004054C (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007B29C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C7264 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     WPP_SF_DDS @ 0x1800C77EC (WPP_SF_DDS.c)
 *     WPP_SF_SD_guid_S @ 0x1800C7C64 (WPP_SF_SD_guid_S.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSpatialProperties::SetSpatialAudioSettingsInternal(
        __int64 a1,
        char a2,
        struct IMMDevice *a3,
        struct IPropertyStore *a4,
        LPCWSTR pwsz,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _OWORD *a8)
{
  struct IPropertyStore *v8; // r14
  struct tWAVEFORMATEX *v10; // r12
  unsigned int v11; // esi
  unsigned int v12; // r13d
  char *v13; // rdi
  struct IMMDevice *v14; // rdx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  PROPVARIANT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  signed __int32 v21; // r9d
  unsigned int v22; // r14d
  __int64 v23; // rbx
  char *v24; // rax
  char *v25; // rdi
  unsigned int v26; // ebx
  bool v27; // al
  __int64 *v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rbx
  __int64 (__fastcall ***v31)(_QWORD, _BYTE *); // rcx
  int v32; // eax
  char *v33; // r12
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  _WORD *v37; // rcx
  __int64 v38; // r8
  __int16 v39; // ax
  _WORD *v40; // rax
  __int64 v41; // r8
  _WORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int16 v45; // cx
  _WORD *v46; // rcx
  __int64 v47; // rax
  char *v48; // r14
  const struct CSpatialAudioTech *TechnologyByID; // rbx
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // r14d
  __int64 v54; // rcx
  int v55; // ebx
  LPCGUID v56; // r8
  LPCGUID v57; // r9
  __int64 v58; // rbx
  char *v59; // r10
  char *v60; // rax
  const WCHAR *v61; // rdx
  LPCGUID v62; // r8
  LPCGUID v63; // r9
  int v64; // r12d
  char *v65; // rbx
  const struct CSpatialAudioTech *v66; // r14
  __int64 (__fastcall ***v67)(_QWORD, _BYTE *); // rcx
  char v68; // r14
  char v69; // r14
  LPCGUID v70; // r8
  LPCGUID v71; // r9
  const WCHAR *v72; // rdx
  LPCGUID v73; // r8
  LPCGUID v74; // r9
  const struct CSpatialAudioTech *v75; // r12
  char v76; // r10
  char v77; // r8
  _OWORD *v78; // rax
  unsigned int v79; // edx
  char *v80; // r9
  GUID *v81; // rax
  GUID *v82; // rcx
  GUID *v83; // rax
  BOOL v84; // eax
  BOOL v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // r13d
  unsigned int v89; // eax
  int v90; // r8d
  const WCHAR *v91; // rsi
  LPCGUID v92; // r8
  LPCGUID v93; // r9
  LPCGUID v94; // r8
  LPCGUID v95; // r9
  int v96; // r12d
  int v97; // r8d
  LPCGUID v98; // r8
  LPCGUID v99; // r9
  int v100; // eax
  void *v101; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v103; // rdx
  __int16 v104; // [rsp+40h] [rbp-C0h] BYREF
  bool v105; // [rsp+42h] [rbp-BEh] BYREF
  __int16 v106; // [rsp+44h] [rbp-BCh] BYREF
  char v107; // [rsp+46h] [rbp-BAh] BYREF
  char v108; // [rsp+47h] [rbp-B9h] BYREF
  bool v109; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v110; // [rsp+4Ah] [rbp-B6h] BYREF
  unsigned int v111; // [rsp+4Ch] [rbp-B4h] BYREF
  int v112; // [rsp+50h] [rbp-B0h] BYREF
  char v113[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v114; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v115; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v116; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v117; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v118; // [rsp+68h] [rbp-98h] BYREF
  int inited; // [rsp+6Ch] [rbp-94h]
  LPCWSTR v120; // [rsp+70h] [rbp-90h]
  unsigned int v121; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v122; // [rsp+7Ch] [rbp-84h]
  int v123; // [rsp+80h] [rbp-80h]
  int v124; // [rsp+84h] [rbp-7Ch]
  int v125; // [rsp+88h] [rbp-78h]
  struct tWAVEFORMATEX *v126; // [rsp+90h] [rbp-70h]
  __int64 v127; // [rsp+98h] [rbp-68h]
  struct IPropertyStore *v128; // [rsp+A0h] [rbp-60h]
  char *v129; // [rsp+A8h] [rbp-58h]
  const struct CSpatialAudioTech *v130; // [rsp+B0h] [rbp-50h]
  int v131; // [rsp+B8h] [rbp-48h]
  __int64 *v132; // [rsp+C0h] [rbp-40h]
  struct IPropertyStore *v133; // [rsp+C8h] [rbp-38h] BYREF
  CSpatialAudioTechnologies *v134; // [rsp+D0h] [rbp-30h]
  PROPVARIANT v135; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v136; // [rsp+E0h] [rbp-20h]
  void *Buf2; // [rsp+E8h] [rbp-18h]
  PROPVARIANT v138; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v139; // [rsp+F8h] [rbp-8h]
  char *v140; // [rsp+100h] [rbp+0h]
  char v141[8]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v142[2]; // [rsp+110h] [rbp+10h] BYREF
  PROPVARIANT pvar; // [rsp+120h] [rbp+20h] BYREF
  __int64 v144; // [rsp+128h] [rbp+28h]
  __int64 v145; // [rsp+130h] [rbp+30h]
  _OWORD *v146; // [rsp+138h] [rbp+38h]
  void *Buf1; // [rsp+140h] [rbp+40h]
  struct IMMDevice *v148; // [rsp+148h] [rbp+48h]
  PROPERTYKEY v149; // [rsp+150h] [rbp+50h] BYREF
  __int64 v150; // [rsp+170h] [rbp+70h]
  __int64 v151; // [rsp+178h] [rbp+78h]
  __int16 v152; // [rsp+180h] [rbp+80h] BYREF
  int v153; // [rsp+188h] [rbp+88h]
  __int16 v154; // [rsp+198h] [rbp+98h] BYREF
  int v155; // [rsp+1A0h] [rbp+A0h]
  _BYTE v156[56]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp+E8h]
  _BYTE v158[56]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v159; // [rsp+228h] [rbp+128h]
  char v160[64]; // [rsp+230h] [rbp+130h] BYREF
  struct _GUID v161; // [rsp+270h] [rbp+170h] BYREF
  _OWORD v162[3]; // [rsp+280h] [rbp+180h] BYREF
  GUID v163; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v164[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v165; // [rsp+2E0h] [rbp+1E0h]
  char v166[24]; // [rsp+2E8h] [rbp+1E8h] BYREF
  void *v167; // [rsp+300h] [rbp+200h]
  int v168; // [rsp+308h] [rbp+208h]
  int v169; // [rsp+30Ch] [rbp+20Ch]
  void *v170; // [rsp+310h] [rbp+210h]
  int v171; // [rsp+318h] [rbp+218h]
  int v172; // [rsp+31Ch] [rbp+21Ch]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+320h] [rbp+220h] BYREF
  unsigned int *v174; // [rsp+330h] [rbp+230h]
  __int64 v175; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v176; // [rsp+350h] [rbp+250h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v177; // [rsp+370h] [rbp+270h] BYREF
  __int16 *v178; // [rsp+380h] [rbp+280h]
  __int64 v179; // [rsp+388h] [rbp+288h]
  __int16 *v180; // [rsp+390h] [rbp+290h]
  __int64 v181; // [rsp+398h] [rbp+298h]
  EVENT_DATA_DESCRIPTOR v182; // [rsp+3B0h] [rbp+2B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v183; // [rsp+3D0h] [rbp+2D0h] BYREF
  int *v184; // [rsp+3E0h] [rbp+2E0h]
  __int64 v185; // [rsp+3E8h] [rbp+2E8h]
  unsigned int *v186; // [rsp+3F0h] [rbp+2F0h]
  __int64 v187; // [rsp+3F8h] [rbp+2F8h]
  EVENT_DATA_DESCRIPTOR v188; // [rsp+410h] [rbp+310h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v189; // [rsp+430h] [rbp+330h] BYREF
  char *v190; // [rsp+440h] [rbp+340h]
  __int64 v191; // [rsp+448h] [rbp+348h]
  struct _EVENT_DATA_DESCRIPTOR v192; // [rsp+450h] [rbp+350h] BYREF
  EVENT_DATA_DESCRIPTOR v193; // [rsp+460h] [rbp+360h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+480h] [rbp+380h] BYREF
  char *v195; // [rsp+490h] [rbp+390h]
  __int64 v196; // [rsp+498h] [rbp+398h]
  struct _EVENT_DATA_DESCRIPTOR v197; // [rsp+4A0h] [rbp+3A0h] BYREF
  EVENT_DATA_DESCRIPTOR v198; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v199; // [rsp+4D0h] [rbp+3D0h] BYREF
  char *v200; // [rsp+4E0h] [rbp+3E0h]
  __int64 v201; // [rsp+4E8h] [rbp+3E8h]
  struct _EVENT_DATA_DESCRIPTOR v202; // [rsp+4F0h] [rbp+3F0h] BYREF
  EVENT_DATA_DESCRIPTOR v203; // [rsp+500h] [rbp+400h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v204; // [rsp+520h] [rbp+420h] BYREF
  __int16 *v205; // [rsp+530h] [rbp+430h]
  __int64 v206; // [rsp+538h] [rbp+438h]
  EVENT_DATA_DESCRIPTOR v207; // [rsp+550h] [rbp+450h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v208; // [rsp+570h] [rbp+470h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v209; // [rsp+580h] [rbp+480h] BYREF
  char *v210; // [rsp+590h] [rbp+490h]
  __int64 v211; // [rsp+598h] [rbp+498h]
  struct _EVENT_DATA_DESCRIPTOR v212; // [rsp+5A0h] [rbp+4A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+5B0h] [rbp+4B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+5D0h] [rbp+4D0h] BYREF

  v150 = -2LL;
  v8 = a4;
  v128 = a4;
  v148 = a3;
  LOBYTE(v110) = a2;
  v120 = pwsz;
  v10 = a6;
  v126 = a6;
  v127 = a7;
  v151 = a7;
  v146 = a8;
  v115 = 10;
  v125 = 0;
  v131 = 0;
  v11 = -1;
  v12 = -1;
  v114 = -1;
  v123 = -1;
  v105 = 0;
  memset(v164, 0, sizeof(v164));
  v165 = 0LL;
  v161 = GUID_00000000_0000_0000_0000_000000000000;
  v163 = GUID_00000000_0000_0000_0000_000000000000;
  v109 = 0;
  v13 = 0LL;
  v130 = 0LL;
  v133 = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IPropertyStore *))a4->lpVtbl->AddRef)(a4);
  v135 = 0LL;
  v136 = 0LL;
  Buf2 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)v141);
  v149 = PKEY_AudioEndpoint_FormFactor;
  if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
              &v133,
              (__int64)&v149,
              0xAu,
              &v115) < 0
    || ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v8->lpVtbl->GetValue)(
         v8,
         &PKEY_SpatialAudioEndpoint_Settings,
         &v135) < 0 )
  {
    goto LABEL_212;
  }
  LOBYTE(v106) = ValidateRegistrySpatialSettingsBlob((__int64)&v135, *(_BYTE *)(a1 + 50), &v161, &v163, &v105, &v109);
  if ( (_BYTE)v106 )
  {
    LogCurrentSettings(
      "SpatialSettingsFromTheRegistry",
      (int)L"Spatial audio settings from registry",
      (__int64)pwsz,
      Buf2,
      (__int64)a6,
      0LL);
  }
  else if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB5DA, v15, v16, 3u, &pData);
  }
  if ( *(_BYTE *)(a1 + 73) )
  {
    v17 = &v135;
    goto LABEL_214;
  }
  inited = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1, v14);
  if ( inited < 0 )
    goto LABEL_212;
  v22 = 0;
  v111 = 0;
  CSpatialAudioTechnologies::RegistryGates(v19, v18, v20, v21);
  v112 = g_ListOfSpatialTech[0];
  v23 = 842LL * (unsigned int)g_ListOfSpatialTech[0];
  v24 = (char *)operator new[](v23 + 80, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v24;
  Buf1 = v24;
  if ( !v24 )
  {
    v8 = v128;
    goto LABEL_212;
  }
  memset(v24, 0, v23 + 80);
  v25 = v13 + 80;
  v129 = v25;
  v124 = BlockSpatialAudioRegistryGates();
  v116 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v116, 0LL);
  if ( ((v116 - 2) & 0xFFFFFFFD) != 0 )
  {
    v122 = -1;
    v118 = -1;
    v26 = 0;
    v116 = 0;
    v27 = v105;
    LOBYTE(v104) = v105;
    if ( v112 )
    {
      v28 = qword_18012C178;
      v132 = qword_18012C178;
      v29 = v112;
      do
      {
        v108 = 0;
        v117 = 0;
        memset(v162, 0, 40);
        if ( v26 >= g_ListOfSpatialTech[0] )
          v30 = 0LL;
        else
          v30 = *v28;
        if ( v30 )
        {
          v134 = (CSpatialAudioTechnologies *)v156;
          v157 = 0LL;
          v31 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v127 + 56);
          if ( v31 )
            v157 = (**v31)(v31, v156);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, struct tWAVEFORMATEX *, _BYTE *, unsigned int *, char *, _OWORD *))(*(_QWORD *)v30 + 40LL))(
                 v30,
                 v115,
                 v10,
                 v156,
                 &v117,
                 &v108,
                 v162) )
          {
            v32 = *(_DWORD *)(a1 + 76);
            if ( v32 != 2 || WORD1(v162[0]) != 2 )
            {
              if ( !v32 && v10 && v115 != 9 && v10->nChannels == 8 && WORD1(v162[0]) == 2 )
              {
                *(_OWORD *)(a1 + 80) = v162[0];
                *(_OWORD *)(a1 + 96) = v162[1];
                *(_QWORD *)(a1 + 112) = *(_QWORD *)&v162[2];
                *(_DWORD *)(a1 + 76) = 1;
              }
              v134 = (CSpatialAudioTechnologies *)(842LL * v22);
              v33 = &v129[(_QWORD)v134];
              *(_DWORD *)v33 = 842;
              *((_DWORD *)v33 + 1) = 1;
              *((_DWORD *)v33 + 198) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30) != 0;
              v34 = v33 + 776;
              *(_OWORD *)(v33 + 776) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 16LL))(
                                                    v30,
                                                    v166);
              *((_DWORD *)v33 + 199) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30);
              *((_DWORD *)v33 + 200) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL))(v30);
              *((_DWORD *)v33 + 202) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 64LL))(v30);
              *((_DWORD *)v33 + 201) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30);
              *((_DWORD *)v33 + 203) = DWORD1(v162[0]);
              *((_DWORD *)v33 + 204) = DWORD1(v162[1]);
              *(_OWORD *)(v33 + 820) = *(_OWORD *)((char *)&v162[1] + 8);
              *((_WORD *)v33 + 418) = WORD1(v162[0]);
              *((_WORD *)v33 + 419) = HIWORD(v162[0]);
              *((_WORD *)v33 + 420) = WORD1(v162[1]);
              v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
              v36 = 256LL;
              v37 = v33 + 8;
              v38 = v35 - (_QWORD)(v33 + 8);
              do
              {
                if ( v36 == -2147483390 )
                  break;
                v39 = *(_WORD *)((char *)v37 + v38);
                if ( !v39 )
                  break;
                *v37++ = v39;
                --v36;
              }
              while ( v36 );
              v40 = v37 - 1;
              if ( v36 )
                v40 = v37;
              *v40 = 0;
              v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 24LL))(v30, v36, v38);
              v42 = v33 + 520;
              v43 = 128LL;
              v44 = v41 - (_QWORD)(v33 + 520);
              do
              {
                if ( v43 == -2147483518 )
                  break;
                v45 = *(_WORD *)((char *)v42 + v44);
                if ( !v45 )
                  break;
                *v42++ = v45;
                --v43;
              }
              while ( v43 );
              v46 = v42 - 1;
              if ( v43 )
                v46 = v42;
              *v46 = 0;
              if ( *v34 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
                && *((_QWORD *)v33 + 98) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
              {
                goto LABEL_86;
              }
              v47 = -1LL;
              do
                ++v47;
              while ( *(_WORD *)&v33[2 * v47 + 8] );
              if ( !v47 )
              {
LABEL_86:
                v55 = (int)v120;
                if ( (unsigned int)hProvider > 2 )
                {
                  TlgCreateWsz(&v189, v120);
                  v190 = v33 + 776;
                  v191 = 16LL;
                  TlgCreateWsz(&v192, (LPCWSTR)v33 + 4);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB59D, v56, v57, 5u, &v188);
                }
                if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_SD_guid_S(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    v43,
                    v44,
                    v55 + 34,
                    v116,
                    (__int64)(v33 + 776),
                    (__int64)(v33 + 8));
                }
                memset(v33, 0, 0x34AuLL);
                v22 = v111;
                v10 = v126;
                v28 = v132;
              }
              else
              {
                if ( (_BYTE)v106 )
                {
                  if ( !*((_DWORD *)v33 + 198)
                    || *v34 == *(_QWORD *)&v161.Data1 && *((_QWORD *)v33 + 98) == *(_QWORD *)v161.Data4
                    || (v48 = (char *)Buf2 + 80, *((_DWORD *)Buf2 + 17) <= v111)
                    || *(_DWORD *)&v48[(_QWORD)v134 + 792]
                    || *(_QWORD *)&v48[(_QWORD)v134 + 776] != *(_QWORD *)&v129[(_QWORD)v134 + 776]
                    || *(_QWORD *)&v48[(_QWORD)v134 + 784] != *(_QWORD *)&v129[(_QWORD)v134 + 784] )
                  {
                    v51 = v117;
                  }
                  else
                  {
                    v107 = 0;
                    v121 = 0;
                    TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(v134, &v161);
                    if ( TechnologyByID
                      && (v50 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                                  (__int64)v160,
                                  v127),
                          (*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, struct tWAVEFORMATEX *, __int64, unsigned int *, char *, _OWORD *))(*(_QWORD *)TechnologyByID + 40LL))(
                            TechnologyByID,
                            v115,
                            v126,
                            v50,
                            &v121,
                            &v107,
                            v162)) )
                    {
                      v51 = v117;
                      if ( !v107 || v117 < v121 )
                      {
                        v163 = v161;
                        if ( v11 != -1 )
                          v12 = v11;
                        v161 = *(struct _GUID *)&v48[(_QWORD)v134 + 776];
                      }
                    }
                    else
                    {
                      v51 = v117;
                    }
                  }
                  v52 = *v34 - *(_QWORD *)&v161.Data1;
                  if ( *v34 == *(_QWORD *)&v161.Data1 )
                    v52 = *((_QWORD *)v33 + 98) - *(_QWORD *)v161.Data4;
                  v53 = v111;
                  if ( !v52 )
                    v11 = v111;
                  v54 = *v34 - *(_QWORD *)&v163.Data1;
                  if ( *v34 == *(_QWORD *)&v163.Data1 )
                    v54 = *((_QWORD *)v33 + 98) - *(_QWORD *)v163.Data4;
                  if ( !v54 )
                    v12 = v111;
                }
                else
                {
                  v51 = v117;
                  v53 = v111;
                }
                if ( *((_DWORD *)v33 + 198) && v51 )
                {
                  if ( v108 && (v105 || (v124 & 8) != 0 || !*((_DWORD *)v33 + 199)) )
                  {
                    if ( v51 < v122 )
                    {
                      v122 = v51;
                      v114 = v53;
                    }
                  }
                  else if ( v51 < v118 )
                  {
                    v118 = v51;
                    v123 = v53;
                  }
                }
                v22 = v53 + 1;
                v111 = v22;
                v10 = v126;
                v28 = v132;
              }
            }
          }
          v29 = v112;
        }
        v26 = v116 + 1;
        v116 = v26;
        v132 = ++v28;
      }
      while ( v26 < v29 );
      v27 = v105;
      v25 = v129;
    }
    if ( !*(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = 3;
    if ( !(_BYTE)v106 )
    {
      v58 = v114;
      v27 = v114 != -1;
      LOBYTE(v104) = v27;
      if ( (unsigned int)hProvider > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          TlgCreateWsz(&v194, v120);
          if ( (_DWORD)v58 == -1 )
            v60 = v59;
          else
            v60 = &v25[842 * v58 + 776];
          v195 = v60;
          v196 = 16LL;
          if ( (_DWORD)v58 == -1 )
            v61 = L"<none>";
          else
            v61 = (const WCHAR *)&v25[842 * v58 + 8];
          TlgCreateWsz(&v197, v61);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB50E, v62, v63, 5u, &v193);
        }
        v27 = v104;
      }
    }
  }
  else
  {
    v27 = v105;
    LOBYTE(v104) = v105;
  }
  v64 = (v12 != -1) + 2;
  while ( 1 )
  {
    if ( v11 == -1 )
      goto LABEL_126;
    v113[0] = 0;
    v118 = 0;
    v65 = &v25[842 * v11];
    v66 = CSpatialAudioTechnologies::GetTechnologyByID(0LL, (const struct _GUID *)(v65 + 776));
    v130 = v66;
    v142[0] = v158;
    v159 = 0LL;
    v67 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v127 + 56);
    if ( v67 )
      v159 = (**v67)(v67, v158);
    v68 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, struct tWAVEFORMATEX *, _BYTE *, unsigned int *, char *, _BYTE *))(*(_QWORD *)v66 + 40LL))(
            v66,
            v115,
            v126,
            v158,
            &v118,
            v113,
            v164);
    if ( v68 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v130 + 32LL))(v130) )
        break;
    }
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v208, v120);
      v72 = L"Encoder Not licensed";
      if ( !v68 )
        v72 = L"Encoder not supported";
      TlgCreateWsz(&v209, v72);
      v210 = v65 + 776;
      v211 = 16LL;
      TlgCreateWsz(&v212, (LPCWSTR)v65 + 4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB462, v73, v74, 6u, &v207);
    }
LABEL_125:
    v27 = v104;
LABEL_126:
    if ( v12 == -1 )
    {
      v11 = v123;
      if ( v114 != -1 )
        v11 = v114;
      v27 = v27 && v114 != -1;
      LOBYTE(v104) = v27;
    }
    else
    {
      v11 = v12;
      v12 = -1;
    }
    if ( !--v64 )
    {
      v77 = 0;
      v75 = v130;
      v76 = 0;
      goto LABEL_144;
    }
    v25 = v129;
  }
  if ( !v126 || !(unsigned int)CompareWaveFormat(v126, (const struct tWAVEFORMATEX *)v164) )
  {
    v69 = 1;
    if ( (_BYTE)v110 )
      goto LABEL_138;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v199, v120);
      v200 = v65 + 776;
      v201 = 16LL;
      TlgCreateWsz(&v202, (LPCWSTR)v65 + 4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB557, v70, v71, 5u, &v198);
    }
    goto LABEL_125;
  }
  v69 = 0;
LABEL_138:
  v75 = v130;
  v76 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v130 + 48LL))(v130);
  LOBYTE(v110) = v76;
  v77 = v104;
  if ( (_BYTE)v104 )
  {
    if ( v69 )
    {
      v78 = v146;
      *v146 = *(_OWORD *)v164;
      v78[1] = *(_OWORD *)&v164[16];
      *((_QWORD *)v78 + 4) = v165;
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      v125 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v75 + 64LL))(v75);
      v77 = v104;
      v76 = v110;
    }
  }
LABEL_144:
  v13 = (char *)Buf1;
  *((_DWORD *)Buf1 + 1) = 1;
  *(_DWORD *)v13 = 80;
  v79 = v111;
  *((_DWORD *)v13 + 17) = v111;
  v80 = v13 + 80;
  if ( v11 == -1 )
  {
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
    v81 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v81 = (GUID *)&v13[842 * v11 + 856];
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)(v13 + 20) = *v81;
  if ( v12 == -1 )
  {
    v83 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v83 = (GUID *)&v80[842 * v12 + 776];
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)(v13 + 36) = *v83;
  if ( v114 != -1 )
    v82 = (GUID *)&v80[842 * v114 + 776];
  *(GUID *)(v13 + 52) = *v82;
  v84 = !*(_BYTE *)(a1 + 50) && v77;
  *((_DWORD *)v13 + 2) = v84;
  *((_DWORD *)v13 + 18) = v77 != 0;
  *((_DWORD *)v13 + 3) = v76 != 0;
  v85 = v109;
  if ( !(_BYTE)v106 )
    v85 = 0;
  *((_DWORD *)v13 + 4) = v85;
  v86 = v124;
  *((_DWORD *)v13 + 19) = v124;
  v8 = v128;
  if ( (v86 & 2) != 0 )
  {
    if ( v115 == 1 )
    {
      pvar = 0LL;
      v144 = 0LL;
      v145 = 0LL;
      if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v128->lpVtbl->GetValue)(
             v128,
             &PKEY_Endpoint_SpatialNotAllowed,
             &pvar) < 0
        || !(_WORD)pvar
        || (_WORD)pvar == 11 && !(_WORD)v144 )
      {
        *((_DWORD *)v13 + 19) &= ~2u;
      }
      PropVariantClear(&pvar);
      v79 = v111;
    }
    else
    {
      *((_DWORD *)v13 + 19) = v86 & 0xFFFFFFFD;
    }
  }
  v87 = *((_DWORD *)v13 + 19);
  if ( (v87 & 3) != 0 )
  {
    *((_DWORD *)v13 + 2) = 0;
    *((_DWORD *)v13 + 18) = 0;
    v88 = 0;
    *((_DWORD *)v13 + 4) = 0;
  }
  else
  {
    v88 = v125;
  }
  if ( (v87 & 4) != 0 )
    *((_DWORD *)v13 + 4) = 0;
  LOWORD(v138) = 65;
  v140 = v13;
  v89 = 842 * v79 + 80;
  LODWORD(v139) = v89;
  if ( v89 == (_DWORD)v136 && !memcmp_0(v13, Buf2, v89) )
  {
    v91 = v120;
  }
  else
  {
    v91 = v120;
    LogCurrentSettings(
      "UpdateSettings",
      (int)L"Spatial audio settings updated",
      (__int64)v120,
      v13,
      (__int64)v164,
      *(_DWORD **)(a1 + 64));
    inited = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))v8->lpVtbl->SetValue)(
               v8,
               &PKEY_SpatialAudioEndpoint_Settings,
               &v138);
    *(_BYTE *)(a1 + 72) = 1;
  }
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  if ( v88 != *(_DWORD *)(a1 + 52) )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v177, v91);
      v110 = *(_WORD *)(a1 + 52);
      v178 = &v110;
      v179 = 2LL;
      v106 = v88;
      v180 = &v106;
      v181 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB4B6, v92, v93, 5u, &v176);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_DDS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v90, *(_DWORD *)(a1 + 52), v88, (__int64)(v91 + 17));
    }
    v152 = 19;
    v153 = v88;
    inited = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int16 *))v8->lpVtbl->SetValue)(
               v8,
               &PKEY_SpatialAudioEndpoint_RenderingMode,
               &v152);
    *(_DWORD *)(a1 + 52) = v88;
  }
  if ( v88 && v75 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v204, v91);
      v104 = v88;
      v205 = &v104;
      v206 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB3E6, v94, v95, 4u, &v203);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16,
        (unsigned int)&WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids,
        (_DWORD)v91 + 34,
        v88);
    }
    v96 = *((_DWORD *)v13 + 4) != 0;
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), v13 + 20);
  }
  else
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v173, v91);
      LOWORD(v114) = v88;
      v174 = &v114;
      v175 = 2LL;
      LODWORD(v142[0]) = ((unsigned int)&unk_1800FB423 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      HIDWORD(v142[0]) = 4;
      v142[1] = 0LL;
      v167 = off_18012A378;
      v168 = *(unsigned __int16 *)off_18012A378;
      v169 = 2;
      v170 = &unk_1800FB42E;
      v171 = 51;
      v172 = 1;
      EtwEventWriteTransfer(qword_18012A390, v142, 0LL, 0LL);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17,
        (unsigned int)&WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids,
        (_DWORD)v91 + 34,
        v88);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40));
    v96 = v131;
  }
  if ( v96 == *(_DWORD *)(a1 + 56) )
  {
    v100 = inited;
  }
  else
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v183, v91);
      LOWORD(v112) = *(_WORD *)(a1 + 56);
      v184 = &v112;
      v185 = 2LL;
      LOWORD(v111) = v96;
      v186 = &v111;
      v187 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB39F, v98, v99, 5u, &v182);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_DDS(*((_QWORD *)WPP_GLOBAL_Control + 2), 18, v97, *(_DWORD *)(a1 + 56), v96, (__int64)(v91 + 17));
    }
    v154 = 19;
    v155 = v96;
    v100 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int16 *))v8->lpVtbl->SetValue)(
             v8,
             &PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode,
             &v154);
    *(_DWORD *)(a1 + 56) = v96;
  }
  if ( v100 >= 0 )
  {
    v101 = *(void **)(a1 + 64);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v101);
    *(_QWORD *)(a1 + 64) = v13;
    goto LABEL_213;
  }
LABEL_212:
  operator delete(v13);
  CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)a1, v148, v8);
LABEL_213:
  PropVariantClear(&v135);
  v17 = &v138;
LABEL_214:
  PropVariantClear(v17);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v141);
  CPropertyStoreHelper::~CPropertyStoreHelper((CPropertyStoreHelper *)&v133);
  std::function<bool (WAVEFORMATEXTENSIBLE const *)>::~function<bool (WAVEFORMATEXTENSIBLE const *)>(v127, v103);
}
