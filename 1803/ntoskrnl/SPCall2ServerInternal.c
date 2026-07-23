/*
 * XREFs of SPCall2ServerInternal @ 0x1404B09F0
 * Callers:
 *     Callout @ 0x140576F10 (Callout.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1400380DC (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1400382D0 (RtlUIntAdd.c)
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     sub_1402C1674 @ 0x1402C1674 (sub_1402C1674.c)
 *     sub_1402C1E68 @ 0x1402C1E68 (sub_1402C1E68.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SPCallServerHandleClepKdf @ 0x14048AE18 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14052773C (SPCallServerHandleIsAppLicensed.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140548088 (SPCallServerHandleUpdatePolicies.c)
 *     sub_14054A670 @ 0x14054A670 (sub_14054A670.c)
 *     sub_14054A6E0 @ 0x14054A6E0 (sub_14054A6E0.c)
 *     sub_14054A750 @ 0x14054A750 (sub_14054A750.c)
 *     sub_14054A7C0 @ 0x14054A7C0 (sub_14054A7C0.c)
 *     sub_14054A830 @ 0x14054A830 (sub_14054A830.c)
 *     sub_14054A8D0 @ 0x14054A8D0 (sub_14054A8D0.c)
 *     sub_14054A980 @ 0x14054A980 (sub_14054A980.c)
 *     sub_14054A9B0 @ 0x14054A9B0 (sub_14054A9B0.c)
 *     sub_14054AA30 @ 0x14054AA30 (sub_14054AA30.c)
 *     sub_14054AA60 @ 0x14054AA60 (sub_14054AA60.c)
 *     sub_14054AB20 @ 0x14054AB20 (sub_14054AB20.c)
 *     sub_14054AB50 @ 0x14054AB50 (sub_14054AB50.c)
 *     sub_14054AC10 @ 0x14054AC10 (sub_14054AC10.c)
 *     sub_14054AC80 @ 0x14054AC80 (sub_14054AC80.c)
 *     sub_14054ACF0 @ 0x14054ACF0 (sub_14054ACF0.c)
 *     sub_14054AD20 @ 0x14054AD20 (sub_14054AD20.c)
 *     sub_14054ADD0 @ 0x14054ADD0 (sub_14054ADD0.c)
 *     sub_14054AE80 @ 0x14054AE80 (sub_14054AE80.c)
 *     sub_14054AF20 @ 0x14054AF20 (sub_14054AF20.c)
 *     sub_14054AFC0 @ 0x14054AFC0 (sub_14054AFC0.c)
 *     sub_14054B060 @ 0x14054B060 (sub_14054B060.c)
 *     sub_14054B0D0 @ 0x14054B0D0 (sub_14054B0D0.c)
 *     sub_14054B190 @ 0x14054B190 (sub_14054B190.c)
 *     sub_14054B230 @ 0x14054B230 (sub_14054B230.c)
 *     sub_14054B2E0 @ 0x14054B2E0 (sub_14054B2E0.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x140583720 (SPCallServerHandleAuthenticateCaller.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1405C0EE4 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_1405C29F0 @ 0x1405C29F0 (sub_1405C29F0.c)
 *     sub_1405C2AA0 @ 0x1405C2AA0 (sub_1405C2AA0.c)
 *     sub_1405C2E40 @ 0x1405C2E40 (sub_1405C2E40.c)
 *     sub_1405C2F50 @ 0x1405C2F50 (sub_1405C2F50.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140612428 (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_1407CCC84 @ 0x1407CCC84 (sub_1407CCC84.c)
 *     sub_1407CD25C @ 0x1407CD25C (sub_1407CD25C.c)
 *     sub_1407CD8F0 @ 0x1407CD8F0 (sub_1407CD8F0.c)
 *     sub_1407CDCA0 @ 0x1407CDCA0 (sub_1407CDCA0.c)
 *     sub_1407CDFF4 @ 0x1407CDFF4 (sub_1407CDFF4.c)
 *     sub_1407CE350 @ 0x1407CE350 (sub_1407CE350.c)
 *     sub_1407CE830 @ 0x1407CE830 (sub_1407CE830.c)
 *     sub_1407CF0AC @ 0x1407CF0AC (sub_1407CF0AC.c)
 *     sub_1407CFA00 @ 0x1407CFA00 (sub_1407CFA00.c)
 *     sub_1407CFF64 @ 0x1407CFF64 (sub_1407CFF64.c)
 *     sub_1407D0524 @ 0x1407D0524 (sub_1407D0524.c)
 *     sub_1407D0C60 @ 0x1407D0C60 (sub_1407D0C60.c)
 *     sub_1407D1140 @ 0x1407D1140 (sub_1407D1140.c)
 *     sub_1407D1C00 @ 0x1407D1C00 (sub_1407D1C00.c)
 *     sub_1407D229C @ 0x1407D229C (sub_1407D229C.c)
 *     sub_1407D2744 @ 0x1407D2744 (sub_1407D2744.c)
 *     sub_1407D2AA8 @ 0x1407D2AA8 (sub_1407D2AA8.c)
 *     sub_1407D330C @ 0x1407D330C (sub_1407D330C.c)
 *     sub_1407D38E8 @ 0x1407D38E8 (sub_1407D38E8.c)
 *     sub_1407D3C3C @ 0x1407D3C3C (sub_1407D3C3C.c)
 *     sub_1407D3F94 @ 0x1407D3F94 (sub_1407D3F94.c)
 *     sub_1407D4598 @ 0x1407D4598 (sub_1407D4598.c)
 *     sub_1407D48D0 @ 0x1407D48D0 (sub_1407D48D0.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, UINT *a5)
{
  void *v5; // rbx
  unsigned int *v6; // r12
  UINT *v7; // rdi
  unsigned __int8 *v8; // rsi
  UINT *v9; // r14
  __int64 v10; // rsi
  char *v11; // r15
  unsigned int *v12; // r8
  SIZE_T v13; // rdi
  char *v14; // r12
  unsigned int v15; // r8d
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  SIZE_T v18; // r14
  const void *v19; // r13
  unsigned int v20; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // rbx
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // rax
  signed int Acl; // r15d
  void *v27; // rcx
  size_t v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 v32; // rbx
  UINT *v33; // rax
  UINT *v34; // r8
  ULONGLONG v35; // r9
  unsigned __int8 *v36; // r14
  UINT *v37; // r12
  int v38; // esi
  ACCESS_MASK v39; // r15d
  UINT v40; // r11d
  unsigned __int8 *v41; // rsi
  unsigned __int8 *v42; // rdi
  unsigned __int8 *v43; // r8
  _BYTE *v44; // r12
  int v45; // edx
  int v46; // eax
  int v47; // r11d
  int v48; // edx
  unsigned int v49; // r15d
  int v50; // r8d
  int v51; // r11d
  int v52; // r15d
  int v53; // r11d
  int v54; // r15d
  int v55; // r11d
  int v56; // r15d
  int v57; // r11d
  int v58; // r15d
  unsigned int v59; // r11d
  unsigned __int8 *v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // r14
  unsigned int v63; // r15d
  int v64; // r11d
  unsigned __int8 v65; // al
  int v66; // eax
  int v67; // eax
  unsigned __int64 v68; // rax
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  __m128i v71; // xmm0
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm1
  __m128i v75; // xmm1
  __m128i v76; // xmm1
  int v77; // ecx
  int v78; // r12d
  UINT v79; // r11d
  size_t v80; // rsi
  char *v81; // rbx
  unsigned __int64 v82; // rdx
  PVOID v83; // r14
  unsigned int v84; // edi
  char *v85; // rcx
  unsigned int v86; // r9d
  signed int v87; // eax
  char *v88; // r8
  bool v89; // zf
  int v90; // edx
  _DWORD *v91; // rax
  unsigned int *v92; // rax
  int v93; // edx
  __int64 v94; // r8
  unsigned int *v95; // rcx
  SIZE_T v96; // rsi
  const void *v97; // r15
  unsigned int *v98; // rax
  unsigned int i; // edx
  __int64 v100; // r8
  unsigned int *v101; // rcx
  SIZE_T v102; // rdi
  const void *v103; // r14
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rbx
  PVOID v108; // rax
  PVOID v109; // rax
  int IsAppLicensed; // eax
  UINT v111; // ecx
  char *v112; // rax
  char *v113; // rbx
  ULONGLONG v114; // rcx
  ULONGLONG v115; // rdx
  __int64 *v116; // rbx
  UINT v117; // eax
  unsigned __int8 *v118; // rdi
  int v119; // ecx
  __int64 v120; // rbx
  unsigned __int64 v121; // rax
  __m128i v122; // xmm1
  __m128i v123; // xmm2
  __m128i v124; // xmm0
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i v127; // xmm1
  __m128i v128; // xmm1
  __m128i v129; // xmm1
  char *v130; // rax
  UINT *v131; // rcx
  ULONGLONG v132; // r8
  ACCESS_MASK v133; // r11d
  unsigned __int8 *v134; // r14
  _BYTE *v135; // rsi
  unsigned int v136; // r15d
  int v137; // ebx
  _BYTE *v138; // r9
  unsigned __int8 *v139; // r10
  unsigned __int8 *v140; // r8
  _BYTE *v141; // rbx
  __int64 v142; // rsi
  unsigned __int8 *v143; // rdi
  __int64 v144; // r14
  int v145; // edx
  int v146; // r15d
  int v147; // edx
  int v148; // r12d
  unsigned __int8 v149; // al
  unsigned int v150; // r15d
  int v151; // r12d
  int v152; // r15d
  int v153; // r12d
  int v154; // r15d
  int v155; // r12d
  int v156; // r15d
  unsigned int v157; // r12d
  int v158; // r15d
  int v159; // r12d
  _BYTE *v160; // r9
  ACCESS_MASK v161; // r11d
  int v162; // r15d
  UINT v163; // esi
  PVOID v164; // rax
  PVOID v165; // rbx
  UINT v166; // edx
  UINT v167; // ecx
  void *v168; // r11
  UINT v169; // eax
  _DWORD *v170; // rax
  void *v171; // rdi
  ULONGLONG v172; // rcx
  ULONGLONG v173; // rcx
  UINT v174; // eax
  void *v175; // rcx
  void *v176; // rcx
  void *v177; // rcx
  void *v178; // rcx
  void *v179; // rcx
  void *v180; // rcx
  int v182; // eax
  int v183; // eax
  PSID *v184; // rsi
  ULONG v185; // ebx
  ULONG v186; // ebx
  ULONG v187; // ebx
  ACL *v188; // rax
  ACL *v189; // rdi
  BOOLEAN v190; // bl
  const void *v191; // rbx
  void *v192; // rcx
  void *v193; // rcx
  void *v194; // rcx
  void *v195; // rcx
  void *v196; // rcx
  void *v197; // rcx
  int v198; // r11d
  int v199; // r15d
  ACCESS_MASK v200; // r10d
  UINT v201; // ebx
  int v202; // r8d
  char v203; // dl
  int v204; // eax
  unsigned __int8 *v205; // rax
  __int64 v206; // rdx
  unsigned __int8 *v207; // rbx
  __int64 v208; // rdi
  unsigned __int8 v209; // cl
  int v210; // eax
  int v211; // eax
  ACCESS_MASK v212; // r15d
  int v213; // eax
  int v214; // eax
  void *v215; // rcx
  void *v216; // rcx
  void *v217; // rcx
  int v218; // eax
  PSID *v219; // rsi
  ULONG v220; // ebx
  ULONG v221; // ebx
  ULONG v222; // ebx
  ACL *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // r8
  ACL *v226; // rdi
  BOOLEAN v227; // bl
  bool v228; // bl
  const void *v229; // rdi
  const void *v230; // rdi
  int updated; // eax
  __int64 v232; // rbx
  unsigned __int64 v233; // rdx
  unsigned int j; // r9d
  unsigned __int64 v235; // r8
  unsigned __int64 v236; // rcx
  unsigned int v237; // ecx
  __int64 v238; // r8
  const wchar_t *v239; // r9
  unsigned int v240; // eax
  size_t v241; // r14
  PVOID v242; // rsi
  unsigned __int64 v243; // rdx
  unsigned int k; // r9d
  unsigned __int64 v245; // r8
  unsigned __int64 v246; // rcx
  int v247; // ecx
  __int64 v248; // r8
  int *v249; // rax
  unsigned __int64 v250; // rax
  unsigned int v251; // esi
  unsigned int v252; // eax
  unsigned int v253; // ecx
  size_t v254; // r14
  PVOID v255; // rax
  unsigned int v256; // ecx
  unsigned int v257; // eax
  unsigned int v258; // r8d
  int v259; // eax
  unsigned int v260; // edx
  int v261; // ecx
  char *v262; // rax
  char *v263; // rdx
  char *v264; // rax
  __int64 v265; // rbx
  unsigned __int64 v266; // rdx
  unsigned int v267; // r9d
  unsigned __int64 v268; // r8
  unsigned __int64 v269; // rcx
  int v270; // ecx
  __int64 v271; // r8
  int *v272; // rax
  unsigned int v273; // ecx
  unsigned int v274; // eax
  unsigned int v275; // edx
  unsigned int v276; // ecx
  int v277; // eax
  unsigned int v278; // r8d
  char *v279; // rax
  char *v280; // rdx
  char *v281; // rax
  unsigned int v282; // ecx
  unsigned int v283; // eax
  unsigned int v284; // r8d
  int v285; // eax
  unsigned int v286; // edx
  int v287; // ecx
  char *v288; // rax
  char *v289; // rdx
  char *v290; // rax
  __int64 v291; // rbx
  bool v292; // bl
  int v293; // r8d
  const void *v294; // rdi
  const void *v295; // rdi
  NTSTATUS v296; // eax
  UINT v297; // edx
  UINT *v298; // r9
  NTSTATUS v299; // eax
  ULONGLONG v300; // r9
  UINT v301; // r10d
  int v302; // r11d
  _DWORD *v303; // r9
  _DWORD *v304; // rcx
  PVOID v305; // r9
  _DWORD *v306; // r9
  _DWORD *v307; // rcx
  unsigned int v308; // r9d
  int v309; // edx
  char v310; // r10
  int v311; // eax
  ULONGLONG v312; // rdx
  unsigned __int8 *v313; // rcx
  unsigned __int8 *v314; // rdi
  __int64 v315; // rsi
  unsigned __int8 v316; // al
  int v317; // eax
  int v318; // eax
  ACCESS_MASK v319; // r12d
  int v320; // eax
  int v321; // eax
  unsigned int *v322; // [rsp+58h] [rbp-B0h]
  UINT *v323; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v324; // [rsp+68h] [rbp-A0h]
  unsigned int v325; // [rsp+70h] [rbp-98h]
  ACCESS_MASK v326; // [rsp+70h] [rbp-98h]
  int v327; // [rsp+70h] [rbp-98h]
  int v328; // [rsp+70h] [rbp-98h]
  int v329; // [rsp+70h] [rbp-98h]
  int v330; // [rsp+70h] [rbp-98h]
  ACCESS_MASK v331; // [rsp+70h] [rbp-98h]
  int v332; // [rsp+74h] [rbp-94h]
  int v333; // [rsp+74h] [rbp-94h]
  int v334; // [rsp+74h] [rbp-94h]
  int v335; // [rsp+74h] [rbp-94h]
  int v336; // [rsp+74h] [rbp-94h]
  int v337; // [rsp+74h] [rbp-94h]
  ACCESS_MASK v338; // [rsp+74h] [rbp-94h]
  int v339; // [rsp+80h] [rbp-88h]
  UINT v340; // [rsp+80h] [rbp-88h]
  int v341; // [rsp+80h] [rbp-88h]
  int v342; // [rsp+80h] [rbp-88h]
  int v343; // [rsp+80h] [rbp-88h]
  int v344; // [rsp+80h] [rbp-88h]
  UINT v345; // [rsp+80h] [rbp-88h]
  unsigned int v346; // [rsp+84h] [rbp-84h]
  int v347; // [rsp+84h] [rbp-84h]
  int v348; // [rsp+84h] [rbp-84h]
  int v349; // [rsp+84h] [rbp-84h]
  int v350; // [rsp+84h] [rbp-84h]
  int v351; // [rsp+84h] [rbp-84h]
  unsigned int v352; // [rsp+84h] [rbp-84h]
  UINT *v353; // [rsp+88h] [rbp-80h]
  UINT uAddend[2]; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h]
  UINT uAugend; // [rsp+A0h] [rbp-68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A4h] [rbp-64h] BYREF
  unsigned __int64 v358; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v359; // [rsp+B0h] [rbp-58h]
  unsigned int v360; // [rsp+B8h] [rbp-50h]
  ULONGLONG ullAugend; // [rsp+C0h] [rbp-48h] BYREF
  UINT v362; // [rsp+C8h] [rbp-40h] BYREF
  ULONGLONG pullResult; // [rsp+D0h] [rbp-38h] BYREF
  ULONGLONG v364; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v365; // [rsp+E0h] [rbp-28h]
  UINT v366; // [rsp+E4h] [rbp-24h] BYREF
  UINT puResult; // [rsp+E8h] [rbp-20h] BYREF
  ACCESS_MASK v368[2]; // [rsp+F0h] [rbp-18h] BYREF
  NTSTATUS AccessStatus[4]; // [rsp+F8h] [rbp-10h] BYREF
  NTSTATUS v370[2]; // [rsp+108h] [rbp+0h] BYREF
  UINT v371; // [rsp+110h] [rbp+8h]
  int v372; // [rsp+114h] [rbp+Ch]
  size_t pcbLength; // [rsp+118h] [rbp+10h] BYREF
  UINT v374; // [rsp+120h] [rbp+18h]
  unsigned int v375; // [rsp+124h] [rbp+1Ch]
  unsigned int v376; // [rsp+128h] [rbp+20h]
  int v377; // [rsp+12Ch] [rbp+24h] BYREF
  unsigned int v378; // [rsp+130h] [rbp+28h]
  void *v379; // [rsp+138h] [rbp+30h]
  PVOID v380; // [rsp+140h] [rbp+38h]
  int v381; // [rsp+148h] [rbp+40h]
  int v382; // [rsp+150h] [rbp+48h]
  int v383; // [rsp+158h] [rbp+50h]
  int v384; // [rsp+160h] [rbp+58h]
  int v385; // [rsp+168h] [rbp+60h]
  int v386; // [rsp+170h] [rbp+68h]
  ULONG v387; // [rsp+178h] [rbp+70h] BYREF
  int v388; // [rsp+180h] [rbp+78h]
  int v389; // [rsp+188h] [rbp+80h]
  int v390; // [rsp+190h] [rbp+88h]
  int v391; // [rsp+194h] [rbp+8Ch]
  unsigned int v392; // [rsp+198h] [rbp+90h]
  unsigned int v393; // [rsp+19Ch] [rbp+94h]
  unsigned int v394; // [rsp+1A0h] [rbp+98h]
  int v395; // [rsp+1A4h] [rbp+9Ch]
  ULONG ReturnLength; // [rsp+1A8h] [rbp+A0h] BYREF
  ULONG v397; // [rsp+1ACh] [rbp+A4h] BYREF
  PVOID P; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v399; // [rsp+1B8h] [rbp+B0h]
  ULONGLONG v400; // [rsp+1C0h] [rbp+B8h] BYREF
  unsigned __int8 *v401; // [rsp+1C8h] [rbp+C0h]
  ULONGLONG v402; // [rsp+1D0h] [rbp+C8h] BYREF
  int v403; // [rsp+1D8h] [rbp+D0h]
  unsigned int v404; // [rsp+1DCh] [rbp+D4h]
  int v405; // [rsp+1E0h] [rbp+D8h]
  ULONGLONG v406; // [rsp+1E8h] [rbp+E0h]
  __int64 SystemInformation; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v408; // [rsp+1F8h] [rbp+F0h] BYREF
  wchar_t *v409; // [rsp+200h] [rbp+F8h]
  __int64 v410; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v411; // [rsp+210h] [rbp+108h]
  int v412; // [rsp+218h] [rbp+110h]
  int v413; // [rsp+21Ch] [rbp+114h]
  int v414; // [rsp+220h] [rbp+118h]
  int v415; // [rsp+224h] [rbp+11Ch]
  int v416; // [rsp+228h] [rbp+120h]
  int v417; // [rsp+22Ch] [rbp+124h]
  int v418; // [rsp+230h] [rbp+128h]
  int v419; // [rsp+234h] [rbp+12Ch]
  const void *v420; // [rsp+238h] [rbp+130h]
  const void *v421; // [rsp+240h] [rbp+138h]
  void *v422; // [rsp+248h] [rbp+140h]
  int *v423; // [rsp+250h] [rbp+148h]
  int *v424; // [rsp+258h] [rbp+150h]
  ULONGLONG v425; // [rsp+260h] [rbp+158h]
  _QWORD *v426; // [rsp+268h] [rbp+160h]
  UINT *v427; // [rsp+270h] [rbp+168h]
  int v428; // [rsp+278h] [rbp+170h]
  _DWORD *v429; // [rsp+280h] [rbp+178h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+288h] [rbp+180h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _BYTE v433[40]; // [rsp+2F0h] [rbp+1E8h] BYREF
  __int64 v434; // [rsp+318h] [rbp+210h] BYREF
  __int64 v435; // [rsp+320h] [rbp+218h] BYREF

  v365 = a3;
  v427 = a5;
  v5 = 0LL;
  v6 = 0LL;
  v426 = a4;
  v7 = 0LL;
  v322 = 0LL;
  v8 = 0LL;
  v323 = 0LL;
  v9 = 0LL;
  v372 = 0;
  v358 = 0LL;
  v359 = 0LL;
  *(_QWORD *)uAddend = 0LL;
  Src = 0LL;
  v324 = 0LL;
  v360 = 0;
  v411 = 0LL;
  v353 = 0LL;
  v420 = 0LL;
  v393 = 0;
  v421 = 0LL;
  v394 = 0;
  v364 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_204;
  }
  v10 = *a1;
  v11 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
  {
    Acl = -1073741675;
    v7 = 0LL;
    v8 = 0LL;
  }
  else
  {
    if ( a2 - 4 < (unsigned int)v10 )
    {
      Acl = -1073741762;
      v8 = 0LL;
      goto LABEL_204;
    }
    v12 = (unsigned int *)&v11[v10];
    if ( &v11[v10] < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
    {
      Acl = -1073741675;
      v7 = 0LL;
      v8 = 0LL;
    }
    else
    {
      if ( a2 - ((_DWORD)v10 + 4) < 4 )
      {
        Acl = -1073741762;
        v8 = 0LL;
        goto LABEL_204;
      }
      v13 = *v12;
      v14 = (char *)(v12 + 1);
      if ( v12 + 1 < v12 )
        goto LABEL_738;
      v15 = v10 + 8;
      if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
        goto LABEL_738;
      if ( a2 - v15 < (unsigned int)v13 )
      {
        Acl = -1073741762;
        v6 = 0LL;
        v7 = 0LL;
        v8 = 0LL;
        goto LABEL_204;
      }
      v16 = (unsigned int *)&v14[v13];
      if ( &v14[v13] < v14 || (v17 = v13 + v15, (unsigned int)v13 + v15 < v15) )
      {
LABEL_738:
        Acl = -1073741675;
        v6 = 0LL;
        v7 = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( a2 - v17 < 4 )
        {
          Acl = -1073741762;
          v6 = 0LL;
          v7 = 0LL;
          v8 = 0LL;
          goto LABEL_204;
        }
        v18 = *v16;
        v19 = v16 + 1;
        if ( v16 + 1 >= v16 )
        {
          v20 = v17 + 4;
          if ( v17 + 4 >= v17 )
          {
            if ( a2 - v20 < (unsigned int)v18 )
              goto LABEL_271;
            if ( (unsigned int)v18 + v20 >= v20 )
            {
              if ( a2 == (_DWORD)v18 + v20 && (unsigned int)(v10 + v18 + v13) + 12LL == a2 )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                v22 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v22 = (_QWORD *)v364;
                  Acl = -1073741801;
                  goto LABEL_33;
                }
                memset(PoolWithTag, 0, 0x30uLL);
                if ( v11 )
                {
                  *(_DWORD *)v22 = v10;
                  if ( !(_DWORD)v10 )
                  {
                    Acl = -1073741762;
                    goto LABEL_279;
                  }
                  v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x20534C53u);
                  if ( !v23 )
                    goto LABEL_278;
                  v22[1] = v23;
                  memmove(v23, v11, (unsigned int)v10);
                }
                else
                {
                  *(_DWORD *)v22 = 0;
                  v22[1] = 0LL;
                }
                if ( !v14 )
                {
                  *((_DWORD *)v22 + 4) = 0;
                  v22[3] = 0LL;
                  goto LABEL_28;
                }
                *((_DWORD *)v22 + 4) = v13;
                if ( !(_DWORD)v13 )
                {
                  Acl = -1073741762;
                  goto LABEL_279;
                }
                v24 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
                if ( v24 )
                {
                  v22[3] = v24;
                  memmove(v24, v14, v13);
LABEL_28:
                  if ( !v19 )
                  {
                    *((_DWORD *)v22 + 8) = 0;
                    v22[5] = 0LL;
                    goto LABEL_32;
                  }
                  *((_DWORD *)v22 + 8) = v18;
                  if ( (_DWORD)v18 )
                  {
                    v25 = ExAllocatePoolWithTag(PagedPool, v18, 0x20534C53u);
                    if ( v25 )
                    {
                      v22[5] = v25;
                      memmove(v25, v19, v18);
LABEL_32:
                      Acl = 0;
                      goto LABEL_33;
                    }
                    goto LABEL_278;
                  }
                  Acl = -1073741762;
LABEL_279:
                  v192 = (void *)v22[1];
                  if ( v192 )
                  {
                    ExFreePoolWithTag(v192, 0x20534C53u);
                    v22[1] = 0LL;
                  }
                  v193 = (void *)v22[3];
                  if ( v193 )
                  {
                    ExFreePoolWithTag(v193, 0x20534C53u);
                    v22[3] = 0LL;
                  }
                  v194 = (void *)v22[5];
                  if ( v194 )
                  {
                    ExFreePoolWithTag(v194, 0x20534C53u);
                    v22[5] = 0LL;
                  }
                  ExFreePoolWithTag(v22, 0x20534C53u);
                  v22 = (_QWORD *)v364;
LABEL_33:
                  if ( Acl < 0 )
                  {
                    if ( v22 )
                    {
                      v195 = (void *)v22[1];
                      if ( v195 )
                      {
                        ExFreePoolWithTag(v195, 0x20534C53u);
                        v22[1] = 0LL;
                      }
                      v196 = (void *)v22[3];
                      if ( v196 )
                      {
                        ExFreePoolWithTag(v196, 0x20534C53u);
                        v22[3] = 0LL;
                      }
                      v197 = (void *)v22[5];
                      if ( v197 )
                      {
                        ExFreePoolWithTag(v197, 0x20534C53u);
                        v22[5] = 0LL;
                      }
                      ExFreePoolWithTag(v22, 0x20534C53u);
                    }
                    v6 = 0LL;
                  }
                  else
                  {
                    v6 = (unsigned int *)v22;
                    v322 = (unsigned int *)v22;
                  }
                  if ( Acl < 0 )
                  {
                    v9 = 0LL;
LABEL_736:
                    v8 = 0LL;
                    v7 = v323;
                    v5 = 0LL;
                    goto LABEL_204;
                  }
                  v406 = 0LL;
                  v27 = 0LL;
                  v379 = 0LL;
                  v366 = 0;
                  if ( !v6
                    || !*((_QWORD *)v6 + 1)
                    || !*v6
                    || !*((_QWORD *)v6 + 5)
                    || !v6[8]
                    || !*((_QWORD *)v6 + 3)
                    || !v6[4] )
                  {
                    v9 = 0LL;
                    Acl = -1073741811;
                    v7 = 0LL;
                    v8 = 0LL;
                    v5 = 0LL;
                    goto LABEL_204;
                  }
                  v406 = *v6;
                  v28 = *((_QWORD *)v6 + 1);
                  pcbLength = v28;
                  if ( v28 )
                  {
                    v29 = *v6;
                    if ( *v6 )
                    {
                      v30 = *((_QWORD *)v6 + 3);
                      *(_QWORD *)v370 = v30;
                      if ( v30 )
                      {
                        v31 = (__int64 *)*((_QWORD *)v6 + 5);
                        if ( v31 )
                        {
                          if ( v6[8] == 8 && v6[4] == 160 )
                          {
                            v32 = *v31;
                            ullAugend = v29 - 8;
                            LOBYTE(v362) = 0;
                            v33 = (UINT *)ExAllocatePoolWithTag(PagedPool, v29 - 8, 0x20534C53u);
                            *(_QWORD *)v368 = v33;
                            v34 = v33;
                            if ( v33 )
                            {
                              v35 = ullAugend;
                              v36 = (unsigned __int8 *)v28;
                              v434 = v32;
                              v37 = v33;
                              v38 = ullAugend & 7;
                              if ( (ullAugend & 7) != 0 )
                              {
                                v330 = -1;
                                v344 = 0;
                                v198 = 0;
                                GrantedAccess = 0;
                                v199 = -1;
                                uAugend = 0;
                                v200 = 0;
                                v201 = 0;
                                v202 = 0;
                                v203 = 56;
                                do
                                {
                                  v204 = *v36;
                                  if ( v202 >= 4 )
                                    v200 |= v204 << v203;
                                  else
                                    v201 |= v204 << (v203 - 32);
                                  ++v202;
                                  v203 -= 8;
                                  ++v36;
                                }
                                while ( v202 < v38 );
                                uAugend = v201;
                                GrantedAccess = v200;
                                v364 = 30LL;
                                v205 = (unsigned __int8 *)(v30 + 158);
                                v206 = 16LL;
                                pullResult = v30 + 158;
                                v207 = (unsigned __int8 *)(v30 + 126);
                                *(_QWORD *)AccessStatus = 16LL;
                                v208 = 30LL;
                                do
                                {
                                  v209 = v205[1];
                                  if ( v209 < 0x1Fu )
                                  {
                                    v210 = funcs_1404B10CE[v209](
                                             v208 + 1,
                                             *(v207 - 2),
                                             *(v207 - 1),
                                             *v207,
                                             v207[1],
                                             (__int64)&v434,
                                             v198);
                                    v198 = v344;
                                    v199 = v210 ^ v330;
                                    v205 = (unsigned __int8 *)pullResult;
                                    v206 = *(_QWORD *)AccessStatus;
                                    v330 = v199;
                                  }
                                  if ( *v205 < 0x1Fu )
                                  {
                                    v211 = funcs_1404B10CE[*v205](
                                             v208,
                                             *(v207 - 6),
                                             *(v207 - 5),
                                             *(v207 - 4),
                                             *(v207 - 3),
                                             (__int64)&v434,
                                             v199);
                                    v199 = v330;
                                    v198 = v211 ^ v344;
                                    v205 = (unsigned __int8 *)pullResult;
                                    v206 = *(_QWORD *)AccessStatus;
                                    v344 = v198;
                                  }
                                  v205 -= 2;
                                  v208 -= 2LL;
                                  v207 -= 8;
                                  pullResult = (ULONGLONG)v205;
                                  *(_QWORD *)AccessStatus = --v206;
                                }
                                while ( v206 );
                                v40 = uAugend ^ v198;
                                v212 = GrantedAccess ^ v199;
                                v213 = 0;
                                v30 = *(_QWORD *)v370;
                                v345 = v40;
                                v331 = v212;
                                if ( (ullAugend & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v213 >= 4 )
                                    {
                                      v212 = __ROL4__(v212, 8);
                                      *(_BYTE *)v37 = v212;
                                    }
                                    else
                                    {
                                      v40 = __ROL4__(v40, 8);
                                      *(_BYTE *)v37 = v40;
                                    }
                                    ++v213;
                                    v37 = (UINT *)((char *)v37 + 1);
                                  }
                                  while ( v213 < v38 );
                                  v40 = v345;
                                  v212 = v331;
                                }
                                LODWORD(v32) = v434;
                                v214 = v38 - 4;
                                v35 = ullAugend;
                                v34 = *(UINT **)v368;
                                if ( v38 - 4 <= 0 )
                                {
                                  v39 = 0;
                                  if ( v214 < 0 )
                                    v40 = v40 >> (-8 * v214) << (-8 * v214);
                                }
                                else
                                {
                                  v39 = v212 >> (8 * (4 - v214)) << (8 * (4 - v214));
                                }
                              }
                              else
                              {
                                GrantedAccess = -1;
                                uAugend = 0;
                                v39 = 0;
                                v40 = 0;
                              }
                              v364 = v35 >> 3;
                              if ( v35 >> 3 )
                              {
                                v41 = (unsigned __int8 *)(v30 + 158);
                                v42 = (unsigned __int8 *)(v30 + 126);
                                v401 = v42;
                                v43 = v36 + 2;
                                v44 = (char *)v37 + 7;
                                v399 = v41;
                                while ( 1 )
                                {
                                  v45 = v43[2] << 8;
                                  v46 = v43[3];
                                  v47 = (v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8)) ^ v40;
                                  v370[0] = v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8);
                                  v48 = v43[5] | ((v43[4] | ((v46 | v45) << 8)) << 8);
                                  pullResult = (ULONGLONG)(v43 + 8);
                                  AccessStatus[0] = v48;
                                  v49 = v32 ^ HIDWORD(v434) ^ v47 ^ v48 ^ v39;
                                  v50 = (unsigned __int16)v32;
                                  v51 = (v49 >> 8) ^ (WORD2(v434) * (v49 ^ WORD1(v434))) ^ v47;
                                  v52 = (WORD1(v434) * __ROR4__(HIDWORD(v434) - v51, 11) - __ROR4__(v51, 12)) ^ v49;
                                  v53 = ((unsigned __int16)v32 * __ROL4__(HIDWORD(v434) ^ v52, 8) - __ROL4__(v52, 2)) ^ v51;
                                  v54 = __ROR4__(v53, 9) ^ (HIWORD(v434) * __ROR4__(v53 - v32, 4)) ^ v52;
                                  v55 = (__ROR4__(v54, 4) + WORD2(v434) * __ROR4__(v32 - v54, 10)) ^ v53;
                                  v56 = (WORD1(v434) * __ROL4__(HIWORD(v434) ^ v55, 4) - __ROR4__(v55, 16)) ^ v54;
                                  v57 = ((unsigned __int16)v32 * (WORD1(v434) ^ v56) - __ROR4__(v56, 7)) ^ v55;
                                  v58 = (v57 - HIWORD(v434) - v32) ^ v56;
                                  v59 = __ROR4__(v58, 11) ^ (WORD2(v434) * __ROR4__(v32 - v58, 9)) ^ v57;
                                  v60 = v41;
                                  v61 = 30LL;
                                  v62 = 16LL;
                                  v63 = (WORD1(v434) * (v59 - WORD2(v434)) - (v59 >> 13)) ^ v58;
                                  v325 = v63;
                                  v64 = (v63 >> 15) ^ (v50 * __ROL4__(v63 - WORD2(v434), 3)) ^ v59;
                                  v339 = v64;
                                  do
                                  {
                                    v65 = v60[1];
                                    if ( v65 < 0x1Fu )
                                    {
                                      v67 = funcs_1404B10CE[v65](
                                              v61 + 1,
                                              *(v42 - 2),
                                              *(v42 - 1),
                                              *v42,
                                              v42[1],
                                              (__int64)&v434,
                                              v64);
                                      v64 = v339;
                                      v63 = v67 ^ v325;
                                      v325 ^= v67;
                                    }
                                    if ( *v60 < 0x1Fu )
                                    {
                                      v66 = funcs_1404B10CE[*v60](
                                              v61,
                                              *(v42 - 6),
                                              *(v42 - 5),
                                              *(v42 - 4),
                                              *(v42 - 3),
                                              (__int64)&v434,
                                              v63);
                                      v63 = v325;
                                      v64 = v66 ^ v339;
                                      v339 ^= v66;
                                    }
                                    v61 -= 2LL;
                                    v42 -= 8;
                                    v60 -= 2;
                                    --v62;
                                  }
                                  while ( v62 );
                                  v326 = GrantedAccess ^ v63;
                                  v340 = uAugend ^ v64;
                                  *(v44 - 4) = uAugend ^ v64;
                                  v341 = __ROR4__(v340, 8);
                                  *v44 = v326;
                                  v327 = __ROR4__(v326, 8);
                                  *(v44 - 5) = v341;
                                  v342 = __ROR4__(v341, 8);
                                  *(v44 - 1) = v327;
                                  v328 = __ROR4__(v327, 8);
                                  *(v44 - 6) = v342;
                                  v343 = __ROR4__(v342, 8);
                                  *(v44 - 2) = v328;
                                  v329 = __ROR4__(v328, 8);
                                  *(v44 - 7) = v343;
                                  *(v44 - 3) = v329;
                                  v44 += 8;
                                  v40 = __ROR4__(v343, 8);
                                  v39 = __ROR4__(v329, 8);
                                  v89 = v364-- == 1;
                                  uAugend = v370[0];
                                  GrantedAccess = AccessStatus[0];
                                  if ( v89 )
                                    break;
                                  LODWORD(v32) = v434;
                                  v43 = (unsigned __int8 *)pullResult;
                                  v41 = v399;
                                  v42 = v401;
                                }
                                v35 = ullAugend;
                                v34 = *(UINT **)v368;
                              }
                              v68 = 0LL;
                              if ( v35 )
                              {
                                if ( v35 < 0x20 )
                                {
                                  v77 = v362;
                                }
                                else
                                {
                                  v69 = 0LL;
                                  v70 = 0LL;
                                  do
                                  {
                                    v69 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v34 + v68)), v69);
                                    v71 = _mm_loadu_si128((const __m128i *)((char *)v34 + v68 + 16));
                                    v68 += 32LL;
                                    v72 = _mm_xor_si128(v71, v70);
                                    v70 = v72;
                                  }
                                  while ( v68 < (v35 & 0xFFFFFFFFFFFFFFE0uLL) );
                                  v73 = _mm_xor_si128(v69, v72);
                                  v74 = _mm_xor_si128(v73, _mm_srli_si128(v73, 8));
                                  v75 = _mm_xor_si128(v74, _mm_srli_si128(v74, 4));
                                  v76 = _mm_xor_si128(v75, _mm_srli_si128(v75, 2));
                                  v77 = _mm_cvtsi128_si32(_mm_xor_si128(v76, _mm_srli_si128(v76, 1)));
                                  v362 = v77;
                                }
                                if ( v68 < v35 )
                                {
                                  do
                                    LOBYTE(v77) = *((_BYTE *)v34 + v68++) ^ v77;
                                  while ( v68 < v35 );
                                  v362 = v77;
                                }
                              }
                              if ( (unsigned __int8)v362 == *(_QWORD *)(v35 + pcbLength) )
                              {
                                Acl = v366;
                                v7 = v34;
                                v323 = v34;
                                v78 = -1;
                                v406 = v35;
                                v379 = 0LL;
                                v372 = v35;
                                goto LABEL_73;
                              }
                              ExFreePoolWithTag(v34, 0x20534C53u);
                            }
                            v27 = v379;
                          }
                        }
                      }
                    }
                  }
                  v78 = -1;
                  Acl = -1073741823;
                  if ( v27 )
                  {
                    ExFreePoolWithTag(v27, 0x20534C53u);
                    v379 = 0LL;
                  }
                  v7 = 0LL;
                  LODWORD(v35) = v372;
LABEL_73:
                  if ( Acl < 0 )
                    goto LABEL_734;
                  if ( (unsigned int)v35 >= 4 )
                  {
                    v79 = *v7;
                    v362 = *v7;
                    if ( v7 + 1 < v7 )
                      goto LABEL_327;
                    if ( (unsigned int)(v35 - 4) >= 4 )
                    {
                      v80 = v7[1];
                      v81 = (char *)(v7 + 2);
                      if ( v7 + 2 < v7 + 1 )
                        goto LABEL_327;
                      if ( (int)v35 - 8 >= (unsigned int)v80 )
                      {
                        if ( (unsigned int)v80 < 0xFFFFFFF8 )
                        {
                          v82 = (unsigned __int64)&v81[v80];
                          if ( (char *)v7 + (unsigned int)v35 < &v81[v80] || (unsigned int)v35 - 8LL - v80 >= 8 )
                          {
                            Acl = -1073741762;
LABEL_104:
                            if ( Acl >= 0 )
                            {
                              if ( v359 )
                              {
                                if ( (_DWORD)v358 )
                                {
                                  v90 = *(_DWORD *)v359;
                                  v91 = (char *)v359 + 4;
                                  if ( (char *)v359 + 4 >= v359 )
                                  {
                                    v417 = *(_DWORD *)v359;
                                    if ( !v90 )
                                      v91 = 0LL;
                                    v429 = v91;
                                    Acl = 0;
                                    if ( v90 == 4 )
                                    {
                                      v395 = *v91;
                                      goto LABEL_112;
                                    }
                                    Acl = -1073741789;
LABEL_326:
                                    v9 = 0LL;
                                    v8 = 0LL;
                                    v5 = 0LL;
                                    goto LABEL_263;
                                  }
                                  Acl = -1073741675;
                                }
                                else
                                {
                                  Acl = -1073741811;
                                }
                              }
                              else
                              {
                                Acl = -1073741811;
                              }
LABEL_112:
                              if ( Acl >= 0 )
                              {
                                if ( !v359 )
                                {
                                  v9 = 0LL;
                                  Acl = -1073741811;
                                  v6 = v322;
                                  v8 = 0LL;
                                  v5 = 0LL;
                                  goto LABEL_206;
                                }
                                if ( (unsigned int)v358 <= 1 )
                                {
                                  Acl = -1073741811;
                                }
                                else
                                {
                                  v92 = (unsigned int *)v359;
                                  v93 = 0;
                                  do
                                  {
                                    v94 = *v92;
                                    v95 = v92 + 1;
                                    if ( v92 + 1 < v92 )
                                      goto LABEL_325;
                                    v92 = (unsigned int *)((char *)v95 + v94);
                                    if ( (unsigned int *)((char *)v95 + v94) < v95 )
                                      goto LABEL_325;
                                    ++v93;
                                  }
                                  while ( !v93 );
                                  v96 = *v92;
                                  v97 = v92 + 1;
                                  if ( v92 + 1 < v92 )
                                  {
LABEL_325:
                                    Acl = -1073741675;
                                  }
                                  else
                                  {
                                    v393 = *v92;
                                    if ( !(_DWORD)v96 )
                                      v97 = 0LL;
                                    v420 = v97;
                                    if ( (unsigned int)v358 > 2 )
                                    {
                                      v98 = (unsigned int *)v359;
                                      for ( i = 0; i < 2; ++i )
                                      {
                                        v100 = *v98;
                                        v101 = v98 + 1;
                                        if ( v98 + 1 < v98 )
                                          goto LABEL_325;
                                        v98 = (unsigned int *)((char *)v101 + v100);
                                        if ( (unsigned int *)((char *)v101 + v100) < v101 )
                                          goto LABEL_325;
                                      }
                                      v102 = *v98;
                                      v103 = v98 + 1;
                                      if ( v98 + 1 < v98 )
                                      {
                                        v9 = 0LL;
                                        Acl = -1073741675;
                                        v8 = 0LL;
                                        v5 = 0LL;
                                        goto LABEL_262;
                                      }
                                      v394 = *v98;
                                      if ( !(_DWORD)v102 )
                                        v103 = 0LL;
                                      v421 = v103;
                                      v104 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                                      v107 = v104;
                                      if ( !v104 )
                                      {
                                        v9 = 0LL;
                                        Acl = -1073741801;
                                        goto LABEL_140;
                                      }
                                      memset(v104, 0, 0x30uLL);
                                      *(_DWORD *)v107 = 0;
                                      v107[1] = 0LL;
                                      if ( v97 )
                                      {
                                        *((_DWORD *)v107 + 4) = v96;
                                        if ( !(_DWORD)v96 )
                                        {
                                          Acl = -1073741762;
LABEL_348:
                                          v215 = (void *)v107[1];
                                          if ( v215 )
                                          {
                                            ExFreePoolWithTag(v215, 0x20534C53u);
                                            v107[1] = 0LL;
                                          }
                                          v216 = (void *)v107[3];
                                          if ( v216 )
                                          {
                                            ExFreePoolWithTag(v216, 0x20534C53u);
                                            v107[3] = 0LL;
                                          }
                                          v217 = (void *)v107[5];
                                          if ( v217 )
                                          {
                                            ExFreePoolWithTag(v217, 0x20534C53u);
                                            v107[5] = 0LL;
                                          }
                                          ExFreePoolWithTag(v107, 0x20534C53u);
                                          v9 = 0LL;
LABEL_140:
                                          if ( Acl < 0 )
                                            goto LABEL_265;
                                          if ( v395 )
                                          {
                                            switch ( v395 )
                                            {
                                              case 1:
                                                v184 = (PSID *)qword_140861470;
                                                v185 = RtlLengthSid(*(PSID *)(qword_140861470 + 392));
                                                v186 = RtlLengthSid(v184[48]) + v185;
                                                v187 = RtlLengthSid(v184[34]) + 32 + v186;
                                                v188 = (ACL *)ExAllocatePoolWithTag(PagedPool, v187, 0x20534C53u);
                                                v189 = v188;
                                                if ( !v188 )
                                                {
                                                  Acl = -1073741801;
                                                  goto LABEL_257;
                                                }
                                                Acl = RtlCreateAcl(v188, v187, 2u);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlpAddKnownAce(v189, v184[48], 0);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlpAddKnownAce(v189, v184[49], 0);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlpAddKnownAce(v189, v184[34], 0);
                                                      if ( Acl >= 0 )
                                                      {
                                                        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                                                        if ( Acl >= 0 )
                                                        {
                                                          Acl = RtlSetDaclSecurityDescriptor(
                                                                  SecurityDescriptor,
                                                                  1u,
                                                                  v189,
                                                                  0);
                                                          if ( Acl >= 0 )
                                                          {
                                                            SeCaptureSubjectContext(&SubjectContext);
                                                            v190 = SeAccessCheck(
                                                                     SecurityDescriptor,
                                                                     &SubjectContext,
                                                                     0,
                                                                     0x20u,
                                                                     0,
                                                                     0LL,
                                                                     (PGENERIC_MAPPING)&IopFileMapping,
                                                                     1,
                                                                     &GrantedAccess,
                                                                     AccessStatus);
                                                            SeReleaseSubjectContext(&SubjectContext);
                                                            if ( !v190 )
                                                              Acl = AccessStatus[0];
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                ExFreePoolWithTag(v189, 0x20534C53u);
                                                if ( Acl < 0 )
                                                  goto LABEL_265;
                                                ReturnLength = 0;
                                                SystemInformation = 8LL;
                                                Acl = 0;
                                                ZwQuerySystemInformation(
                                                  SystemCodeIntegrityInformation,
                                                  &SystemInformation,
                                                  8u,
                                                  &ReturnLength);
                                                if ( v322[4] != 160 )
                                                  goto LABEL_367;
                                                v191 = (const void *)*((_QWORD *)v322 + 3);
                                                if ( memcmp(qword_1407FC9E0, v191, 0xA0uLL)
                                                  || v9[4] != 160
                                                  || memcmp(qword_1407FD020, *((const void **)v9 + 3), 0xA0uLL)
                                                  || v322[8] != 8
                                                  || **((_QWORD **)v322 + 5) != 0xA564595855B292C4uLL
                                                  || v9[8] != 8
                                                  || **((_QWORD **)v9 + 5) != 0x1B732BD76B4D09FCLL )
                                                {
                                                  if ( memcmp(qword_1407FCC60, v191, 0xA0uLL)
                                                    || v9[4] != 160
                                                    || memcmp(qword_1407FC800, *((const void **)v9 + 3), 0xA0uLL)
                                                    || v322[8] != 8
                                                    || **((_QWORD **)v322 + 5) != 0x93278D843BBDC445uLL
                                                    || v9[8] != 8
                                                    || **((_QWORD **)v9 + 5) != 0x6223E824AB21D998LL )
                                                  {
LABEL_367:
                                                    Acl = -2147024891;
                                                  }
                                                  if ( Acl < 0 )
                                                    goto LABEL_265;
                                                }
                                                Acl = 0;
                                                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                                                  Acl = -2147024891;
LABEL_257:
                                                if ( Acl < 0 )
                                                  goto LABEL_265;
                                                Acl = SPCallServerHandleUpdatePolicies(&v358, v9, v365, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 2:
                                                Acl = SPCallServerHandleAuthenticateCaller(v106, v9, v365, uAddend);
                                                if ( Acl < 0 )
                                                  goto LABEL_261;
                                                goto LABEL_144;
                                              case 4:
                                                Acl = sub_1407CD8F0(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 5:
                                                IsAppLicensed = SPCallServerHandleWaitForDisplayWindow(
                                                                  &v358,
                                                                  v9,
                                                                  0LL,
                                                                  uAddend);
                                                goto LABEL_143;
                                              case 6:
                                                Acl = sub_1407D4598(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 7:
                                                v218 = sub_1407D2744(&v358, v9, 0LL, uAddend);
                                                goto LABEL_373;
                                              case 22:
                                                Acl = sub_1407D0C60(&v358, v105, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 23:
                                                v219 = (PSID *)qword_140861470;
                                                v220 = RtlLengthSid(*(PSID *)(qword_140861470 + 384));
                                                v221 = RtlLengthSid(v219[34]) + v220;
                                                v222 = RtlLengthSid(v219[49]) + 32 + v221;
                                                v223 = (ACL *)ExAllocatePoolWithTag(PagedPool, v222, 0x20534C53u);
                                                v226 = v223;
                                                if ( v223 )
                                                {
                                                  Acl = RtlCreateAcl(v223, v222, 2u);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlpAddKnownAce(v226, v219[48], 0);
                                                    if ( Acl >= 0 )
                                                    {
                                                      Acl = RtlpAddKnownAce(v226, v219[49], 0);
                                                      if ( Acl >= 0 )
                                                      {
                                                        Acl = RtlpAddKnownAce(v226, v219[34], 0);
                                                        if ( Acl >= 0 )
                                                        {
                                                          Acl = RtlCreateSecurityDescriptor(v433, 1u);
                                                          if ( Acl >= 0 )
                                                          {
                                                            Acl = RtlSetDaclSecurityDescriptor(v433, 1u, v226, 0);
                                                            if ( Acl >= 0 )
                                                            {
                                                              SeCaptureSubjectContext(&SubjectSecurityContext);
                                                              v227 = SeAccessCheck(
                                                                       v433,
                                                                       &SubjectSecurityContext,
                                                                       0,
                                                                       0x20u,
                                                                       0,
                                                                       0LL,
                                                                       (PGENERIC_MAPPING)&IopFileMapping,
                                                                       1,
                                                                       v368,
                                                                       v370);
                                                              SeReleaseSubjectContext(&SubjectSecurityContext);
                                                              if ( !v227 )
                                                                Acl = v370[0];
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  ExFreePoolWithTag(v226, 0x20534C53u);
                                                  if ( Acl >= 0 )
                                                  {
                                                    v397 = 0;
                                                    v408 = 8LL;
                                                    v228 = 0;
                                                    ZwQuerySystemInformation(
                                                      SystemCodeIntegrityInformation,
                                                      &v408,
                                                      8u,
                                                      &v397);
                                                    if ( v322[4] == 160 )
                                                    {
                                                      v229 = (const void *)*((_QWORD *)v322 + 3);
                                                      if ( !memcmp(qword_1407FCA80, v229, 0xA0uLL)
                                                        && v9[4] == 160
                                                        && !memcmp(qword_1407FCBC0, *((const void **)v9 + 3), 0xA0uLL)
                                                        && v322[8] == 8
                                                        && **((_QWORD **)v322 + 5) == 0x35DCEB18766AABAALL
                                                        && v9[8] == 8
                                                        && **((_QWORD **)v9 + 5) == 0x14CEA8BAE086077CLL
                                                        || !memcmp(qword_1407FCE40, v229, 0xA0uLL)
                                                        && v9[4] == 160
                                                        && !memcmp(qword_1407FD2A0, *((const void **)v9 + 3), 0xA0uLL)
                                                        && v322[8] == 8
                                                        && **((_QWORD **)v322 + 5) == 0xF10D668DB2BB8BB9uLL
                                                        && v9[8] == 8
                                                        && **((_QWORD **)v9 + 5) == 0x768DFD321621EA95LL
                                                        || (v230 = (const void *)*((_QWORD *)v322 + 3),
                                                            !memcmp(qword_1407FD200, v230, 0xA0uLL))
                                                        && v9[4] == 160
                                                        && !memcmp(sub_1407FC760, *((const void **)v9 + 3), 0xA0uLL)
                                                        && v322[8] == 8
                                                        && **((_QWORD **)v322 + 5) == 0xA10B922F1A2F2A8AuLL
                                                        && v9[8] == 8
                                                        && **((_QWORD **)v9 + 5) == 0xC349B50B0A716A96uLL )
                                                      {
                                                        v228 = 1;
                                                      }
                                                      else if ( !memcmp(qword_1407FCDA0, v230, 0xA0uLL)
                                                             && v9[4] == 160
                                                             && !memcmp(
                                                                   qword_1407FCEE0,
                                                                   *((const void **)v9 + 3),
                                                                   0xA0uLL)
                                                             && v322[8] == 8
                                                             && **((_QWORD **)v322 + 5) == 0xA6723CF736811074uLL
                                                             && v9[8] == 8 )
                                                      {
                                                        v228 = **((_QWORD **)v9 + 5) == 0x7511056E178DA076LL;
                                                      }
                                                    }
                                                    Acl = -2147024891;
                                                    v225 = 0LL;
                                                    if ( v228 )
                                                    {
                                                      v377 = 0;
                                                      Acl = 0;
                                                      updated = QueryUpdateFileEaAllowedExt(&v377);
                                                      if ( updated == -1073741637
                                                        || (Acl = updated, updated >= 0) && v377 != 1 )
                                                      {
                                                        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                                                          Acl = -2147024891;
                                                      }
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  Acl = -1073741801;
                                                }
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = sub_1407D0524(&v358, v224, v225, uAddend);
                                                  if ( Acl >= 0 )
                                                    goto LABEL_144;
                                                }
                                                goto LABEL_261;
                                              case 24:
                                                v218 = sub_1407CFF64(&v358, v105, 0LL, uAddend);
LABEL_373:
                                                Acl = v218;
                                                if ( v218 < 0 )
                                                  goto LABEL_261;
                                                goto LABEL_144;
                                              case 30:
                                                v232 = -1LL;
                                                v380 = 0LL;
                                                if ( (unsigned int)v358 <= 3 )
                                                {
                                                  Acl = -1073741811;
                                                  goto LABEL_458;
                                                }
                                                v233 = (unsigned __int64)v359;
                                                for ( j = 0; j < 3; ++j )
                                                {
                                                  v235 = -1LL;
                                                  if ( v233 + 4 >= v233 )
                                                    v235 = v233 + 4;
                                                  Acl = v233 + 4 < v233 ? 0xC0000095 : 0;
                                                  if ( v233 + 4 < v233 )
                                                    goto LABEL_445;
                                                  v236 = v235 + *(unsigned int *)v233;
                                                  v233 = -1LL;
                                                  if ( v236 >= v235 )
                                                    v233 = v236;
                                                  Acl = v236 < v235 ? 0xC0000095 : 0;
                                                  if ( v236 < v235 )
                                                    goto LABEL_445;
                                                }
                                                v237 = *(_DWORD *)v233;
                                                v238 = -1LL;
                                                if ( v233 + 4 >= v233 )
                                                  v238 = v233 + 4;
                                                Acl = v233 + 4 < v233 ? 0xC0000095 : 0;
                                                if ( v233 + 4 < v233 )
                                                {
LABEL_445:
                                                  v237 = v376;
                                                  v239 = v409;
                                                  goto LABEL_446;
                                                }
                                                v376 = *(_DWORD *)v233;
                                                v239 = 0LL;
                                                if ( v237 )
                                                  v239 = (const wchar_t *)v238;
                                                v409 = (wchar_t *)v239;
LABEL_446:
                                                if ( Acl >= 0 )
                                                {
                                                  if ( !v237 )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_465;
                                                  }
                                                  if ( (v237 & 1) != 0 )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_465;
                                                  }
                                                  if ( v239[((unsigned __int64)v237 >> 1) - 1] )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_465;
                                                  }
                                                  if ( StringCbLengthW(v239, v237, &pcbLength) < 0 )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_465;
                                                  }
                                                  if ( pcbLength + 2 != v376 )
                                                  {
                                                    Acl = -1073741762;
                                                    goto LABEL_465;
                                                  }
                                                  v422 = v409;
                                                  v375 = pcbLength >> 1;
                                                }
LABEL_458:
                                                if ( Acl < 0 )
                                                  goto LABEL_498;
                                                v240 = 2 * v375 + 2;
                                                if ( 2 * v375 == -2 )
                                                {
                                                  Acl = -1073741762;
                                                }
                                                else
                                                {
                                                  v241 = v240;
                                                  v242 = ExAllocatePoolWithTag(PagedPool, v240, 0x20534C53u);
                                                  if ( v242 )
                                                  {
                                                    Acl = 0;
                                                    memmove(v242, v422, v241);
                                                    v404 = v375;
                                                    v380 = v242;
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741801;
                                                  }
                                                  v9 = v353;
                                                }
LABEL_465:
                                                if ( Acl < 0 )
                                                  goto LABEL_498;
                                                if ( (unsigned int)v358 > 4 )
                                                {
                                                  v243 = (unsigned __int64)v359;
                                                  for ( k = 0; k < 4; ++k )
                                                  {
                                                    v245 = -1LL;
                                                    if ( v243 + 4 >= v243 )
                                                      v245 = v243 + 4;
                                                    Acl = v243 + 4 < v243 ? 0xC0000095 : 0;
                                                    if ( v243 + 4 < v243 )
                                                      goto LABEL_482;
                                                    v246 = v245 + *(unsigned int *)v243;
                                                    v243 = -1LL;
                                                    if ( v246 >= v245 )
                                                      v243 = v246;
                                                    Acl = v246 < v245 ? 0xC0000095 : 0;
                                                    if ( v246 < v245 )
                                                      goto LABEL_482;
                                                  }
                                                  v247 = *(_DWORD *)v243;
                                                  v248 = -1LL;
                                                  if ( v243 + 4 >= v243 )
                                                    v248 = v243 + 4;
                                                  Acl = v243 + 4 < v243 ? 0xC0000095 : 0;
                                                  if ( v243 + 4 < v243 )
                                                  {
LABEL_482:
                                                    v247 = v403;
                                                    v249 = v423;
                                                    goto LABEL_483;
                                                  }
                                                  v403 = *(_DWORD *)v243;
                                                  v249 = 0LL;
                                                  if ( v247 )
                                                    v249 = (int *)v248;
                                                  v423 = v249;
LABEL_483:
                                                  if ( Acl >= 0 )
                                                  {
                                                    if ( v247 != 4 )
                                                    {
                                                      Acl = -1073741789;
                                                      goto LABEL_498;
                                                    }
                                                    v405 = *v249;
                                                  }
                                                }
                                                else
                                                {
                                                  Acl = -1073741811;
                                                }
                                                if ( Acl >= 0 )
                                                {
                                                  v416 = 8;
                                                  if ( qword_1408610B0 )
                                                  {
                                                    ExFreePoolWithTag(qword_1408610B0, 0x20534C53u);
                                                    qword_1408610B0 = 0LL;
                                                  }
                                                  v250 = 2LL * v404;
                                                  stru_1408611F8.Length = 0;
                                                  stru_1408611F8.Buffer = 0LL;
                                                  if ( v250 > 0xFFFFFFFF )
                                                  {
                                                    Acl = -1073741675;
                                                  }
                                                  else
                                                  {
                                                    v251 = 2 * v404;
                                                    v252 = v250 + 2;
                                                    v253 = -1;
                                                    if ( v251 + 2 >= v251 )
                                                      v253 = v252;
                                                    Acl = v252 < v251 ? 0xC0000095 : 0;
                                                    if ( v252 >= v251 )
                                                    {
                                                      if ( v253 )
                                                      {
                                                        v254 = v253;
                                                        v255 = ExAllocatePoolWithTag(PagedPool, v253, 0x20534C53u);
                                                        if ( v255 )
                                                        {
                                                          qword_1408610B0 = v255;
                                                          memset(v255, 0, v254);
                                                          memmove(qword_1408610B0, v380, v251);
                                                          RtlInitUnicodeString(&stru_1408611F8, (PCWSTR)qword_1408610B0);
                                                          dword_140861100 = v405;
                                                          v415 = 16;
                                                          v419 = 24;
                                                          v9 = v353;
                                                          v256 = -1;
                                                          if ( v353[4] < 0xFFFFFFE0 )
                                                            v256 = v353[4] + 32;
                                                          Acl = v353[4] >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                                                          if ( v353[4] + 32 >= 0x20 )
                                                          {
                                                            v257 = v256 + 4;
                                                            v258 = -1;
                                                            if ( v256 + 4 >= v256 )
                                                              v258 = v256 + 4;
                                                            Acl = v257 < v256 ? 0xC0000095 : 0;
                                                            if ( v257 >= v256 )
                                                            {
                                                              v259 = v381;
                                                              v260 = v258 + v353[8];
                                                              v261 = -1;
                                                              if ( v260 >= v258 )
                                                                v261 = v258 + v353[8];
                                                              Acl = v260 < v258 ? 0xC0000095 : 0;
                                                              if ( v260 >= v258 )
                                                                v259 = v261;
                                                              v381 = v259;
                                                            }
                                                          }
                                                          if ( Acl >= 0 )
                                                          {
                                                            uAddend[1] = 8;
                                                            v262 = (char *)ExAllocatePoolWithTag(
                                                                             PagedPool,
                                                                             8uLL,
                                                                             0x20534C53u);
                                                            v263 = v262;
                                                            if ( v262 )
                                                            {
                                                              Src = v262;
                                                              uAddend[0] = 0;
                                                              v382 = 0;
                                                              v264 = v262 + 4;
                                                              if ( v264 >= v263 )
                                                                v232 = (__int64)v264;
                                                              Acl = v264 < v263 ? 0xC0000095 : 0;
                                                              if ( v264 >= v263 )
                                                              {
                                                                if ( v263 + 8 <= &v263[uAddend[1]] )
                                                                {
                                                                  *(_DWORD *)v263 = 4;
                                                                  *(_DWORD *)v232 = v382;
                                                                  ++uAddend[0];
                                                                }
                                                                else
                                                                {
                                                                  Acl = -1073741789;
                                                                }
                                                              }
                                                            }
                                                            else
                                                            {
                                                              Acl = -1073741801;
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v9 = v353;
                                                          Acl = -1073741801;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        Acl = -1073741762;
                                                      }
                                                    }
                                                  }
                                                }
LABEL_498:
                                                if ( v380 )
                                                {
                                                  ExFreePoolWithTag(v380, 0x20534C53u);
                                                  v380 = 0LL;
                                                }
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 31:
                                                stru_1408611F8.Length = 0;
                                                stru_1408611F8.Buffer = 0LL;
                                                if ( qword_1408610B0 )
                                                {
                                                  ExFreePoolWithTag(qword_1408610B0, 0x20534C53u);
                                                  qword_1408610B0 = 0LL;
                                                }
                                                dword_140861100 = 0;
                                                dword_1408610AC = 0;
                                                v412 = 8;
                                                v413 = 16;
                                                v414 = 24;
                                                v282 = -1;
                                                if ( v9[4] < 0xFFFFFFE0 )
                                                  v282 = v9[4] + 32;
                                                Acl = v9[4] >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                                                if ( v9[4] + 32 >= 0x20 )
                                                {
                                                  v283 = v282 + 4;
                                                  v284 = -1;
                                                  if ( v282 + 4 >= v282 )
                                                    v284 = v282 + 4;
                                                  Acl = v283 < v282 ? 0xC0000095 : 0;
                                                  if ( v283 >= v282 )
                                                  {
                                                    v285 = v385;
                                                    v286 = v284 + v9[8];
                                                    v287 = -1;
                                                    if ( v286 >= v284 )
                                                      v287 = v284 + v9[8];
                                                    Acl = v286 < v284 ? 0xC0000095 : 0;
                                                    if ( v286 >= v284 )
                                                      v285 = v287;
                                                    v385 = v285;
                                                  }
                                                }
                                                if ( Acl >= 0 )
                                                {
                                                  uAddend[1] = 8;
                                                  v288 = (char *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                                                  v289 = v288;
                                                  if ( v288 )
                                                  {
                                                    Src = v288;
                                                    uAddend[0] = 0;
                                                    v386 = 0;
                                                    v290 = v288 + 4;
                                                    if ( v289 + 4 < v289 )
                                                      v291 = -1LL;
                                                    else
                                                      v291 = (__int64)(v289 + 4);
                                                    Acl = v290 < v289 ? 0xC0000095 : 0;
                                                    if ( v290 >= v289 )
                                                    {
                                                      if ( v289 + 8 <= &v289[uAddend[1]] )
                                                      {
                                                        *(_DWORD *)v289 = 4;
                                                        *(_DWORD *)v291 = v386;
                                                        ++uAddend[0];
                                                      }
                                                      else
                                                      {
                                                        Acl = -1073741789;
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741801;
                                                  }
                                                  if ( Acl >= 0 )
                                                    goto LABEL_144;
                                                }
                                                goto LABEL_261;
                                              case 37:
                                                v265 = -1LL;
                                                if ( (unsigned int)v358 <= 3 )
                                                {
                                                  Acl = -1073741811;
                                                  goto LABEL_545;
                                                }
                                                v266 = (unsigned __int64)v359;
                                                v267 = 0;
                                                break;
                                              case 100:
                                                Acl = sub_1407D3C3C(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 101:
                                                Acl = sub_1407D38E8(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 102:
                                                Acl = sub_1407D229C(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 103:
                                                Acl = sub_1407CE830(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 104:
                                                Acl = sub_1407D2AA8(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 105:
                                                Acl = sub_1407D1C00(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 106:
                                                Acl = sub_1407D1140(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 107:
                                                Acl = sub_1402C1674((__int64)&v358, (__int64)v9, 0LL, (__int64)uAddend);
                                                if ( Acl < 0 )
                                                  goto LABEL_261;
                                                goto LABEL_144;
                                              case 109:
                                                IsAppLicensed = SPCallServerHandleIsAppLicensed(&v358, v9, 0LL, uAddend);
                                                goto LABEL_143;
                                              case 110:
                                                Acl = sub_1407CFA00(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 111:
                                                Acl = sub_1407CDFF4(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 112:
                                                Acl = sub_1407CE350(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 113:
                                                IsAppLicensed = SPCallServerHandleClepKdf(
                                                                  (__int64)&v358,
                                                                  (__int64)v9,
                                                                  0LL,
                                                                  (__int64)uAddend);
                                                goto LABEL_143;
                                              case 204:
                                                Acl = sub_1407D3F94(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 205:
                                                Acl = sub_1407CDCA0(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 206:
                                                v387 = 0;
                                                v410 = 8LL;
                                                v292 = 0;
                                                ZwQuerySystemInformation(
                                                  SystemCodeIntegrityInformation,
                                                  &v410,
                                                  8u,
                                                  &v387);
                                                if ( v322[4] == 160 )
                                                {
                                                  v294 = (const void *)*((_QWORD *)v322 + 3);
                                                  if ( !memcmp(qword_1407FCD00, v294, 0xA0uLL)
                                                    && v9[4] == 160
                                                    && !memcmp(qword_1407FD160, *((const void **)v9 + 3), 0xA0uLL)
                                                    && v322[8] == 8
                                                    && **((_QWORD **)v322 + 5) == 0x5638EBB72F3355A5LL
                                                    && v9[8] == 8
                                                    && **((_QWORD **)v9 + 5) == 0x9F2DD8784FE939B7uLL
                                                    || !memcmp(qword_1407FCF80, v294, 0xA0uLL)
                                                    && v9[4] == 160
                                                    && !memcmp(qword_1407FD0C0, *((const void **)v9 + 3), 0xA0uLL)
                                                    && v322[8] == 8
                                                    && **((_QWORD **)v322 + 5) == 0x5638EBB72F3355A5LL
                                                    && v9[8] == 8
                                                    && **((_QWORD **)v9 + 5) == 0x9F2DD8784FE939B7uLL
                                                    || (v295 = (const void *)*((_QWORD *)v322 + 3),
                                                        !memcmp(qword_1407FC940, v295, 0xA0uLL))
                                                    && v9[4] == 160
                                                    && !memcmp(qword_1407FCB20, *((const void **)v9 + 3), 0xA0uLL)
                                                    && v322[8] == 8
                                                    && **((_QWORD **)v322 + 5) == 0xF10D668DB2BB8BB9uLL
                                                    && v9[8] == 8
                                                    && **((_QWORD **)v9 + 5) == 0x768DFD321621EA95LL )
                                                  {
                                                    v292 = 1;
                                                  }
                                                  else if ( !memcmp(qword_1407FC6C0, v295, 0xA0uLL)
                                                         && v9[4] == 160
                                                         && !memcmp(qword_1407FC8A0, *((const void **)v9 + 3), 0xA0uLL)
                                                         && v322[8] == 8
                                                         && **((_QWORD **)v322 + 5) == 0xF10D668DB2BB8BB9uLL
                                                         && v9[8] == 8 )
                                                  {
                                                    v292 = **((_QWORD **)v9 + 5) == 0x768DFD321621EA95LL;
                                                  }
                                                }
                                                Acl = -2147024891;
                                                if ( !v292 )
                                                {
                                                  v8 = 0LL;
                                                  v5 = 0LL;
                                                  goto LABEL_262;
                                                }
                                                Acl = sub_1402C1E68((__int64)&v358, (__int64)v9, v293, (__int64)uAddend);
                                                if ( Acl < 0 )
                                                  goto LABEL_261;
                                                goto LABEL_144;
                                              case 207:
                                                Acl = sub_1407CF0AC(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 208:
                                                IsAppLicensed = SPCallServerHandleGetAppPolicyValue(
                                                                  &v358,
                                                                  v9,
                                                                  0LL,
                                                                  uAddend);
                                                goto LABEL_143;
                                              case 209:
                                                Acl = sub_1407D330C(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 210:
                                                Acl = sub_1407CD25C(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              case 211:
                                                Acl = sub_1407CCC84(&v358, v9, 0LL, uAddend);
                                                if ( Acl >= 0 )
                                                  goto LABEL_144;
                                                goto LABEL_261;
                                              default:
                                                v388 = -2147467263;
                                                if ( Src )
                                                {
                                                  v298 = (UINT *)Src;
                                                  v364 = (ULONGLONG)Src;
                                                  if ( uAddend[0] )
                                                  {
                                                    do
                                                    {
                                                      v299 = RtlUIntAdd(4u, *v298, &v362);
                                                      Acl = v299;
                                                      if ( v299 >= 0 )
                                                        v301 = v362;
                                                      v371 = v301;
                                                      if ( v299 < 0 )
                                                        goto LABEL_680;
                                                      Acl = RtlULongLongAdd(v300, v301, &v364);
                                                      if ( Acl < 0 )
                                                        goto LABEL_680;
                                                      v298 = (UINT *)v364;
                                                    }
                                                    while ( v302 + 1 < uAddend[0] );
                                                  }
                                                  Acl = RtlULongLongAdd((ULONGLONG)v298, 4uLL, &v402);
                                                  if ( Acl >= 0 )
                                                  {
                                                    if ( v303 + 2 > (_DWORD *)((char *)Src + uAddend[1]) )
                                                    {
                                                      Acl = -1073741789;
                                                      goto LABEL_689;
                                                    }
                                                    v304 = (_DWORD *)v402;
                                                    *v303 = 4;
                                                    *v304 = v388;
                                                    ++uAddend[0];
                                                  }
                                                }
                                                else
                                                {
                                                  v296 = RtlUIntAdd(4u, 4u, &v366);
                                                  v297 = v371;
                                                  Acl = v296;
                                                  if ( v296 >= 0 )
                                                    v297 = v366;
                                                  v371 = v297;
                                                  if ( v296 >= 0 )
                                                  {
                                                    Acl = RtlUIntAdd(uAddend[1], v297, &uAddend[1]);
                                                    if ( Acl >= 0 )
                                                    {
                                                      ++uAddend[0];
                                                      goto LABEL_681;
                                                    }
                                                  }
                                                }
LABEL_680:
                                                if ( Acl < 0 )
                                                  goto LABEL_261;
LABEL_681:
                                                if ( uAddend[1] )
                                                {
                                                  v305 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                                  if ( v305 )
                                                  {
                                                    Src = v305;
                                                    uAddend[0] = 0;
                                                    v389 = -2147467263;
                                                    Acl = RtlULongLongAdd((ULONGLONG)v305, 4uLL, &v400);
                                                    if ( Acl >= 0 )
                                                    {
                                                      if ( v306 + 2 <= (_DWORD *)((char *)v306 + uAddend[1]) )
                                                      {
                                                        v307 = (_DWORD *)v400;
                                                        *v306 = 4;
                                                        *v307 = v389;
                                                        ++uAddend[0];
                                                      }
                                                      else
                                                      {
                                                        Acl = -1073741789;
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741801;
                                                  }
                                                }
                                                else
                                                {
                                                  Acl = -1073741762;
                                                }
LABEL_689:
                                                if ( Acl < 0 )
                                                  goto LABEL_261;
                                                goto LABEL_144;
                                            }
                                            do
                                            {
                                              v268 = -1LL;
                                              if ( v266 + 4 >= v266 )
                                                v268 = v266 + 4;
                                              Acl = v266 + 4 < v266 ? 0xC0000095 : 0;
                                              if ( v266 + 4 < v266 )
                                                goto LABEL_540;
                                              v269 = v268 + *(unsigned int *)v266;
                                              v266 = -1LL;
                                              if ( v269 >= v268 )
                                                v266 = v269;
                                              Acl = v269 < v268 ? 0xC0000095 : 0;
                                              if ( v269 < v268 )
                                                goto LABEL_540;
                                              ++v267;
                                            }
                                            while ( v267 < 3 );
                                            v270 = *(_DWORD *)v266;
                                            v271 = -1LL;
                                            if ( v266 + 4 >= v266 )
                                              v271 = v266 + 4;
                                            Acl = v266 + 4 < v266 ? 0xC0000095 : 0;
                                            if ( v266 + 4 < v266 )
                                            {
LABEL_540:
                                              v270 = v383;
                                              v272 = v424;
                                              goto LABEL_541;
                                            }
                                            v383 = *(_DWORD *)v266;
                                            v272 = 0LL;
                                            if ( v270 )
                                              v272 = (int *)v271;
                                            v424 = v272;
LABEL_541:
                                            if ( Acl < 0 )
                                              goto LABEL_261;
                                            if ( v270 != 4 )
                                            {
                                              Acl = -1073741789;
                                              goto LABEL_569;
                                            }
                                            v390 = *v272;
LABEL_545:
                                            if ( Acl < 0 )
                                              goto LABEL_261;
                                            v428 = 8;
                                            v418 = 16;
                                            v391 = 24;
                                            v273 = -1;
                                            if ( v9[4] < 0xFFFFFFE0 )
                                              v273 = v9[4] + 32;
                                            Acl = v9[4] >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                                            if ( v9[4] + 32 < 0x20 )
                                              goto LABEL_557;
                                            v274 = v273 + 4;
                                            v275 = -1;
                                            if ( v273 + 4 >= v273 )
                                              v275 = v273 + 4;
                                            Acl = v274 < v273 ? 0xC0000095 : 0;
                                            if ( v274 < v273 )
                                            {
LABEL_557:
                                              v278 = v378;
                                            }
                                            else
                                            {
                                              v276 = v275 + v9[8];
                                              v277 = -1;
                                              v278 = v378;
                                              if ( v276 >= v275 )
                                                v277 = v275 + v9[8];
                                              Acl = v276 < v275 ? 0xC0000095 : 0;
                                              if ( v276 >= v275 )
                                                v278 = v277;
                                              v378 = v278;
                                            }
                                            if ( Acl < 0 )
                                              goto LABEL_261;
                                            if ( v365 >= v278 )
                                              dword_1408610AC = v390;
                                            uAddend[1] = 8;
                                            v279 = (char *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                                            v280 = v279;
                                            if ( v279 )
                                            {
                                              Src = v279;
                                              uAddend[0] = 0;
                                              v384 = 0;
                                              v281 = v279 + 4;
                                              if ( v281 >= v280 )
                                                v265 = (__int64)v281;
                                              Acl = v281 < v280 ? 0xC0000095 : 0;
                                              if ( v281 >= v280 )
                                              {
                                                if ( v280 + 8 <= &v280[uAddend[1]] )
                                                {
                                                  *(_DWORD *)v280 = 4;
                                                  *(_DWORD *)v265 = v384;
                                                  ++uAddend[0];
                                                }
                                                else
                                                {
                                                  Acl = -1073741789;
                                                }
                                              }
                                            }
                                            else
                                            {
                                              Acl = -1073741801;
                                            }
LABEL_569:
                                            if ( Acl < 0 )
                                              goto LABEL_261;
                                          }
                                          else
                                          {
                                            IsAppLicensed = SPCallServerHandleQueryPolicy(
                                                              (__int64)&v358,
                                                              v9,
                                                              v365,
                                                              (__int64)uAddend);
LABEL_143:
                                            Acl = IsAppLicensed;
                                            if ( IsAppLicensed < 0 )
                                            {
LABEL_261:
                                              v8 = 0LL;
                                              v5 = 0LL;
                                              goto LABEL_262;
                                            }
                                          }
LABEL_144:
                                          v411 = __rdtsc();
                                          puResult = 8;
                                          Acl = RtlUIntAdd(8u, uAddend[1], &puResult);
                                          if ( Acl >= 0 )
                                          {
                                            v111 = (puResult + 7) & 0xFFFFFFF8;
                                            if ( v111 < puResult )
                                            {
                                              Acl = -1073741675;
                                            }
                                            else
                                            {
                                              puResult = (puResult + 7) & 0xFFFFFFF8;
                                              if ( v111 )
                                              {
                                                v112 = (char *)ExAllocatePoolWithTag(PagedPool, v111, 0x20534C53u);
                                                v113 = v112;
                                                if ( v112 )
                                                {
                                                  pullResult = (ULONGLONG)v112;
                                                  *(_DWORD *)v112 = uAddend[0];
                                                  Acl = RtlULongLongAdd((ULONGLONG)v112, 4uLL, &pullResult);
                                                  if ( Acl >= 0 )
                                                  {
                                                    v114 = pullResult;
                                                    *(_DWORD *)pullResult = uAddend[1];
                                                    Acl = RtlULongLongAdd(v114, 4uLL, &pullResult);
                                                    if ( Acl >= 0 )
                                                    {
                                                      *(_QWORD *)&v113[puResult - 8] = v411;
                                                      memmove((void *)pullResult, Src, uAddend[1]);
                                                      v115 = puResult;
                                                      v8 = (unsigned __int8 *)v113;
                                                      v324 = (unsigned __int8 *)v113;
LABEL_151:
                                                      if ( Acl < 0 )
                                                        goto LABEL_741;
                                                      P = 0LL;
                                                      v425 = 0LL;
                                                      if ( !v8 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      if ( !(_DWORD)v115 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      v116 = (__int64 *)*((_QWORD *)v9 + 5);
                                                      if ( !v116 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      v117 = v9[8];
                                                      if ( !v117 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      v118 = (unsigned __int8 *)*((_QWORD *)v9 + 3);
                                                      v401 = v118;
                                                      if ( !v118 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      v119 = v9[4];
                                                      if ( !v119 )
                                                      {
                                                        Acl = -1073741811;
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      ullAugend = v115;
                                                      if ( v117 != 8 || v119 != 160 )
                                                        goto LABEL_726;
                                                      v120 = *v116;
                                                      LOBYTE(v119) = 0;
                                                      v365 = v119;
                                                      v121 = 0LL;
                                                      if ( v115 >= 0x20 )
                                                      {
                                                        v122 = 0LL;
                                                        v123 = 0LL;
                                                        do
                                                        {
                                                          v122 = _mm_xor_si128(
                                                                   _mm_loadu_si128((const __m128i *)&v8[v121]),
                                                                   v122);
                                                          v124 = _mm_loadu_si128((const __m128i *)&v8[v121 + 16]);
                                                          v121 += 32LL;
                                                          v125 = _mm_xor_si128(v124, v123);
                                                          v123 = v125;
                                                        }
                                                        while ( v121 < (v115 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                        v126 = _mm_xor_si128(v122, v125);
                                                        v127 = _mm_xor_si128(v126, _mm_srli_si128(v126, 8));
                                                        v128 = _mm_xor_si128(v127, _mm_srli_si128(v127, 4));
                                                        v129 = _mm_xor_si128(v128, _mm_srli_si128(v128, 2));
                                                        v119 = _mm_cvtsi128_si32(_mm_xor_si128(v129, _mm_srli_si128(v129, 1)));
                                                        v365 = v119;
                                                      }
                                                      if ( v121 < v115 )
                                                      {
                                                        do
                                                          LOBYTE(v119) = v8[v121++] ^ v119;
                                                        while ( v121 < v115 );
                                                        v365 = v119;
                                                      }
                                                      v130 = (char *)ExAllocatePoolWithTag(
                                                                       PagedPool,
                                                                       v115 + 8,
                                                                       0x20534C53u);
                                                      *(_QWORD *)v368 = v130;
                                                      v131 = (UINT *)v130;
                                                      if ( v130 )
                                                      {
                                                        v132 = ullAugend;
                                                        v133 = 0;
                                                        v435 = v120;
                                                        v134 = v8;
                                                        v399 = (unsigned __int8 *)v130;
                                                        v346 = 0;
                                                        v135 = v130;
                                                        v332 = -1;
                                                        v136 = 0;
                                                        GrantedAccess = 0;
                                                        v360 = 0;
                                                        v137 = ullAugend & 7;
                                                        if ( (ullAugend & 7) != 0 )
                                                        {
                                                          GrantedAccess = 0;
                                                          v360 = 0;
                                                          v308 = 0;
                                                          v309 = 0;
                                                          v310 = 56;
                                                          do
                                                          {
                                                            v311 = *v134;
                                                            if ( v309 >= 4 )
                                                              v133 |= v311 << v310;
                                                            else
                                                              v308 |= v311 << (v310 - 32);
                                                            ++v309;
                                                            v310 -= 8;
                                                            ++v134;
                                                          }
                                                          while ( v309 < v137 );
                                                          v360 = v308;
                                                          GrantedAccess = v133;
                                                          v312 = 16LL;
                                                          v313 = v118 + 158;
                                                          v364 = (ULONGLONG)(v118 + 158);
                                                          pullResult = 16LL;
                                                          v314 = v118 + 126;
                                                          v315 = 30LL;
                                                          do
                                                          {
                                                            v316 = v313[1];
                                                            if ( v316 < 0x1Fu )
                                                            {
                                                              v317 = funcs_1404B10CE[v316](
                                                                       v315 + 1,
                                                                       *(v314 - 2),
                                                                       *(v314 - 1),
                                                                       *v314,
                                                                       v314[1],
                                                                       (__int64)&v435,
                                                                       v136);
                                                              v136 = v346;
                                                              v78 = v317 ^ v332;
                                                              v313 = (unsigned __int8 *)v364;
                                                              v312 = pullResult;
                                                              v332 ^= v317;
                                                            }
                                                            if ( *v313 < 0x1Fu )
                                                            {
                                                              v318 = funcs_1404B10CE[*v313](
                                                                       v315,
                                                                       *(v314 - 6),
                                                                       *(v314 - 5),
                                                                       *(v314 - 4),
                                                                       *(v314 - 3),
                                                                       (__int64)&v435,
                                                                       v78);
                                                              v78 = v332;
                                                              v136 = v318 ^ v346;
                                                              v313 = (unsigned __int8 *)v364;
                                                              v312 = pullResult;
                                                              v346 ^= v318;
                                                            }
                                                            v313 -= 2;
                                                            v315 -= 2LL;
                                                            v314 -= 8;
                                                            v364 = (ULONGLONG)v313;
                                                            pullResult = --v312;
                                                          }
                                                          while ( v312 );
                                                          v136 ^= v360;
                                                          v319 = GrantedAccess ^ v78;
                                                          v320 = 0;
                                                          v118 = v401;
                                                          v135 = v399;
                                                          v352 = v136;
                                                          v338 = v319;
                                                          if ( v137 > 0 )
                                                          {
                                                            do
                                                            {
                                                              if ( v320 >= 4 )
                                                              {
                                                                v319 = __ROL4__(v319, 8);
                                                                *v135 = v319;
                                                              }
                                                              else
                                                              {
                                                                v136 = __ROL4__(v136, 8);
                                                                *v135 = v136;
                                                              }
                                                              ++v320;
                                                              ++v135;
                                                            }
                                                            while ( v320 < v137 );
                                                            v136 = v352;
                                                            v319 = v338;
                                                          }
                                                          v321 = v137 - 4;
                                                          if ( v137 - 4 <= 0 )
                                                          {
                                                            v78 = 0;
                                                            if ( v321 < 0 )
                                                              v136 = v136 >> (-8 * v321) << (-8 * v321);
                                                          }
                                                          else
                                                          {
                                                            v78 = v319 >> (8 * (4 - v321)) << (8 * (4 - v321));
                                                          }
                                                          v132 = ullAugend;
                                                          v131 = *(UINT **)v368;
                                                        }
                                                        pullResult = v132 >> 3;
                                                        if ( v132 >> 3 )
                                                        {
                                                          v138 = v118 + 129;
                                                          v139 = v118 + 2;
                                                          v401 = v118 + 129;
                                                          v399 = v118 + 2;
                                                          v140 = v134 + 2;
                                                          v364 = (ULONGLONG)(v135 + 7);
                                                          do
                                                          {
                                                            v141 = v138;
                                                            v142 = 0LL;
                                                            v143 = v139;
                                                            v144 = 16LL;
                                                            v145 = v140[3] | (v140[2] << 8);
                                                            AccessStatus[0] = v140[1] | ((*v140 | ((*(v140 - 1) | (*(v140 - 2) << 8)) << 8)) << 8);
                                                            v146 = AccessStatus[0] ^ v136;
                                                            v147 = v140[5] | ((v140[4] | (v145 << 8)) << 8);
                                                            v347 = v146;
                                                            v148 = v147 ^ v78;
                                                            v370[0] = v147;
                                                            v333 = v148;
                                                            pcbLength = (size_t)(v140 + 8);
                                                            do
                                                            {
                                                              v149 = *(v141 - 1);
                                                              if ( v149 < 0x1Fu )
                                                              {
                                                                v182 = funcs_1404B10CE[v149](
                                                                         v142,
                                                                         *(v143 - 2),
                                                                         *(v143 - 1),
                                                                         *v143,
                                                                         v143[1],
                                                                         (__int64)&v435,
                                                                         v148);
                                                                v148 = v333;
                                                                v146 = v182 ^ v347;
                                                                v347 ^= v182;
                                                              }
                                                              if ( *v141 < 0x1Fu )
                                                              {
                                                                v183 = funcs_1404B10CE[(unsigned __int8)*v141](
                                                                         v142 + 1,
                                                                         v143[2],
                                                                         v143[3],
                                                                         v143[4],
                                                                         v143[5],
                                                                         (__int64)&v435,
                                                                         v146);
                                                                v146 = v347;
                                                                v148 = v183 ^ v333;
                                                                v333 ^= v183;
                                                              }
                                                              v142 += 2LL;
                                                              v143 += 8;
                                                              v141 += 2;
                                                              --v144;
                                                            }
                                                            while ( v144 );
                                                            v150 = (HIWORD(v435)
                                                                  * ((unsigned __int16)v435 + __ROR4__(~v148, 5))) ^ v146;
                                                            v151 = (v150 >> 10) ^ (WORD1(v435) * (HIWORD(v435) ^ v150)) ^ v148;
                                                            v152 = __ROR4__(v151, 10) ^ (WORD2(v435)
                                                                                       * __ROR4__(v435 ^ v151, 12)) ^ v150;
                                                            v153 = (HIWORD(v435) * __ROR4__(v152 - v435, 14)
                                                                  - __ROL4__(v152, 8)) ^ v151;
                                                            v154 = (__ROL4__(v153, 2)
                                                                  + (unsigned __int16)v435
                                                                  * __ROR4__(v153 + HIDWORD(v435), 15)) ^ v152;
                                                            v155 = (WORD1(v435) * (WORD2(v435) ^ v154)) ^ __ROR4__(v154, 6) ^ v153;
                                                            v156 = (HIDWORD(v435) - (v155 ^ v435)) ^ v154;
                                                            v157 = (HIWORD(v435) * __ROL4__(v156 ^ WORD1(v435), 6)
                                                                  - __ROL4__(v156, 2)) ^ v155;
                                                            v158 = ((unsigned __int16)v435 * (v157 - WORD2(v435))
                                                                  - (v157 >> 13)) ^ v156;
                                                            v159 = (WORD1(v435) * __ROR4__(HIDWORD(v435) + v158, 9)
                                                                  - __ROL4__(v158, 2)) ^ v157;
                                                            v160 = (_BYTE *)v364;
                                                            v161 = v370[0];
                                                            v140 = (unsigned __int8 *)pcbLength;
                                                            v139 = v399;
                                                            v162 = (__ROL4__(v159, 10)
                                                                  + WORD2(v435) * __ROL4__(v159 - v435, 5)) ^ v158;
                                                            v334 = GrantedAccess ^ v162 ^ v435 ^ HIDWORD(v435) ^ v159;
                                                            v348 = v360 ^ v162;
                                                            *(_BYTE *)(v364 - 4) = v360 ^ v162;
                                                            v349 = __ROR4__(v348, 8);
                                                            *v160 = v334;
                                                            v335 = __ROR4__(v334, 8);
                                                            *(v160 - 5) = v349;
                                                            v350 = __ROR4__(v349, 8);
                                                            *(v160 - 1) = v335;
                                                            v336 = __ROR4__(v335, 8);
                                                            *(v160 - 6) = v350;
                                                            v351 = __ROR4__(v350, 8);
                                                            *(v160 - 2) = v336;
                                                            v337 = __ROR4__(v336, 8);
                                                            *(v160 - 7) = v351;
                                                            *(v160 - 3) = v337;
                                                            v136 = __ROR4__(v351, 8);
                                                            v78 = __ROR4__(v337, 8);
                                                            v89 = pullResult-- == 1;
                                                            GrantedAccess = v161;
                                                            v364 = (ULONGLONG)(v160 + 8);
                                                            v138 = v401;
                                                            v360 = AccessStatus[0];
                                                          }
                                                          while ( !v89 );
                                                          v132 = ullAugend;
                                                          v131 = *(UINT **)v368;
                                                        }
                                                        v163 = v132 + 8;
                                                        *(_QWORD *)((char *)v131 + v132) = (unsigned __int8)v365;
                                                        Acl = 0;
                                                        P = v131;
                                                        v425 = v132 + 8;
                                                        if ( (_DWORD)v132 == -8 )
                                                        {
                                                          v9 = v353;
                                                          Acl = -1073741762;
                                                        }
                                                        else
                                                        {
                                                          v164 = ExAllocatePoolWithTag(PagedPool, v163, 0x20534C53u);
                                                          v165 = v164;
                                                          if ( v164 )
                                                          {
                                                            memmove(v164, *(const void **)v368, v163);
                                                            v9 = v353;
                                                            *((_QWORD *)v353 + 1) = v165;
                                                            *v353 = v163;
                                                          }
                                                          else
                                                          {
                                                            v9 = v353;
                                                            Acl = -1073741801;
                                                          }
                                                        }
                                                        v8 = v324;
                                                      }
                                                      else
                                                      {
LABEL_726:
                                                        Acl = -1073741823;
                                                      }
                                                      if ( P )
                                                      {
                                                        ExFreePoolWithTag(P, 0x20534C53u);
                                                        P = 0LL;
                                                      }
                                                      if ( Acl < 0 )
                                                      {
LABEL_741:
                                                        v5 = 0LL;
                                                        goto LABEL_262;
                                                      }
                                                      v166 = *v9;
                                                      uAugend = 4;
                                                      Acl = RtlUIntAdd(4u, v166, &uAugend);
                                                      if ( Acl < 0
                                                        || (Acl = RtlUIntAdd(uAugend, v167, &uAugend), Acl < 0)
                                                        || (Acl = RtlUIntAdd(uAugend, v9[4], &uAugend), Acl < 0)
                                                        || (Acl = RtlUIntAdd(uAugend, 4u, &uAugend), Acl < 0)
                                                        || (Acl = RtlUIntAdd(uAugend, v9[8], &uAugend), Acl < 0) )
                                                      {
                                                        v169 = v374;
                                                      }
                                                      else
                                                      {
                                                        v169 = uAugend;
                                                        v374 = uAugend;
                                                      }
                                                      if ( Acl >= 0 )
                                                      {
                                                        if ( v169 )
                                                        {
                                                          v170 = ExAllocatePoolWithTag(PagedPool, v169, 0x20534C53u);
                                                          v171 = v170;
                                                          if ( v170 )
                                                          {
                                                            ullAugend = (ULONGLONG)v170;
                                                            *v170 = *v9;
                                                            Acl = RtlULongLongAdd((ULONGLONG)v170, 4uLL, &ullAugend);
                                                            if ( Acl >= 0 )
                                                            {
                                                              memmove((void *)ullAugend, *((const void **)v9 + 1), *v9);
                                                              Acl = RtlULongLongAdd(ullAugend, *v9, &ullAugend);
                                                              if ( Acl >= 0 )
                                                              {
                                                                v172 = ullAugend;
                                                                *(_DWORD *)ullAugend = v9[4];
                                                                Acl = RtlULongLongAdd(v172, 4uLL, &ullAugend);
                                                                if ( Acl >= 0 )
                                                                {
                                                                  memmove(
                                                                    (void *)ullAugend,
                                                                    *((const void **)v9 + 3),
                                                                    v9[4]);
                                                                  Acl = RtlULongLongAdd(ullAugend, v9[4], &ullAugend);
                                                                  if ( Acl >= 0 )
                                                                  {
                                                                    v173 = ullAugend;
                                                                    *(_DWORD *)ullAugend = v9[8];
                                                                    Acl = RtlULongLongAdd(v173, 4uLL, &ullAugend);
                                                                    if ( Acl >= 0 )
                                                                    {
                                                                      memmove(
                                                                        (void *)ullAugend,
                                                                        *((const void **)v9 + 5),
                                                                        v9[8]);
                                                                      Acl = RtlULongLongAdd(
                                                                              ullAugend,
                                                                              v9[8],
                                                                              &ullAugend);
                                                                      if ( Acl >= 0 )
                                                                      {
                                                                        v174 = v374;
                                                                        v5 = v171;
                                                                        v168 = 0LL;
                                                                        goto LABEL_202;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            ExFreePoolWithTag(v171, 0x20534C53u);
                                                          }
                                                          else
                                                          {
                                                            Acl = -1073741801;
                                                          }
                                                          v168 = 0LL;
                                                        }
                                                        else
                                                        {
                                                          Acl = -1073741762;
                                                        }
                                                      }
                                                      v5 = 0LL;
                                                      v174 = 0;
LABEL_202:
                                                      v6 = v322;
                                                      v7 = v323;
                                                      if ( Acl >= 0 )
                                                      {
                                                        *v426 = v5;
                                                        v5 = v168;
                                                        *v427 = v174;
                                                      }
                                                      goto LABEL_204;
                                                    }
                                                  }
                                                  ExFreePoolWithTag(v113, 0x20534C53u);
                                                }
                                                else
                                                {
                                                  Acl = -1073741801;
                                                }
                                              }
                                              else
                                              {
                                                Acl = -1073741762;
                                              }
                                            }
                                          }
                                          v115 = v360;
                                          v8 = 0LL;
                                          goto LABEL_151;
                                        }
                                        v108 = ExAllocatePoolWithTag(PagedPool, v96, 0x20534C53u);
                                        if ( !v108 )
                                        {
LABEL_347:
                                          Acl = -1073741801;
                                          goto LABEL_348;
                                        }
                                        v107[3] = v108;
                                        memmove(v108, v97, v96);
                                      }
                                      else
                                      {
                                        *((_DWORD *)v107 + 4) = 0;
                                        v107[3] = 0LL;
                                      }
                                      if ( !v103 )
                                      {
                                        *((_DWORD *)v107 + 8) = 0;
                                        v107[5] = 0LL;
                                        goto LABEL_139;
                                      }
                                      *((_DWORD *)v107 + 8) = v102;
                                      if ( !(_DWORD)v102 )
                                      {
                                        Acl = -1073741762;
                                        goto LABEL_348;
                                      }
                                      v109 = ExAllocatePoolWithTag(PagedPool, v102, 0x20534C53u);
                                      if ( v109 )
                                      {
                                        v107[5] = v109;
                                        memmove(v109, v103, v102);
LABEL_139:
                                        v9 = (UINT *)v107;
                                        v353 = (UINT *)v107;
                                        Acl = 0;
                                        goto LABEL_140;
                                      }
                                      goto LABEL_347;
                                    }
                                    Acl = -1073741811;
                                  }
                                }
                                goto LABEL_326;
                              }
                            }
LABEL_734:
                            v9 = 0LL;
LABEL_265:
                            v6 = v322;
                            goto LABEL_736;
                          }
                          v83 = 0LL;
                          v84 = 0;
                          if ( !v81 )
                            goto LABEL_95;
                          v85 = v81;
                          if ( v82 < (unsigned __int64)v81 )
                          {
LABEL_332:
                            Acl = -1073741675;
                          }
                          else
                          {
                            if ( (unsigned __int64)v81 < v82 )
                            {
                              v86 = v392;
                              while ( 1 )
                              {
                                if ( v85 + 4 < v85 )
                                  goto LABEL_332;
                                if ( (unsigned __int64)(v85 + 4) > v82 )
                                  goto LABEL_334;
                                if ( *(_DWORD *)v85 >= 0xFFFFFFFC )
                                {
                                  v87 = -1073741675;
                                }
                                else
                                {
                                  v86 = *(_DWORD *)v85 + 4;
                                  v87 = 0;
                                  v392 = v86;
                                }
                                v366 = v87;
                                if ( v87 < 0 )
                                  break;
                                v88 = &v85[v86];
                                if ( v88 < v85 )
                                {
                                  Acl = -1073741675;
                                  goto LABEL_103;
                                }
                                v85 += v86;
                                if ( (unsigned __int64)v88 > v82 )
                                {
                                  Acl = -1073741811;
                                  goto LABEL_103;
                                }
                                ++v84;
                                v89 = v85 == (char *)v82;
                                if ( (unsigned __int64)v85 >= v82 )
                                  goto LABEL_94;
                              }
                              Acl = v366;
                              goto LABEL_101;
                            }
                            v89 = v81 == (char *)v82;
LABEL_94:
                            if ( v89 )
                            {
LABEL_95:
                              if ( (_DWORD)v80 && (v83 = ExAllocatePoolWithTag(PagedPool, v80, 0x20534C53u)) == 0LL )
                              {
                                Acl = -1073741801;
                              }
                              else
                              {
                                if ( v81 )
                                  memmove(v83, v81, v80);
                                v359 = v83;
                                Acl = 0;
                                v358 = __PAIR64__(v80, v84);
                              }
                              v79 = v362;
LABEL_101:
                              if ( Acl < 0 || v79 == (_DWORD)v358 )
                                goto LABEL_103;
                              v9 = 0LL;
                              Acl = -1073741762;
                              v8 = 0LL;
                              v5 = 0LL;
LABEL_262:
                              v7 = v323;
LABEL_263:
                              v6 = v322;
                              goto LABEL_204;
                            }
LABEL_334:
                            Acl = -1073741811;
                          }
LABEL_103:
                          v7 = v323;
                          goto LABEL_104;
                        }
LABEL_327:
                        v9 = 0LL;
                        Acl = -1073741675;
                        v8 = 0LL;
                        v5 = 0LL;
                        goto LABEL_262;
                      }
                    }
                  }
                  Acl = -1073741762;
                  goto LABEL_326;
                }
LABEL_278:
                Acl = -1073741801;
                goto LABEL_279;
              }
LABEL_271:
              Acl = -1073741762;
              v9 = 0LL;
              v6 = 0LL;
              v7 = 0LL;
              v8 = 0LL;
              goto LABEL_204;
            }
          }
        }
        Acl = -1073741675;
        v9 = 0LL;
        v6 = 0LL;
        v7 = 0LL;
        v8 = 0LL;
      }
    }
  }
LABEL_204:
  if ( v359 )
    ExFreePoolWithTag(v359, 0x20534C53u);
LABEL_206:
  *(_QWORD *)uAddend = 0LL;
  if ( Src )
  {
    ExFreePoolWithTag(Src, 0x20534C53u);
    Src = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  if ( v6 )
  {
    v175 = (void *)*((_QWORD *)v6 + 1);
    if ( v175 )
    {
      ExFreePoolWithTag(v175, 0x20534C53u);
      *((_QWORD *)v6 + 1) = 0LL;
    }
    v176 = (void *)*((_QWORD *)v6 + 3);
    if ( v176 )
    {
      ExFreePoolWithTag(v176, 0x20534C53u);
      *((_QWORD *)v6 + 3) = 0LL;
    }
    v177 = (void *)*((_QWORD *)v6 + 5);
    if ( v177 )
    {
      ExFreePoolWithTag(v177, 0x20534C53u);
      *((_QWORD *)v6 + 5) = 0LL;
    }
    ExFreePoolWithTag(v6, 0x20534C53u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x20534C53u);
  if ( v9 )
  {
    v178 = (void *)*((_QWORD *)v9 + 1);
    if ( v178 )
    {
      ExFreePoolWithTag(v178, 0x20534C53u);
      *((_QWORD *)v9 + 1) = 0LL;
    }
    v179 = (void *)*((_QWORD *)v9 + 3);
    if ( v179 )
    {
      ExFreePoolWithTag(v179, 0x20534C53u);
      *((_QWORD *)v9 + 3) = 0LL;
    }
    v180 = (void *)*((_QWORD *)v9 + 5);
    if ( v180 )
    {
      ExFreePoolWithTag(v180, 0x20534C53u);
      *((_QWORD *)v9 + 5) = 0LL;
    }
    ExFreePoolWithTag(v9, 0x20534C53u);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20534C53u);
  return (unsigned int)Acl;
}
