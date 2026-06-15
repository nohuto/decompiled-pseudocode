/*
 * XREFs of ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180002F50 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x180079E28 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18003C938 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003D098 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     LogCurrentSettings @ 0x18003D104 (LogCurrentSettings.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800C753C (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMAT.c)
 *     WPP_SF_DSD @ 0x1800C7884 (WPP_SF_DSD.c)
 *     WPP_SF_DsSD @ 0x1800C7920 (WPP_SF_DsSD.c)
 *     WPP_SF_SDDDDD_guid_ @ 0x1800C79FC (WPP_SF_SDDDDD_guid_.c)
 *     WPP_SF_SDDDDD_guid_DDDDD_guid_ @ 0x1800C7AE8 (WPP_SF_SDDDDD_guid_DDDDD_guid_.c)
 */

// Hidden C++ exception states: #wind=5
HRESULT __fastcall CSpatialProperties::ProcessPropertyChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IPolicyConfig *a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  char v11; // r12
  char v12; // r15
  int v13; // eax
  const WCHAR *v14; // rcx
  BYTE *v15; // rbx
  unsigned __int16 v16; // r14
  ULONG v17; // r11d
  __int16 v18; // cx
  unsigned __int16 v19; // si
  int v20; // edi
  GUID v21; // xmm0
  int v22; // r11d
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ebx
  int v29; // edx
  struct IMMDevice *v30; // rdx
  CSpatialProperties *v31; // rcx
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  __int64 v34; // rax
  int v35; // edx
  int v36; // ebx
  unsigned __int16 v37; // r11
  int v38; // r12d
  __int16 v39; // cx
  GUID v40; // xmm0
  unsigned int v41; // r14d
  unsigned __int16 v42; // r11
  unsigned __int16 v43; // r10
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r15d
  BOOL v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  signed __int32 v54; // r9d
  __int64 v55; // rcx
  int v56; // eax
  struct _RTL_CRITICAL_SECTION *v57; // rcx
  unsigned int v58; // ecx
  ULONG v59; // eax
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  int v62; // eax
  LPCGUID v63; // r8
  LPCGUID v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdi
  struct IMMDevice *v67; // rdx
  CSpatialProperties *v68; // rcx
  unsigned __int8 v69; // r10
  LPCGUID v70; // r8
  LPCGUID v71; // r9
  char v72; // r14
  const char *v73; // r8
  int v74; // r8d
  LPCGUID v75; // r8
  LPCGUID v76; // r9
  _QWORD *v77; // rax
  __int64 v78; // rdx
  int v79; // r9d
  LPCGUID v80; // r8
  LPCGUID v81; // r9
  int v82; // eax
  __int64 *v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rax
  ULONG v86; // ecx
  __int64 v87; // rdx
  HRESULT result; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  char v91; // [rsp+88h] [rbp-80h]
  char v92; // [rsp+88h] [rbp-80h]
  char v93; // [rsp+89h] [rbp-7Fh]
  unsigned __int16 v94; // [rsp+8Ah] [rbp-7Eh] BYREF
  __int64 v95; // [rsp+90h] [rbp-78h]
  LPCWSTR pwsz; // [rsp+98h] [rbp-70h] BYREF
  ULONG v97; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 v98; // [rsp+A4h] [rbp-64h]
  int v99; // [rsp+A8h] [rbp-60h] BYREF
  int v100; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v101; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-50h] BYREF
  int v103; // [rsp+C0h] [rbp-48h] BYREF
  ULONG v104; // [rsp+C4h] [rbp-44h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-40h] BYREF
  int v106; // [rsp+D0h] [rbp-38h] BYREF
  int v107[2]; // [rsp+D8h] [rbp-30h] BYREF
  LPCRITICAL_SECTION v108; // [rsp+E0h] [rbp-28h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+E8h] [rbp-20h] BYREF
  int v110; // [rsp+100h] [rbp-8h] BYREF
  int v111; // [rsp+104h] [rbp-4h] BYREF
  int nChannels; // [rsp+108h] [rbp+0h] BYREF
  DWORD nSamplesPerSec; // [rsp+10Ch] [rbp+4h] BYREF
  int wBitsPerSample; // [rsp+110h] [rbp+8h] BYREF
  int wValidBitsPerSample; // [rsp+114h] [rbp+Ch] BYREF
  DWORD dwChannelMask; // [rsp+118h] [rbp+10h] BYREF
  int v117; // [rsp+11Ch] [rbp+14h] BYREF
  int v118; // [rsp+120h] [rbp+18h] BYREF
  int v119; // [rsp+124h] [rbp+1Ch] BYREF
  int v120; // [rsp+128h] [rbp+20h] BYREF
  int v121; // [rsp+12Ch] [rbp+24h] BYREF
  int v122; // [rsp+130h] [rbp+28h] BYREF
  int v123; // [rsp+134h] [rbp+2Ch] BYREF
  __int64 v124; // [rsp+138h] [rbp+30h] BYREF
  int v125; // [rsp+140h] [rbp+38h] BYREF
  int v126; // [rsp+144h] [rbp+3Ch] BYREF
  LPCRITICAL_SECTION v127; // [rsp+148h] [rbp+40h] BYREF
  LPCRITICAL_SECTION v128; // [rsp+150h] [rbp+48h] BYREF
  LPCRITICAL_SECTION v129; // [rsp+158h] [rbp+50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+160h] [rbp+58h] BYREF
  PROPERTYKEY v131; // [rsp+168h] [rbp+60h] BYREF
  __int128 v132; // [rsp+188h] [rbp+80h] BYREF
  int v133; // [rsp+198h] [rbp+90h]
  __int128 v134; // [rsp+1A8h] [rbp+A0h] BYREF
  int v135; // [rsp+1B8h] [rbp+B0h]
  __int64 v136; // [rsp+1C8h] [rbp+C0h]
  __int64 v137; // [rsp+1D0h] [rbp+C8h]
  __int16 v138; // [rsp+1D8h] [rbp+D0h] BYREF
  int v139; // [rsp+1E0h] [rbp+D8h]
  char v140[64]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v141[64]; // [rsp+230h] [rbp+128h] BYREF
  char v142[64]; // [rsp+270h] [rbp+168h] BYREF
  char v143[64]; // [rsp+2B0h] [rbp+1A8h] BYREF
  struct WAVEFORMATEXTENSIBLE v144; // [rsp+2F0h] [rbp+1E8h] BYREF
  GUID v145; // [rsp+318h] [rbp+210h] BYREF
  GUID v146; // [rsp+328h] [rbp+220h] BYREF
  GUID v147; // [rsp+338h] [rbp+230h]
  GUID v148; // [rsp+348h] [rbp+240h]
  struct WAVEFORMATEXTENSIBLE v149; // [rsp+358h] [rbp+250h] BYREF
  char v150[16]; // [rsp+380h] [rbp+278h] BYREF
  char v151[16]; // [rsp+390h] [rbp+288h] BYREF
  char v152[24]; // [rsp+3A0h] [rbp+298h] BYREF
  EVENT_DATA_DESCRIPTOR v153; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v154; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *p_nChannels; // [rsp+3E8h] [rbp+2E0h]
  __int64 v156; // [rsp+3F0h] [rbp+2E8h]
  DWORD *p_nSamplesPerSec; // [rsp+3F8h] [rbp+2F0h]
  __int64 v158; // [rsp+400h] [rbp+2F8h]
  int *p_wBitsPerSample; // [rsp+408h] [rbp+300h]
  __int64 v160; // [rsp+410h] [rbp+308h]
  int *p_wValidBitsPerSample; // [rsp+418h] [rbp+310h]
  __int64 v162; // [rsp+420h] [rbp+318h]
  DWORD *p_dwChannelMask; // [rsp+428h] [rbp+320h]
  __int64 v164; // [rsp+430h] [rbp+328h]
  GUID *p_SubFormat; // [rsp+438h] [rbp+330h]
  __int64 v166; // [rsp+440h] [rbp+338h]
  int *v167; // [rsp+448h] [rbp+340h]
  __int64 v168; // [rsp+450h] [rbp+348h]
  int *v169; // [rsp+458h] [rbp+350h]
  __int64 v170; // [rsp+460h] [rbp+358h]
  int *v171; // [rsp+468h] [rbp+360h]
  __int64 v172; // [rsp+470h] [rbp+368h]
  __int64 *v173; // [rsp+478h] [rbp+370h]
  __int64 v174; // [rsp+480h] [rbp+378h]
  unsigned int *v175; // [rsp+488h] [rbp+380h]
  __int64 v176; // [rsp+490h] [rbp+388h]
  GUID *v177; // [rsp+498h] [rbp+390h]
  __int64 v178; // [rsp+4A0h] [rbp+398h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4B8h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4D8h] [rbp+3D0h] BYREF
  int *v181; // [rsp+4E8h] [rbp+3E0h]
  __int64 v182; // [rsp+4F0h] [rbp+3E8h]
  int *v183; // [rsp+4F8h] [rbp+3F0h]
  __int64 v184; // [rsp+500h] [rbp+3F8h]
  int *v185; // [rsp+508h] [rbp+400h]
  __int64 v186; // [rsp+510h] [rbp+408h]
  int *v187; // [rsp+518h] [rbp+410h]
  __int64 v188; // [rsp+520h] [rbp+418h]
  int *v189; // [rsp+528h] [rbp+420h]
  __int64 v190; // [rsp+530h] [rbp+428h]
  GUID *v191; // [rsp+538h] [rbp+430h]
  __int64 v192; // [rsp+540h] [rbp+438h]
  EVENT_DATA_DESCRIPTOR v193; // [rsp+558h] [rbp+450h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+578h] [rbp+470h] BYREF
  int *v195; // [rsp+588h] [rbp+480h]
  __int64 v196; // [rsp+590h] [rbp+488h]
  int *v197; // [rsp+598h] [rbp+490h]
  __int64 v198; // [rsp+5A0h] [rbp+498h]
  int *v199; // [rsp+5A8h] [rbp+4A0h]
  __int64 v200; // [rsp+5B0h] [rbp+4A8h]
  EVENT_DATA_DESCRIPTOR v201; // [rsp+5C8h] [rbp+4C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v202; // [rsp+5E8h] [rbp+4E0h] BYREF
  int *v203; // [rsp+5F8h] [rbp+4F0h]
  __int64 v204; // [rsp+600h] [rbp+4F8h]
  int *v205; // [rsp+608h] [rbp+500h]
  __int64 v206; // [rsp+610h] [rbp+508h]
  EVENT_DATA_DESCRIPTOR v207; // [rsp+628h] [rbp+520h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v208; // [rsp+648h] [rbp+540h] BYREF
  int *v209; // [rsp+658h] [rbp+550h]
  __int64 v210; // [rsp+660h] [rbp+558h]
  EVENT_DATA_DESCRIPTOR v211; // [rsp+678h] [rbp+570h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v212; // [rsp+698h] [rbp+590h] BYREF
  EVENT_DATA_DESCRIPTOR v213; // [rsp+6A8h] [rbp+5A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+6C8h] [rbp+5C0h] BYREF

  v136 = -2LL;
  *(_QWORD *)v107 = a3;
  v95 = a7;
  v137 = a7;
  pv = a8;
  v93 = 0;
  if ( *(_OWORD *)a2 != *(_OWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid || (v91 = 1, *(_DWORD *)(a2 + 16) != 2) )
    v91 = 0;
  if ( *(_OWORD *)a2 != PKEY_SpatialAudioEndpoint_RenderingMode || (v11 = 1, *(_DWORD *)(a2 + 16)) )
    v11 = 0;
  if ( *(_OWORD *)a2 != PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode || (v12 = 1, *(_DWORD *)(a2 + 16) != 1) )
    v12 = 0;
  v124 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 8LL))(a4, 1LL);
  memset(&pvar, 0, sizeof(pvar));
  v103 = 0;
  memset(&v149, 0, sizeof(v149));
  pwsz = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, LPCWSTR *))(**(_QWORD **)v107 + 40LL))(*(_QWORD *)v107, &pwsz);
  v14 = pwsz;
  if ( v13 < 0 )
    v14 = 0LL;
  pwsz = v14;
  *(_DWORD *)pv = 0;
  if ( !a4 || !a5 )
    goto LABEL_170;
  if ( !v91 && !v11 && !v12 )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4
      && !*(_DWORD *)(a2 + 16)
      && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 40LL))(
           a4,
           &PKEY_AudioEngine_DeviceFormat,
           &pvar) >= 0
      && IsValidWfxBlob(&pvar) )
    {
      v15 = pvar.bstrblobVal.pData;
      if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        v16 = *((_WORD *)v15 + 1);
        v17 = *((_DWORD *)v15 + 1);
        v104 = v17;
        v18 = *((_WORD *)v15 + 7);
        v94 = v18;
        if ( *(_WORD *)v15 == 0xFFFE )
        {
          v19 = *((_WORD *)v15 + 9);
          v20 = *((_DWORD *)v15 + 5);
          v21 = *(GUID *)(v15 + 24);
        }
        else
        {
          v19 = 0;
          v21 = GUID_00000000_0000_0000_0000_000000000000;
          v20 = 0;
        }
        v145 = v21;
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz(&pDesc, pwsz);
          v125 = v16;
          v181 = &v125;
          v182 = 4LL;
          v126 = v22;
          v183 = &v126;
          v184 = 4LL;
          v110 = v94;
          v185 = &v110;
          v186 = 4LL;
          v111 = v19;
          v187 = &v111;
          v188 = 4LL;
          v106 = v20;
          v189 = &v106;
          v190 = 4LL;
          v191 = &v145;
          v192 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB31C, v23, v24, 9u, &pData);
          LOBYTE(v17) = v104;
          LOBYTE(v18) = v94;
        }
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SDDDDD_guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            19,
            v16,
            (_DWORD)pwsz + 34,
            v16,
            v17,
            v18,
            v19,
            v20,
            (__int64)&v145);
        }
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_170;
  }
  if ( !*(_QWORD *)(a1 + 40)
    || (*(int (__fastcall **)(struct IPolicyConfig *, int *))(*(_QWORD *)a5 + 192LL))(a5, &v103) < 0 )
  {
LABEL_170:
    v46 = v95;
    goto LABEL_171;
  }
  if ( !v91 )
  {
    if ( !v11 || !*(_QWORD *)(a1 + 64) )
    {
      if ( !v12 )
        goto LABEL_170;
      v97 = 0;
      v134 = PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode;
      v135 = 1;
      if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                  &v124,
                  (__int64)&v134,
                  0,
                  &v97) < 0 )
        goto LABEL_170;
      Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&v129);
      *(_BYTE *)(a1 + 50) = v103 != 0;
      v86 = v97;
      if ( v97 )
        v86 = 1;
      v97 = v86;
      if ( v86 == *(_DWORD *)(a1 + 56) )
      {
        v57 = v129;
LABEL_89:
        if ( v57 )
          LeaveCriticalSection(v57);
        goto LABEL_170;
      }
      v87 = *(_QWORD *)(a1 + 64);
      if ( v87
        && (*(_QWORD *)(v87 + 20) != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
         || *(_QWORD *)(v87 + 28) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
      {
        *(_DWORD *)(v87 + 16) = v86;
        *(_BYTE *)(a1 + 73) = 1;
        v93 = 1;
        *(_DWORD *)pv = 1;
        v86 = v97;
      }
      *(_DWORD *)(a1 + 56) = v86;
      if ( v129 )
        LeaveCriticalSection(v129);
LABEL_168:
      if ( v93 )
      {
        pvar.vt = 65;
        pvar.bstrblobVal.pData = *(BYTE **)(a1 + 64);
        pvar.lVal = 842 * *((_DWORD *)pvar.bstrblobVal.pData + 17) + 80;
        (*(void (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 48LL))(
          a4,
          &PKEY_SpatialAudioEndpoint_Settings,
          &pvar);
        memset(&pvar, 0, sizeof(pvar));
        *(_BYTE *)(a1 + 73) = 0;
        LogCurrentSettings(
          "UpdateSettingsExternalEnum",
          (int)L"Spatial audio settings are updated due to enum change",
          (__int64)pwsz,
          *(_DWORD **)(a1 + 64),
          (__int64)&v149,
          0LL);
        *(_BYTE *)(a1 + 72) = 1;
      }
      goto LABEL_170;
    }
    v105 = 0LL;
    LOBYTE(v98) = 0;
    v99 = 0;
    v104 = 10;
    v131 = PKEY_AudioEndpoint_FormFactor;
    if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                &v124,
                (__int64)&v131,
                0xAu,
                &v104) < 0 )
      goto LABEL_170;
    v132 = PKEY_SpatialAudioEndpoint_RenderingMode;
    v133 = 0;
    if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                &v124,
                (__int64)&v132,
                0,
                (ULONG *)&v99) < 0 )
      goto LABEL_170;
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&v128);
    *(_BYTE *)(a1 + 50) = v103 != 0;
    v55 = *(unsigned int *)(a1 + 52);
    v56 = v99;
    if ( v99 == (_DWORD)v55 )
    {
      v57 = v128;
      goto LABEL_89;
    }
    v100 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v99;
    *(_BYTE *)(a1 + 73) = 1;
    if ( v56 )
    {
      CSpatialAudioTechnologies::RegistryGates(v55, v52, v53, v54);
      v58 = g_ListOfSpatialTech[0];
      v101 = g_ListOfSpatialTech[0];
      v59 = 0;
      v97 = 0;
      if ( g_ListOfSpatialTech[0] )
      {
        v60 = qword_18012C178;
        pv = qword_18012C178;
        while ( 1 )
        {
          v61 = v59 >= v58 ? 0LL : *v60;
          v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 64LL))(v61);
          if ( v62 == v99 )
            break;
          v59 = v97 + 1;
          v97 = v59;
          v60 = (char *)pv + 8;
          pv = (char *)pv + 8;
          if ( v59 >= v101 )
            goto LABEL_110;
          v58 = g_ListOfSpatialTech[0];
        }
        if ( v97 >= g_ListOfSpatialTech[0] )
        {
          v105 = 0LL;
        }
        else
        {
          _mm_lfence();
          v105 = qword_18012C178[v97];
        }
      }
    }
    else
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&v214, pwsz);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB14E, v63, v64, 3u, &v213);
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids, pwsz + 17);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = 0;
      v93 = 1;
    }
LABEL_110:
    if ( v128 )
      LeaveCriticalSection(v128);
    if ( v105 )
    {
      LOBYTE(v94) = 0;
      v120 = 0;
      v65 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
              (__int64)v143,
              v95);
      v66 = v105;
      v92 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int *, unsigned __int16 *, struct WAVEFORMATEXTENSIBLE *))(*(_QWORD *)v105 + 40LL))(
              v105,
              v104,
              a6,
              v65,
              &v120,
              &v94,
              &v149);
      if ( v92 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66) )
      {
        LOBYTE(v98) = CSpatialProperties::SetDesiredFormat(v68, v67, a5, (unsigned __int16 *)pwsz, &v149);
      }
      else
      {
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v194, pwsz);
          v121 = v69;
          v195 = &v121;
          v196 = 4LL;
          v122 = v99;
          v197 = &v122;
          v198 = 4LL;
          v199 = &v100;
          v200 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB18D, v70, v71, 6u, &v193);
        }
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0 )
        {
          v72 = v92;
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            v73 = "licensed";
            if ( !v92 )
              v73 = "supported";
            WPP_SF_DsSD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              (_DWORD)pwsz + 34,
              (_DWORD)v73,
              v99,
              (__int64)v73,
              (__int64)(pwsz + 17),
              v100);
          }
          goto LABEL_126;
        }
      }
      v72 = v92;
    }
    else
    {
      v66 = 0LL;
      v72 = 0;
    }
LABEL_126:
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&v108);
    if ( (_BYTE)v98 )
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&v208, pwsz);
        v123 = v99;
        v209 = &v123;
        v210 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB095, v75, v76, 4u, &v207);
      }
      v77 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v66 + 16LL))(v66, v150);
      v78 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v78 + 20) != *v77 || *(_QWORD *)(v78 + 28) != v77[1] )
      {
        *(_OWORD *)(v78 + 36) = *(_OWORD *)(v78 + 20);
        *(_OWORD *)(*(_QWORD *)(a1 + 64) + 20LL) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v66 + 16LL))(
                                                                v66,
                                                                v151);
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v66 + 48LL))(v66) != 0;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) = *(_BYTE *)(a1 + 50) == 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = 1;
      v93 = 1;
    }
    else
    {
      v79 = v99;
      if ( v99 )
      {
        *(_BYTE *)(a1 + 73) = 0;
        if ( v72 )
        {
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz(&v202, pwsz);
            v107[0] = v99;
            v203 = v107;
            v204 = 4LL;
            v205 = &v100;
            v206 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB0E4, v80, v81, 5u, &v201);
            v79 = v99;
          }
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_DSD(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)pwsz + 34, v74, v79, (__int64)(pwsz + 17), v100);
          }
        }
        v82 = v100;
        *(_DWORD *)(a1 + 52) = v100;
        v138 = 19;
        v139 = v82;
        (*(void (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)a4 + 48LL))(
          a4,
          &PKEY_SpatialAudioEndpoint_RenderingMode,
          &v138);
      }
    }
    if ( v108 )
      LeaveCriticalSection(v108);
    if ( *(_DWORD *)(a1 + 52) && v66 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          24,
          (unsigned int)&WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids,
          (_DWORD)pwsz + 34,
          *(_DWORD *)(a1 + 52));
      }
      v83 = *(__int64 **)(a1 + 40);
      v84 = *v83;
      v85 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v105 + 16LL))(v105, v152);
      (*(void (__fastcall **)(__int64 *, __int64))(v84 + 32))(v83, v85);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25,
          (unsigned int)&WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids,
          (_DWORD)pwsz + 34,
          *(_DWORD *)(a1 + 52));
      }
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40));
    }
    goto LABEL_168;
  }
  memset(&v144, 0, sizeof(v144));
  v148 = GUID_00000000_0000_0000_0000_000000000000;
  v25 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&lpCriticalSection);
  *(_BYTE *)(a1 + 50) = v103 != 0;
  v26 = *(_QWORD *)(a1 + 64);
  if ( v26 )
  {
    v148 = *(GUID *)(v26 + 20);
    v25 = *(_DWORD *)(v26 + 8);
  }
  v101 = *(_DWORD *)(a1 + 56);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v27 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
          (__int64)v140,
          v95);
  v28 = v107[0];
  LOBYTE(v29) = 1;
  CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v29, v107[0], a4, pwsz, a6, v27, (__int64)&v144);
  if ( *(_DWORD *)(a1 + 76) == 1 )
  {
    if ( CSpatialProperties::SetDesiredFormat(
           v31,
           v30,
           a5,
           (unsigned __int16 *)pwsz,
           (const struct WAVEFORMATEXTENSIBLE *)(a1 + 80)) )
    {
      *(_DWORD *)(a1 + 76) = 3;
      (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, __int64, _QWORD))(*(_QWORD *)a5 + 48LL))(
        a5,
        pwsz,
        a6,
        0LL);
    }
    else
    {
      if ( (unsigned int)hProvider > 2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz(&v212, pwsz);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB20A, v32, v33, 3u, &v211);
      }
      *(_DWORD *)(a1 + 76) = 2;
      v34 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
              (__int64)v141,
              v95);
      LOBYTE(v35) = 1;
      CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v35, v28, a4, pwsz, a6, v34, (__int64)&v144);
    }
  }
  v36 = 0;
  if ( !v144.Format.wFormatTag )
  {
    v147 = GUID_00000000_0000_0000_0000_000000000000;
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1, (__int64)&v127);
    v48 = *(_QWORD *)(a1 + 64);
    if ( v48 )
    {
      v147 = *(GUID *)(v48 + 20);
      v36 = *(_DWORD *)(v48 + 8);
    }
    v49 = *(_DWORD *)(a1 + 56);
    if ( v127 )
      LeaveCriticalSection(v127);
    v50 = v36 != v25 || v49 != v101 || v36 && *(_OWORD *)&v147 != *(_OWORD *)&v148;
    *(_DWORD *)pv = v50;
    if ( pwsz )
    {
      v51 = *(_QWORD *)(a1 + 64);
      if ( v51 )
      {
        if ( !*(_DWORD *)(v51 + 8)
          && a6
          && *(_WORD *)a6 == 0xFFFE
          && (*(_QWORD *)(a6 + 24) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
           || *(_QWORD *)(a6 + 32) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, __int64, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                 a5,
                 pwsz,
                 1LL,
                 &pv) >= 0 )
            (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, LPVOID, _QWORD))(*(_QWORD *)a5 + 48LL))(
              a5,
              pwsz,
              pv,
              0LL);
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
    goto LABEL_170;
  }
  if ( CSpatialProperties::SetDesiredFormat(v31, v30, a5, (unsigned __int16 *)pwsz, &v144) || !a6 )
    goto LABEL_170;
  v37 = *(_WORD *)(a6 + 2);
  v98 = v37;
  v38 = *(_DWORD *)(a6 + 4);
  v106 = v38;
  v39 = *(_WORD *)(a6 + 14);
  v94 = v39;
  if ( *(_WORD *)a6 == 0xFFFE )
  {
    v97 = *(unsigned __int16 *)(a6 + 18);
    v40 = *(GUID *)(a6 + 24);
    v41 = *(_DWORD *)(a6 + 20);
  }
  else
  {
    v97 = 0;
    v40 = GUID_00000000_0000_0000_0000_000000000000;
    v41 = 0;
  }
  v146 = v40;
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateWsz(&v154, pwsz);
    nChannels = v144.Format.nChannels;
    p_nChannels = &nChannels;
    v156 = 4LL;
    nSamplesPerSec = v144.Format.nSamplesPerSec;
    p_nSamplesPerSec = &nSamplesPerSec;
    v158 = 4LL;
    wBitsPerSample = v144.Format.wBitsPerSample;
    p_wBitsPerSample = &wBitsPerSample;
    v160 = 4LL;
    wValidBitsPerSample = v144.Samples.wValidBitsPerSample;
    p_wValidBitsPerSample = &wValidBitsPerSample;
    v162 = 4LL;
    dwChannelMask = v144.dwChannelMask;
    p_dwChannelMask = &dwChannelMask;
    v164 = 4LL;
    p_SubFormat = &v144.SubFormat;
    v166 = 16LL;
    v117 = v42;
    v167 = &v117;
    v168 = 4LL;
    v118 = v38;
    v169 = &v118;
    v170 = 4LL;
    v119 = v94;
    v171 = &v119;
    v172 = 4LL;
    LODWORD(v105) = v43;
    v173 = &v105;
    v174 = 4LL;
    v101 = v41;
    v175 = &v101;
    v176 = 4LL;
    v177 = &v146;
    v178 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB248, v44, v45, 0xFu, &v153);
    v37 = v98;
    LOBYTE(v39) = v94;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_SDDDDD_guid_DDDDD_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v37,
      v144.Samples.wValidBitsPerSample,
      (_DWORD)pwsz + 34,
      v144.Format.nChannels,
      v144.Format.nSamplesPerSec,
      v144.Format.wBitsPerSample,
      v144.Samples.wValidBitsPerSample,
      v144.dwChannelMask,
      (__int64)&v144.SubFormat,
      v37,
      v106,
      v39,
      v97,
      v41,
      (__int64)&v146);
  }
  v46 = v95;
  v47 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
          (__int64)v142,
          v95);
  CSpatialProperties::SetSpatialAudioSettingsInternal(a1, 0, v107[0], a4, pwsz, a6, v47, (__int64)&v144);
LABEL_171:
  CoTaskMemFree((LPVOID)pwsz);
  result = PropVariantClear((PROPVARIANT *)&pvar);
  if ( a4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  v90 = *(_QWORD *)(v46 + 56);
  if ( v90 )
  {
    LOBYTE(v89) = v90 != v46;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v90 + 32LL))(v90, v89);
    *(_QWORD *)(v46 + 56) = 0LL;
  }
  return result;
}
