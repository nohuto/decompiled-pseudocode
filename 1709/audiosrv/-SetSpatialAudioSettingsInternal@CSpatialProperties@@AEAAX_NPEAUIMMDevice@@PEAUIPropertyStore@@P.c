/*
 * XREFs of ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800CA1E8 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x1800CB530 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x1800BA4DC (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     BlockSpatialAudioRegistryGates @ 0x1800C92C0 (BlockSpatialAudioRegistryGates.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800C9420 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x1800C95DC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     LogCurrentSettings @ 0x1800C96BC (LogCurrentSettings.c)
 *     WPP_SF_DDS @ 0x1800CD2C8 (WPP_SF_DDS.c)
 *     WPP_SF_SD_guid_S @ 0x1800CD6B8 (WPP_SF_SD_guid_S.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x1800CE840 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800CF868 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSpatialProperties::SetSpatialAudioSettingsInternal(
        __int64 a1,
        unsigned __int8 a2,
        struct IMMDevice *a3,
        __int64 a4,
        LPCWSTR pwsz,
        unsigned __int16 *a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // rsi
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edx
  struct IMMDevice *v19; // rdx
  __int64 v20; // rbx
  unsigned int Data1; // eax
  char v22; // bl
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  unsigned int v25; // r13d
  int v26; // esi
  char DefaultSpatialRenderingModePresent; // al
  __int64 v28; // rcx
  unsigned int v29; // r11d
  int v30; // eax
  __int128 v31; // xmm0
  unsigned int v32; // r15d
  __int64 *v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // al
  int v38; // eax
  __int64 v39; // r12
  _QWORD *v40; // rsi
  size_t *v41; // rax
  size_t *v42; // rax
  int v43; // r8d
  __int64 v44; // rax
  CSpatialAudioTechnologies *v45; // rcx
  const struct CSpatialAudioTech *TechnologyByID; // r15
  __int64 v47; // rbx
  __int64 v48; // rax
  char v49; // al
  unsigned int v50; // eax
  unsigned int v51; // r8d
  int v52; // r9d
  int v53; // edx
  __int64 v54; // rcx
  int v55; // r15d
  LPCGUID v56; // r8
  LPCGUID v57; // r9
  char *v58; // r10
  char *v59; // rax
  const WCHAR *v60; // rdx
  LPCGUID v61; // r8
  LPCGUID v62; // r9
  unsigned int v63; // esi
  __int64 v64; // r13
  const struct CSpatialAudioTech *v65; // r15
  __int64 v66; // rbx
  __int64 v67; // rax
  char v68; // bl
  char v69; // al
  int Ptr_high; // ebx
  __int16 Ptr; // r12
  unsigned __int16 v72; // dx
  int v73; // r8d
  __int16 v74; // dx
  int v75; // r10d
  __int16 v76; // r9
  ULONGLONG v77; // rcx
  bool v78; // al
  int v79; // eax
  char v80; // bl
  LPCGUID v81; // r8
  LPCGUID v82; // r9
  const WCHAR *v83; // rdx
  LPCGUID v84; // r8
  LPCGUID v85; // r9
  unsigned int v86; // eax
  unsigned __int8 v87; // r10
  bool v88; // cl
  _OWORD *v89; // rax
  char v90; // r9
  int v91; // r12d
  bool v92; // cf
  bool v93; // r8
  GUID *v94; // rax
  GUID *v95; // rcx
  GUID v96; // xmm6
  GUID *v97; // rax
  GUID *v98; // rax
  int v99; // edx
  unsigned int v100; // eax
  char v101; // cl
  char v102; // si
  __int64 v103; // rbx
  int v104; // edx
  int v105; // r8d
  unsigned __int64 v106; // rcx
  const WCHAR *v107; // r14
  __int64 v108; // rbx
  int v109; // eax
  LPCGUID v110; // r8
  LPCGUID v111; // r9
  LPCGUID v112; // r8
  LPCGUID v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // rcx
  char v117; // [rsp+50h] [rbp-B0h]
  bool v118; // [rsp+51h] [rbp-AFh]
  _BYTE v119[2]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v120; // [rsp+54h] [rbp-ACh]
  int AsUInt32With; // [rsp+58h] [rbp-A8h] BYREF
  char v122; // [rsp+5Ch] [rbp-A4h]
  __int16 v123; // [rsp+5Eh] [rbp-A2h] BYREF
  int v124; // [rsp+60h] [rbp-A0h] BYREF
  int v125; // [rsp+64h] [rbp-9Ch]
  unsigned int v126; // [rsp+68h] [rbp-98h]
  __int16 v127; // [rsp+6Ch] [rbp-94h] BYREF
  int v128; // [rsp+70h] [rbp-90h] BYREF
  ULONG v129; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v130; // [rsp+78h] [rbp-88h]
  int v131; // [rsp+80h] [rbp-80h] BYREF
  int v132; // [rsp+84h] [rbp-7Ch]
  int v133; // [rsp+88h] [rbp-78h]
  int v134; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v135; // [rsp+90h] [rbp-70h]
  int v136; // [rsp+94h] [rbp-6Ch]
  unsigned int v137; // [rsp+98h] [rbp-68h] BYREF
  LPCWSTR v138; // [rsp+A0h] [rbp-60h]
  unsigned int v139; // [rsp+A8h] [rbp-58h]
  int v140; // [rsp+ACh] [rbp-54h]
  int v141; // [rsp+B0h] [rbp-50h]
  __int64 v142; // [rsp+B8h] [rbp-48h]
  __int64 v143; // [rsp+C0h] [rbp-40h]
  unsigned int v144; // [rsp+C8h] [rbp-38h] BYREF
  int v145; // [rsp+D0h] [rbp-30h]
  __int64 *v146; // [rsp+D8h] [rbp-28h]
  struct tagPROPVARIANT pvar; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD *v149; // [rsp+100h] [rbp+0h]
  struct IMMDevice *v150; // [rsp+108h] [rbp+8h]
  __int64 v151; // [rsp+118h] [rbp+18h]
  __int64 v152; // [rsp+120h] [rbp+20h]
  __int64 v153; // [rsp+128h] [rbp+28h]
  GUID Buf2; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v155[24]; // [rsp+140h] [rbp+40h]
  GUID v156; // [rsp+160h] [rbp+60h] BYREF
  __int64 v157[6]; // [rsp+170h] [rbp+70h] BYREF
  struct _GUID v158[5]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v159[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v160[2]; // [rsp+240h] [rbp+140h] BYREF
  GUID v161; // [rsp+250h] [rbp+150h]
  EVENT_DATA_DESCRIPTOR Buf1[3]; // [rsp+260h] [rbp+160h] BYREF
  int *p_AsUInt32With; // [rsp+290h] [rbp+190h]
  __int64 v164; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v166; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v168; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v169; // [rsp+2F0h] [rbp+1F0h] BYREF
  _DWORD v170[1668]; // [rsp+300h] [rbp+200h] BYREF
  _OWORD Src[417]; // [rsp+1D10h] [rbp+1C10h] BYREF

  v151 = -2LL;
  v8 = a4;
  v142 = a4;
  v150 = a3;
  v143 = a7;
  v138 = pwsz;
  v152 = a7;
  v149 = a8;
  AsUInt32With = 0;
  v129 = 10;
  v133 = 0;
  v136 = -1;
  v11 = -1;
  v125 = -1;
  v126 = -1;
  v12 = -1;
  v120 = -1;
  v140 = -1;
  v118 = 0;
  v122 = 0;
  LOBYTE(v127) = 0;
  LOBYTE(v132) = 0;
  memset(v157, 0, 0x28uLL);
  v117 = 0;
  v131 = 0;
  memset(v158, 0, 0x48uLL);
  v128 = 0;
  v134 = 0;
  v156 = GUID_00000000_0000_0000_0000_000000000000;
  memset(v159, 0, 0x48uLL);
  memset(v170, 0, sizeof(v170));
  v148 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  memset(&pvar, 0, sizeof(pvar));
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v153 = a1;
  Buf2 = PKEY_AudioEndpoint_FormFactor.fmtid;
  *(_DWORD *)v155 = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   &v148,
                   (__int64)&Buf2,
                   v13,
                   &v129);
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  if ( v129 != 9
    && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar) )
  {
    v14 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    v15 = (unsigned __int8)v132;
    if ( v14 >= 0 )
      v15 = 1;
    v132 = v15;
  }
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v128);
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56), &v134);
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(
                   *(_QWORD *)(a1 + 56),
                   &v156);
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  v161 = v156;
  v16 = a2;
  if ( v128 )
    v16 = 1;
  v145 = v16;
  v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48), &v131);
  AsUInt32With = v17;
  if ( v17 < 0 )
    goto LABEL_319;
  v18 = v131;
  if ( (unsigned int)v131 <= 8 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, _OWORD *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
            *(_QWORD *)(a1 + 48),
            v158,
            Src,
            (unsigned int)(834 * v131));
    AsUInt32With = v17;
    v18 = v131;
  }
  if ( v17 < 0 || v18 > 8 )
    goto LABEL_319;
  *(GUID *)v160 = v156;
  LogCurrentSettings(
    "SpatialSettingsFromTheRegistry",
    (__int64)L"Spatial settings from registry",
    pwsz,
    v128,
    (__int64)v160,
    (int *)v158,
    v18,
    (__int64)a6,
    0LL);
  v20 = (unsigned int)v131;
  if ( !*(_BYTE *)(a1 + 6848) )
  {
    *(_BYTE *)(a1 + 6848) = 1;
    *(struct _GUID *)(a1 + 100) = v158[0];
    *(struct _GUID *)(a1 + 116) = v158[1];
    *(struct _GUID *)(a1 + 132) = v158[2];
    *(struct _GUID *)(a1 + 148) = v158[3];
    *(_QWORD *)(a1 + 164) = *(_QWORD *)&v158[4].Data1;
    *(_DWORD *)(a1 + 172) = v20;
    memcpy_0((void *)(a1 + 176), Src, 834 * v20);
  }
  if ( (_DWORD)v20 )
  {
    Data1 = *(_DWORD *)&v158[3].Data4[4];
    if ( !*(_BYTE *)(a1 + 74) && *(_DWORD *)&v158[3].Data4[4] != v158[0].Data1 )
    {
      if ( !*(_DWORD *)(a1 + 160) || *(_DWORD *)(a1 + 100) )
      {
        Data1 = v158[0].Data1;
        *(_DWORD *)&v158[3].Data4[4] = v158[0].Data1;
      }
      else
      {
        v158[0].Data1 = *(_DWORD *)&v158[3].Data4[4];
      }
    }
    v118 = Data1 != 0;
    v22 = 1;
    v117 = 1;
  }
  else
  {
LABEL_319:
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&Buf1[2], pwsz);
      p_AsUInt32With = &AsUInt32With;
      v164 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111C45, v23, v24, 4u, Buf1);
    }
    v131 = 0;
    memset(v158, 0, 0x48uLL);
    memset(Src, 0, sizeof(Src));
    v22 = 0;
  }
  AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1, v19);
  if ( AsUInt32With < 0 )
    goto LABEL_309;
  v25 = 0;
  v124 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v26 = g_ListOfSpatialTech;
  v137 = g_ListOfSpatialTech;
  if ( (unsigned int)g_ListOfSpatialTech > 8 )
  {
    AsUInt32With = -2147418113;
    v8 = v142;
    goto LABEL_309;
  }
  v141 = BlockSpatialAudioRegistryGates();
  DefaultSpatialRenderingModePresent = IsGetDefaultSpatialRenderingModePresent();
  v29 = 0;
  if ( DefaultSpatialRenderingModePresent )
  {
    v30 = IsSpatialAllowedOnPlatform();
    v29 = 0;
  }
  else
  {
    v30 = 1;
  }
  if ( v30 )
  {
    v139 = -1;
    LODWORD(v130) = -1;
    v31 = MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( !v128 )
      goto LABEL_48;
    if ( v128 == 2 && v158[0].Data1 )
    {
      v28 = *(_QWORD *)&v158[0].Data4[4] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v158[0].Data4[4] == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v28 = *(_QWORD *)&v158[1].Data2 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v28 )
LABEL_48:
        v31 = *(_OWORD *)&v158[0].Data4[4];
    }
    *(_OWORD *)v160 = v31;
    v32 = 0;
    v135 = 0;
    if ( v26 )
    {
      v33 = (__int64 *)&unk_18014C478;
      v146 = (__int64 *)&unk_18014C478;
      while ( 1 )
      {
        LOBYTE(v123) = 0;
        v124 = 0;
        memset(Buf1, 0, 0x28uLL);
        v29 = 0;
        if ( v32 >= g_ListOfSpatialTech )
          v34 = 0LL;
        else
          v34 = *v33;
        if ( !v34 )
          goto LABEL_122;
        v35 = (__int64)pvar.bstrblobVal.pData & -(__int64)((_BYTE)v132 != 0);
        v36 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                (__int64)&pData,
                v143);
        v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, __int64, int *, __int16 *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v34 + 40LL))(
                v34,
                v129,
                a6,
                v35,
                v36,
                &v124,
                &v123,
                Buf1);
        v29 = 0;
        if ( !v37 )
          goto LABEL_121;
        v38 = *(_DWORD *)(a1 + 6872);
        if ( v38 == 2 && WORD1(Buf1[0].Ptr) == 2 )
          goto LABEL_121;
        if ( !v38 && a6 && v129 != 9 && a6[1] == 8 && WORD1(Buf1[0].Ptr) == 2 )
        {
          *(EVENT_DATA_DESCRIPTOR *)(a1 + 6876) = Buf1[0];
          *(EVENT_DATA_DESCRIPTOR *)(a1 + 6892) = Buf1[1];
          *(_QWORD *)(a1 + 6908) = Buf1[2].Ptr;
          *(_DWORD *)(a1 + 6872) = 1;
        }
        v39 = 834LL * v25;
        *(_DWORD *)((char *)&v170[196] + v39) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
        v40 = (_QWORD *)((char *)&v170[192] + v39);
        *(_OWORD *)((char *)&v170[192] + v39) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v34 + 16LL))(
                                                             v34,
                                                             &Buf2);
        *(_DWORD *)((char *)&v170[197] + v39) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
        *(_DWORD *)((char *)&v170[198] + v39) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 56LL))(v34);
        *(_DWORD *)((char *)&v170[199] + v39) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 72LL))(v34);
        *(_DWORD *)((char *)&v170[200] + v39) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 64LL))(v34);
        *(_DWORD *)((char *)&v170[201] + v39) = HIDWORD(Buf1[0].Ptr);
        *(_DWORD *)((char *)&v170[202] + v39) = HIDWORD(Buf1[1].Ptr);
        *(EVENT_DATA_DESCRIPTOR *)((char *)&v170[203] + v39) = *(EVENT_DATA_DESCRIPTOR *)&Buf1[1].Size;
        *(_WORD *)((char *)&v170[207] + v39) = WORD1(Buf1[0].Ptr);
        *(_WORD *)((char *)&v170[207] + v39 + 2) = Buf1[0].Reserved2;
        *(_WORD *)((char *)&v170[208] + v39) = WORD1(Buf1[1].Ptr);
        v41 = (size_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
        StringCchCopyW((unsigned __int16 *)((char *)v170 + v39), 0x100uLL, v41);
        v42 = (size_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34);
        StringCchCopyW((unsigned __int16 *)((char *)&v170[128] + v39), 0x80uLL, v42);
        if ( *(_QWORD *)((char *)&v170[192] + v39) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
          && v40[1] == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
        {
          goto LABEL_114;
        }
        v44 = -1LL;
        v29 = 0;
        do
          ++v44;
        while ( *(_WORD *)((char *)v170 + 2 * v44 + v39) );
        if ( !v44 )
        {
LABEL_114:
          v55 = (int)v138;
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz(&v166, v138);
            v167.Ptr = (ULONGLONG)&v170[192] + v39;
            *(_QWORD *)&v167.Size = 16LL;
            TlgCreateWsz(&v168, (LPCWSTR)((char *)v170 + v39));
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111B41, v56, v57, 5u, &pData);
          }
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_SD_guid_S(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              (unsigned int)&WPP_GLOBAL_Control,
              v43,
              v55 + 34,
              v135,
              (__int64)&v170[192] + v39,
              (__int64)v170 + v39);
          }
          memset((char *)v170 + v39, 0, 0x342uLL);
          v33 = v146;
          v29 = 0;
LABEL_121:
          v22 = v117;
LABEL_122:
          v12 = v120;
          goto LABEL_123;
        }
        if ( !v117 || v128 || !*(_DWORD *)((char *)&v170[196] + 834 * v25) )
          goto LABEL_86;
        v45 = (CSpatialAudioTechnologies *)(*v40 - *(_QWORD *)&v158[0].Data4[4]);
        if ( *v40 == *(_QWORD *)&v158[0].Data4[4] )
          v45 = (CSpatialAudioTechnologies *)(v40[1] - *(_QWORD *)&v158[1].Data2);
        if ( v45
          && v131 > v25
          && !*(_DWORD *)((char *)&Src[49] + 834 * v25)
          && __PAIR128__(*(_QWORD *)((char *)&Src[48] + 834 * v25 + 8), *(_QWORD *)((char *)&Src[48] + 834 * v25)) == *(_OWORD *)v40 )
        {
          break;
        }
        v50 = v124;
        v51 = v126;
        v52 = v125;
LABEL_88:
        v28 = *v40 - v160[0];
        if ( *v40 == v160[0] )
          v28 = v40[1] - v160[1];
        v53 = v136;
        if ( !v28 )
          v53 = v25;
        v136 = v53;
        v22 = v117;
        if ( v117 )
        {
          v54 = *v40 - *(_QWORD *)&v158[0].Data4[4];
          if ( *v40 == *(_QWORD *)&v158[0].Data4[4] )
            v54 = v40[1] - *(_QWORD *)&v158[1].Data2;
          if ( !v54 )
            v52 = v25;
          v125 = v52;
          v28 = *v40 - *(_QWORD *)&v158[1].Data4[4];
          if ( *v40 == *(_QWORD *)&v158[1].Data4[4] )
            v28 = v40[1] - *(_QWORD *)&v158[2].Data2;
          if ( !v28 )
            v51 = v25;
          v126 = v51;
        }
        if ( !*(_DWORD *)((char *)&v170[196] + 834 * v25) || !v50 )
          goto LABEL_112;
        if ( !(_BYTE)v123 || !v118 && (v28 = 8LL, (v141 & 8) == 0) && *(_DWORD *)((char *)&v170[197] + 834 * v25) )
        {
          v12 = v120;
          if ( v50 < (unsigned int)v130 )
          {
            LODWORD(v130) = v50;
            v140 = v25;
          }
          goto LABEL_113;
        }
        if ( v50 < v139 )
        {
          v139 = v50;
          v12 = v25;
          v120 = v25;
        }
        else
        {
LABEL_112:
          v12 = v120;
        }
LABEL_113:
        ++v25;
        v33 = v146;
LABEL_123:
        v32 = v135 + 1;
        v135 = v32;
        v146 = ++v33;
        if ( v32 >= v137 )
        {
          v124 = v25;
          goto LABEL_125;
        }
      }
      v119[0] = 0;
      v144 = 0;
      TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(v45, (const struct _GUID *)&v158[0].Data4[4]);
      v29 = 0;
      if ( TechnologyByID
        && (v47 = (__int64)pvar.bstrblobVal.pData & -(__int64)((_BYTE)v132 != 0),
            v48 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&pData,
                    v143),
            v49 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, unsigned __int16 *, __int64, __int64, unsigned int *, _BYTE *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)TechnologyByID + 40LL))(
                    TechnologyByID,
                    v129,
                    a6,
                    v47,
                    v48,
                    &v144,
                    v119,
                    Buf1),
            v29 = 0,
            v49) )
      {
        v50 = v124;
        if ( !v119[0] || v124 < v144 )
        {
          *(_OWORD *)&v158[1].Data4[4] = *(_OWORD *)&v158[0].Data4[4];
          v51 = v126;
          v52 = v125;
          if ( v125 != -1 )
            v51 = v125;
          v126 = v51;
          *(struct _GUID *)&v158[0].Data4[4] = *(struct _GUID *)((char *)&Src[48] + 834 * v25);
          goto LABEL_88;
        }
      }
      else
      {
LABEL_86:
        v50 = v124;
      }
      v52 = v125;
      v51 = v126;
      goto LABEL_88;
    }
LABEL_125:
    if ( !*(_DWORD *)(a1 + 6872) )
      *(_DWORD *)(a1 + 6872) = 3;
    if ( v22 )
    {
      v11 = v125;
    }
    else
    {
      v118 = v12 != -1;
      if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz(&v166, v138);
        if ( v12 == -1 )
          v59 = v58;
        else
          v59 = (char *)&v170[192] + 834 * v12;
        v167.Ptr = (ULONGLONG)v59;
        *(_QWORD *)&v167.Size = 16LL;
        if ( v12 == -1 )
          v60 = L"<none>";
        else
          v60 = (const WCHAR *)v170 + 417 * v12;
        TlgCreateWsz(&v168, v60);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111AE2, v61, v62, 5u, &pData);
        v29 = 0;
      }
      v11 = v125;
    }
  }
  v63 = v136;
  if ( v136 == -1 )
    v63 = v12;
  LOBYTE(v123) = v136 != -1;
  if ( v63 == -1 )
  {
LABEL_233:
    v87 = v127;
    v88 = v118;
    goto LABEL_234;
  }
  while ( 1 )
  {
    v119[0] = v29;
    v137 = v29;
    v64 = 834LL * v63;
    v130 = v64;
    v65 = CSpatialAudioTechnologies::GetTechnologyByID(
            (CSpatialAudioTechnologies *)v28,
            (const struct _GUID *)((char *)&v170[192] + v64));
    v66 = (__int64)pvar.bstrblobVal.pData & -(__int64)((_BYTE)v132 != 0);
    v67 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            (__int64)&pData,
            v143);
    v68 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, unsigned __int16 *, __int64, __int64, unsigned int *, _BYTE *, __int64 *))(*(_QWORD *)v65 + 40LL))(
            v65,
            v129,
            a6,
            v66,
            v67,
            &v137,
            v119,
            v157);
    if ( !v68
      || (v69 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v65 + 32LL))(v65), v29 = 0, !v69) )
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&v166, v138);
        v83 = L"Encoder Not licensed";
        if ( !v68 )
          v83 = L"Encoder not supported";
        TlgCreateWsz(&v167, v83);
        v168.Ptr = (ULONGLONG)&v170[192] + v64;
        *(_QWORD *)&v168.Size = 16LL;
        TlgCreateWsz(&v169, (LPCWSTR)((char *)v170 + v64));
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111B8D, v84, v85, 6u, &pData);
      }
      goto LABEL_205;
    }
    if ( a6 )
      break;
LABEL_197:
    v80 = 1;
    if ( (_BYTE)v145 || *(_BYTE *)(a1 + 74) )
      goto LABEL_222;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v166, v138);
      v167.Ptr = (ULONGLONG)&v170[192] + v64;
      *(_QWORD *)&v167.Size = 16LL;
      TlgCreateWsz(&v168, (LPCWSTR)((char *)v170 + v64));
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111BF0, v81, v82, 5u, &pData);
LABEL_205:
      v29 = 0;
    }
    v11 = v125;
    if ( v125 == -1 || (v86 = v125, v11 = -1, v125 = -1, v63 == v86) )
    {
      if ( v126 == -1 )
      {
        if ( (_BYTE)v123 )
        {
          LOBYTE(v123) = 0;
          v63 = v140;
          if ( v12 != -1 )
            v63 = v12;
          v118 = v118 && v12 != -1;
        }
        else
        {
          v63 = -1;
        }
      }
      else
      {
        v63 = v126;
        v126 = -1;
      }
    }
    else
    {
      v63 = v86;
    }
    if ( v63 == -1 )
    {
      v25 = v124;
      goto LABEL_233;
    }
  }
  if ( *a6 == 0xFFFE )
  {
    if ( a6[8] != 22
      && (*((_QWORD *)a6 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
       || *((_QWORD *)a6 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
      && (*((_QWORD *)a6 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
       || *((_QWORD *)a6 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
    {
      goto LABEL_195;
    }
    Buf1[0] = *(EVENT_DATA_DESCRIPTOR *)a6;
    Buf1[1] = *((EVENT_DATA_DESCRIPTOR *)a6 + 1);
    Buf1[2].Ptr = *((_QWORD *)a6 + 4);
    LOWORD(Buf1[1].Ptr) = 22;
    Ptr_high = HIDWORD(Buf1[1].Ptr);
    Ptr = Buf1[0].Ptr;
  }
  else
  {
    if ( a6[8] )
    {
      v28 = 65533LL;
      if ( ((*a6 - 1) & 0xFFFD) != 0 )
        goto LABEL_195;
    }
    v28 = a6[1];
    if ( (unsigned __int16)(v28 - 1) > 1u )
      goto LABEL_195;
    v72 = a6[7];
    if ( ((v72 - 8) & 0xFFE7) != 0 )
      goto LABEL_195;
    Buf1[0] = *(EVENT_DATA_DESCRIPTOR *)a6;
    Ptr = -2;
    LOWORD(Buf1[0].Ptr) = -2;
    LOWORD(Buf1[1].Ptr) = 22;
    WORD1(Buf1[1].Ptr) = v72;
    *(GUID *)&Buf1[1].Size = GUID_00000000_0000_0010_8000_00aa00389b71;
    Buf1[1].Size = *a6;
    LOWORD(v28) = 1 - v28;
    Ptr_high = 4 - ((_WORD)v28 != 0);
  }
  if ( LOWORD(v157[0]) == 0xFFFE )
  {
    if ( LOWORD(v157[2]) == 22
      || *(_OWORD *)&v157[3] == *(_OWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71
      || v157[3] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
      && v157[4] == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    {
      Buf2 = *(GUID *)v157;
      *(_OWORD *)v155 = *(_OWORD *)&v157[2];
      *(_QWORD *)&v155[16] = v157[4];
      *(_WORD *)v155 = 22;
      v73 = HIDWORD(v157[2]);
      v74 = v157[0];
      LOWORD(v29) = 0;
      goto LABEL_168;
    }
    v12 = v120;
LABEL_195:
    v29 = 0;
    goto LABEL_196;
  }
  v29 = 0;
  if ( LOWORD(v157[2]) && (v28 = 65533LL, ((LOWORD(v157[0]) - 1) & 0xFFFD) != 0)
    || (v28 = *(__int64 *)((char *)v157 + 2), (unsigned __int16)(WORD1(v157[0]) - 1) > 1u)
    || ((HIWORD(v157[1]) - 8) & 0xFFE7) != 0 )
  {
LABEL_194:
    v12 = v120;
LABEL_196:
    v64 = v130;
    goto LABEL_197;
  }
  Buf2 = *(GUID *)v157;
  v74 = -2;
  LOWORD(Buf2.Data1) = -2;
  *(_WORD *)v155 = 22;
  *(_WORD *)&v155[2] = HIWORD(v157[1]);
  *(GUID *)&v155[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
  *(_DWORD *)&v155[8] = LOWORD(v157[0]);
  v73 = 4 - (WORD1(v157[0]) != 1);
LABEL_168:
  if ( WORD1(Buf1[0].Ptr) )
  {
    LOWORD(v29) = HIWORD(Buf2.Data1);
  }
  else
  {
    HIWORD(Buf2.Data1) = 0;
    *(_DWORD *)Buf2.Data4 = 0;
    *(_WORD *)&Buf2.Data4[4] = 0;
  }
  if ( HIDWORD(Buf1[0].Ptr) )
  {
    v75 = *(_DWORD *)&Buf2.Data2;
  }
  else
  {
    v75 = 0;
    *(_QWORD *)&Buf2.Data2 = 0LL;
  }
  if ( Buf1[0].Reserved2 )
  {
    v76 = *(_WORD *)&Buf2.Data4[6];
  }
  else
  {
    v76 = 0;
    *(_DWORD *)&Buf2.Data4[4] = 0;
  }
  *(_DWORD *)&v155[4] = Ptr_high != 0 ? v73 : 0;
  if ( !Ptr )
  {
    v74 = 0;
    LOWORD(Buf2.Data1) = 0;
  }
  if ( (_WORD)v29 )
  {
    v29 = 0;
  }
  else
  {
    v29 = 0;
    WORD1(Buf1[0].Ptr) = 0;
    Buf1[0].Size = 0;
    LOWORD(Buf1[0].Reserved) = 0;
  }
  if ( !v75 )
    *(ULONGLONG *)((char *)&Buf1[0].Ptr + 4) = 0LL;
  if ( !v76 )
    Buf1[0].Reserved = 0;
  HIDWORD(Buf1[1].Ptr) = (Ptr_high != 0 ? v73 : 0) != 0 ? Ptr_high : 0;
  if ( !v74 )
    LOWORD(Buf1[0].Ptr) = 0;
  v77 = *(_QWORD *)&Buf1[1].Size - *(_QWORD *)&v155[8];
  if ( *(_QWORD *)&Buf1[1].Size == *(_QWORD *)&v155[8] )
    v77 = Buf1[2].Ptr - *(_QWORD *)&v155[16];
  v78 = v77 == 0;
  v28 = 1LL;
  if ( !v78 )
    goto LABEL_194;
  v79 = memcmp_0(Buf1, &Buf2, 0x28uLL);
  v29 = 0;
  if ( v79 )
    goto LABEL_194;
  v80 = 0;
LABEL_222:
  v122 = 1;
  v87 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v65 + 48LL))(v65);
  v11 = v63;
  v88 = v118;
  v29 = 0;
  if ( !v118 || *(_BYTE *)(a1 + 74) )
  {
    v25 = v124;
LABEL_234:
    v91 = v133;
    v90 = v117;
    goto LABEL_235;
  }
  if ( v80 )
  {
    v89 = v149;
    *v149 = *(_OWORD *)v157;
    v89[1] = *(_OWORD *)&v157[2];
    *((_QWORD *)v89 + 4) = v157[4];
  }
  v90 = v117;
  v91 = v117 && *(_DWORD *)v158[0].Data4;
  v25 = v124;
LABEL_235:
  v92 = v122 != 0;
  v122 = -v122;
  v93 = v92 && v88;
  if ( v63 == -1 )
  {
    v95 = &GUID_00000000_0000_0000_0000_000000000000;
    v94 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v94 = (GUID *)((char *)&v170[192] + 834 * v63);
    v95 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  v96 = *v94;
  v156 = *v94;
  if ( v11 == -1 )
  {
    v97 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v97 = (GUID *)((char *)&v170[192] + 834 * v11);
    v95 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)((char *)&v159[1] + 4) = *v97;
  if ( v126 == -1 )
  {
    v98 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v98 = (GUID *)((char *)&v170[192] + 834 * v126);
    v95 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)((char *)&v159[3] + 4) = *v98;
  if ( v120 != -1 )
    v95 = (GUID *)((char *)&v170[192] + 834 * v120);
  *(GUID *)((char *)&v159[5] + 4) = *v95;
  if ( *(_BYTE *)(a1 + 74) != (_BYTE)v29 || (v99 = 1, !v93) )
    v99 = v29;
  LODWORD(v159[0]) = v99;
  HIDWORD(v159[7]) = v93;
  HIDWORD(v159[0]) = v87;
  if ( v90 )
  {
    v100 = *(_DWORD *)v158[0].Data4;
    goto LABEL_251;
  }
  if ( v63 == -1 )
  {
    v100 = v159[1];
  }
  else
  {
    v100 = *(_DWORD *)((char *)&v170[198] + 834 * v63);
LABEL_251:
    LODWORD(v159[1]) = v100;
  }
  v101 = v141;
  LODWORD(v159[8]) = v141;
  if ( (v141 & 2) != 0 )
  {
    if ( v129 == 1 )
    {
      Buf2 = (GUID)0LL;
      *(_QWORD *)v155 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, GUID *))(*(_QWORD *)v142 + 40LL))(
             v142,
             &PKEY_Endpoint_SpatialNotAllowed,
             &Buf2) < 0
        || !LOWORD(Buf2.Data1)
        || LOWORD(Buf2.Data1) == 11 && !*(_WORD *)Buf2.Data4 )
      {
        LODWORD(v159[8]) &= ~2u;
      }
      PropVariantClear((PROPVARIANT *)&Buf2);
      v96 = v156;
      v101 = v159[8];
      v100 = v159[1];
      v99 = v159[0];
      v29 = 0;
    }
    else
    {
      v101 = v141 & 0xFD;
      LODWORD(v159[8]) = v141 & 0xFFFFFFFD;
    }
  }
  if ( (v101 & 3) != 0 )
  {
    v99 = v29;
    LODWORD(v159[0]) = v29;
    HIDWORD(v159[7]) = v29;
    v100 = v29;
  }
  if ( (v159[8] & 4) != 0 )
    v100 = v29;
  LODWORD(v159[1]) = v100;
  if ( !v99 || (HIDWORD(v159[8]) = 1, !v100) )
    HIDWORD(v159[8]) = v29;
  if ( !v99 && v128 == v29 )
  {
    v96 = GUID_00000000_0000_0000_0000_000000000000;
    v156 = GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)(a1 + 6852) = v96;
  v102 = v29;
  if ( v128 != v29 && v134 == v29 )
  {
    v102 = v29;
    if ( *(_DWORD *)&v158[4].Data2 != v29 )
      v102 = 1;
  }
  v103 = *(_QWORD *)&v161.Data1;
  if ( *(_DWORD *)(a1 + 172) != v25
    || memcmp_0((const void *)(a1 + 100), v159, 0x48uLL)
    || memcmp_0((const void *)(a1 + 176), v170, 834LL * v25) )
  {
    goto LABEL_285;
  }
  v106 = v103 - *(_QWORD *)&v96.Data1;
  if ( v103 == *(_QWORD *)&v96.Data1 )
    v106 = *(_QWORD *)v161.Data4 - _mm_srli_si128((__m128i)v96, 8).m128i_u64[0];
  if ( !v106 && !v102 )
  {
    v107 = v138;
  }
  else
  {
LABEL_285:
    *(GUID *)v160 = v96;
    v107 = v138;
    LogCurrentSettings(
      "UpdateSettings",
      (__int64)L"Spatial settings updated",
      v138,
      v128,
      (__int64)v160,
      (int *)v159,
      v25,
      (__int64)v157,
      (int *)(a1 + 100));
    v108 = v103 - *(_QWORD *)&v156.Data1;
    if ( !v108 )
      v108 = *(_QWORD *)v161.Data4 - *(_QWORD *)v156.Data4;
    if ( v108 )
    {
      v109 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v156);
      AsUInt32With = v109;
    }
    else
    {
      v109 = AsUInt32With;
    }
    if ( v109 < 0 )
      goto LABEL_297;
    if ( v128 && !v134 )
    {
      v134 = 1;
      v109 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64), 1LL);
      AsUInt32With = v109;
    }
    if ( v109 < 0
      || (AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                           *(_QWORD *)(a1 + 40),
                           v159,
                           v170,
                           834 * v25),
          AsUInt32With < 0) )
    {
LABEL_297:
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateWsz(&Buf1[2], v107);
        p_AsUInt32With = &AsUInt32With;
        v164 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111A5F, v110, v111, 4u, Buf1);
      }
    }
    else
    {
      *(_OWORD *)(a1 + 100) = *(_OWORD *)v159;
      *(_OWORD *)(a1 + 116) = *(_OWORD *)&v159[2];
      *(_OWORD *)(a1 + 132) = *(_OWORD *)&v159[4];
      *(_OWORD *)(a1 + 148) = *(_OWORD *)&v159[6];
      *(_QWORD *)(a1 + 164) = v159[8];
      *(_DWORD *)(a1 + 172) = v25;
      memcpy_0((void *)(a1 + 176), v170, 834LL * v25);
      *(_BYTE *)(a1 + 6848) = 1;
    }
  }
  if ( v91 != *(_DWORD *)(a1 + 76) )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v166, v107);
      v127 = *(_WORD *)(a1 + 76);
      v167.Ptr = (ULONGLONG)&v127;
      *(_QWORD *)&v167.Size = 2LL;
      v123 = v91;
      v168.Ptr = (ULONGLONG)&v123;
      *(_QWORD *)&v168.Size = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111A98, v112, v113, 5u, &pData);
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_DDS(*((_QWORD *)WPP_GLOBAL_Control + 2), v104, v105, *(_DWORD *)(a1 + 76), v91, (__int64)(v107 + 17));
    }
    *(_DWORD *)(a1 + 76) = v91;
  }
  v8 = v142;
LABEL_309:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( AsUInt32With < 0 )
    CSpatialProperties::ClearSpatialAudioSettings((LPCRITICAL_SECTION)a1, v150);
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v115 = v143;
  v116 = *(_QWORD *)(v143 + 56);
  if ( v116 )
  {
    LOBYTE(v114) = v116 != v143;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v116 + 32LL))(v116, v114);
    *(_QWORD *)(v115 + 56) = 0LL;
  }
}
