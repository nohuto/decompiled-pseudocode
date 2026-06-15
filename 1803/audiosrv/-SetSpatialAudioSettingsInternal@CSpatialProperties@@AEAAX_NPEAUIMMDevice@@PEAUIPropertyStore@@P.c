/*
 * XREFs of ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180054F58 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetTechnologyID@CSpatialAudioTech@@UEBA?AU_GUID@@XZ @ 0x1800183A0 (-GetTechnologyID@CSpatialAudioTech@@UEBA-AU_GUID@@XZ.c)
 *     ?GetDeepLink@CSpatialAudioTech@@UEBAPEBGXZ @ 0x1800183B0 (-GetDeepLink@CSpatialAudioTech@@UEBAPEBGXZ.c)
 *     ?GetFriendlyName@CSpatialAudioTech@@UEBAPEBGXZ @ 0x1800183C0 (-GetFriendlyName@CSpatialAudioTech@@UEBAPEBGXZ.c)
 *     ?GetLegacyMode@CSpatialAudioDolbyHeadphones@@UEBAIXZ @ 0x180018430 (-GetLegacyMode@CSpatialAudioDolbyHeadphones@@UEBAIXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18004C580 (-GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?GetSpatialAudioEncoderDescriptorCount@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x18004C680 (-GetSpatialAudioEncoderDescriptorCount@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18004CBD0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     ?GetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateReader@@UEAAJPEAU_GUID@@@Z @ 0x18004D570 (-GetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateReader@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSpatialVssSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialVssSelectionMode@@@Z @ 0x18004D590 (-GetSpatialVssSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialVssSelectionMode@@@Z.c)
 *     ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x18004D5B0 (-GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelecti.c)
 *     ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ @ 0x18004E740 (-GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ.c)
 *     ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ @ 0x18004EA10 (-IsTechnologyLicenseAcquired@CSpatialAudioDolbyHeadphones@@UEBA_NXZ.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18004EF70 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004FD08 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x180054DDC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move @ 0x180055190 (std--_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATE_ea_180055190.c)
 *     BlockSpatialAudioRegistryGates @ 0x18005CD14 (BlockSpatialAudioRegistryGates.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18005F034 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18005FB98 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     DoesPlatformSupportSpatialAudio @ 0x18005FC08 (DoesPlatformSupportSpatialAudio.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005FC78 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800FDB98 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x1800FEF9C (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSpatialProperties::SetSpatialAudioSettingsInternal(
        __int64 a1,
        unsigned __int8 a2,
        struct IMMDevice *a3,
        __int64 a4,
        const WCHAR *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  int v11; // r13d
  int v12; // r12d
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  SpatialAudioDevicePropertyReader *v17; // rcx
  __int64 (__fastcall *v18)(SpatialAudioDevicePropertyReader *); // rax
  int v19; // eax
  SpatialAudioDeviceStateReader *v20; // rcx
  __int64 (__fastcall *v21)(SpatialAudioDeviceStateReader *, enum SpatialRendererSelectionMode *); // rax
  int v22; // eax
  SpatialAudioDeviceStateReader *v23; // rcx
  __int64 (__fastcall *v24)(SpatialAudioDeviceStateReader *, enum SpatialVssSelectionMode *); // rax
  int v25; // eax
  struct _GUID *v26; // rcx
  __int64 (__fastcall *v27)(struct _GUID *, struct _GUID *); // rax
  int v28; // eax
  int v29; // eax
  SpatialAudioDevicePropertyReader *v30; // rcx
  __int64 (__fastcall *v31)(SpatialAudioDevicePropertyReader *, unsigned int *); // rax
  int SpatialAudioEncoderDescriptorCount; // eax
  unsigned int v33; // ebx
  SpatialAudioDevicePropertyReader *v34; // rcx
  __int64 v35; // r9
  __int64 (__fastcall *v36)(SpatialAudioDevicePropertyReader *, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, unsigned int); // rax
  int DeviceSettings; // eax
  int v38; // r9d
  const WCHAR *v39; // rsi
  unsigned int v40; // eax
  unsigned int v41; // ecx
  struct IMMDevice *v42; // rdx
  int v43; // eax
  char v44; // si
  unsigned int v45; // r14d
  char v46; // al
  __int64 Ptr_high; // r8
  __int64 v48; // r9
  int v49; // r11d
  unsigned int v50; // r15d
  unsigned int v51; // r12d
  __int128 v52; // xmm0
  unsigned int i; // ebx
  CSpatialAudioDolbyHeadphones *v54; // rbx
  __int64 v55; // rsi
  __int64 (__fastcall ***v56)(_QWORD, EVENT_DATA_DESCRIPTOR *); // rcx
  __int64 (__fastcall *v57)(_QWORD, EVENT_DATA_DESCRIPTOR *); // rax
  __int64 v58; // rax
  __int64 v59; // r9
  struct tWAVEFORMATEX *v60; // rsi
  char v61; // al
  int v62; // eax
  bool (__fastcall *v63)(CSpatialAudioDolbyHeadphones *); // rax
  bool IsTechnologyLicenseAcquired; // al
  unsigned int v65; // esi
  struct _GUID *(__fastcall *v66)(struct _GUID *, struct _GUID *__return_ptr); // rax
  struct _GUID *TechnologyID; // rax
  int v68; // edx
  char (__fastcall *v69)(CSpatialAudioTech *); // rax
  unsigned __int8 IsLegacyVssRelevant; // al
  int v71; // edx
  unsigned int v72; // esi
  __int64 (__fastcall *v73)(CSpatialAudioDolbyHeadphones *); // rax
  int LegacyMode; // eax
  __int64 v75; // rcx
  const unsigned __int16 *(__fastcall *v76)(CSpatialAudioTech *); // rax
  char *FriendlyName; // rax
  const unsigned __int16 *(__fastcall *v78)(CSpatialAudioTech *); // rax
  unsigned __int16 *DeepLink; // rax
  CSpatialAudioTechnologies *v80; // rcx
  _QWORD *v81; // r10
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  bool v89; // r14
  unsigned int v90; // esi
  bool v91; // r14
  char v92; // r13
  int v93; // ebx
  bool v94; // cf
  bool v95; // r8
  GUID *v96; // rcx
  GUID *v97; // rax
  struct _GUID v98; // xmm1
  GUID *v99; // rax
  GUID *v100; // rax
  int v101; // edx
  int v102; // eax
  unsigned int v103; // r10d
  char v104; // si
  __int64 v105; // rbx
  __int64 v106; // r14
  __int64 v107; // rax
  int v108; // ebx
  __int64 v109; // rdx
  __int64 v110; // rbx
  _QWORD *v111; // rcx
  void (__fastcall *v112)(_QWORD *, char); // rax
  int v113; // eax
  int v114; // ecx
  __int64 v115; // r11
  LPCGUID v116; // r8
  LPCGUID v117; // r9
  __int64 v118; // r10
  __int64 v119; // r10
  LPCGUID v120; // r8
  LPCGUID v121; // r9
  __int64 cData; // r11
  LPCGUID v123; // r8
  LPCGUID v124; // r9
  __int64 v125; // rax
  __int64 v126; // rax
  const struct CSpatialAudioTech *TechnologyByID; // rsi
  __int64 v128; // rbx
  __int64 v129; // rax
  char v130; // al
  int v131; // eax
  __int64 v132; // r10
  LPCWSTR v133; // r11
  LPCGUID v134; // r8
  LPCGUID v135; // r9
  _BYTE *v136; // r10
  __int64 v137; // rcx
  _BYTE *v138; // rdx
  const WCHAR *v139; // rdx
  LPCGUID v140; // r8
  LPCGUID v141; // r9
  __int64 v142; // r12
  _BYTE *v143; // r13
  const struct CSpatialAudioTech *v144; // r15
  __int64 v145; // rbx
  __int64 v146; // rax
  char v147; // bl
  char v148; // al
  __int64 v149; // rax
  __int64 v150; // rax
  int v151; // r14d
  __int16 v152; // bx
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  __int64 v155; // rcx
  __int64 v156; // rax
  int v157; // r10d
  __int16 v158; // r11
  __int16 v159; // r9
  USHORT Reserved2; // dx
  __int64 v161; // rax
  int v162; // eax
  char v163; // bl
  _OWORD *v164; // rax
  LPCGUID v165; // r8
  LPCGUID v166; // r9
  const WCHAR *v167; // rdx
  LPCGUID v168; // r8
  LPCGUID v169; // r9
  unsigned int v170; // eax
  unsigned int v171; // r11d
  const WCHAR *v172; // r14
  int v173; // r10d
  LPCGUID v174; // r8
  LPCGUID v175; // r9
  unsigned int v176; // eax
  unsigned int v177; // ecx
  __int64 v178; // rcx
  LPCGUID v179; // r8
  LPCGUID v180; // r9
  UINT32 v181; // r10d
  __int64 v182; // rbx
  int v183; // eax
  LPCGUID v184; // r8
  LPCGUID v185; // r9
  LPCGUID v186; // r8
  LPCGUID v187; // r9
  __int64 v188; // rax
  LPCGUID v189; // r8
  LPCGUID v190; // r9
  LPCGUID v191; // r8
  LPCGUID v192; // r9
  char v193; // [rsp+50h] [rbp-B0h]
  char v194; // [rsp+51h] [rbp-AFh] BYREF
  char v195; // [rsp+52h] [rbp-AEh] BYREF
  bool v196; // [rsp+53h] [rbp-ADh]
  _BYTE v197[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int pActivityId; // [rsp+58h] [rbp-A8h] BYREF
  _WORD pActivityId_4[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  int AsUInt32With; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v201; // [rsp+64h] [rbp-9Ch] BYREF
  int v202; // [rsp+68h] [rbp-98h]
  unsigned int v203; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v204; // [rsp+70h] [rbp-90h]
  unsigned int v205; // [rsp+74h] [rbp-8Ch]
  unsigned int v206; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v207; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v208; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v209; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v210; // [rsp+88h] [rbp-78h] BYREF
  int v211; // [rsp+8Ch] [rbp-74h]
  int v212; // [rsp+90h] [rbp-70h] BYREF
  int v213; // [rsp+94h] [rbp-6Ch] BYREF
  int v214; // [rsp+98h] [rbp-68h] BYREF
  int v215; // [rsp+9Ch] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR *v216; // [rsp+A0h] [rbp-60h] BYREF
  LPCWSTR pwsz; // [rsp+A8h] [rbp-58h]
  int v218; // [rsp+B0h] [rbp-50h]
  int v219; // [rsp+B4h] [rbp-4Ch] BYREF
  int v220; // [rsp+B8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v221; // [rsp+C0h] [rbp-40h]
  __int64 v222; // [rsp+C8h] [rbp-38h]
  __int64 v223; // [rsp+D0h] [rbp-30h]
  struct tagPROPVARIANT v224; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v225; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD *v226; // [rsp+F8h] [rbp-8h]
  struct IMMDevice *v227; // [rsp+100h] [rbp+0h]
  __int64 v228; // [rsp+108h] [rbp+8h]
  __int64 v229; // [rsp+110h] [rbp+10h]
  __int64 v230; // [rsp+118h] [rbp+18h]
  PROPVARIANT pvar[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v232[24]; // [rsp+130h] [rbp+30h]
  struct _GUID v233; // [rsp+150h] [rbp+50h] BYREF
  _BYTE Buf1[48]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v235; // [rsp+190h] [rbp+90h]
  __int64 v236; // [rsp+1A0h] [rbp+A0h]
  __int128 v237; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE Buf2[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v239; // [rsp+200h] [rbp+100h]
  _BYTE v240[32]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v241; // [rsp+230h] [rbp+130h]
  struct _GUID v242; // [rsp+240h] [rbp+140h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v244[24]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v245; // [rsp+278h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v246; // [rsp+280h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v247; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v248; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int *v249; // [rsp+2B0h] [rbp+1B0h]
  __int64 v250; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v251; // [rsp+2C0h] [rbp+1C0h]
  __int64 v252; // [rsp+2C8h] [rbp+1C8h]
  struct _GUID *v253; // [rsp+2D0h] [rbp+1D0h]
  __int64 v254; // [rsp+2D8h] [rbp+1D8h]
  struct _GUID *v255; // [rsp+2E0h] [rbp+1E0h]
  __int64 v256; // [rsp+2E8h] [rbp+1E8h]
  int *p_AsUInt32With; // [rsp+2F0h] [rbp+1F0h]
  __int64 v258; // [rsp+2F8h] [rbp+1F8h]
  unsigned int *v259; // [rsp+300h] [rbp+200h]
  __int64 v260; // [rsp+308h] [rbp+208h]
  unsigned int *v261; // [rsp+310h] [rbp+210h]
  __int64 v262; // [rsp+318h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR **v263; // [rsp+320h] [rbp+220h]
  __int64 v264; // [rsp+328h] [rbp+228h]
  __int128 *v265; // [rsp+330h] [rbp+230h]
  __int64 v266; // [rsp+338h] [rbp+238h]
  struct _EVENT_DATA_DESCRIPTOR v267; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v268; // [rsp+350h] [rbp+250h] BYREF
  __int128 *v269; // [rsp+360h] [rbp+260h]
  __int64 v270; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR **v271; // [rsp+370h] [rbp+270h]
  __int64 v272; // [rsp+378h] [rbp+278h]
  unsigned int *v273; // [rsp+380h] [rbp+280h]
  __int64 v274; // [rsp+388h] [rbp+288h]
  _BYTE *v275; // [rsp+390h] [rbp+290h]
  __int64 v276; // [rsp+398h] [rbp+298h]
  int *v277; // [rsp+3A0h] [rbp+2A0h]
  __int64 v278; // [rsp+3A8h] [rbp+2A8h]
  unsigned int *v279; // [rsp+3B0h] [rbp+2B0h]
  __int64 v280; // [rsp+3B8h] [rbp+2B8h]
  _BYTE *v281; // [rsp+3C0h] [rbp+2C0h]
  __int64 v282; // [rsp+3C8h] [rbp+2C8h]
  _BYTE *v283; // [rsp+3D0h] [rbp+2D0h]
  __int64 v284; // [rsp+3D8h] [rbp+2D8h]
  EVENT_DATA_DESCRIPTOR v285; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v286[24]; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned int *v287; // [rsp+410h] [rbp+310h]
  __int64 v288; // [rsp+418h] [rbp+318h]
  unsigned int *p_pActivityId; // [rsp+420h] [rbp+320h]
  __int64 v290; // [rsp+428h] [rbp+328h]
  __int64 v291; // [rsp+430h] [rbp+330h]
  __int64 v292; // [rsp+438h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR v293; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v294[6672]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE Src[6672]; // [rsp+1E60h] [rbp+1D60h] BYREF

  v228 = -2LL;
  v8 = a4;
  v222 = a4;
  v227 = a3;
  v223 = a7;
  pwsz = a5;
  v221 = a6;
  v229 = a7;
  v226 = a8;
  AsUInt32With = 0;
  v209 = 10;
  v218 = 0;
  pActivityId = 0;
  v11 = -1;
  v12 = -1;
  v204 = -1;
  v202 = -1;
  LODWORD(v13) = -1;
  v205 = -1;
  v215 = -1;
  v196 = 0;
  pActivityId_4[0] = 0;
  LOBYTE(v211) = 0;
  memset_0(v240, 0, 0x28uLL);
  v193 = 0;
  v206 = 0;
  memset_0(Buf1, 0, 0x48uLL);
  v207 = 0;
  v212 = 0;
  v233 = GUID_00000000_0000_0000_0000_000000000000;
  memset_0(Buf2, 0, 0x48uLL);
  memset_0(v294, 0, sizeof(v294));
  v225 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  memset(&v224, 0, sizeof(v224));
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v230 = a1;
  *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
  *(_DWORD *)v232 = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   &v225,
                   pvar,
                   v14,
                   &v209);
  v15 = 0LL;
  if ( AsUInt32With < 0 )
    goto LABEL_159;
  if ( v209 != 9 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
            v8,
            &PKEY_AudioEngine_OEMFormat,
            &v224);
    v15 = 0LL;
    if ( v16 >= 0 && v224.vt == 65 && (unsigned int)IsValidWfxBlob(&v224) )
    {
      v113 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v224.bstrblobVal.pData);
      v114 = (unsigned __int8)v211;
      if ( v113 >= 0 )
        v114 = 1;
      v211 = v114;
    }
  }
  v17 = *(SpatialAudioDevicePropertyReader **)(a1 + 48);
  v18 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v17 + 24LL);
  v19 = v18 == SpatialAudioDevicePropertyReader::ReloadProperties
      ? SpatialAudioDevicePropertyReader::ReloadProperties(v17)
      : ((__int64 (__fastcall *)(SpatialAudioDevicePropertyReader *, __int64 (__fastcall *)(SpatialAudioDevicePropertyReader *), __int64))v18)(
          v17,
          SpatialAudioDevicePropertyReader::ReloadProperties,
          v15);
  AsUInt32With = v19;
  if ( v19 < 0 )
    goto LABEL_159;
  v20 = *(SpatialAudioDeviceStateReader **)(a1 + 56);
  v21 = *(__int64 (__fastcall **)(SpatialAudioDeviceStateReader *, enum SpatialRendererSelectionMode *))(*(_QWORD *)v20 + 32LL);
  v22 = v21 == SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode
      ? SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode(v20, (enum SpatialRendererSelectionMode *)&v207)
      : v21(v20, (enum SpatialRendererSelectionMode *)&v207);
  AsUInt32With = v22;
  if ( v22 < 0 )
    goto LABEL_159;
  v23 = *(SpatialAudioDeviceStateReader **)(a1 + 56);
  v24 = *(__int64 (__fastcall **)(SpatialAudioDeviceStateReader *, enum SpatialVssSelectionMode *))(*(_QWORD *)v23 + 40LL);
  v25 = v24 == SpatialAudioDeviceStateReader::GetSpatialVssSelectionMode
      ? SpatialAudioDeviceStateReader::GetSpatialVssSelectionMode(v23, (enum SpatialVssSelectionMode *)&v212)
      : v24(v23, (enum SpatialVssSelectionMode *)&v212);
  AsUInt32With = v25;
  if ( v25 < 0 )
    goto LABEL_159;
  v26 = *(struct _GUID **)(a1 + 56);
  v27 = *(__int64 (__fastcall **)(struct _GUID *, struct _GUID *))(*(_QWORD *)&v26->Data1 + 48LL);
  v28 = v27 == SpatialAudioDeviceStateReader::GetActiveSpatialAudioEncoderId
      ? SpatialAudioDeviceStateReader::GetActiveSpatialAudioEncoderId(v26, &v233)
      : v27(v26, &v233);
  AsUInt32With = v28;
  if ( v28 < 0 )
    goto LABEL_159;
  v242 = v233;
  v29 = a2;
  if ( v207 )
    v29 = 1;
  v214 = v29;
  v30 = *(SpatialAudioDevicePropertyReader **)(a1 + 48);
  v31 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)v30 + 96LL);
  if ( v31 == SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount )
    SpatialAudioEncoderDescriptorCount = SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount(
                                           v30,
                                           &v206);
  else
    SpatialAudioEncoderDescriptorCount = v31(v30, &v206);
  AsUInt32With = SpatialAudioEncoderDescriptorCount;
  v33 = v206;
  if ( SpatialAudioEncoderDescriptorCount >= 0 && v206 <= 8 )
  {
    v34 = *(SpatialAudioDevicePropertyReader **)(a1 + 48);
    v35 = 834 * v206;
    v36 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, unsigned int))(*(_QWORD *)v34 + 104LL);
    if ( v36 == SpatialAudioDevicePropertyReader::GetDeviceSettings )
      DeviceSettings = SpatialAudioDevicePropertyReader::GetDeviceSettings(
                         v34,
                         (struct SpatialAudioSettings *)Buf1,
                         (struct SpatialAudioEncoderDescriptor *)Src,
                         v35);
    else
      DeviceSettings = v36(v34, (struct SpatialAudioSettings *)Buf1, (struct SpatialAudioEncoderDescriptor *)Src, v35);
    v33 = v206;
    AsUInt32With = DeviceSettings;
  }
  AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)pvar, a6);
  v39 = pwsz;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
    v195 = Buf1[0];
    v246.Ptr = (ULONGLONG)&v195;
    *(_QWORD *)&v246.Size = 1LL;
    v194 = BYTE12(v235);
    v247.Ptr = (ULONGLONG)&v194;
    *(_QWORD *)&v247.Size = 1LL;
    v248.Ptr = (ULONGLONG)&Buf1[12];
    *(_QWORD *)&v248.Size = 16LL;
    v197[0] = Buf1[8];
    v249 = (unsigned int *)v197;
    v250 = 1LL;
    LOWORD(v203) = WORD2(v236);
    v251 = &v203;
    v252 = 2LL;
    v210 = v207;
    v253 = (struct _GUID *)&v210;
    v254 = v115;
    v255 = &v233;
    v256 = 16LL;
    p_AsUInt32With = &AsUInt32With;
    v258 = v115;
    v259 = &v206;
    v260 = v115;
    v208 = LOWORD(pvar[0]);
    v261 = &v208;
    v262 = v115;
    v219 = *(_DWORD *)&v232[12];
    v263 = (EVENT_DATA_DESCRIPTOR **)&v219;
    v264 = v115;
    v220 = HIDWORD(pvar[0]);
    v265 = (__int128 *)&v220;
    v266 = v115;
    v267.Ptr = (ULONGLONG)&pvar[1] + 4;
    *(_QWORD *)&v267.Size = 16LL;
    v213 = LOWORD(pvar[1]);
    v268.Ptr = (ULONGLONG)&v213;
    *(_QWORD *)&v268.Size = v115;
    LODWORD(v237) = WORD1(pvar[1]);
    v269 = &v237;
    v270 = v115;
    LODWORD(v216) = v236;
    v271 = &v216;
    v272 = v115;
    LOBYTE(v201) = Buf1[4];
    v273 = &v201;
    v274 = 1LL;
    v275 = &Buf1[28];
    v276 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148F89, v116, v117, 0x15u, &pData);
    v38 = AsUInt32With;
    v33 = v206;
  }
  v40 = 0;
  v203 = 0;
  if ( v38 < 0 )
    goto LABEL_383;
  v41 = 0;
  v42 = 0LL;
  do
  {
    if ( v41 >= v33 )
      break;
    if ( (unsigned int)hProvider > 4 )
    {
      *(_QWORD *)&v244[16] = &v203;
      v245 = 4LL;
      v118 = 834LL * (unsigned int)v42;
      v246.Ptr = (ULONGLONG)&Src[v118 + 768];
      *(_QWORD *)&v246.Size = 16LL;
      LOBYTE(v201) = Src[v118 + 784];
      v247.Ptr = (ULONGLONG)&v201;
      *(_QWORD *)&v247.Size = 1LL;
      v197[0] = Src[v118 + 788];
      v248.Ptr = (ULONGLONG)v197;
      *(_QWORD *)&v248.Size = 1LL;
      v195 = Src[v118 + 792];
      v249 = (unsigned int *)&v195;
      v250 = 1LL;
      v194 = Src[v118 + 796];
      v251 = (unsigned int *)&v194;
      v252 = 1LL;
      v253 = (struct _GUID *)&Src[v118 + 800];
      v254 = 4LL;
      v255 = (struct _GUID *)&Src[v118 + 804];
      v256 = 4LL;
      p_AsUInt32With = (int *)&Src[v118 + 808];
      v258 = 4LL;
      v259 = (unsigned int *)&Src[v118 + 812];
      v260 = 16LL;
      v261 = (unsigned int *)&Src[v118 + 828];
      v262 = 2LL;
      v263 = (EVENT_DATA_DESCRIPTOR **)&Src[v118 + 830];
      v264 = 2LL;
      v265 = (__int128 *)&Src[v118 + 832];
      v266 = 2LL;
      TlgCreateWsz(&v267, (LPCWSTR)&Src[v118 + 512]);
      TlgCreateWsz(&v268, (LPCWSTR)&Src[v119]);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014912C, v120, v121, 0x11u, &pData);
      v38 = AsUInt32With;
      v33 = v206;
      v40 = v203;
    }
    v203 = ++v40;
    v41 = v40;
    v42 = (struct IMMDevice *)v40;
  }
  while ( v38 >= 0 );
  LODWORD(v13) = v205;
  v12 = v205;
  v8 = v222;
  if ( v38 < 0 || v33 > 8 )
    goto LABEL_383;
  if ( !*(_BYTE *)(a1 + 6848) )
  {
    *(_BYTE *)(a1 + 6848) = 1;
    *(_OWORD *)(a1 + 100) = *(_OWORD *)Buf1;
    *(_OWORD *)(a1 + 116) = *(_OWORD *)&Buf1[16];
    *(_OWORD *)(a1 + 132) = *(_OWORD *)&Buf1[32];
    *(_OWORD *)(a1 + 148) = v235;
    *(_QWORD *)(a1 + 164) = v236;
    *(_DWORD *)(a1 + 172) = v33;
    memcpy_0((void *)(a1 + 176), Src, 834LL * v33);
  }
  if ( v33 )
  {
    v43 = HIDWORD(v235);
    if ( HIDWORD(v235) != *(_DWORD *)Buf1 && !*(_BYTE *)(a1 + 74) )
    {
      if ( !*(_DWORD *)(a1 + 160) || *(_DWORD *)(a1 + 100) )
      {
        v43 = *(_DWORD *)Buf1;
        HIDWORD(v235) = *(_DWORD *)Buf1;
      }
      else
      {
        *(_DWORD *)Buf1 = HIDWORD(v235);
      }
    }
    v196 = v43 != 0;
    v44 = 1;
    v193 = 1;
  }
  else
  {
LABEL_383:
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], v39);
      v246.Ptr = (ULONGLONG)&AsUInt32With;
      *(_QWORD *)&v246.Size = cData;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148F53, v123, v124, cData, &pData);
    }
    v206 = 0;
    memset_0(Buf1, 0, 0x48uLL);
    memset_0(Src, 0, sizeof(Src));
    v44 = 0;
  }
  AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1, v42);
  if ( AsUInt32With < 0 )
    goto LABEL_159;
  pActivityId = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v45 = g_ListOfSpatialTech[0];
  if ( g_ListOfSpatialTech[0] > 8u )
  {
    AsUInt32With = -2147418113;
    goto LABEL_158;
  }
  v203 = BlockSpatialAudioRegistryGates();
  v46 = DoesPlatformSupportSpatialAudio();
  v49 = 0;
  if ( v46 )
  {
    v50 = -1;
    v51 = -1;
    v52 = MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( !v207 )
      goto LABEL_47;
    if ( v207 == 2 && *(_DWORD *)Buf1 )
    {
      v125 = *(_QWORD *)&Buf1[12] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&Buf1[12] == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v125 = *(_QWORD *)&Buf1[20] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v125 )
LABEL_47:
        v52 = *(_OWORD *)&Buf1[12];
    }
    v237 = v52;
    v208 = 0;
    if ( v45 )
    {
      for ( i = 0; i < v45; v208 = i )
      {
        v195 = 0;
        v201 = 0;
        memset_0(&pData, 0, 0x28uLL);
        v49 = 0;
        if ( i >= g_ListOfSpatialTech[0] )
          v54 = 0LL;
        else
          v54 = (CSpatialAudioDolbyHeadphones *)qword_18018A938[i];
        if ( !v54 )
          goto LABEL_106;
        v216 = &v285;
        v55 = (__int64)v224.bstrblobVal.pData & -(__int64)((_BYTE)v211 != 0);
        v288 = 0LL;
        v56 = *(__int64 (__fastcall ****)(_QWORD, EVENT_DATA_DESCRIPTOR *))(v223 + 56);
        if ( v56 )
        {
          v57 = **v56;
          if ( (char *)v57 == (char *)std::_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move )
            v58 = std::_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move(
                    v56,
                    &v285);
          else
            v58 = v57(v56, &v285);
          v288 = v58;
        }
        v59 = v55;
        v60 = v221;
        v61 = (*(__int64 (__fastcall **)(CSpatialAudioDolbyHeadphones *, _QWORD, struct tWAVEFORMATEX *, __int64, EVENT_DATA_DESCRIPTOR *, unsigned int *, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v54 + 40LL))(
                v54,
                v209,
                v221,
                v59,
                &v285,
                &v201,
                &v195,
                &pData);
        v49 = 0;
        if ( v61 )
        {
          v62 = *(_DWORD *)(a1 + 6872);
          if ( v62 != 2 )
          {
            if ( !v62 && v60 && v209 != 9 && v60->nChannels == 8 && WORD1(pData.Ptr) == 2 )
            {
              *(EVENT_DATA_DESCRIPTOR *)(a1 + 6876) = pData;
              *(_OWORD *)(a1 + 6892) = *(_OWORD *)v244;
              *(_QWORD *)(a1 + 6908) = *(_QWORD *)&v244[16];
              *(_DWORD *)(a1 + 6872) = 1;
            }
LABEL_63:
            v63 = *(bool (__fastcall **)(CSpatialAudioDolbyHeadphones *))(*(_QWORD *)v54 + 32LL);
            if ( v63 == CSpatialAudioDolbyHeadphones::IsTechnologyLicenseAcquired )
              IsTechnologyLicenseAcquired = CSpatialAudioDolbyHeadphones::IsTechnologyLicenseAcquired(v54);
            else
              IsTechnologyLicenseAcquired = v63(v54);
            v65 = pActivityId;
            *(_DWORD *)&v294[834 * pActivityId + 784] = IsTechnologyLicenseAcquired;
            v66 = *(struct _GUID *(__fastcall **)(struct _GUID *, struct _GUID *__return_ptr))(*(_QWORD *)v54 + 16LL);
            if ( v66 == CSpatialAudioTech::GetTechnologyID )
            {
              TechnologyID = CSpatialAudioTech::GetTechnologyID((struct _GUID *)v54, (struct _GUID *)pvar);
            }
            else
            {
              TechnologyID = v66((struct _GUID *)v54, (struct _GUID *)pvar);
              v65 = pActivityId;
            }
            *(struct _GUID *)&v294[834 * v65 + 768] = *TechnologyID;
            v68 = (*(unsigned __int8 (__fastcall **)(CSpatialAudioDolbyHeadphones *))(*(_QWORD *)v54 + 48LL))(v54);
            *(_DWORD *)&v294[834 * pActivityId + 788] = v68;
            v69 = *(char (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)v54 + 56LL);
            if ( v69 == CSpatialAudioTech::IsLegacyVssRelevant )
              IsLegacyVssRelevant = CSpatialAudioTech::IsLegacyVssRelevant(v54);
            else
              IsLegacyVssRelevant = v69(v54);
            *(_DWORD *)&v294[834 * pActivityId + 792] = IsLegacyVssRelevant;
            v71 = (*(unsigned __int8 (__fastcall **)(CSpatialAudioDolbyHeadphones *))(*(_QWORD *)v54 + 72LL))(v54);
            v72 = pActivityId;
            *(_DWORD *)&v294[834 * pActivityId + 796] = v71;
            v73 = *(__int64 (__fastcall **)(CSpatialAudioDolbyHeadphones *))(*(_QWORD *)v54 + 64LL);
            if ( v73 == CSpatialAudioDolbyHeadphones::GetLegacyMode )
            {
              LegacyMode = CSpatialAudioDolbyHeadphones::GetLegacyMode(v54);
            }
            else
            {
              LegacyMode = v73(v54);
              v72 = pActivityId;
            }
            v75 = 834LL * v72;
            *(_DWORD *)&v294[v75 + 800] = LegacyMode;
            *(_DWORD *)&v294[v75 + 804] = HIDWORD(pData.Ptr);
            *(_DWORD *)&v294[v75 + 808] = *(_DWORD *)&v244[4];
            *(_OWORD *)&v294[v75 + 812] = *(_OWORD *)&v244[8];
            *(_WORD *)&v294[v75 + 828] = WORD1(pData.Ptr);
            *(_WORD *)&v294[v75 + 830] = pData.Reserved2;
            *(_WORD *)&v294[v75 + 832] = *(_WORD *)&v244[2];
            v76 = *(const unsigned __int16 *(__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)v54 + 8LL);
            if ( v76 == CSpatialAudioTech::GetFriendlyName )
            {
              FriendlyName = (char *)CSpatialAudioTech::GetFriendlyName(v54);
            }
            else
            {
              FriendlyName = (char *)v76(v54);
              v72 = pActivityId;
            }
            StringCchCopyW(&v294[834 * v72], 256LL, FriendlyName);
            v78 = *(const unsigned __int16 *(__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)v54 + 24LL);
            if ( v78 == CSpatialAudioTech::GetDeepLink )
            {
              DeepLink = (unsigned __int16 *)CSpatialAudioTech::GetDeepLink(v54);
            }
            else if ( v78 == CSpatialAudioDolbyHeadphones::GetDeepLink )
            {
              DeepLink = (unsigned __int16 *)CSpatialAudioDolbyHeadphones::GetDeepLink(v54);
            }
            else
            {
              DeepLink = (unsigned __int16 *)v78(v54);
            }
            StringCchCopyW(&v294[834 * pActivityId + 512], 128LL, (char *)DeepLink);
            v80 = (CSpatialAudioTechnologies *)(834LL * pActivityId);
            v81 = &v294[(_QWORD)v80 + 768];
            v82 = *(_QWORD *)&v294[(_QWORD)v80 + 768] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
            if ( *(_QWORD *)&v294[(_QWORD)v80 + 768] == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
              v82 = v81[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
            if ( v82 )
            {
              v83 = -1LL;
              do
                ++v83;
              while ( *(_WORD *)&v294[2 * v83 + (_QWORD)v80] );
              if ( v83 )
              {
                v44 = v193;
                v49 = 0;
                if ( v193 && !v207 && *(_DWORD *)&v294[834 * pActivityId + 784] )
                {
                  v84 = *v81 - *(_QWORD *)&Buf1[12];
                  if ( *v81 == *(_QWORD *)&Buf1[12] )
                    v84 = v81[1] - *(_QWORD *)&Buf1[20];
                  if ( v84 && v206 > pActivityId && !*(_DWORD *)&Src[834 * pActivityId + 784] )
                  {
                    v126 = *(_QWORD *)&Src[834 * pActivityId + 768] - *v81;
                    if ( !v126 )
                      v126 = *(_QWORD *)&Src[834 * pActivityId + 776] - v81[1];
                    if ( !v126 )
                    {
                      v194 = 0;
                      v210 = 0;
                      TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(
                                         v80,
                                         (const struct _GUID *)&Buf1[12]);
                      v49 = 0;
                      if ( TechnologyByID )
                      {
                        v128 = (__int64)v224.bstrblobVal.pData & -(__int64)((_BYTE)v211 != 0);
                        v129 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                                 &v285,
                                 v223);
                        v130 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, struct tWAVEFORMATEX *, __int64, __int64, unsigned int *, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)TechnologyByID + 40LL))(
                                 TechnologyByID,
                                 v209,
                                 v221,
                                 v128,
                                 v129,
                                 &v210,
                                 &v194,
                                 &pData);
                        v49 = 0;
                        if ( v130 )
                        {
                          if ( !v194 || v201 < v210 )
                          {
                            *(_OWORD *)&Buf1[28] = *(_OWORD *)&Buf1[12];
                            *(_OWORD *)&Buf1[12] = *(_OWORD *)&Src[834 * pActivityId + 768];
                            Ptr_high = v204;
                            v131 = v204;
                            if ( v204 == -1 )
                              v131 = v202;
                            v85 = v131;
                            v202 = v131;
                            v44 = v193;
                            goto LABEL_90;
                          }
                        }
                      }
                      v44 = v193;
                    }
                  }
                }
                Ptr_high = v204;
                v85 = v202;
LABEL_90:
                v86 = *(_QWORD *)&v294[834 * pActivityId + 768] - v237;
                if ( !v86 )
                  v86 = *(_QWORD *)&v294[834 * pActivityId + 776] - *((_QWORD *)&v237 + 1);
                if ( !v86 )
                  v11 = pActivityId;
                if ( v44 )
                {
                  v87 = *(_QWORD *)&v294[834 * pActivityId + 768] - *(_QWORD *)&Buf1[12];
                  if ( !v87 )
                    v87 = *(_QWORD *)&v294[834 * pActivityId + 776] - *(_QWORD *)&Buf1[20];
                  if ( !v87 )
                    Ptr_high = pActivityId;
                  v204 = Ptr_high;
                  v88 = *(_QWORD *)&v294[834 * pActivityId + 768] - *(_QWORD *)&Buf1[28];
                  if ( !v88 )
                    v88 = *(_QWORD *)&v294[834 * pActivityId + 776] - *(_QWORD *)&Buf1[36];
                  if ( !v88 )
                    v85 = pActivityId;
                  v202 = v85;
                }
                if ( *(_DWORD *)&v294[834 * pActivityId + 784] && v201 )
                {
                  if ( v195 && (v196 || (v203 & 8) != 0 || !*(_DWORD *)&v294[834 * pActivityId + 788]) )
                  {
                    if ( v201 < v50 )
                    {
                      v50 = v201;
                      v205 = pActivityId;
                    }
                  }
                  else if ( v201 < v51 )
                  {
                    v51 = v201;
                    v215 = pActivityId;
                  }
                }
                ++pActivityId;
                goto LABEL_106;
              }
            }
            if ( (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v286[16], pwsz);
              v287 = &v208;
              v288 = 4LL;
              p_pActivityId = &pActivityId;
              v290 = 4LL;
              v291 = v132;
              v292 = 16LL;
              TlgCreateWsz(&v293, v133);
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148EBC, v134, v135, 7u, &v285);
            }
            memset_0(&v294[834 * pActivityId], 0, 0x342uLL);
LABEL_234:
            v49 = 0;
            goto LABEL_170;
          }
          if ( WORD1(pData.Ptr) != 2 )
            goto LABEL_63;
          if ( (unsigned int)hProvider > 5 )
          {
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148F1C, (LPCGUID)Ptr_high, (LPCGUID)v48, 2u, &v285);
            goto LABEL_234;
          }
        }
LABEL_170:
        v44 = v193;
LABEL_106:
        i = v208 + 1;
      }
    }
    if ( !*(_DWORD *)(a1 + 6872) )
      *(_DWORD *)(a1 + 6872) = 3;
    if ( v44 )
    {
      LODWORD(v13) = v205;
    }
    else
    {
      v13 = v205;
      v196 = v205 != -1;
      if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
        if ( (_DWORD)v13 == -1 )
        {
          v138 = v136;
          v137 = 0xFFFFFFFFLL;
        }
        else
        {
          v137 = (unsigned int)v13;
          v138 = &v294[834 * v13 + 768];
        }
        v246.Ptr = (ULONGLONG)v138;
        *(_QWORD *)&v246.Size = 16LL;
        if ( (_DWORD)v13 == -1 )
          v139 = L"<none>";
        else
          v139 = (const WCHAR *)&v294[834 * v137];
        TlgCreateWsz(&v247, v139);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148E5D, v140, v141, 5u, &pData);
        v49 = 0;
      }
    }
    v12 = v204;
  }
  v89 = v11 != -1;
  v194 = v11 != -1;
  v90 = v13;
  if ( v11 != -1 )
    v90 = v11;
  while ( 1 )
  {
    if ( v90 == -1 )
    {
      v91 = v196;
LABEL_116:
      v92 = v193;
      goto LABEL_117;
    }
    LOBYTE(v201) = v49;
    LODWORD(v216) = v49;
    v142 = 834LL * v90;
    v143 = &v294[v142 + 768];
    v144 = CSpatialAudioTechnologies::GetTechnologyByID(
             (CSpatialAudioTechnologies *)0xFFFFFFFFLL,
             (const struct _GUID *)&v294[v142 + 768]);
    v145 = (__int64)v224.bstrblobVal.pData & -(__int64)((_BYTE)v211 != 0);
    v146 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
             &pData,
             v223);
    v147 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, struct tWAVEFORMATEX *, __int64, __int64, EVENT_DATA_DESCRIPTOR **, unsigned int *, _BYTE *))(*(_QWORD *)v144 + 40LL))(
             v144,
             v209,
             v221,
             v145,
             v146,
             &v216,
             &v201,
             v240);
    if ( !v147
      || (v148 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v144 + 32LL))(v144),
          v49 = 0,
          !v148) )
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
        v167 = L"Encoder Not licensed";
        if ( !v147 )
          v167 = L"Encoder not supported";
        TlgCreateWsz(&v246, v167);
        v247.Ptr = (ULONGLONG)&v294[v142 + 768];
        *(_QWORD *)&v247.Size = 16LL;
        TlgCreateWsz(&v248, (LPCWSTR)&v294[v142]);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148DFA, v168, v169, 6u, &pData);
      }
      goto LABEL_317;
    }
    if ( v221 )
      break;
LABEL_309:
    v48 = 1LL;
    v163 = 1;
    if ( (_BYTE)v214 || *(_BYTE *)(a1 + 74) )
      goto LABEL_300;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
      v246.Ptr = (ULONGLONG)v143;
      *(_QWORD *)&v246.Size = 16LL;
      TlgCreateWsz(&v247, (LPCWSTR)&v294[v142]);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148DA5, v165, v166, 5u, &pData);
LABEL_317:
      v48 = 1LL;
      v49 = 0;
    }
    v12 = v204;
    if ( v204 != -1 )
    {
      v170 = v204;
      v12 = -1;
      v204 = -1;
      if ( v90 != v170 )
      {
        v90 = v170;
        goto LABEL_331;
      }
    }
    if ( v202 != -1 )
    {
      v90 = v202;
      v202 = -1;
      goto LABEL_331;
    }
    if ( v89 )
    {
      v89 = 0;
      v194 = 0;
      LODWORD(v13) = v205;
      v90 = v205;
      if ( v205 == -1 )
        v90 = v215;
      if ( !v196 || (v196 = 1, v205 == -1) )
        v196 = 0;
      v202 = -1;
    }
    else
    {
      v90 = -1;
      v202 = -1;
LABEL_331:
      LODWORD(v13) = v205;
    }
  }
  Ptr_high = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
  if ( v221->wFormatTag == 0xFFFE )
  {
    if ( v221->cbSize != 22 )
    {
      v149 = *(_QWORD *)((char *)&v221[1].nSamplesPerSec + 2)
           - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v149 )
        v149 = *(_QWORD *)&v221[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v149 )
      {
        v150 = *(_QWORD *)((char *)&v221[1].nSamplesPerSec + 2)
             - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v150 )
          v150 = *(_QWORD *)&v221[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v150 )
        {
LABEL_308:
          v49 = 0;
          goto LABEL_309;
        }
      }
    }
    *(_OWORD *)pvar = *(_OWORD *)&v221->wFormatTag;
    *(_OWORD *)v232 = *(_OWORD *)&v221->cbSize;
    *(_QWORD *)&v232[16] = *(_QWORD *)&v221[1].wBitsPerSample;
    *(_WORD *)v232 = 22;
    v151 = *(_DWORD *)&v232[4];
    v152 = (__int16)pvar[0];
  }
  else
  {
    if ( v221->cbSize && ((v221->wFormatTag - 1) & 0xFFFD) != 0 )
      goto LABEL_308;
    nChannels = v221->nChannels;
    if ( (unsigned __int16)(nChannels - 1) > 1u )
      goto LABEL_308;
    wBitsPerSample = v221->wBitsPerSample;
    v143 = &v294[v142 + 768];
    if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
      goto LABEL_308;
    *(_OWORD *)pvar = *(_OWORD *)&v221->wFormatTag;
    v152 = -2;
    LOWORD(pvar[0]) = -2;
    *(_WORD *)v232 = 22;
    *(_WORD *)&v232[2] = wBitsPerSample;
    *(GUID *)&v232[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)&v232[8] = v221->wFormatTag;
    v151 = 4 - (nChannels != 1);
  }
  if ( *(_WORD *)v240 == 0xFFFE )
  {
    if ( *(_WORD *)&v240[16] != 22 )
    {
      v155 = *(_QWORD *)&v240[24] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( *(_QWORD *)&v240[24] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
        v155 = v241 - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v155 )
      {
        v156 = *(_QWORD *)&v240[24] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( *(_QWORD *)&v240[24] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
          v156 = v241 - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        v49 = 0;
        if ( v156 )
          goto LABEL_307;
      }
    }
    v285 = *(EVENT_DATA_DESCRIPTOR *)v240;
    *(_OWORD *)v286 = *(_OWORD *)&v240[16];
    *(_QWORD *)&v286[16] = v241;
    *(_WORD *)v286 = 22;
    v157 = *(_DWORD *)&v240[20];
    v158 = *(_WORD *)v240;
  }
  else
  {
    v49 = 0;
    Ptr_high = 1LL;
    if ( *(_WORD *)&v240[16] && ((*(_WORD *)v240 - 1) & 0xFFFD) != 0
      || (unsigned __int16)(*(_WORD *)&v240[2] - 1) > 1u
      || (Ptr_high = *(unsigned __int16 *)&v240[14], ((*(_WORD *)&v240[14] - 8) & 0xFFE7) != 0) )
    {
LABEL_307:
      v89 = v194;
      goto LABEL_309;
    }
    v285 = *(EVENT_DATA_DESCRIPTOR *)v240;
    v158 = -2;
    LOWORD(v285.Ptr) = -2;
    *(_WORD *)v286 = 22;
    *(_WORD *)&v286[2] = *(_WORD *)&v240[14];
    *(GUID *)&v286[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)&v286[8] = *(unsigned __int16 *)v240;
    v157 = 4 - (*(_WORD *)&v240[2] != 1);
  }
  if ( WORD1(pvar[0]) )
  {
    v159 = WORD1(v285.Ptr);
  }
  else
  {
    v159 = 0;
    WORD1(v285.Ptr) = 0;
    v285.Size = 0;
    LOWORD(v285.Reserved) = 0;
  }
  if ( HIDWORD(pvar[0]) )
  {
    Ptr_high = HIDWORD(v285.Ptr);
  }
  else
  {
    Ptr_high = 0LL;
    *(ULONGLONG *)((char *)&v285.Ptr + 4) = 0LL;
  }
  if ( HIWORD(pvar[1]) )
  {
    Reserved2 = v285.Reserved2;
  }
  else
  {
    Reserved2 = 0;
    v285.Reserved = 0;
  }
  *(_DWORD *)&v286[4] = v151 != 0 ? v157 : 0;
  if ( !v152 )
  {
    v158 = 0;
    LOWORD(v285.Ptr) = 0;
  }
  if ( !v159 )
  {
    WORD1(pvar[0]) = 0;
    LODWORD(pvar[1]) = 0;
    WORD2(pvar[1]) = 0;
  }
  if ( !(_DWORD)Ptr_high )
    *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
  if ( !Reserved2 )
    HIDWORD(pvar[1]) = 0;
  *(_DWORD *)&v232[4] = (v151 != 0 ? v157 : 0) != 0 ? v151 : 0;
  if ( v158 )
  {
    v49 = 0;
  }
  else
  {
    v49 = 0;
    LOWORD(pvar[0]) = 0;
  }
  v161 = *(_QWORD *)&v232[8] - *(_QWORD *)&v286[8];
  if ( *(_QWORD *)&v232[8] == *(_QWORD *)&v286[8] )
    v161 = *(_QWORD *)&v232[16] - *(_QWORD *)&v286[16];
  if ( v161 )
    goto LABEL_307;
  v162 = memcmp_0(pvar, &v285, 0x28uLL);
  v49 = 0;
  if ( v162 )
    goto LABEL_307;
  v163 = 0;
LABEL_300:
  LOBYTE(pActivityId_4[0]) = 1;
  HIBYTE(pActivityId_4[0]) = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v144 + 48LL))(v144);
  v12 = v90;
  v91 = v196;
  v49 = 0;
  if ( !v196 || *(_BYTE *)(a1 + 74) )
  {
    LODWORD(v13) = v205;
    goto LABEL_116;
  }
  if ( v163 )
  {
    v164 = v226;
    *v226 = *(_OWORD *)v240;
    v164[1] = *(_OWORD *)&v240[16];
    *((_QWORD *)v164 + 4) = v241;
  }
  v92 = v193;
  v218 = v193 && *(_DWORD *)&Buf1[8];
  LODWORD(v13) = v205;
LABEL_117:
  v93 = v202;
  if ( (unsigned int)hProvider > 5 )
  {
    v214 = v202;
    *(_QWORD *)&v244[16] = &v214;
    v245 = 4LL;
    LODWORD(v216) = v90;
    v246.Ptr = (ULONGLONG)&v216;
    *(_QWORD *)&v246.Size = 4LL;
    LODWORD(v237) = v12;
    v247.Ptr = (ULONGLONG)&v237;
    *(_QWORD *)&v247.Size = 4LL;
    v213 = v13;
    v248.Ptr = (ULONGLONG)&v213;
    *(_QWORD *)&v248.Size = 4LL;
    LOBYTE(v201) = pActivityId_4[0];
    v249 = &v201;
    v250 = 1LL;
    v197[0] = v91;
    v251 = (unsigned int *)v197;
    v252 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148AF9, (LPCGUID)Ptr_high, (LPCGUID)v48, 8u, &pData);
    v49 = 0;
  }
  v94 = LOBYTE(pActivityId_4[0]) != 0;
  LOBYTE(pActivityId_4[0]) = -LOBYTE(pActivityId_4[0]);
  v95 = v94 && v91;
  if ( v90 == -1 )
  {
    v96 = &GUID_00000000_0000_0000_0000_000000000000;
    v97 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v97 = (GUID *)&v294[834 * v90 + 768];
    v96 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  v98 = *v97;
  v233 = *v97;
  if ( v12 == -1 )
  {
    v99 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v99 = (GUID *)&v294[834 * v12 + 768];
    v96 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)&Buf2[12] = *v99;
  if ( v93 == -1 )
  {
    v100 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v100 = (GUID *)&v294[834 * v93 + 768];
    v96 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)&Buf2[28] = *v100;
  if ( (_DWORD)v13 != -1 )
    v96 = (GUID *)&v294[834 * (unsigned int)v13 + 768];
  *(GUID *)&Buf2[44] = *v96;
  if ( *(_BYTE *)(a1 + 74) == (_BYTE)v49 && v95 )
    v101 = 1;
  else
    v101 = v49;
  *(_DWORD *)Buf2 = v101;
  *(_DWORD *)&Buf2[60] = v95;
  *(_DWORD *)&Buf2[4] = HIBYTE(pActivityId_4[0]);
  if ( v92 )
  {
    v102 = *(_DWORD *)&Buf1[8];
    goto LABEL_132;
  }
  if ( v90 == -1 )
  {
    v102 = *(_DWORD *)&Buf2[8];
  }
  else
  {
    v102 = *(_DWORD *)&v294[834 * v90 + 792];
LABEL_132:
    *(_DWORD *)&Buf2[8] = v102;
  }
  LOBYTE(v103) = v203;
  LODWORD(v239) = v203;
  if ( (v203 & 2) != 0 )
  {
    if ( v209 == 1 )
    {
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      *(_QWORD *)v232 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v222 + 40LL))(
             v222,
             &PKEY_Endpoint_SpatialNotAllowed,
             pvar) < 0
        || !LOWORD(pvar[0])
        || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
      {
        LODWORD(v239) = v239 & 0xFFFFFFFD;
      }
      PropVariantClear(pvar);
      v98 = v233;
      v103 = v239;
      v102 = *(_DWORD *)&Buf2[8];
      v101 = *(_DWORD *)Buf2;
      v49 = 0;
    }
    else
    {
      v103 = v203 & 0xFFFFFFFD;
      LODWORD(v239) = v203 & 0xFFFFFFFD;
    }
    v203 = v103;
  }
  if ( (v103 & 3) != 0 )
  {
    v101 = v49;
    *(_DWORD *)Buf2 = v49;
    *(_DWORD *)&Buf2[60] = v49;
    v102 = v49;
  }
  if ( (v239 & 4) != 0 )
    v102 = v49;
  *(_DWORD *)&Buf2[8] = v102;
  if ( !v101 || (HIDWORD(v239) = 1, !v102) )
    HIDWORD(v239) = v49;
  if ( !v101 && v207 == v49 )
  {
    v98 = GUID_00000000_0000_0000_0000_000000000000;
    v233 = GUID_00000000_0000_0000_0000_000000000000;
  }
  *(struct _GUID *)(a1 + 6852) = v98;
  v104 = v49;
  if ( v207 != v49 && v212 == v49 )
  {
    v104 = v49;
    if ( HIDWORD(v236) != v49 )
      v104 = 1;
  }
  v105 = *(_QWORD *)&v242.Data1;
  v106 = pActivityId;
  if ( v206 != pActivityId || memcmp_0(Buf1, Buf2, 0x48uLL) || memcmp_0(Src, v294, 834 * v106) )
    goto LABEL_352;
  v107 = v105 - *(_QWORD *)&v233.Data1;
  if ( v105 == *(_QWORD *)&v233.Data1 )
    v107 = *(_QWORD *)v242.Data4 - *(_QWORD *)v233.Data4;
  if ( v107 || v104 )
  {
LABEL_352:
    AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)pvar, (const struct tWAVEFORMATEX *)v240);
    v172 = pwsz;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
      LOBYTE(v201) = Buf2[0];
      v246.Ptr = (ULONGLONG)&v201;
      *(_QWORD *)&v246.Size = 1LL;
      v197[0] = Buf2[60];
      v247.Ptr = (ULONGLONG)v197;
      *(_QWORD *)&v247.Size = 1LL;
      v248.Ptr = (ULONGLONG)&Buf2[12];
      *(_QWORD *)&v248.Size = 16LL;
      HIBYTE(pActivityId_4[0]) = Buf2[8];
      v249 = (unsigned int *)((char *)pActivityId_4 + 1);
      v250 = 1LL;
      LOWORD(v203) = WORD2(v239);
      v251 = &v203;
      v252 = 2LL;
      v253 = &v233;
      v254 = 16LL;
      v255 = (struct _GUID *)&pActivityId;
      v256 = 4LL;
      v214 = v173;
      p_AsUInt32With = &v214;
      v258 = 4LL;
      v195 = Buf2[4];
      v259 = (unsigned int *)&v195;
      v260 = 1LL;
      LOBYTE(pActivityId_4[0]) = v104;
      v261 = (unsigned int *)pActivityId_4;
      v262 = 1LL;
      LODWORD(v216) = LOWORD(pvar[0]);
      v263 = &v216;
      v264 = 4LL;
      LODWORD(v237) = *(_DWORD *)&v232[12];
      v265 = &v237;
      v266 = 4LL;
      v213 = HIDWORD(pvar[0]);
      v267.Ptr = (ULONGLONG)&v213;
      *(_QWORD *)&v267.Size = 4LL;
      v268.Ptr = (ULONGLONG)&pvar[1] + 4;
      *(_QWORD *)&v268.Size = 16LL;
      v220 = LOWORD(pvar[1]);
      v269 = (__int128 *)&v220;
      v270 = 4LL;
      v219 = WORD1(pvar[1]);
      v271 = (EVENT_DATA_DESCRIPTOR **)&v219;
      v272 = 4LL;
      v273 = (unsigned int *)&Buf2[28];
      v274 = 16LL;
      v275 = &Buf2[44];
      v276 = 16LL;
      v215 = *(_DWORD *)Buf1;
      v277 = &v215;
      v278 = 4LL;
      v210 = HIDWORD(v235);
      v279 = &v210;
      v280 = 4LL;
      v281 = &Buf1[12];
      v282 = 16LL;
      v283 = &Buf1[28];
      v284 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148B81, v174, v175, 0x19u, &pData);
      v171 = 0;
    }
    v176 = v171;
    v208 = v171;
    if ( pActivityId > v171 )
    {
      v177 = v171;
      do
      {
        if ( (unsigned int)hProvider > 5 )
        {
          *(_QWORD *)&v244[16] = &v208;
          v245 = 4LL;
          v178 = 834LL * v177;
          v246.Ptr = (ULONGLONG)&v294[v178 + 768];
          *(_QWORD *)&v246.Size = 16LL;
          v247.Ptr = (ULONGLONG)&v294[v178 + 800];
          *(_QWORD *)&v247.Size = 4LL;
          LOBYTE(v201) = v294[v178 + 784];
          v248.Ptr = (ULONGLONG)&v201;
          *(_QWORD *)&v248.Size = 1LL;
          v197[0] = v294[v178 + 788];
          v249 = (unsigned int *)v197;
          v250 = 1LL;
          HIBYTE(pActivityId_4[0]) = v294[v178 + 792];
          v251 = (unsigned int *)((char *)pActivityId_4 + 1);
          v252 = 1LL;
          v195 = v294[v178 + 796];
          v253 = (struct _GUID *)&v195;
          v254 = 1LL;
          v255 = (struct _GUID *)&v294[v178 + 804];
          v256 = 4LL;
          p_AsUInt32With = (int *)&v294[v178 + 808];
          v258 = 4LL;
          v259 = (unsigned int *)&v294[v178 + 812];
          v260 = 16LL;
          v261 = (unsigned int *)&v294[v178 + 828];
          v262 = 2LL;
          v263 = (EVENT_DATA_DESCRIPTOR **)&v294[v178 + 830];
          v264 = 2LL;
          v265 = (__int128 *)&v294[v178 + 832];
          v266 = 2LL;
          TlgCreateWsz(&v267, (LPCWSTR)&v294[v178]);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801489B0, v179, v180, v181, &pData);
          v176 = v208;
          v171 = 0;
        }
        v208 = ++v176;
        v177 = v176;
      }
      while ( v176 < pActivityId );
    }
    v182 = v105 - *(_QWORD *)&v233.Data1;
    if ( !v182 )
      v182 = *(_QWORD *)v242.Data4 - *(_QWORD *)v233.Data4;
    if ( v182 )
    {
      v183 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**(_QWORD **)(a1 + 64) + 56LL))(
               *(_QWORD *)(a1 + 64),
               &v233);
      AsUInt32With = v183;
      v171 = 0;
      if ( v183 >= 0 )
        goto LABEL_367;
      if ( (unsigned int)hProvider <= 2 )
      {
LABEL_366:
        if ( v183 < 0 )
          goto LABEL_157;
LABEL_367:
        if ( v207 != v171 && v212 == v171 )
        {
          v212 = 1;
          v183 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64), 1LL);
          AsUInt32With = v183;
          if ( v183 >= 0 )
          {
LABEL_373:
            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                             *(_QWORD *)(a1 + 40),
                             Buf2,
                             v294,
                             834 * pActivityId);
            if ( AsUInt32With < 0 )
            {
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], v172);
                v246.Ptr = (ULONGLONG)&AsUInt32With;
                *(_QWORD *)&v246.Size = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801488EC, v189, v190, 4u, &pData);
              }
            }
            else
            {
              *(_OWORD *)(a1 + 100) = *(_OWORD *)Buf2;
              *(_OWORD *)(a1 + 116) = *(_OWORD *)&Buf2[16];
              *(_OWORD *)(a1 + 132) = *(_OWORD *)&Buf2[32];
              *(_OWORD *)(a1 + 148) = *(_OWORD *)&Buf2[48];
              *(_QWORD *)(a1 + 164) = v239;
              v188 = pActivityId;
              *(_DWORD *)(a1 + 172) = pActivityId;
              memcpy_0((void *)(a1 + 176), v294, 834 * v188);
              *(_BYTE *)(a1 + 6848) = 1;
            }
            goto LABEL_157;
          }
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], v172);
            v246.Ptr = (ULONGLONG)&AsUInt32With;
            *(_QWORD *)&v246.Size = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014896F, v186, v187, 4u, &pData);
            v183 = AsUInt32With;
          }
        }
        if ( v183 < 0 )
          goto LABEL_157;
        goto LABEL_373;
      }
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], v172);
      v246.Ptr = (ULONGLONG)&AsUInt32With;
      *(_QWORD *)&v246.Size = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148AB4, v184, v185, 4u, &pData);
      v171 = 0;
    }
    v183 = AsUInt32With;
    goto LABEL_366;
  }
LABEL_157:
  v108 = v218;
  if ( v218 != *(_DWORD *)(a1 + 76) )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v244[16], pwsz);
      LOWORD(v203) = *(_WORD *)(a1 + 76);
      v246.Ptr = (ULONGLONG)&v203;
      *(_QWORD *)&v246.Size = 2LL;
      LOWORD(v201) = v108;
      v247.Ptr = (ULONGLONG)&v201;
      *(_QWORD *)&v247.Size = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148925, v191, v192, 5u, &pData);
    }
    *(_DWORD *)(a1 + 76) = v108;
  }
LABEL_158:
  v8 = v222;
LABEL_159:
  PropVariantClear((PROPVARIANT *)&v224);
  if ( AsUInt32With < 0 )
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)a1, v227);
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v110 = v223;
  v111 = *(_QWORD **)(v223 + 56);
  if ( v111 )
  {
    LOBYTE(v109) = v111 != (_QWORD *)v223;
    v112 = *(void (__fastcall **)(_QWORD *, char))(*v111 + 32LL);
    if ( v112 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v111,
        v109);
    else
      v112(v111, v109);
    *(_QWORD *)(v110 + 56) = 0LL;
  }
}
