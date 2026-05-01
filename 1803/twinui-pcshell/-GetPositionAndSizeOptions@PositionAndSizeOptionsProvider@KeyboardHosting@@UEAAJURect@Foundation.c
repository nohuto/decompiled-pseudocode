/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18005E590
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180060230 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18005F980 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?GetView@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@345@@Z @ 0x18005F9C0 (-GetView@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     ?Release@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x18005FB90 (-Release@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     sqrt @ 0x1800991BA (sqrt.c)
 *     ceilf_0 @ 0x1800A2771 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18023D880 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180254D70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wi.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180256D38 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int v7; // esi
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK *v9; // rbx
  void (*v10)(void); // rax
  int v11; // r12d
  signed __int32 v12; // edi
  struct wil_details_RecordUsageResult *v13; // r9
  HMONITOR v14; // rdi
  __int128 v15; // xmm7
  int v16; // r14d
  int v17; // edi
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  HMONITOR v21; // r8
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rdx
  float v25; // xmm0_4
  __int64 v26; // rax
  int v27; // r13d
  int v28; // r12d
  signed __int32 v29; // edi
  struct wil_details_RecordUsageResult *v30; // r9
  HMONITOR v31; // rdi
  __int128 v32; // xmm7
  int v33; // r14d
  int v34; // edi
  __int64 *v35; // rax
  __int64 *v36; // rdx
  __int64 *v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  signed __int32 v44; // edi
  struct wil_details_RecordUsageResult *v45; // r9
  __int128 v46; // xmm6
  __int128 v47; // xmm7
  __int64 v48; // xmm8_8
  __int64 (__fastcall *v49)(RTL_SRWLOCK *, _OWORD *); // rax
  int v50; // eax
  unsigned int v51; // edi
  __int64 (__fastcall *v52)(RTL_SRWLOCK *, _OWORD *); // rax
  int v53; // eax
  __int128 v54; // xmm6
  __int128 v55; // xmm7
  __int64 v56; // xmm8_8
  __int64 (__fastcall *v57)(RTL_SRWLOCK *, _OWORD *); // rax
  int v58; // eax
  __int64 (__fastcall *v59)(RTL_SRWLOCK *, _OWORD *); // rax
  int v60; // eax
  __int64 (__fastcall *v61)(RTL_SRWLOCK *, _OWORD *); // rax
  int v62; // eax
  __int64 (__fastcall *v63)(RTL_SRWLOCK *, _OWORD *); // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r13d
  int v69; // r12d
  signed __int32 v70; // edi
  struct wil_details_RecordUsageResult *v71; // r9
  HMONITOR v72; // rdi
  __int128 v73; // xmm7
  int v74; // r14d
  int v75; // edi
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 *v78; // rcx
  HMONITOR v79; // r8
  float v80; // xmm0_4
  __int64 v81; // rcx
  float v82; // xmm0_4
  int v83; // r14d
  signed __int32 v84; // edi
  struct wil_details_RecordUsageResult *v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  signed __int32 v89; // edi
  struct wil_details_RecordUsageResult *v90; // r9
  __int128 v91; // xmm6
  __int128 v92; // xmm7
  __int64 v93; // xmm8_8
  __int64 (__fastcall *v94)(RTL_SRWLOCK *, _OWORD *); // rax
  int v95; // eax
  __int64 (__fastcall *v96)(RTL_SRWLOCK *, _OWORD *); // rax
  int v97; // eax
  __int64 (__fastcall *v98)(RTL_SRWLOCK *, _OWORD *); // rax
  int v99; // eax
  __int64 (__fastcall *v100)(RTL_SRWLOCK *, __int64); // rax
  int View; // eax
  __int64 (__fastcall *v102)(void *); // rax
  __int64 (__fastcall *v104)(RTL_SRWLOCK *, _OWORD *); // rax
  int v105; // eax
  double v106; // xmm8_8
  double v107; // xmm9_8
  bool v108; // cc
  __int128 v109; // xmm0
  __int64 *v110; // r11
  char v111; // r10
  int v112; // eax
  float v113; // xmm3_4
  float v114; // xmm0_4
  double v115; // xmm1_8
  double v116; // xmm0_8
  float v117; // xmm1_4
  double v118; // xmm8_8
  double v119; // xmm9_8
  bool v120; // cc
  __int128 v121; // xmm0
  __int64 *v122; // r11
  char v123; // r10
  int v124; // eax
  float v125; // xmm3_4
  int v126; // ecx
  double v127; // xmm1_8
  double v128; // xmm0_8
  float v129; // xmm1_4
  double v130; // xmm8_8
  double v131; // xmm9_8
  bool v132; // cc
  __int128 v133; // xmm0
  __int64 *v134; // r10
  char v135; // r9
  int v136; // eax
  float v137; // xmm3_4
  double v138; // xmm1_8
  double v139; // xmm0_8
  float v140; // xmm1_4
  __int64 v141; // rdx
  int v142; // [rsp+28h] [rbp-E0h]
  signed __int32 v144; // [rsp+5Ch] [rbp-ACh] BYREF
  __int128 v145; // [rsp+68h] [rbp-A0h]
  signed __int32 v146; // [rsp+78h] [rbp-90h] BYREF
  signed __int32 v147; // [rsp+7Ch] [rbp-8Ch] BYREF
  signed __int32 v148; // [rsp+80h] [rbp-88h] BYREF
  signed __int32 v149; // [rsp+84h] [rbp-84h] BYREF
  signed __int32 v150; // [rsp+88h] [rbp-80h] BYREF
  int v151; // [rsp+8Ch] [rbp-7Ch]
  int v152; // [rsp+90h] [rbp-78h]
  __int16 v153; // [rsp+94h] [rbp-74h]
  int v154; // [rsp+98h] [rbp-70h]
  __int16 v155; // [rsp+9Ch] [rbp-6Ch]
  int v156; // [rsp+A0h] [rbp-68h]
  __int16 v157; // [rsp+A4h] [rbp-64h]
  int v158; // [rsp+A8h] [rbp-60h]
  __int16 v159; // [rsp+ACh] [rbp-5Ch]
  int v160; // [rsp+B0h] [rbp-58h]
  __int16 v161; // [rsp+B4h] [rbp-54h]
  int v162; // [rsp+B8h] [rbp-50h]
  __int16 v163; // [rsp+BCh] [rbp-4Ch]
  APTTYPE pAptType; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v165; // [rsp+C8h] [rbp-40h]
  __int128 v166; // [rsp+D0h] [rbp-38h]
  HMONITOR v167; // [rsp+E0h] [rbp-28h]
  HMONITOR hMonitor; // [rsp+E8h] [rbp-20h]
  HMONITOR v169; // [rsp+F0h] [rbp-18h]
  __int128 v170; // [rsp+F8h] [rbp-10h]
  __int128 v171; // [rsp+108h] [rbp+0h] BYREF
  __int128 v172; // [rsp+118h] [rbp+10h]
  __int64 v173; // [rsp+128h] [rbp+20h]
  int v174; // [rsp+130h] [rbp+28h] BYREF
  int v175; // [rsp+138h] [rbp+30h] BYREF
  int v176; // [rsp+140h] [rbp+38h] BYREF
  __int16 v177; // [rsp+144h] [rbp+3Ch]
  int v178; // [rsp+148h] [rbp+40h] BYREF
  __int16 v179; // [rsp+14Ch] [rbp+44h]
  int v180; // [rsp+150h] [rbp+48h] BYREF
  __int16 v181; // [rsp+154h] [rbp+4Ch]
  int v182; // [rsp+158h] [rbp+50h] BYREF
  __int16 v183; // [rsp+15Ch] [rbp+54h]
  int v184; // [rsp+160h] [rbp+58h] BYREF
  __int16 v185; // [rsp+164h] [rbp+5Ch]
  int v186; // [rsp+168h] [rbp+60h] BYREF
  __int16 v187; // [rsp+16Ch] [rbp+64h]
  int v188; // [rsp+170h] [rbp+68h] BYREF
  __int64 v189; // [rsp+178h] [rbp+70h]
  __int64 v190; // [rsp+180h] [rbp+78h]
  __int64 v191; // [rsp+188h] [rbp+80h]
  void *v192; // [rsp+190h] [rbp+88h]
  int v193; // [rsp+198h] [rbp+90h] BYREF
  int v194; // [rsp+1A0h] [rbp+98h] BYREF
  int v195; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v196; // [rsp+1B0h] [rbp+A8h]
  __int64 v197; // [rsp+1B8h] [rbp+B0h]
  __int128 v198; // [rsp+1C0h] [rbp+B8h]
  __int64 v199; // [rsp+1E8h] [rbp+E0h]
  __int128 v200; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v201; // [rsp+200h] [rbp+F8h]
  __int128 v202; // [rsp+208h] [rbp+100h] BYREF
  __int64 v203; // [rsp+218h] [rbp+110h]
  __int128 v204; // [rsp+220h] [rbp+118h] BYREF
  __int64 v205; // [rsp+230h] [rbp+128h]
  __int128 v206; // [rsp+238h] [rbp+130h] BYREF
  __int64 v207; // [rsp+248h] [rbp+140h]
  __int128 v208; // [rsp+250h] [rbp+148h] BYREF
  __int64 v209; // [rsp+260h] [rbp+158h]
  __int128 v210; // [rsp+268h] [rbp+160h] BYREF
  __int64 v211; // [rsp+278h] [rbp+170h]
  __int128 v212; // [rsp+280h] [rbp+178h] BYREF
  __int128 v213; // [rsp+290h] [rbp+188h]
  __int64 v214; // [rsp+2A0h] [rbp+198h]
  __int128 v215; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v216; // [rsp+2B8h] [rbp+1B0h]
  __int64 v217; // [rsp+2C8h] [rbp+1C0h]
  __int128 v218; // [rsp+2D0h] [rbp+1C8h] BYREF
  __int128 v219; // [rsp+2E0h] [rbp+1D8h]
  __int64 v220; // [rsp+2F0h] [rbp+1E8h]
  double v221; // [rsp+2F8h] [rbp+1F0h]
  double v222; // [rsp+300h] [rbp+1F8h]
  double v223; // [rsp+308h] [rbp+200h]
  double v224; // [rsp+310h] [rbp+208h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+318h] [rbp+210h] BYREF
  double v226; // [rsp+320h] [rbp+218h]
  double v227; // [rsp+328h] [rbp+220h]
  __int64 v228; // [rsp+330h] [rbp+228h]
  __int128 *v229; // [rsp+338h] [rbp+230h] BYREF
  int v230; // [rsp+340h] [rbp+238h]
  int v231; // [rsp+344h] [rbp+23Ch]
  __int128 *v232; // [rsp+348h] [rbp+240h] BYREF
  int v233; // [rsp+350h] [rbp+248h]
  int v234; // [rsp+354h] [rbp+24Ch]
  __int128 *v235; // [rsp+358h] [rbp+250h] BYREF
  int v236; // [rsp+360h] [rbp+258h]
  int v237; // [rsp+364h] [rbp+25Ch]
  __int128 *v238; // [rsp+368h] [rbp+260h] BYREF
  int v239; // [rsp+370h] [rbp+268h]
  int v240; // [rsp+374h] [rbp+26Ch]
  __int128 *v241; // [rsp+378h] [rbp+270h] BYREF
  int v242; // [rsp+380h] [rbp+278h]
  int v243; // [rsp+384h] [rbp+27Ch]
  __int128 *v244; // [rsp+388h] [rbp+280h] BYREF
  int v245; // [rsp+390h] [rbp+288h]
  int v246; // [rsp+394h] [rbp+28Ch]
  double v247; // [rsp+398h] [rbp+290h]
  __int64 *v248; // [rsp+3A0h] [rbp+298h]
  __int64 *v249; // [rsp+3A8h] [rbp+2A0h]
  __int64 *v250; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v251; // [rsp+3B8h] [rbp+2B0h]
  double v252; // [rsp+3C0h] [rbp+2B8h]
  __int64 v253; // [rsp+3C8h] [rbp+2C0h]
  __int64 v254; // [rsp+3D8h] [rbp+2D0h]
  __int64 v255; // [rsp+3E8h] [rbp+2E0h]
  __int64 v256; // [rsp+3F8h] [rbp+2F0h]
  __int64 v257; // [rsp+408h] [rbp+300h]
  __int64 v258; // [rsp+418h] [rbp+310h]
  __int64 *v259; // [rsp+428h] [rbp+320h]
  __int64 *v260; // [rsp+430h] [rbp+328h]
  __int64 *v261; // [rsp+438h] [rbp+330h]
  __int64 *v262; // [rsp+440h] [rbp+338h]
  double v263; // [rsp+448h] [rbp+340h]
  __int64 *v264; // [rsp+450h] [rbp+348h]
  __int64 *v265; // [rsp+458h] [rbp+350h]
  __int64 *v266; // [rsp+460h] [rbp+358h]
  __int64 *v267; // [rsp+468h] [rbp+360h]
  __int64 v268; // [rsp+470h] [rbp+368h]
  _OWORD v269[2]; // [rsp+478h] [rbp+370h] BYREF
  __int64 v270; // [rsp+498h] [rbp+390h]
  _OWORD v271[2]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v272; // [rsp+4C8h] [rbp+3C0h]
  _OWORD v273[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 v274; // [rsp+4F8h] [rbp+3F0h]
  _OWORD v275[2]; // [rsp+508h] [rbp+400h] BYREF
  __int64 v276; // [rsp+528h] [rbp+420h]
  _OWORD v277[2]; // [rsp+538h] [rbp+430h] BYREF
  __int64 v278; // [rsp+558h] [rbp+450h]
  _OWORD v279[2]; // [rsp+568h] [rbp+460h] BYREF
  __int64 v280; // [rsp+588h] [rbp+480h]
  _OWORD v281[2]; // [rsp+598h] [rbp+490h] BYREF
  __int64 v282; // [rsp+5B8h] [rbp+4B0h]
  _OWORD v283[2]; // [rsp+5C8h] [rbp+4C0h] BYREF
  __int64 v284; // [rsp+5E8h] [rbp+4E0h]
  _OWORD v285[2]; // [rsp+5F8h] [rbp+4F0h] BYREF
  __int64 v286; // [rsp+618h] [rbp+510h]
  _OWORD v287[2]; // [rsp+628h] [rbp+520h] BYREF
  __int64 v288; // [rsp+648h] [rbp+540h]
  __int64 v289; // [rsp+658h] [rbp+550h]
  _QWORD v290[2]; // [rsp+660h] [rbp+558h] BYREF
  int v291; // [rsp+670h] [rbp+568h]
  int v292; // [rsp+674h] [rbp+56Ch]
  _QWORD v293[2]; // [rsp+678h] [rbp+570h] BYREF
  int v294; // [rsp+688h] [rbp+580h]
  int v295; // [rsp+68Ch] [rbp+584h]
  _QWORD v296[2]; // [rsp+690h] [rbp+588h] BYREF
  int v297; // [rsp+6A0h] [rbp+598h]
  int v298; // [rsp+6A4h] [rbp+59Ch]
  _QWORD v299[2]; // [rsp+6A8h] [rbp+5A0h] BYREF
  int v300; // [rsp+6B8h] [rbp+5B0h]
  int v301; // [rsp+6BCh] [rbp+5B4h]
  _QWORD v302[2]; // [rsp+6C0h] [rbp+5B8h] BYREF
  int v303; // [rsp+6D0h] [rbp+5C8h]
  int v304; // [rsp+6D4h] [rbp+5CCh]
  _QWORD v305[2]; // [rsp+6D8h] [rbp+5D0h] BYREF
  int v306; // [rsp+6E8h] [rbp+5E0h]
  int v307; // [rsp+6ECh] [rbp+5E4h]
  __int128 v308; // [rsp+6F0h] [rbp+5E8h] BYREF
  __int64 v309; // [rsp+700h] [rbp+5F8h]
  __int128 v310; // [rsp+708h] [rbp+600h] BYREF
  __int64 v311; // [rsp+718h] [rbp+610h]
  __int128 v312; // [rsp+720h] [rbp+618h] BYREF
  __int64 v313; // [rsp+730h] [rbp+628h]
  __int128 v314; // [rsp+738h] [rbp+630h] BYREF
  __int64 v315; // [rsp+748h] [rbp+640h]
  __int128 v316; // [rsp+750h] [rbp+648h] BYREF
  __int64 v317; // [rsp+760h] [rbp+658h]
  __int128 v318; // [rsp+768h] [rbp+660h] BYREF
  __int64 v319; // [rsp+778h] [rbp+670h]
  struct tagMONITORINFO mi; // [rsp+780h] [rbp+678h] BYREF
  struct tagMONITORINFO v321; // [rsp+7A8h] [rbp+6A0h] BYREF
  struct tagMONITORINFO v322; // [rsp+7D0h] [rbp+6C8h] BYREF
  _BYTE v323[24]; // [rsp+7F8h] [rbp+6F0h] BYREF
  int v324; // [rsp+810h] [rbp+708h]
  int v325; // [rsp+814h] [rbp+70Ch]
  _BYTE v326[24]; // [rsp+858h] [rbp+750h] BYREF
  int v327; // [rsp+870h] [rbp+768h]
  int v328; // [rsp+874h] [rbp+76Ch]
  _BYTE v329[24]; // [rsp+8B8h] [rbp+7B0h] BYREF
  int v330; // [rsp+8D0h] [rbp+7C8h]
  int v331; // [rsp+8D4h] [rbp+7CCh]
  wil::details::in1diag3 *retaddr; // [rsp+9F0h] [rbp+8E8h]

  v268 = -2LL;
  v228 = a3;
  v199 = a6;
  v7 = 0;
  v192 = 0LL;
  v8 = (RTL_SRWLOCK *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
    goto LABEL_313;
  v8[4].Ptr = (PVOID)1;
  v8->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable';
  v8[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `IWeakReferenceSource'};
  v8[2].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v10 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v10();
  }
  v9->Ptr = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable';
  v9[1].Ptr = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `IWeakReferenceSource'};
  v9[2].Ptr = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>'};
  v9[5].Ptr = 0LL;
  LODWORD(v9[6].Ptr) = 0;
  v9[7].Ptr = 0LL;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 )
  {
    pAptType = APTTYPE_MTA;
  }
  else if ( pAptType == APTTYPE_MAINSTA || pAptType == APTTYPE_STA )
  {
    LODWORD(v9[9].Ptr) = 1;
    LODWORD(v9[10].Ptr) = 0;
    goto LABEL_9;
  }
  LODWORD(v9[9].Ptr) = 0;
  InitializeSRWLock(v9 + 10);
LABEL_9:
  LODWORD(v9[11].Ptr) = 0;
  LODWORD(v9[12].Ptr) = 0;
  if ( !v9 )
  {
LABEL_313:
    v51 = -2147024882;
    v141 = 34LL;
    goto LABEL_314;
  }
  v289 = 0LL;
  v192 = v9;
  v196 = (unsigned int)(int)*(float *)(a1 + 176);
  v197 = (unsigned int)(int)(float)(*(float *)(a1 + 180) * 0.5);
  v145 = *(_OWORD *)(a1 + 168);
  v11 = *(_DWORD *)(a1 + 208);
  hMonitor = *(HMONITOR *)(a1 + 160);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    ((void (*)(void))wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState)();
  v156 = 0;
  LOBYTE(v157) = 3;
  v176 = 0;
  v177 = v157;
  v193 = 3;
  v200 = 0uLL;
  v201 = 0LL;
  v144 = 0x10000;
  v244 = &v200;
  v245 = 0x10000;
  v246 = 0;
  do
  {
    v146 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v12 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v146, &v244) )
    {
      LODWORD(v201) = 1;
      goto LABEL_15;
    }
  }
  while ( v12 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v146,
                   v12) );
  LODWORD(v201) = 0;
LABEL_15:
  v308 = v200;
  v309 = v201;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v308,
        v13);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v308);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v299[0] = 0LL;
      v300 = 0;
      v299[1] = 2LL;
      v301 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v299);
    }
  }
  if ( !(_DWORD)v309 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA4F57Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v176,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v193,
      0LL,
      0,
      1uLL);
  v14 = hMonitor;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v166 + 1) = 0x6000000060LL;
  mi.cbSize = 40;
  memset_0(v323, 0, 0x60uLL);
  if ( GetMonitorInfoW(v14, &mi) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(v14, v323) )
    {
      v16 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
      v17 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
      if ( v16 > 0 && v17 > 0 && v324 > 0 && v325 > 0 )
      {
        v106 = (double)(100 * v324) / 2540.0;
        v221 = v106;
        v107 = (double)(100 * v325) / 2540.0;
        v222 = v107;
        v108 = v16 < v17;
        if ( v16 > v17 )
        {
          if ( v107 > v106 )
          {
LABEL_169:
            v247 = (double)(100 * v324) / 2540.0;
            v106 = (double)(100 * v325) / 2540.0;
            v221 = v106;
            v107 = v247;
            v222 = v247;
LABEL_170:
            *(_QWORD *)&v15 = sqrt(v107 * v107 + v106 * v106);
            DWORD2(v166) = (int)((double)v16 / v106);
            HIDWORD(v166) = (int)((double)v17 / v107);
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
            *((_QWORD *)&v109 + 1) = *((_QWORD *)&v166 + 1);
            *(double *)&v109 = *(double *)&v15;
            v166 = v109;
            *(_OWORD *)(v253 + 40) = v109;
            goto LABEL_29;
          }
          v108 = v16 < v17;
        }
        if ( !v108 || v106 <= v107 )
          goto LABEL_170;
        goto LABEL_169;
      }
    }
  }
  v18 = *(__int64 **)(a1 + 32);
  v248 = v18;
  v19 = (__int64 *)v18[1];
  v20 = v18;
  v21 = hMonitor;
  while ( !*((_BYTE *)v19 + 25) )
  {
    v110 = v19;
    if ( v19[4] >= (unsigned __int64)hMonitor )
    {
      v111 = 0;
      v19 = (__int64 *)*v19;
    }
    else
    {
      v111 = 1;
      v19 = (__int64 *)v19[2];
    }
    if ( !v111 )
      v20 = v110;
  }
  v249 = v18;
  if ( v20 == v18 || (unsigned __int64)hMonitor < v20[4] )
  {
    v251 = v18;
  }
  else
  {
    v250 = v20;
    std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
    v15 = *(_OWORD *)(v254 + 40);
    v166 = v15;
  }
LABEL_29:
  v190 = 0LL;
  if ( *(double *)&v15 == 0.0 || *(double *)&v15 < 8.0 )
    v22 = *((float *)&v145 + 2);
  else
    v22 = *((float *)&v145 + 2) * 0.89999998;
  LODWORD(v190) = (int)v22;
  v23 = HIDWORD(*((_QWORD *)&v166 + 1));
  v24 = 1900LL;
  if ( *(double *)&v15 == 0.0 || *(double *)&v15 < 8.0 )
  {
    v25 = *((float *)&v145 + 3) * 0.5;
  }
  else
  {
    if ( *(double *)&v15 < 23.5 )
    {
      v112 = 1600;
      if ( *(double *)&v15 >= 19.5 )
        v112 = 1900;
      v113 = (double)v112 / 2540.0 * 4.0 * (double)SHIDWORD(v166)
           + (double)SHIDWORD(v166) * 0.07874015748031496
           + (double)SHIDWORD(v166) * ((double)v112 / 2540.0);
      if ( v11 )
        v113 = (float)(v113 * 100.0) / (float)v11;
      v114 = ceilf_0(v113);
      v23 = (unsigned int)(int)v114;
      v115 = *((float *)&v145 + 3) * 0.43;
      v26 = (unsigned int)(int)v115;
      if ( (double)(int)v114 <= v115 )
        v26 = (unsigned int)v23;
      goto LABEL_34;
    }
    v116 = (double)SHIDWORD(v166);
    if ( *(double *)&v15 >= 55.0 )
    {
      v117 = (float)(int)(v116 * 6.299212598425197);
      if ( v11 )
        v117 = (float)(v117 * 100.0) / (float)v11;
    }
    else
    {
      v117 = (float)(int)((*(double *)&v15 * 260.0 + 1700.0) / 2540.0 * v116);
      if ( v11 )
        v117 = (float)(v117 * 100.0) / (float)v11;
    }
    v25 = ceilf_0(v117);
  }
  v26 = (unsigned int)(int)v25;
LABEL_34:
  v165 = v26;
  HIDWORD(v190) = v26;
  v27 = (int)*(float *)(a1 + 64);
  *(_QWORD *)&v166 = (unsigned int)(int)(float)(*(float *)(a1 + 68) * 0.5);
  v170 = *(_OWORD *)(a1 + 56);
  v28 = *(_DWORD *)(a1 + 96);
  v169 = *(HMONITOR *)(a1 + 48);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState(v23, v24, v21);
  v158 = 0;
  LOBYTE(v159) = 3;
  v178 = 0;
  v179 = v159;
  v194 = 3;
  v202 = 0uLL;
  v203 = 0LL;
  v151 = 0x10000;
  v229 = &v202;
  v230 = 0x10000;
  v231 = 0;
  do
  {
    v147 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v29 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v147, &v229) )
    {
      LODWORD(v203) = 1;
      goto LABEL_39;
    }
  }
  while ( v29 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v147,
                   v29) );
  LODWORD(v203) = 0;
LABEL_39:
  v310 = v202;
  v311 = v203;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v310,
        v30);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v310);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v302[0] = 0LL;
      v303 = 0;
      v302[1] = 2LL;
      v304 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v302);
    }
  }
  if ( !(_DWORD)v311 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA4F57Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v178,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v194,
      0LL,
      0,
      1uLL);
  v31 = v169;
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v145 + 1) = 0x6000000060LL;
  v321.cbSize = 40;
  memset_0(v326, 0, 0x60uLL);
  if ( GetMonitorInfoW(v31, &v321) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(v31, v326) )
    {
      v33 = abs32(v321.rcMonitor.right - v321.rcMonitor.left);
      v34 = abs32(v321.rcMonitor.bottom - v321.rcMonitor.top);
      if ( v33 > 0 && v34 > 0 && v327 > 0 && v328 > 0 )
      {
        v118 = (double)(100 * v327) / 2540.0;
        v223 = v118;
        v119 = (double)(100 * v328) / 2540.0;
        v224 = v119;
        v120 = v33 < v34;
        if ( v33 > v34 )
        {
          if ( v119 > v118 )
          {
LABEL_209:
            v252 = (double)(100 * v327) / 2540.0;
            v118 = (double)(100 * v328) / 2540.0;
            v223 = v118;
            v119 = v252;
            v224 = v252;
LABEL_210:
            *(_QWORD *)&v32 = sqrt(v119 * v119 + v118 * v118);
            DWORD2(v145) = (int)((double)v33 / v118);
            HIDWORD(v145) = (int)((double)v34 / v119);
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
            *((_QWORD *)&v121 + 1) = *((_QWORD *)&v145 + 1);
            *(double *)&v121 = *(double *)&v32;
            v145 = v121;
            *(_OWORD *)(v255 + 40) = v121;
            goto LABEL_53;
          }
          v120 = v33 < v34;
        }
        if ( !v120 || v118 <= v119 )
          goto LABEL_210;
        goto LABEL_209;
      }
    }
  }
  v35 = *(__int64 **)(a1 + 32);
  v259 = v35;
  v36 = (__int64 *)v35[1];
  v37 = v35;
  while ( !*((_BYTE *)v36 + 25) )
  {
    v122 = v36;
    if ( v36[4] >= (unsigned __int64)v169 )
    {
      v123 = 0;
      v36 = (__int64 *)*v36;
    }
    else
    {
      v123 = 1;
      v36 = (__int64 *)v36[2];
    }
    if ( !v123 )
      v37 = v122;
  }
  v260 = v35;
  if ( v37 == v35 || (unsigned __int64)v169 < v37[4] )
  {
    v262 = v35;
  }
  else
  {
    v261 = v37;
    std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
    v32 = *(_OWORD *)(v256 + 40);
    v145 = v32;
  }
LABEL_53:
  v189 = 0LL;
  if ( *(double *)&v32 == 0.0 || *(double *)&v32 < 8.0 )
    v38 = *((float *)&v170 + 2);
  else
    v38 = *((float *)&v170 + 2) * 0.89999998;
  LODWORD(v189) = (int)v38;
  if ( *(double *)&v32 == 0.0 || *(double *)&v32 < 8.0 )
  {
    v39 = *((float *)&v170 + 3) * 0.5;
  }
  else
  {
    if ( *(double *)&v32 < 23.5 )
    {
      v124 = 1600;
      if ( *(double *)&v32 >= 19.5 )
        v124 = 1900;
      v125 = (double)v124 / 2540.0 * 4.0 * (double)SHIDWORD(v145)
           + (double)SHIDWORD(v145) * 0.07874015748031496
           + (double)SHIDWORD(v145) * ((double)v124 / 2540.0);
      if ( v28 )
        v125 = (float)(v125 * 100.0) / (float)v28;
      v126 = (int)ceilf_0(v125);
      v127 = *((float *)&v170 + 3) * 0.43;
      v40 = (int)v127;
      if ( (double)v126 <= v127 )
        v40 = v126;
      goto LABEL_58;
    }
    v128 = (double)SHIDWORD(v145);
    if ( *(double *)&v32 >= 55.0 )
    {
      v129 = (float)(int)(v128 * 6.299212598425197);
      if ( v28 )
        v129 = (float)(v129 * 100.0) / (float)v28;
    }
    else
    {
      v129 = (float)(int)((*(double *)&v32 * 260.0 + 1700.0) / 2540.0 * v128);
      if ( v28 )
        v129 = (float)(v129 * 100.0) / (float)v28;
    }
    v39 = ceilf_0(v129);
  }
  v40 = (int)v39;
LABEL_58:
  HIDWORD(v189) = v40;
  memset_0(&v215, 0, 0x28uLL);
  *(_QWORD *)&v215 = 0xE00000001LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState(v42, v41, v43);
  v160 = 0;
  LOBYTE(v161) = 3;
  v180 = 0;
  v181 = v161;
  v195 = 3;
  v204 = 0uLL;
  v205 = 0LL;
  v151 = 0x10000;
  v232 = &v204;
  v233 = 0x10000;
  v234 = 0;
  do
  {
    v148 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v44 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v148, &v232) )
    {
      LODWORD(v205) = 1;
      goto LABEL_63;
    }
  }
  while ( v44 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v148,
                   v44) );
  LODWORD(v205) = 0;
LABEL_63:
  v312 = v204;
  v313 = v205;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v312,
        v45);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v312);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v305[0] = 0LL;
      v306 = 0;
      v305[1] = 2LL;
      v307 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v305);
    }
  }
  if ( !(_DWORD)v313 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA4F57Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v180,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v195,
      0LL,
      0,
      1uLL);
  LODWORD(v216) = v196;
  HIDWORD(v215) = v197;
  *(_QWORD *)((char *)&v216 + 4) = __PAIR64__(v196, v165);
  WORD4(v215) = 0;
  v46 = v215;
  v269[0] = v215;
  v47 = v216;
  v269[1] = v216;
  v48 = v217;
  v270 = v217;
  v49 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v49 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v50 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v269);
  else
    v50 = v49(v9, v269);
  v51 = v50;
  if ( v50 < 0 )
  {
    v141 = 69LL;
    goto LABEL_314;
  }
  v198 = v46;
  DWORD1(v198) = 13;
  v271[0] = v198;
  v271[1] = v47;
  v272 = v48;
  v52 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v52 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v53 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v271);
  else
    v53 = v52(v9, v271);
  v51 = v53;
  if ( v53 < 0 )
  {
    v141 = 73LL;
    goto LABEL_314;
  }
  memset_0(&v212, 0, 0x28uLL);
  *(_QWORD *)&v212 = 0x200000001LL;
  LODWORD(v213) = v27;
  HIDWORD(v212) = v166;
  *(_QWORD *)((char *)&v213 + 4) = __PAIR64__(v189, v40);
  HIDWORD(v214) = a4;
  WORD4(v212) = 257;
  v54 = v212;
  v273[0] = v212;
  v55 = v213;
  v273[1] = v213;
  v56 = v214;
  v274 = v214;
  v57 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v57 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v58 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v273);
  else
    v58 = v57(v9, v273);
  v51 = v58;
  if ( v58 < 0 )
  {
    v141 = 86LL;
    goto LABEL_314;
  }
  v198 = v54;
  DWORD1(v198) = 10;
  v275[0] = v198;
  v275[1] = v55;
  v276 = v56;
  v59 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v59 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v60 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v275);
  else
    v60 = v59(v9, v275);
  v51 = v60;
  if ( v60 < 0 )
  {
    v141 = 91LL;
    goto LABEL_314;
  }
  v198 = v54;
  DWORD1(v198) = 6;
  v277[0] = v198;
  v277[1] = v55;
  v278 = v56;
  v61 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v61 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v62 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v277);
  else
    v62 = v61(v9, v277);
  v51 = v62;
  if ( v62 < 0 )
  {
    v141 = 96LL;
    goto LABEL_314;
  }
  v198 = v54;
  DWORD1(v198) = 1;
  v279[0] = v198;
  v279[1] = v55;
  v280 = v56;
  v63 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v63 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v64 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v279);
  else
    v64 = v63(v9, v279);
  v51 = v64;
  if ( v64 < 0 )
  {
    v141 = 101LL;
    goto LABEL_314;
  }
  v68 = (int)*(float *)(a1 + 120);
  *(_QWORD *)&v166 = (unsigned int)(int)(*(float *)(a1 + 124) * 0.5);
  v170 = *(_OWORD *)(a1 + 112);
  v69 = *(_DWORD *)(a1 + 152);
  v167 = *(HMONITOR *)(a1 + 104);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState(v66, v65, v67);
  v162 = 0;
  LOBYTE(v163) = 3;
  v182 = 0;
  v183 = v163;
  v174 = 3;
  v206 = 0uLL;
  v207 = 0LL;
  v235 = &v206;
  v236 = 0x10000;
  v237 = 0;
  do
  {
    v149 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v70 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v149, &v235) )
    {
      LODWORD(v207) = 1;
      goto LABEL_92;
    }
  }
  while ( v70 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v149,
                   v70) );
  LODWORD(v207) = 0;
LABEL_92:
  v314 = v206;
  v315 = v207;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v314,
        v71);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v314);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v290[0] = 0LL;
      v291 = 0;
      v290[1] = 2LL;
      v292 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v290);
    }
  }
  if ( !(_DWORD)v315 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA4F57Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v182,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v174,
      0LL,
      0,
      1uLL);
  v72 = v167;
  *(_QWORD *)&v73 = 0LL;
  *((_QWORD *)&v145 + 1) = 0x6000000060LL;
  v322.cbSize = 40;
  memset_0(v329, 0, 0x60uLL);
  if ( GetMonitorInfoW(v72, &v322) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(v72, v329) )
    {
      v74 = abs32(v322.rcMonitor.right - v322.rcMonitor.left);
      v75 = abs32(v322.rcMonitor.bottom - v322.rcMonitor.top);
      if ( v74 > 0 && v75 > 0 && v330 > 0 && v331 > 0 )
      {
        v130 = (double)(100 * v330) / 2540.0;
        v226 = v130;
        v131 = (double)(100 * v331) / 2540.0;
        v227 = v131;
        v132 = v74 < v75;
        if ( v74 > v75 )
        {
          if ( v131 > v130 )
          {
LABEL_266:
            v263 = (double)(100 * v330) / 2540.0;
            v130 = (double)(100 * v331) / 2540.0;
            v226 = v130;
            v131 = v263;
            v227 = v263;
LABEL_267:
            *(_QWORD *)&v73 = sqrt(v131 * v131 + v130 * v130);
            DWORD2(v145) = (int)((double)v74 / v130);
            HIDWORD(v145) = (int)((double)v75 / v131);
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
            *((_QWORD *)&v133 + 1) = *((_QWORD *)&v145 + 1);
            *(double *)&v133 = *(double *)&v73;
            v145 = v133;
            *(_OWORD *)(v257 + 40) = v133;
            goto LABEL_106;
          }
          v132 = v74 < v75;
        }
        if ( !v132 || v130 <= v131 )
          goto LABEL_267;
        goto LABEL_266;
      }
    }
  }
  v76 = *(__int64 **)(a1 + 32);
  v264 = v76;
  v77 = (__int64 *)v76[1];
  v78 = v76;
  v79 = v167;
  while ( !*((_BYTE *)v77 + 25) )
  {
    v134 = v77;
    if ( v77[4] >= (unsigned __int64)v167 )
    {
      v135 = 0;
      v77 = (__int64 *)*v77;
    }
    else
    {
      v135 = 1;
      v77 = (__int64 *)v77[2];
    }
    if ( !v135 )
      v78 = v134;
  }
  v265 = v76;
  if ( v78 == v76 || (unsigned __int64)v167 < v78[4] )
  {
    v267 = v76;
  }
  else
  {
    v266 = v78;
    std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1 + 32);
    v73 = *(_OWORD *)(v258 + 40);
    v145 = v73;
  }
LABEL_106:
  v191 = 0LL;
  if ( *(double *)&v73 == 0.0 || *(double *)&v73 < 8.0 )
    v80 = *((float *)&v170 + 2);
  else
    v80 = *((float *)&v170 + 2) * 0.89999998;
  LODWORD(v191) = (int)v80;
  v81 = HIDWORD(*((_QWORD *)&v145 + 1));
  if ( *(double *)&v73 == 0.0 || *(double *)&v73 < 8.0 )
  {
    v82 = *((float *)&v170 + 3) * 0.5;
  }
  else
  {
    if ( *(double *)&v73 < 23.5 )
    {
      v136 = 1600;
      if ( *(double *)&v73 >= 19.5 )
        v136 = 1900;
      v137 = (double)v136 / 2540.0 * 4.0 * (double)SHIDWORD(v145)
           + (double)SHIDWORD(v145) * 0.07874015748031496
           + (double)SHIDWORD(v145) * ((double)v136 / 2540.0);
      if ( v69 )
        v137 = (float)(v137 * 100.0) / (float)v69;
      v81 = (unsigned int)(int)ceilf_0(v137);
      v138 = *((float *)&v170 + 3) * 0.43;
      v83 = (int)v138;
      if ( (double)(int)v81 <= v138 )
        v83 = v81;
      goto LABEL_111;
    }
    v139 = (double)SHIDWORD(v145);
    if ( *(double *)&v73 >= 55.0 )
    {
      v140 = (float)(int)(v139 * 6.299212598425197);
      if ( v69 )
        v140 = (float)(v140 * 100.0) / (float)v69;
    }
    else
    {
      v140 = (float)(int)((*(double *)&v73 * 260.0 + 1700.0) / 2540.0 * v139);
      if ( v69 )
        v140 = (float)(v140 * 100.0) / (float)v69;
    }
    v82 = ceilf_0(v140);
  }
  v83 = (int)v82;
LABEL_111:
  HIDWORD(v191) = v83;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetCachedFeatureEnabledState(v81, v77, v79);
  v152 = 0;
  LOBYTE(v153) = 0;
  v184 = 0;
  v185 = v153;
  v175 = 3;
  v208 = 0uLL;
  v209 = 0LL;
  v238 = &v208;
  v239 = 0x20000;
  v240 = 0;
  do
  {
    v150 = `wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data;
    v84 = `wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v150, &v238) )
    {
      LODWORD(v209) = 1;
      goto LABEL_116;
    }
  }
  while ( v84 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data,
                   v150,
                   v84) );
  LODWORD(v209) = 0;
LABEL_116:
  v316 = v208;
  v317 = v209;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xAB2AA0,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v316,
        v85);
    else
      g_wil_details_recordFeatureUsage(
        0xAB2AA0u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v316);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v293[0] = 0LL;
      v294 = 0;
      v293[1] = 6LL;
      v295 = (`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(11217568LL, 0LL, v293);
    }
  }
  if ( !(_DWORD)v317 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xAB2AA0u,
      (const struct FEATURE_LOGGED_TRAITS *)&v184,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v175,
      0LL,
      0,
      1uLL);
  memset_0(&v171, 0, 0x28uLL);
  *(_QWORD *)&v171 = 2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetCachedFeatureEnabledState(v87, v86, v88);
  v154 = 0;
  LOBYTE(v155) = 3;
  v186 = 0;
  v187 = v155;
  v188 = 3;
  v210 = 0uLL;
  v211 = 0LL;
  v241 = &v210;
  v242 = 0x10000;
  v243 = 0;
  do
  {
    v144 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    v89 = `wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v144, &v241) )
    {
      LODWORD(v211) = 1;
      goto LABEL_127;
    }
  }
  while ( v89 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
                   v144,
                   v89) );
  LODWORD(v211) = 0;
LABEL_127:
  v318 = v210;
  v319 = v211;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xA4F57D,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v318,
        v90);
    else
      g_wil_details_recordFeatureUsage(
        0xA4F57Du,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v318);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v296[0] = 0LL;
      v297 = 0;
      v296[1] = 2LL;
      v298 = (`wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10810749LL, 0LL, v296);
    }
  }
  if ( !(_DWORD)v319 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA4F57Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v186,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v188,
      0LL,
      0,
      1uLL);
  LODWORD(v172) = v196;
  HIDWORD(v171) = v197;
  *(_QWORD *)((char *)&v172 + 4) = __PAIR64__(v190, v165);
  WORD4(v171) = 0;
  v91 = v171;
  v281[0] = v171;
  v92 = v172;
  v281[1] = v172;
  v93 = v173;
  v282 = v173;
  v94 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
  if ( (char *)v94 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
    v95 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
            v9,
            v281);
  else
    v95 = v94(v9, v281);
  v51 = v95;
  if ( v95 < 0 )
  {
    v141 = 145LL;
  }
  else
  {
    v198 = v91;
    DWORD1(v198) = 1;
    v283[0] = v198;
    v283[1] = v92;
    v284 = v93;
    v96 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
    if ( (char *)v96 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
      v97 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
              v9,
              v283);
    else
      v97 = v96(v9, v283);
    v51 = v97;
    if ( v97 < 0 )
    {
      v141 = 149LL;
    }
    else
    {
      memset_0(&v218, 0, 0x28uLL);
      *(_QWORD *)&v218 = 0x200000002LL;
      LODWORD(v219) = v68;
      HIDWORD(v218) = v166;
      *(_QWORD *)((char *)&v219 + 4) = __PAIR64__(v191, v83);
      WORD4(v218) = 257;
      if ( !a5 )
        goto LABEL_140;
      v171 = v91;
      v172 = v92;
      v173 = v93;
      DWORD1(v171) = 6;
      DWORD2(v172) = (int)*(float *)(v228 + 8);
      LODWORD(v172) = DWORD2(v172);
      LODWORD(v173) = DWORD2(v172);
      v285[0] = v171;
      v285[1] = v172;
      v286 = v173;
      v104 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
      v105 = (char *)v104 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append
           ? Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
               v9,
               v285)
           : v104(v9, v285);
      v51 = v105;
      if ( v105 < 0 )
      {
        v141 = 172LL;
      }
      else
      {
LABEL_140:
        v287[0] = v218;
        v287[1] = v219;
        v288 = v220;
        v98 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _OWORD *))*((_QWORD *)v9->Ptr + 13);
        if ( (char *)v98 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append )
          v99 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
                  v9,
                  v287);
        else
          v99 = v98(v9, v287);
        v51 = v99;
        if ( v99 < 0 )
        {
          v141 = 175LL;
        }
        else
        {
          v100 = (__int64 (__fastcall *)(RTL_SRWLOCK *, __int64))*((_QWORD *)v9->Ptr + 8);
          if ( (char *)v100 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetView )
            View = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetView(
                     v9,
                     v199);
          else
            View = v100(v9, v199);
          v51 = View;
          if ( View >= 0 )
            goto LABEL_146;
          v141 = 177LL;
        }
      }
    }
  }
LABEL_314:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v141,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v51,
    v142);
  v7 = v51;
LABEL_146:
  if ( v192 )
  {
    v102 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v192 + 16LL);
    if ( v102 == Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Release(v192);
    else
      v102(v192);
  }
  return v7;
}
