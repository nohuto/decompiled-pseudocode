/*
 * XREFs of SPCall2ServerInternal @ 0x140534E00
 * Callers:
 *     Callout @ 0x1405341A0 (Callout.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlUIntAdd @ 0x1400DF340 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x1400E3380 (RtlULongLongAdd.c)
 *     StringCbLengthW @ 0x1400E3518 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     sub_14028BC04 @ 0x14028BC04 (sub_14028BC04.c)
 *     sub_14028C410 @ 0x14028C410 (sub_14028C410.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1404F34F0 (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     sub_140537000 @ 0x140537000 (sub_140537000.c)
 *     sub_140537070 @ 0x140537070 (sub_140537070.c)
 *     sub_1405370E0 @ 0x1405370E0 (sub_1405370E0.c)
 *     sub_140537160 @ 0x140537160 (sub_140537160.c)
 *     sub_140537200 @ 0x140537200 (sub_140537200.c)
 *     sub_1405372B0 @ 0x1405372B0 (sub_1405372B0.c)
 *     sub_140537330 @ 0x140537330 (sub_140537330.c)
 *     sub_140537360 @ 0x140537360 (sub_140537360.c)
 *     sub_1405373E0 @ 0x1405373E0 (sub_1405373E0.c)
 *     sub_140537410 @ 0x140537410 (sub_140537410.c)
 *     sub_140537440 @ 0x140537440 (sub_140537440.c)
 *     sub_140537500 @ 0x140537500 (sub_140537500.c)
 *     sub_1405375C0 @ 0x1405375C0 (sub_1405375C0.c)
 *     sub_140537630 @ 0x140537630 (sub_140537630.c)
 *     sub_1405376A0 @ 0x1405376A0 (sub_1405376A0.c)
 *     sub_1405376D0 @ 0x1405376D0 (sub_1405376D0.c)
 *     sub_140537780 @ 0x140537780 (sub_140537780.c)
 *     sub_140537830 @ 0x140537830 (sub_140537830.c)
 *     sub_1405378D0 @ 0x1405378D0 (sub_1405378D0.c)
 *     sub_140537970 @ 0x140537970 (sub_140537970.c)
 *     sub_140537A10 @ 0x140537A10 (sub_140537A10.c)
 *     sub_140537A80 @ 0x140537A80 (sub_140537A80.c)
 *     sub_140537B40 @ 0x140537B40 (sub_140537B40.c)
 *     sub_140537BE0 @ 0x140537BE0 (sub_140537BE0.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14058B7CC (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleClepKdf @ 0x14058D7AC (SPCallServerHandleClepKdf.c)
 *     sub_1405976D0 @ 0x1405976D0 (sub_1405976D0.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x140598CEC (SPCallServerHandleAuthenticateCaller.c)
 *     sub_1405D5CF0 @ 0x1405D5CF0 (sub_1405D5CF0.c)
 *     sub_1405D5DA0 @ 0x1405D5DA0 (sub_1405D5DA0.c)
 *     sub_1405D6A40 @ 0x1405D6A40 (sub_1405D6A40.c)
 *     sub_1405DBC80 @ 0x1405DBC80 (sub_1405DBC80.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240 (SPCallServerHandleWaitForDisplayWindow.c)
 *     sub_140764FA4 @ 0x140764FA4 (sub_140764FA4.c)
 *     sub_14076556C @ 0x14076556C (sub_14076556C.c)
 *     sub_140765BFC @ 0x140765BFC (sub_140765BFC.c)
 *     sub_140765FAC @ 0x140765FAC (sub_140765FAC.c)
 *     sub_1407662F8 @ 0x1407662F8 (sub_1407662F8.c)
 *     sub_140766654 @ 0x140766654 (sub_140766654.c)
 *     sub_140766B2C @ 0x140766B2C (sub_140766B2C.c)
 *     sub_1407673D8 @ 0x1407673D8 (sub_1407673D8.c)
 *     sub_140767D38 @ 0x140767D38 (sub_140767D38.c)
 *     sub_140768280 @ 0x140768280 (sub_140768280.c)
 *     sub_14076883C @ 0x14076883C (sub_14076883C.c)
 *     sub_140768F7C @ 0x140768F7C (sub_140768F7C.c)
 *     sub_140769454 @ 0x140769454 (sub_140769454.c)
 *     sub_14076A110 @ 0x14076A110 (sub_14076A110.c)
 *     sub_14076ABD4 @ 0x14076ABD4 (sub_14076ABD4.c)
 *     sub_14076B26C @ 0x14076B26C (sub_14076B26C.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     sub_14076BA6C @ 0x14076BA6C (sub_14076BA6C.c)
 *     sub_14076C270 @ 0x14076C270 (sub_14076C270.c)
 *     sub_14076C850 @ 0x14076C850 (sub_14076C850.c)
 *     sub_14076CB9C @ 0x14076CB9C (sub_14076CB9C.c)
 *     sub_14076CEE8 @ 0x14076CEE8 (sub_14076CEE8.c)
 *     sub_14076D484 @ 0x14076D484 (sub_14076D484.c)
 *     sub_14076D7B0 @ 0x14076D7B0 (sub_14076D7B0.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, UINT *a5)
{
  const void **v5; // rsi
  unsigned int *v6; // rbx
  unsigned int *v7; // r12
  unsigned __int8 *v8; // r14
  void *v9; // rdi
  __int64 v10; // rdi
  char *v11; // r15
  unsigned int *v12; // rcx
  SIZE_T v13; // rsi
  char *v14; // r12
  unsigned int v15; // ecx
  unsigned int *v16; // r8
  unsigned int v17; // r9d
  SIZE_T v18; // r14
  const void *v19; // r13
  unsigned int v20; // ecx
  PVOID PoolWithTag; // rax
  ULONGLONG v22; // rbx
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // rax
  signed int Acl; // r15d
  void *v27; // rcx
  unsigned __int8 *v28; // r14
  __int64 v29; // rax
  ULONGLONG v30; // rdi
  __int64 *v31; // rbx
  __int64 v32; // rbx
  char v33; // si
  unsigned int *v34; // rax
  unsigned int *v35; // r8
  unsigned int *v36; // r12
  int v37; // esi
  ACCESS_MASK v38; // r15d
  UINT v39; // r11d
  ULONGLONG v40; // r9
  ULONGLONG v41; // rsi
  unsigned __int8 *v42; // rdi
  unsigned __int8 *v43; // r8
  _BYTE *v44; // r12
  int v45; // edx
  int v46; // eax
  int v47; // r11d
  NTSTATUS v48; // edx
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
  UINT v78; // r10d
  size_t v79; // r14
  char *v80; // rdi
  unsigned __int64 v81; // rdx
  PVOID v82; // r15
  unsigned int v83; // esi
  char *v84; // rcx
  unsigned int v85; // r9d
  signed int v86; // eax
  char *v87; // r8
  bool v88; // zf
  unsigned int *v89; // rdx
  unsigned int v90; // ecx
  _DWORD *v91; // rax
  unsigned int *v92; // rax
  int v93; // edx
  __int64 v94; // r8
  unsigned int *v95; // rcx
  SIZE_T v96; // r14
  const void *v97; // r12
  unsigned int *v98; // rax
  unsigned int i; // edx
  __int64 v100; // r8
  unsigned int *v101; // rcx
  SIZE_T v102; // rsi
  const void *v103; // r15
  unsigned int *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned int *v107; // rdi
  PVOID v108; // rax
  PVOID v109; // rax
  int updated; // eax
  UINT v111; // ecx
  unsigned __int8 *v112; // rax
  unsigned __int8 *v113; // rbx
  ULONGLONG v114; // rdx
  ULONGLONG v115; // rcx
  ULONGLONG v116; // rdx
  __int64 *v117; // rbx
  unsigned int v118; // eax
  size_t v119; // rdi
  int v120; // ecx
  __int64 v121; // rbx
  unsigned __int64 v122; // rax
  __m128i v123; // xmm1
  __m128i v124; // xmm2
  __m128i v125; // xmm0
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i v128; // xmm1
  __m128i v129; // xmm1
  __m128i v130; // xmm1
  ULONGLONG v131; // r12
  char *v132; // rax
  char *v133; // rcx
  ULONGLONG v134; // r8
  ACCESS_MASK v135; // r11d
  int v136; // r10d
  char *v137; // rsi
  unsigned int v138; // r15d
  int v139; // ebx
  _BYTE *v140; // r8
  unsigned __int8 *v141; // r9
  unsigned __int8 *v142; // rdx
  _BYTE *v143; // rbx
  __int64 v144; // rsi
  unsigned __int8 *v145; // rdi
  __int64 v146; // r14
  int v147; // r12d
  int v148; // r15d
  int v149; // r10d
  unsigned __int8 v150; // al
  unsigned int v151; // r15d
  int v152; // edi
  int v153; // r15d
  int v154; // edi
  int v155; // r15d
  int v156; // edi
  int v157; // r15d
  unsigned int v158; // edi
  int v159; // r15d
  int v160; // edi
  _BYTE *v161; // r8
  NTSTATUS v162; // r11d
  int v163; // r15d
  PVOID v164; // rax
  PVOID v165; // rbx
  UINT v166; // edx
  UINT v167; // ecx
  void *v168; // r11
  UINT v169; // eax
  _DWORD *v170; // rax
  ULONGLONG v171; // rcx
  ULONGLONG v172; // rcx
  UINT v173; // eax
  void *v174; // rcx
  void *v175; // rcx
  void *v176; // rcx
  void *v177; // rcx
  void *v178; // rcx
  void *v179; // rcx
  int v181; // eax
  int v182; // eax
  __int64 v183; // rsi
  ULONG v184; // ebx
  ULONG v185; // ebx
  ULONG v186; // ebx
  ACL *v187; // rax
  ACL *v188; // rdi
  BOOLEAN v189; // bl
  unsigned int v190; // ebx
  const void **v191; // rsi
  void *v192; // rcx
  void *v193; // rcx
  void *v194; // rcx
  void *v195; // rcx
  void *v196; // rcx
  void *v197; // rcx
  int v198; // r11d
  int v199; // r15d
  ACCESS_MASK v200; // r9d
  UINT v201; // r10d
  int v202; // r8d
  char v203; // dl
  int v204; // eax
  unsigned __int8 *v205; // rax
  ULONGLONG v206; // rdx
  unsigned __int8 *v207; // rbx
  __int64 v208; // rdi
  unsigned __int8 v209; // cl
  int v210; // eax
  int v211; // eax
  UINT v212; // r11d
  ACCESS_MASK v213; // r15d
  int v214; // eax
  int v215; // eax
  void *v216; // rcx
  void *v217; // rcx
  void *v218; // rcx
  __int64 v219; // rsi
  ULONG v220; // ebx
  ULONG v221; // ebx
  ULONG v222; // ebx
  ACL *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // r8
  ACL *v226; // rdi
  BOOLEAN v227; // bl
  bool v228; // bl
  unsigned int v229; // edi
  int v230; // eax
  _KPROCESS *Process; // rcx
  PVOID v232; // r11
  ULONGLONG v233; // rcx
  unsigned int v234; // r10d
  int v235; // r9d
  unsigned int v236; // r9d
  const wchar_t *v237; // rcx
  unsigned int v238; // eax
  size_t v239; // rsi
  PVOID v240; // rdi
  ULONGLONG v241; // rcx
  unsigned int v242; // r10d
  int v243; // r9d
  int v244; // r9d
  int *v245; // rax
  unsigned __int64 v246; // rax
  unsigned int v247; // edi
  unsigned int v248; // eax
  unsigned int v249; // ecx
  size_t v250; // rsi
  PVOID v251; // rax
  unsigned int v252; // ecx
  unsigned int v253; // eax
  unsigned int v254; // r8d
  int v255; // eax
  unsigned int v256; // edx
  int v257; // ecx
  PVOID v258; // rax
  int v259; // edx
  _DWORD *v260; // r9
  _DWORD *v261; // rcx
  ULONGLONG v262; // rcx
  unsigned int v263; // r10d
  int v264; // r9d
  int v265; // r9d
  int *v266; // rax
  unsigned int v267; // ecx
  unsigned int v268; // eax
  unsigned int v269; // edx
  unsigned int v270; // ecx
  int v271; // eax
  unsigned int v272; // r8d
  PVOID v273; // rax
  int v274; // edx
  _DWORD *v275; // r9
  _DWORD *v276; // rcx
  unsigned int v277; // ecx
  unsigned int v278; // eax
  unsigned int v279; // r8d
  int v280; // eax
  unsigned int v281; // edx
  int v282; // ecx
  PVOID v283; // r9
  int v284; // edx
  _DWORD *v285; // r9
  _DWORD *v286; // rcx
  bool v287; // bl
  int v288; // r8d
  NTSTATUS v289; // eax
  UINT v290; // edx
  UINT *v291; // r10
  UINT v292; // ebx
  NTSTATUS v293; // eax
  ULONGLONG v294; // r10
  UINT v295; // r11d
  int v296; // edx
  _DWORD *v297; // r10
  int *v298; // rcx
  PVOID v299; // r9
  int v300; // edx
  _DWORD *v301; // r9
  _DWORD *v302; // rcx
  unsigned int v303; // r9d
  int v304; // edx
  char v305; // r8
  int v306; // eax
  ULONGLONG v307; // rdx
  unsigned __int8 *v308; // rax
  unsigned __int8 *v309; // r12
  __int64 v310; // rdi
  unsigned __int8 v311; // cl
  int v312; // eax
  int v313; // eax
  ACCESS_MASK v314; // r10d
  int v315; // eax
  int v316; // eax
  const void **v317; // [rsp+58h] [rbp-B0h]
  const void **v318; // [rsp+60h] [rbp-A8h]
  unsigned int v319; // [rsp+70h] [rbp-98h]
  ACCESS_MASK v320; // [rsp+70h] [rbp-98h]
  int v321; // [rsp+70h] [rbp-98h]
  int v322; // [rsp+70h] [rbp-98h]
  int v323; // [rsp+70h] [rbp-98h]
  int v324; // [rsp+70h] [rbp-98h]
  ACCESS_MASK v325; // [rsp+70h] [rbp-98h]
  int v326; // [rsp+74h] [rbp-94h]
  int v327; // [rsp+74h] [rbp-94h]
  int v328; // [rsp+74h] [rbp-94h]
  int v329; // [rsp+74h] [rbp-94h]
  int v330; // [rsp+74h] [rbp-94h]
  int v331; // [rsp+74h] [rbp-94h]
  ACCESS_MASK v332; // [rsp+74h] [rbp-94h]
  unsigned __int8 *v333; // [rsp+78h] [rbp-90h]
  int v334; // [rsp+80h] [rbp-88h]
  UINT v335; // [rsp+80h] [rbp-88h]
  int v336; // [rsp+80h] [rbp-88h]
  int v337; // [rsp+80h] [rbp-88h]
  int v338; // [rsp+80h] [rbp-88h]
  int v339; // [rsp+80h] [rbp-88h]
  UINT v340; // [rsp+80h] [rbp-88h]
  unsigned int v341; // [rsp+84h] [rbp-84h]
  int v342; // [rsp+84h] [rbp-84h]
  int v343; // [rsp+84h] [rbp-84h]
  int v344; // [rsp+84h] [rbp-84h]
  int v345; // [rsp+84h] [rbp-84h]
  int v346; // [rsp+84h] [rbp-84h]
  unsigned int v347; // [rsp+84h] [rbp-84h]
  unsigned int *v348; // [rsp+88h] [rbp-80h]
  UINT uAddend[2]; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h]
  UINT uAugend; // [rsp+A0h] [rbp-68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v353; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v354; // [rsp+B0h] [rbp-58h] BYREF
  void *v355; // [rsp+B8h] [rbp-50h]
  PVOID v356; // [rsp+C0h] [rbp-48h]
  UINT v357; // [rsp+C8h] [rbp-40h] BYREF
  ULONGLONG v358; // [rsp+D0h] [rbp-38h] BYREF
  ULONGLONG v359; // [rsp+D8h] [rbp-30h] BYREF
  ULONGLONG j; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v361; // [rsp+E8h] [rbp-20h]
  ULONGLONG ullAugend; // [rsp+F0h] [rbp-18h] BYREF
  ULONGLONG v363; // [rsp+F8h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+100h] [rbp-8h] BYREF
  UINT v365; // [rsp+108h] [rbp+0h] BYREF
  UINT puResult; // [rsp+10Ch] [rbp+4h] BYREF
  NTSTATUS AccessStatus; // [rsp+110h] [rbp+8h] BYREF
  int v368; // [rsp+118h] [rbp+10h]
  UINT v369; // [rsp+11Ch] [rbp+14h]
  UINT v370; // [rsp+120h] [rbp+18h]
  unsigned int v371; // [rsp+124h] [rbp+1Ch]
  unsigned int v372; // [rsp+128h] [rbp+20h]
  unsigned int v373; // [rsp+12Ch] [rbp+24h]
  int v374; // [rsp+130h] [rbp+28h] BYREF
  size_t pcbLength; // [rsp+138h] [rbp+30h] BYREF
  NTSTATUS v376[2]; // [rsp+140h] [rbp+38h] BYREF
  ACCESS_MASK v377[2]; // [rsp+148h] [rbp+40h] BYREF
  void *v378; // [rsp+150h] [rbp+48h]
  PVOID v379; // [rsp+158h] [rbp+50h]
  int v380; // [rsp+160h] [rbp+58h]
  int v381; // [rsp+168h] [rbp+60h]
  int v382; // [rsp+16Ch] [rbp+64h]
  int v383; // [rsp+170h] [rbp+68h]
  int v384; // [rsp+178h] [rbp+70h]
  ULONG v385; // [rsp+17Ch] [rbp+74h] BYREF
  int v386; // [rsp+180h] [rbp+78h]
  int v387; // [rsp+188h] [rbp+80h]
  int v388; // [rsp+190h] [rbp+88h]
  int v389; // [rsp+198h] [rbp+90h]
  unsigned int v390; // [rsp+19Ch] [rbp+94h]
  unsigned int v391; // [rsp+1A0h] [rbp+98h]
  unsigned int v392; // [rsp+1A4h] [rbp+9Ch]
  int v393; // [rsp+1A8h] [rbp+A0h]
  ULONG ReturnLength; // [rsp+1ACh] [rbp+A4h] BYREF
  ULONG v395; // [rsp+1B0h] [rbp+A8h] BYREF
  int v396; // [rsp+1B4h] [rbp+ACh]
  PVOID P; // [rsp+1B8h] [rbp+B0h]
  unsigned int v398; // [rsp+1C0h] [rbp+B8h]
  int v399; // [rsp+1C4h] [rbp+BCh]
  int v400; // [rsp+1C8h] [rbp+C0h]
  __int64 v401; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v402; // [rsp+1D8h] [rbp+D0h]
  ULONGLONG v403; // [rsp+1E0h] [rbp+D8h]
  __int64 SystemInformation; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v405; // [rsp+1F0h] [rbp+E8h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+1F8h] [rbp+F0h]
  int v407; // [rsp+200h] [rbp+F8h]
  int v408; // [rsp+204h] [rbp+FCh]
  int v409; // [rsp+208h] [rbp+100h]
  int v410; // [rsp+20Ch] [rbp+104h]
  int v411; // [rsp+210h] [rbp+108h]
  int v412; // [rsp+214h] [rbp+10Ch]
  int v413; // [rsp+218h] [rbp+110h]
  unsigned int v414; // [rsp+21Ch] [rbp+114h]
  const void *v415; // [rsp+220h] [rbp+118h]
  const void *v416; // [rsp+228h] [rbp+120h]
  int v417; // [rsp+230h] [rbp+128h]
  void *v418; // [rsp+238h] [rbp+130h]
  int *v419; // [rsp+240h] [rbp+138h]
  int *v420; // [rsp+248h] [rbp+140h]
  ULONGLONG v421; // [rsp+250h] [rbp+148h]
  _QWORD *v422; // [rsp+258h] [rbp+150h]
  UINT *v423; // [rsp+260h] [rbp+158h]
  _DWORD *v424; // [rsp+268h] [rbp+160h]
  ULONGLONG v425[2]; // [rsp+278h] [rbp+170h] BYREF
  ULONGLONG v426[2]; // [rsp+288h] [rbp+180h] BYREF
  ULONGLONG v427[2]; // [rsp+298h] [rbp+190h] BYREF
  ULONGLONG v428[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  ULONGLONG v429; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+2E0h] [rbp+1D8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+300h] [rbp+1F8h] BYREF
  _BYTE v433[40]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v434; // [rsp+350h] [rbp+248h] BYREF
  __int64 v435; // [rsp+358h] [rbp+250h] BYREF

  v5 = 0LL;
  v361 = a3;
  v423 = a5;
  v6 = 0LL;
  v422 = a4;
  v7 = 0LL;
  v317 = 0LL;
  v8 = 0LL;
  v348 = 0LL;
  v9 = 0LL;
  v368 = 0;
  v356 = 0LL;
  v354 = 0LL;
  v355 = 0LL;
  *(_QWORD *)uAddend = 0LL;
  Src = 0LL;
  v333 = 0LL;
  v353 = 0;
  v402 = 0LL;
  v318 = 0LL;
  v415 = 0LL;
  v391 = 0;
  v416 = 0LL;
  v392 = 0;
  j = 0LL;
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
    v8 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  if ( a2 - 4 < (unsigned int)v10 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    goto LABEL_204;
  }
  v12 = (unsigned int *)&v11[v10];
  if ( &v11[v10] < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
  {
    Acl = -1073741675;
    v8 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    goto LABEL_204;
  }
  v13 = *v12;
  v14 = (char *)(v12 + 1);
  if ( v12 + 1 < v12 )
    goto LABEL_720;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_720;
  if ( a2 - v15 < (unsigned int)v13 )
  {
    Acl = -1073741762;
    v5 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  v16 = (unsigned int *)&v14[v13];
  if ( &v14[v13] < v14 )
    goto LABEL_720;
  v17 = v13 + v15;
  if ( (unsigned int)v13 + v15 < v15 )
    goto LABEL_720;
  if ( a2 - v17 < 4 )
  {
    Acl = -1073741762;
    v5 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  v18 = *v16;
  v19 = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_720;
  v20 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_720;
  if ( a2 - v20 < (unsigned int)v18 )
  {
LABEL_271:
    Acl = -1073741762;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  if ( (unsigned int)v18 + v20 < v20 )
  {
LABEL_720:
    Acl = -1073741675;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    goto LABEL_204;
  }
  if ( a2 != (_DWORD)v18 + v20 || (unsigned int)(v10 + v18 + v13) + 12LL != a2 )
    goto LABEL_271;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  v22 = (ULONGLONG)PoolWithTag;
  if ( !PoolWithTag )
  {
    v22 = j;
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
    *(_QWORD *)(v22 + 8) = v23;
    memmove(v23, v11, (unsigned int)v10);
  }
  else
  {
    *(_DWORD *)v22 = 0;
    *(_QWORD *)(v22 + 8) = 0LL;
  }
  if ( v14 )
  {
    *(_DWORD *)(v22 + 16) = v13;
    if ( (_DWORD)v13 )
    {
      v24 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
      if ( v24 )
      {
        *(_QWORD *)(v22 + 24) = v24;
        memmove(v24, v14, v13);
        goto LABEL_28;
      }
LABEL_278:
      Acl = -1073741801;
      goto LABEL_279;
    }
    Acl = -1073741762;
LABEL_279:
    v192 = *(void **)(v22 + 8);
    if ( v192 )
    {
      ExFreePoolWithTag(v192, 0x20534C53u);
      *(_QWORD *)(v22 + 8) = 0LL;
    }
    v193 = *(void **)(v22 + 24);
    if ( v193 )
    {
      ExFreePoolWithTag(v193, 0x20534C53u);
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    v194 = *(void **)(v22 + 40);
    if ( v194 )
    {
      ExFreePoolWithTag(v194, 0x20534C53u);
      *(_QWORD *)(v22 + 40) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v22, 0x20534C53u);
    v22 = j;
    goto LABEL_33;
  }
  *(_DWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 24) = 0LL;
LABEL_28:
  if ( !v19 )
  {
    *(_DWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 40) = 0LL;
    goto LABEL_32;
  }
  *(_DWORD *)(v22 + 32) = v18;
  if ( !(_DWORD)v18 )
  {
    Acl = -1073741762;
    goto LABEL_279;
  }
  v25 = ExAllocatePoolWithTag(PagedPool, v18, 0x20534C53u);
  if ( !v25 )
    goto LABEL_278;
  *(_QWORD *)(v22 + 40) = v25;
  memmove(v25, v19, v18);
LABEL_32:
  Acl = 0;
LABEL_33:
  if ( Acl < 0 )
  {
    if ( v22 )
    {
      v195 = *(void **)(v22 + 8);
      if ( v195 )
      {
        ExFreePoolWithTag(v195, 0x20534C53u);
        *(_QWORD *)(v22 + 8) = 0LL;
      }
      v196 = *(void **)(v22 + 24);
      if ( v196 )
      {
        ExFreePoolWithTag(v196, 0x20534C53u);
        *(_QWORD *)(v22 + 24) = 0LL;
      }
      v197 = *(void **)(v22 + 40);
      if ( v197 )
      {
        ExFreePoolWithTag(v197, 0x20534C53u);
        *(_QWORD *)(v22 + 40) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v22, 0x20534C53u);
    }
    v7 = 0LL;
  }
  else
  {
    v7 = (unsigned int *)v22;
    v317 = (const void **)v22;
  }
  if ( Acl < 0 )
  {
LABEL_265:
    v5 = v318;
    goto LABEL_261;
  }
  v403 = 0LL;
  v27 = 0LL;
  v378 = 0LL;
  v365 = 0;
  if ( v7 && *((_QWORD *)v7 + 1) && *v7 && *((_QWORD *)v7 + 5) && v7[8] && *((_QWORD *)v7 + 3) && v7[4] )
  {
    v403 = *v7;
    v28 = (unsigned __int8 *)*((_QWORD *)v7 + 1);
    *(_QWORD *)v377 = v28;
    if ( v28 )
    {
      v29 = *v7;
      if ( *v7 )
      {
        v30 = *((_QWORD *)v7 + 3);
        ullAugend = v30;
        if ( v30 )
        {
          v31 = (__int64 *)*((_QWORD *)v7 + 5);
          if ( v31 )
          {
            if ( v7[8] == 8 && v7[4] == 160 )
            {
              v32 = *v31;
              v33 = v29 - 8;
              LOBYTE(v357) = 0;
              v363 = v29 - 8;
              v34 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v29 - 8, 0x20534C53u);
              v359 = (ULONGLONG)v34;
              v35 = v34;
              if ( v34 )
              {
                v434 = v32;
                v36 = v34;
                v37 = v33 & 7;
                if ( v37 )
                {
                  v324 = -1;
                  v339 = 0;
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
                    v204 = *v28;
                    if ( v202 >= 4 )
                      v200 |= v204 << v203;
                    else
                      v201 |= v204 << (v203 - 32);
                    ++v202;
                    v203 -= 8;
                    ++v28;
                  }
                  while ( v202 < v37 );
                  uAugend = v201;
                  GrantedAccess = v200;
                  j = 30LL;
                  v205 = (unsigned __int8 *)(v30 + 158);
                  v206 = 16LL;
                  pullResult = v30 + 158;
                  v207 = (unsigned __int8 *)(v30 + 126);
                  v358 = 16LL;
                  v208 = 30LL;
                  do
                  {
                    v209 = v205[1];
                    if ( v209 < 0x1Fu )
                    {
                      v210 = funcs_1404F4BF6[v209](
                               v208 + 1,
                               *(v207 - 2),
                               *(v207 - 1),
                               *v207,
                               v207[1],
                               (__int64)&v434,
                               v198);
                      v198 = v339;
                      v199 = v210 ^ v324;
                      v205 = (unsigned __int8 *)pullResult;
                      v206 = v358;
                      v324 = v199;
                    }
                    if ( *v205 < 0x1Fu )
                    {
                      v211 = funcs_1404F4BF6[*v205](
                               v208,
                               *(v207 - 6),
                               *(v207 - 5),
                               *(v207 - 4),
                               *(v207 - 3),
                               (__int64)&v434,
                               v199);
                      v199 = v324;
                      v198 = v211 ^ v339;
                      v205 = (unsigned __int8 *)pullResult;
                      v206 = v358;
                      v339 = v198;
                    }
                    v205 -= 2;
                    v208 -= 2LL;
                    v207 -= 8;
                    pullResult = (ULONGLONG)v205;
                    v358 = --v206;
                  }
                  while ( v206 );
                  v212 = uAugend ^ v198;
                  v213 = GrantedAccess ^ v199;
                  v214 = 0;
                  v30 = ullAugend;
                  v340 = v212;
                  v325 = v213;
                  do
                  {
                    if ( v214 >= 4 )
                    {
                      v213 = __ROL4__(v213, 8);
                      *(_BYTE *)v36 = v213;
                    }
                    else
                    {
                      v212 = __ROL4__(v212, 8);
                      *(_BYTE *)v36 = v212;
                    }
                    ++v214;
                    v36 = (unsigned int *)((char *)v36 + 1);
                  }
                  while ( v214 < v37 );
                  v39 = v340;
                  LODWORD(v32) = v434;
                  v215 = v37 - 4;
                  v35 = (unsigned int *)v359;
                  if ( v37 - 4 <= 0 )
                  {
                    v38 = 0;
                    if ( v215 < 0 )
                      v39 = v340 >> (-8 * v215) << (-8 * v215);
                  }
                  else
                  {
                    v38 = v325 >> (8 * (4 - v215)) << (8 * (4 - v215));
                  }
                }
                else
                {
                  GrantedAccess = -1;
                  uAugend = 0;
                  v38 = 0;
                  v39 = 0;
                }
                v40 = v363;
                j = v363 >> 3;
                if ( v363 >> 3 )
                {
                  v41 = v30 + 158;
                  v42 = (unsigned __int8 *)(v30 + 126);
                  ullAugend = (ULONGLONG)v42;
                  v43 = v28 + 2;
                  v44 = (char *)v36 + 7;
                  v358 = v41;
                  while ( 1 )
                  {
                    v45 = v43[2] << 8;
                    v46 = v43[3];
                    v47 = (v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8)) ^ v39;
                    v376[0] = v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8);
                    v48 = v43[5] | ((v43[4] | ((v46 | v45) << 8)) << 8);
                    pullResult = (ULONGLONG)(v43 + 8);
                    AccessStatus = v48;
                    v49 = v32 ^ HIDWORD(v434) ^ v47 ^ v48 ^ v38;
                    v50 = (unsigned __int16)v32;
                    v51 = (v49 >> 8) ^ (WORD2(v434) * (v49 ^ WORD1(v434))) ^ v47;
                    v52 = (WORD1(v434) * __ROR4__(HIDWORD(v434) - v51, 11) - __ROR4__(v51, 12)) ^ v49;
                    v53 = ((unsigned __int16)v32 * __ROL4__(HIDWORD(v434) ^ v52, 8) - __ROL4__(v52, 2)) ^ v51;
                    v54 = __ROR4__(v53, 9) ^ (HIWORD(v434) * __ROR4__(v53 - v32, 4)) ^ v52;
                    v55 = (__ROR4__(v54, 4) + WORD2(v434) * __ROR4__(v32 - v54, 10)) ^ v53;
                    v56 = (WORD1(v434) * __ROL4__(v55 ^ HIWORD(v434), 4) - __ROR4__(v55, 16)) ^ v54;
                    v57 = ((unsigned __int16)v32 * (v56 ^ WORD1(v434)) - __ROR4__(v56, 7)) ^ v55;
                    v58 = (v57 - HIWORD(v434) - v32) ^ v56;
                    v59 = __ROR4__(v58, 11) ^ (WORD2(v434) * __ROR4__(v32 - v58, 9)) ^ v57;
                    v60 = (unsigned __int8 *)v41;
                    v61 = 30LL;
                    v62 = 16LL;
                    v63 = (WORD1(v434) * (v59 - WORD2(v434)) - (v59 >> 13)) ^ v58;
                    v319 = v63;
                    v64 = (v63 >> 15) ^ (v50 * __ROL4__(v63 - WORD2(v434), 3)) ^ v59;
                    v334 = v64;
                    do
                    {
                      v65 = v60[1];
                      if ( v65 < 0x1Fu )
                      {
                        v67 = funcs_1404F4BF6[v65](v61 + 1, *(v42 - 2), *(v42 - 1), *v42, v42[1], (__int64)&v434, v64);
                        v64 = v334;
                        v63 = v67 ^ v319;
                        v319 ^= v67;
                      }
                      if ( *v60 < 0x1Fu )
                      {
                        v66 = funcs_1404F4BF6[*v60](
                                v61,
                                *(v42 - 6),
                                *(v42 - 5),
                                *(v42 - 4),
                                *(v42 - 3),
                                (__int64)&v434,
                                v63);
                        v63 = v319;
                        v64 = v66 ^ v334;
                        v334 ^= v66;
                      }
                      v61 -= 2LL;
                      v42 -= 8;
                      v60 -= 2;
                      --v62;
                    }
                    while ( v62 );
                    v320 = GrantedAccess ^ v63;
                    v335 = uAugend ^ v64;
                    *(v44 - 4) = uAugend ^ v64;
                    v336 = __ROR4__(v335, 8);
                    *v44 = v320;
                    v321 = __ROR4__(v320, 8);
                    *(v44 - 5) = v336;
                    v337 = __ROR4__(v336, 8);
                    *(v44 - 1) = v321;
                    v322 = __ROR4__(v321, 8);
                    *(v44 - 6) = v337;
                    v338 = __ROR4__(v337, 8);
                    *(v44 - 2) = v322;
                    v323 = __ROR4__(v322, 8);
                    *(v44 - 7) = v338;
                    *(v44 - 3) = v323;
                    v44 += 8;
                    v39 = __ROR4__(v338, 8);
                    v38 = __ROR4__(v323, 8);
                    v88 = j-- == 1;
                    uAugend = v376[0];
                    GrantedAccess = AccessStatus;
                    if ( v88 )
                      break;
                    LODWORD(v32) = v434;
                    v43 = (unsigned __int8 *)pullResult;
                    v41 = v358;
                    v42 = (unsigned __int8 *)ullAugend;
                  }
                  v40 = v363;
                  v35 = (unsigned int *)v359;
                }
                v68 = 0LL;
                if ( v40 )
                {
                  if ( v40 < 0x20 )
                  {
                    v77 = v357;
                  }
                  else
                  {
                    v69 = 0LL;
                    v70 = 0LL;
                    do
                    {
                      v69 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v35 + v68)), v69);
                      v71 = _mm_loadu_si128((const __m128i *)((char *)v35 + v68 + 16));
                      v68 += 32LL;
                      v72 = _mm_xor_si128(v71, v70);
                      v70 = v72;
                    }
                    while ( v68 < (v40 & 0xFFFFFFFFFFFFFFE0uLL) );
                    v73 = _mm_xor_si128(v69, v72);
                    v74 = _mm_xor_si128(v73, _mm_srli_si128(v73, 8));
                    v75 = _mm_xor_si128(v74, _mm_srli_si128(v74, 4));
                    v76 = _mm_xor_si128(v75, _mm_srli_si128(v75, 2));
                    v77 = _mm_cvtsi128_si32(_mm_xor_si128(v76, _mm_srli_si128(v76, 1)));
                    v357 = v77;
                  }
                  if ( v68 < v40 )
                  {
                    do
                      LOBYTE(v77) = *((_BYTE *)v35 + v68++) ^ v77;
                    while ( v68 < v40 );
                    v357 = v77;
                  }
                }
                if ( (unsigned __int8)v357 == *(_QWORD *)(v40 + *(_QWORD *)v377) )
                {
                  Acl = v365;
                  v403 = v40;
                  v348 = v35;
                  v378 = 0LL;
                  v368 = v40;
                  goto LABEL_73;
                }
                ExFreePoolWithTag(v35, 0x20534C53u);
                v27 = v378;
              }
              else
              {
                v27 = v378;
              }
            }
          }
        }
      }
    }
    Acl = -1073741823;
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0x20534C53u);
      v378 = 0LL;
    }
    v35 = 0LL;
    LODWORD(v40) = v368;
LABEL_73:
    if ( Acl < 0 )
      goto LABEL_718;
    if ( (unsigned int)v40 < 4 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v7 = (unsigned int *)v317;
      v8 = 0LL;
      v9 = 0LL;
      goto LABEL_262;
    }
    v78 = *v35;
    v357 = *v35;
    if ( v35 + 1 < v35 )
      goto LABEL_326;
    if ( (unsigned int)(v40 - 4) < 4 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v7 = (unsigned int *)v317;
      v8 = 0LL;
      v9 = 0LL;
      goto LABEL_262;
    }
    v79 = v35[1];
    v80 = (char *)(v35 + 2);
    if ( v35 + 2 < v35 + 1 )
      goto LABEL_326;
    if ( (int)v40 - 8 < (unsigned int)v79 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v7 = (unsigned int *)v317;
      v8 = 0LL;
      v9 = 0LL;
      goto LABEL_262;
    }
    if ( (unsigned int)v79 >= 0xFFFFFFF8 )
    {
LABEL_326:
      v5 = 0LL;
      Acl = -1073741675;
      v7 = (unsigned int *)v317;
      v8 = 0LL;
      v9 = 0LL;
      goto LABEL_262;
    }
    v81 = (unsigned __int64)&v80[v79];
    if ( (char *)v35 + (unsigned int)v40 < &v80[v79] || (unsigned int)v40 - v79 - 8 >= 8 )
    {
      Acl = -1073741762;
    }
    else
    {
      v82 = 0LL;
      v83 = 0;
      if ( v35 == (unsigned int *)-8LL )
        goto LABEL_95;
      v84 = (char *)(v35 + 2);
      if ( v81 < (unsigned __int64)v80 )
      {
LABEL_331:
        Acl = -1073741675;
      }
      else
      {
        if ( (unsigned __int64)v80 < v81 )
        {
          v85 = v390;
          while ( 1 )
          {
            if ( v84 + 4 < v84 )
              goto LABEL_331;
            if ( (unsigned __int64)(v84 + 4) > v81 )
              goto LABEL_333;
            if ( *(_DWORD *)v84 >= 0xFFFFFFFC )
            {
              v86 = -1073741675;
            }
            else
            {
              v85 = *(_DWORD *)v84 + 4;
              v86 = 0;
              v390 = v85;
            }
            v365 = v86;
            if ( v86 < 0 )
              break;
            v87 = &v84[v85];
            if ( v87 < v84 )
            {
              Acl = -1073741675;
              goto LABEL_337;
            }
            v84 += v85;
            if ( (unsigned __int64)v87 > v81 )
            {
              Acl = -1073741811;
              goto LABEL_337;
            }
            ++v83;
            v88 = v84 == (char *)v81;
            if ( (unsigned __int64)v84 >= v81 )
              goto LABEL_94;
          }
          Acl = v365;
          v89 = (unsigned int *)v356;
          goto LABEL_101;
        }
        v88 = v80 == (char *)v81;
LABEL_94:
        if ( v88 )
        {
LABEL_95:
          if ( (_DWORD)v79 && (v82 = ExAllocatePoolWithTag(PagedPool, v79, 0x20534C53u)) == 0LL )
          {
            v89 = (unsigned int *)v356;
            Acl = -1073741801;
          }
          else
          {
            if ( v80 )
              memmove(v82, v80, v79);
            v89 = (unsigned int *)v82;
            v356 = v82;
            v355 = v82;
            Acl = 0;
            v354 = __PAIR64__(v79, v83);
          }
          v78 = v357;
LABEL_101:
          if ( Acl < 0 )
            goto LABEL_718;
          if ( v78 != (_DWORD)v354 )
          {
            v5 = 0LL;
            Acl = -1073741762;
            v7 = (unsigned int *)v317;
            v8 = 0LL;
            v9 = 0LL;
            goto LABEL_262;
          }
          goto LABEL_103;
        }
LABEL_333:
        Acl = -1073741811;
      }
    }
LABEL_337:
    v89 = (unsigned int *)v356;
LABEL_103:
    if ( Acl >= 0 )
    {
      if ( v89 )
      {
        if ( (_DWORD)v354 )
        {
          v90 = *v89;
          v91 = v89 + 1;
          if ( v89 + 1 < v89 )
          {
            Acl = -1073741675;
          }
          else
          {
            v414 = *v89;
            if ( !v90 )
              v91 = 0LL;
            v424 = v91;
            Acl = 0;
            if ( v90 != 4 )
            {
              v5 = 0LL;
              Acl = -1073741789;
              v7 = (unsigned int *)v317;
              v8 = 0LL;
              v9 = 0LL;
              goto LABEL_262;
            }
            v393 = *v91;
          }
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
      if ( Acl >= 0 )
      {
        if ( !v89 )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v7 = (unsigned int *)v317;
          v8 = 0LL;
          v6 = v348;
          v9 = 0LL;
          goto LABEL_206;
        }
        if ( (unsigned int)v354 <= 1 )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v7 = (unsigned int *)v317;
          v8 = 0LL;
          v9 = 0LL;
          goto LABEL_262;
        }
        v92 = v89;
        v93 = 0;
        do
        {
          v94 = *v92;
          v95 = v92 + 1;
          if ( v92 + 1 < v92 )
            goto LABEL_717;
          v92 = (unsigned int *)((char *)v95 + v94);
          if ( (unsigned int *)((char *)v95 + v94) < v95 )
            goto LABEL_717;
          ++v93;
        }
        while ( !v93 );
        v96 = *v92;
        v97 = v92 + 1;
        if ( v92 + 1 < v92 )
          goto LABEL_717;
        v391 = *v92;
        if ( !(_DWORD)v96 )
          v97 = 0LL;
        v415 = v97;
        if ( (unsigned int)v354 <= 2 )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v7 = (unsigned int *)v317;
          v8 = 0LL;
          v9 = 0LL;
          goto LABEL_262;
        }
        v98 = (unsigned int *)v356;
        for ( i = 0; i < 2; ++i )
        {
          v100 = *v98;
          v101 = v98 + 1;
          if ( v98 + 1 < v98 )
            goto LABEL_717;
          v98 = (unsigned int *)((char *)v101 + v100);
          if ( (unsigned int *)((char *)v101 + v100) < v101 )
            goto LABEL_717;
        }
        v102 = *v98;
        v103 = v98 + 1;
        if ( v98 + 1 < v98 )
        {
LABEL_717:
          v5 = 0LL;
          Acl = -1073741675;
          v7 = (unsigned int *)v317;
          v8 = 0LL;
          v9 = 0LL;
          goto LABEL_262;
        }
        v392 = *v98;
        if ( !(_DWORD)v102 )
          v103 = 0LL;
        v416 = v103;
        v104 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
        v107 = v104;
        if ( !v104 )
        {
          v5 = 0LL;
          Acl = -1073741801;
          goto LABEL_139;
        }
        memset(v104, 0, 0x30uLL);
        *v107 = 0;
        *((_QWORD *)v107 + 1) = 0LL;
        if ( v97 )
        {
          v107[4] = v96;
          if ( !(_DWORD)v96 )
          {
            Acl = -1073741762;
LABEL_348:
            v216 = (void *)*((_QWORD *)v107 + 1);
            if ( v216 )
            {
              ExFreePoolWithTag(v216, 0x20534C53u);
              *((_QWORD *)v107 + 1) = 0LL;
            }
            v217 = (void *)*((_QWORD *)v107 + 3);
            if ( v217 )
            {
              ExFreePoolWithTag(v217, 0x20534C53u);
              *((_QWORD *)v107 + 3) = 0LL;
            }
            v218 = (void *)*((_QWORD *)v107 + 5);
            if ( v218 )
            {
              ExFreePoolWithTag(v218, 0x20534C53u);
              *((_QWORD *)v107 + 5) = 0LL;
            }
            ExFreePoolWithTag(v107, 0x20534C53u);
            v5 = 0LL;
LABEL_139:
            if ( Acl >= 0 )
            {
              if ( !v393 )
              {
                updated = SPCallServerHandleQueryPolicy(&v354, v5, v361, uAddend);
LABEL_142:
                v7 = (unsigned int *)v317;
                goto LABEL_143;
              }
              switch ( v393 )
              {
                case 1:
                  v183 = qword_1407F3458;
                  v184 = RtlLengthSid(*(PSID *)(qword_1407F3458 + 392));
                  v185 = RtlLengthSid(*(PSID *)(v183 + 384)) + v184;
                  v186 = RtlLengthSid(*(PSID *)(v183 + 272)) + 32 + v185;
                  v187 = (ACL *)ExAllocatePoolWithTag(PagedPool, v186, 0x20534C53u);
                  v188 = v187;
                  if ( v187 )
                  {
                    Acl = RtlCreateAcl(v187, v186, 2u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(v188, 2u, 0, 32, *(unsigned __int8 **)(v183 + 384), 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(v188, 2u, 0, 32, *(unsigned __int8 **)(v183 + 392), 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlpAddKnownAce(v188, 2u, 0, 32, *(unsigned __int8 **)(v183 + 272), 0);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                            if ( Acl >= 0 )
                            {
                              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v188, 0);
                              if ( Acl >= 0 )
                              {
                                SeCaptureSubjectContext(&SubjectContext);
                                v189 = SeAccessCheck(
                                         SecurityDescriptor,
                                         &SubjectContext,
                                         0,
                                         0x20u,
                                         0,
                                         0LL,
                                         (PGENERIC_MAPPING)&IopFileMapping,
                                         1,
                                         &GrantedAccess,
                                         &AccessStatus);
                                SeReleaseSubjectContext(&SubjectContext);
                                if ( !v189 )
                                  Acl = AccessStatus;
                              }
                            }
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v188, 0x20534C53u);
                    if ( Acl >= 0 )
                    {
                      ReturnLength = 0;
                      SystemInformation = 8LL;
                      Acl = 0;
                      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
                      v7 = (unsigned int *)v317;
                      v190 = *((_DWORD *)v317 + 4);
                      if ( v190 == 160 )
                      {
                        v191 = v318;
                        if ( !memcmp(qword_140790280, v317[3], 0xA0uLL)
                          && *((_DWORD *)v318 + 4) == 160
                          && !memcmp(qword_1407908C0, v318[3], 0xA0uLL)
                          && *((_DWORD *)v317 + 8) == 8
                          && *(_QWORD *)v317[5] == 0xA564595855B292C4uLL
                          && *((_DWORD *)v318 + 8) == 8
                          && *(_QWORD *)v318[5] == 0x1B732BD76B4D09FCLL )
                        {
                          goto LABEL_255;
                        }
                      }
                      else
                      {
                        v191 = v318;
                      }
                      if ( v190 != 160
                        || memcmp(qword_140790640, v317[3], 0xA0uLL)
                        || *((_DWORD *)v191 + 4) != 160
                        || memcmp(qword_140790000, v191[3], 0xA0uLL)
                        || *((_DWORD *)v317 + 8) != 8
                        || *(_QWORD *)v317[5] != 0x93278D843BBDC445uLL
                        || *((_DWORD *)v191 + 8) != 8
                        || *(_QWORD *)v191[5] != 0x6223E824AB21D998LL )
                      {
                        Acl = -2147024891;
                      }
                      if ( Acl < 0 )
                        goto LABEL_265;
LABEL_255:
                      Acl = 0;
                      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                        Acl = -2147024891;
                      v356 = v355;
LABEL_258:
                      if ( Acl < 0 )
                        goto LABEL_265;
                      v5 = v318;
                      updated = SPCallServerHandleUpdatePolicies((__int64)&v354, (__int64)v318, v361, (__int64)uAddend);
LABEL_143:
                      Acl = updated;
                      if ( updated >= 0 )
                        goto LABEL_144;
LABEL_261:
                      v8 = 0LL;
                      v9 = 0LL;
                      goto LABEL_262;
                    }
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                  v7 = (unsigned int *)v317;
                  goto LABEL_258;
                case 2:
                  updated = SPCallServerHandleAuthenticateCaller(v106, v5, v361, uAddend);
                  goto LABEL_142;
                case 4:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140765BFC(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 5:
                  v7 = (unsigned int *)v317;
                  Acl = SPCallServerHandleWaitForDisplayWindow(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 6:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076D484(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 7:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076B714(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 22:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140768F7C(&v354, v105, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 23:
                  v219 = qword_1407F3458;
                  v220 = RtlLengthSid(*(PSID *)(qword_1407F3458 + 384));
                  v221 = RtlLengthSid(*(PSID *)(v219 + 272)) + v220;
                  v222 = RtlLengthSid(*(PSID *)(v219 + 392)) + 32 + v221;
                  v223 = (ACL *)ExAllocatePoolWithTag(PagedPool, v222, 0x20534C53u);
                  v226 = v223;
                  if ( !v223 )
                  {
                    v5 = v318;
                    Acl = -1073741801;
                    v7 = (unsigned int *)v317;
                    goto LABEL_378;
                  }
                  Acl = RtlCreateAcl(v223, v222, 2u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v219 + 384), 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v219 + 392), 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(v226, 2u, 0, 32, *(unsigned __int8 **)(v219 + 272), 0);
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
                                       v377,
                                       v376);
                              SeReleaseSubjectContext(&SubjectSecurityContext);
                              if ( !v227 )
                                Acl = v376[0];
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v226, 0x20534C53u);
                  if ( Acl < 0 )
                  {
                    v5 = v318;
                    v7 = (unsigned int *)v317;
                    goto LABEL_378;
                  }
                  v395 = 0;
                  v405 = 8LL;
                  v228 = 0;
                  ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v405, 8u, &v395);
                  v7 = (unsigned int *)v317;
                  v229 = *((_DWORD *)v317 + 4);
                  if ( v229 == 160 )
                  {
                    v5 = v318;
                    if ( !memcmp(qword_140790320, v317[3], 0xA0uLL)
                      && *((_DWORD *)v318 + 4) == 160
                      && !memcmp(qword_1407903C0, v318[3], 0xA0uLL)
                      && *((_DWORD *)v317 + 8) == 8
                      && *(_QWORD *)v317[5] == 0x35DCEB18766AABAALL
                      && *((_DWORD *)v318 + 8) == 8
                      && *(_QWORD *)v318[5] == 0x14CEA8BAE086077CLL )
                    {
                      v228 = 1;
                      goto LABEL_424;
                    }
                  }
                  else
                  {
                    v5 = v318;
                  }
                  if ( v229 == 160 )
                  {
                    if ( !memcmp(qword_1407906E0, v317[3], 0xA0uLL)
                      && *((_DWORD *)v5 + 4) == 160
                      && !memcmp(qword_140790B40, v5[3], 0xA0uLL)
                      && *((_DWORD *)v317 + 8) == 8
                      && *(_QWORD *)v317[5] == 0xF10D668DB2BB8BB9uLL
                      && *((_DWORD *)v5 + 8) == 8
                      && *(_QWORD *)v5[5] == 0x768DFD321621EA95LL )
                    {
                      v228 = 1;
                    }
                    else if ( !memcmp(qword_140790AA0, v317[3], 0xA0uLL)
                           && *((_DWORD *)v5 + 4) == 160
                           && !memcmp(sub_1407900A0, v5[3], 0xA0uLL)
                           && *((_DWORD *)v317 + 8) == 8
                           && *(_QWORD *)v317[5] == 0xA10B922F1A2F2A8AuLL
                           && *((_DWORD *)v5 + 8) == 8
                           && *(_QWORD *)v5[5] == 0xC349B50B0A716A96uLL )
                    {
                      v228 = 1;
                    }
                    else if ( !memcmp(qword_140790500, v317[3], 0xA0uLL)
                           && *((_DWORD *)v5 + 4) == 160
                           && !memcmp(qword_140790780, v5[3], 0xA0uLL)
                           && *((_DWORD *)v317 + 8) == 8
                           && *(_QWORD *)v317[5] == 0xA6723CF736811074uLL
                           && *((_DWORD *)v5 + 8) == 8 )
                    {
                      v228 = *(_QWORD *)v5[5] == 0x7511056E178DA076LL;
                    }
                  }
LABEL_424:
                  Acl = -2147024891;
                  v225 = 0LL;
                  if ( v228 )
                  {
                    v374 = 0;
                    Acl = 0;
                    v230 = QueryUpdateFileEaAllowedExt(&v374);
                    if ( v230 == -1073741637 || (Acl = v230, v230 >= 0) && v374 != 1 )
                    {
                      Process = KeGetCurrentThread()->ApcState.Process;
                      v356 = v355;
                      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                        Acl = -2147024891;
                    }
                  }
LABEL_378:
                  if ( Acl >= 0 )
                  {
                    Acl = sub_14076883C(&v354, v224, v225, uAddend);
                    if ( Acl >= 0 )
                      goto LABEL_144;
                  }
                  goto LABEL_261;
                case 24:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140768280(&v354, v105, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 30:
                  v232 = v356;
                  v379 = 0LL;
                  if ( (unsigned int)v354 <= 3 )
                  {
                    Acl = -1073741811;
                    goto LABEL_459;
                  }
                  v233 = (ULONGLONG)v356;
                  v363 = (ULONGLONG)v356;
                  do
                  {
                    Acl = RtlULongLongAdd(v233, 4uLL, &v363);
                    if ( Acl < 0 )
                      goto LABEL_446;
                    Acl = RtlULongLongAdd(v363, v234, &v363);
                    if ( Acl < 0 )
                      goto LABEL_446;
                    v233 = v363;
                  }
                  while ( (unsigned int)(v235 + 1) < 3 );
                  Acl = RtlULongLongAdd(v363, 4uLL, &v363);
                  if ( Acl < 0 )
                  {
LABEL_446:
                    v236 = v373;
                    v237 = psz;
                    goto LABEL_447;
                  }
                  v237 = (const wchar_t *)v363;
                  v373 = v236;
                  if ( !v236 )
                    v237 = 0LL;
                  psz = v237;
LABEL_447:
                  if ( Acl < 0 )
                    goto LABEL_481;
                  if ( !v236 )
                  {
                    Acl = -1073741762;
                    goto LABEL_466;
                  }
                  if ( (v236 & 1) != 0 )
                  {
                    Acl = -1073741762;
                    goto LABEL_466;
                  }
                  if ( v237[((unsigned __int64)v236 >> 1) - 1] )
                  {
                    Acl = -1073741762;
                    goto LABEL_466;
                  }
                  if ( StringCbLengthW(v237, v236, &pcbLength) < 0 )
                  {
                    Acl = -1073741762;
                    goto LABEL_466;
                  }
                  if ( pcbLength + 2 != v373 )
                  {
                    Acl = -1073741762;
                    goto LABEL_466;
                  }
                  v418 = (void *)psz;
                  v372 = pcbLength >> 1;
LABEL_459:
                  if ( Acl < 0 )
                    goto LABEL_481;
                  v238 = 2 * v372 + 2;
                  if ( 2 * v372 == -2 )
                  {
                    Acl = -1073741762;
                  }
                  else
                  {
                    v239 = v238;
                    v240 = ExAllocatePoolWithTag(PagedPool, v238, 0x20534C53u);
                    if ( v240 )
                    {
                      Acl = 0;
                      memmove(v240, v418, v239);
                      v398 = v372;
                      v379 = v240;
                    }
                    else
                    {
                      Acl = -1073741801;
                    }
                    v232 = v356;
                    v5 = v318;
                  }
LABEL_466:
                  if ( Acl < 0 )
                    goto LABEL_481;
                  if ( (unsigned int)v354 > 4 )
                  {
                    v241 = (ULONGLONG)v232;
                    v358 = (ULONGLONG)v232;
                    do
                    {
                      Acl = RtlULongLongAdd(v241, 4uLL, &v358);
                      if ( Acl < 0 )
                        goto LABEL_477;
                      Acl = RtlULongLongAdd(v358, v242, &v358);
                      if ( Acl < 0 )
                        goto LABEL_477;
                      v241 = v358;
                    }
                    while ( (unsigned int)(v243 + 1) < 4 );
                    Acl = RtlULongLongAdd(v358, 4uLL, &v358);
                    if ( Acl < 0 )
                    {
LABEL_477:
                      v244 = v396;
                      v245 = v419;
                      goto LABEL_478;
                    }
                    v245 = (int *)v358;
                    v396 = v244;
                    if ( !v244 )
                      v245 = 0LL;
                    v419 = v245;
LABEL_478:
                    if ( Acl < 0 )
                    {
LABEL_481:
                      if ( v379 )
                      {
                        ExFreePoolWithTag(v379, 0x20534C53u);
                        v379 = 0LL;
                      }
                      v7 = (unsigned int *)v317;
                      if ( Acl < 0 )
                      {
LABEL_664:
                        v8 = 0LL;
                        v9 = 0LL;
                        goto LABEL_262;
                      }
LABEL_144:
                      v402 = __rdtsc();
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
                            v112 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v111, 0x20534C53u);
                            v113 = v112;
                            if ( v112 )
                            {
                              pullResult = (ULONGLONG)v112;
                              *(_DWORD *)v112 = uAddend[0];
                              Acl = RtlULongLongAdd((ULONGLONG)v112, 4uLL, &pullResult);
                              if ( Acl >= 0 )
                              {
                                v115 = pullResult;
                                *(_DWORD *)pullResult = uAddend[1];
                                Acl = RtlULongLongAdd(v115, v114, &pullResult);
                                if ( Acl >= 0 )
                                {
                                  *(_QWORD *)&v113[puResult - 8] = v402;
                                  memmove((void *)pullResult, Src, uAddend[1]);
                                  v116 = puResult;
                                  v8 = v113;
                                  v333 = v113;
LABEL_151:
                                  if ( Acl < 0 )
                                  {
LABEL_724:
                                    v9 = 0LL;
                                    goto LABEL_262;
                                  }
                                  P = 0LL;
                                  v421 = 0LL;
                                  if ( v8 )
                                  {
                                    if ( (_DWORD)v116 )
                                    {
                                      v117 = (__int64 *)v5[5];
                                      if ( v117 )
                                      {
                                        v118 = *((_DWORD *)v5 + 8);
                                        if ( v118 )
                                        {
                                          v119 = (size_t)v5[3];
                                          pcbLength = v119;
                                          if ( v119 )
                                          {
                                            v120 = *((_DWORD *)v5 + 4);
                                            if ( v120 )
                                            {
                                              v359 = v116;
                                              if ( v118 != 8 || v120 != 160 )
                                                goto LABEL_710;
                                              v121 = *v117;
                                              LOBYTE(v120) = 0;
                                              v361 = v120;
                                              v122 = 0LL;
                                              if ( v116 >= 0x20 )
                                              {
                                                v123 = 0LL;
                                                v124 = 0LL;
                                                do
                                                {
                                                  v123 = _mm_xor_si128(
                                                           _mm_loadu_si128((const __m128i *)&v8[v122]),
                                                           v123);
                                                  v125 = _mm_loadu_si128((const __m128i *)&v8[v122 + 16]);
                                                  v122 += 32LL;
                                                  v126 = _mm_xor_si128(v125, v124);
                                                  v124 = v126;
                                                }
                                                while ( v122 < (v116 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                v127 = _mm_xor_si128(v123, v126);
                                                v128 = _mm_xor_si128(v127, _mm_srli_si128(v127, 8));
                                                v129 = _mm_xor_si128(v128, _mm_srli_si128(v128, 4));
                                                v130 = _mm_xor_si128(v129, _mm_srli_si128(v129, 2));
                                                v120 = _mm_cvtsi128_si32(_mm_xor_si128(v130, _mm_srli_si128(v130, 1)));
                                                v361 = v120;
                                              }
                                              if ( v122 < v116 )
                                              {
                                                do
                                                  LOBYTE(v120) = v8[v122++] ^ v120;
                                                while ( v122 < v116 );
                                                v361 = v120;
                                              }
                                              v131 = v116 + 8;
                                              pullResult = v116 + 8;
                                              v132 = (char *)ExAllocatePoolWithTag(PagedPool, v116 + 8, 0x20534C53u);
                                              v358 = (ULONGLONG)v132;
                                              v133 = v132;
                                              if ( v132 )
                                              {
                                                v134 = v359;
                                                v135 = 0;
                                                v435 = v121;
                                                v136 = -1;
                                                v341 = 0;
                                                v326 = -1;
                                                v137 = v132;
                                                GrantedAccess = 0;
                                                v138 = 0;
                                                v353 = 0;
                                                v139 = v359 & 7;
                                                if ( (v359 & 7) != 0 )
                                                {
                                                  GrantedAccess = 0;
                                                  v353 = 0;
                                                  v303 = 0;
                                                  v304 = 0;
                                                  v305 = 56;
                                                  do
                                                  {
                                                    v306 = *v8;
                                                    if ( v304 >= 4 )
                                                      v135 |= v306 << v305;
                                                    else
                                                      v303 |= v306 << (v305 - 32);
                                                    ++v304;
                                                    v305 -= 8;
                                                    ++v8;
                                                  }
                                                  while ( v304 < v139 );
                                                  v353 = v303;
                                                  GrantedAccess = v135;
                                                  v307 = 16LL;
                                                  v308 = (unsigned __int8 *)(v119 + 158);
                                                  v309 = (unsigned __int8 *)(v119 + 126);
                                                  j = v119 + 158;
                                                  v363 = 16LL;
                                                  v310 = 30LL;
                                                  do
                                                  {
                                                    v311 = v308[1];
                                                    if ( v311 < 0x1Fu )
                                                    {
                                                      v312 = funcs_1404F4BF6[v311](
                                                               v310 + 1,
                                                               *(v309 - 2),
                                                               *(v309 - 1),
                                                               *v309,
                                                               v309[1],
                                                               (__int64)&v435,
                                                               v138);
                                                      v138 = v341;
                                                      v136 = v312 ^ v326;
                                                      v308 = (unsigned __int8 *)j;
                                                      v307 = v363;
                                                      v326 = v136;
                                                    }
                                                    if ( *v308 < 0x1Fu )
                                                    {
                                                      v313 = funcs_1404F4BF6[*v308](
                                                               v310,
                                                               *(v309 - 6),
                                                               *(v309 - 5),
                                                               *(v309 - 4),
                                                               *(v309 - 3),
                                                               (__int64)&v435,
                                                               v136);
                                                      v136 = v326;
                                                      v138 = v313 ^ v341;
                                                      v308 = (unsigned __int8 *)j;
                                                      v307 = v363;
                                                      v341 = v138;
                                                    }
                                                    v308 -= 2;
                                                    v310 -= 2LL;
                                                    v309 -= 8;
                                                    j = (ULONGLONG)v308;
                                                    v363 = --v307;
                                                  }
                                                  while ( v307 );
                                                  v138 ^= v353;
                                                  v314 = GrantedAccess ^ v136;
                                                  v315 = 0;
                                                  v119 = pcbLength;
                                                  v347 = v138;
                                                  v332 = v314;
                                                  if ( v139 > 0 )
                                                  {
                                                    do
                                                    {
                                                      if ( v315 >= 4 )
                                                      {
                                                        v314 = __ROL4__(v314, 8);
                                                        *v137 = v314;
                                                      }
                                                      else
                                                      {
                                                        v138 = __ROL4__(v138, 8);
                                                        *v137 = v138;
                                                      }
                                                      ++v315;
                                                      ++v137;
                                                    }
                                                    while ( v315 < v139 );
                                                    v138 = v347;
                                                    v314 = v332;
                                                  }
                                                  v316 = v139 - 4;
                                                  if ( v139 - 4 <= 0 )
                                                  {
                                                    v136 = 0;
                                                    if ( v316 < 0 )
                                                      v138 = v138 >> (-8 * v316) << (-8 * v316);
                                                  }
                                                  else
                                                  {
                                                    v136 = v314 >> (8 * (4 - v316)) << (8 * (4 - v316));
                                                  }
                                                  v134 = v359;
                                                  v131 = pullResult;
                                                  v133 = (char *)v358;
                                                }
                                                v363 = v134 >> 3;
                                                if ( v134 >> 3 )
                                                {
                                                  v140 = (_BYTE *)(v119 + 129);
                                                  v141 = (unsigned __int8 *)(v119 + 2);
                                                  *(_QWORD *)v377 = v119 + 129;
                                                  *(_QWORD *)v376 = v119 + 2;
                                                  v142 = v8 + 2;
                                                  j = (ULONGLONG)(v137 + 7);
                                                  do
                                                  {
                                                    v143 = v140;
                                                    v144 = 0LL;
                                                    v145 = v141;
                                                    v146 = 16LL;
                                                    v147 = v142[1] | ((*v142 | ((*(v142 - 1) | (*(v142 - 2) << 8)) << 8)) << 8);
                                                    v148 = v147 ^ v138;
                                                    v342 = v148;
                                                    v149 = (v142[5] | ((v142[4] | ((v142[3] | (v142[2] << 8)) << 8)) << 8)) ^ v136;
                                                    AccessStatus = v142[5] | ((v142[4] | ((v142[3] | (v142[2] << 8)) << 8)) << 8);
                                                    v327 = v149;
                                                    ullAugend = (ULONGLONG)(v142 + 8);
                                                    do
                                                    {
                                                      v150 = *(v143 - 1);
                                                      if ( v150 < 0x1Fu )
                                                      {
                                                        v181 = funcs_1404F4BF6[v150](
                                                                 v144,
                                                                 *(v145 - 2),
                                                                 *(v145 - 1),
                                                                 *v145,
                                                                 v145[1],
                                                                 (__int64)&v435,
                                                                 v149);
                                                        v149 = v327;
                                                        v148 = v181 ^ v342;
                                                        v342 ^= v181;
                                                      }
                                                      if ( *v143 < 0x1Fu )
                                                      {
                                                        v182 = funcs_1404F4BF6[(unsigned __int8)*v143](
                                                                 v144 + 1,
                                                                 v145[2],
                                                                 v145[3],
                                                                 v145[4],
                                                                 v145[5],
                                                                 (__int64)&v435,
                                                                 v148);
                                                        v148 = v342;
                                                        v149 = v182 ^ v327;
                                                        v327 ^= v182;
                                                      }
                                                      v144 += 2LL;
                                                      v145 += 8;
                                                      v143 += 2;
                                                      --v146;
                                                    }
                                                    while ( v146 );
                                                    v151 = (HIWORD(v435) * ((unsigned __int16)v435 + __ROR4__(~v149, 5))) ^ v148;
                                                    pcbLength = (v151 >> 10) ^ (WORD1(v435) * (HIWORD(v435) ^ v151)) ^ v149;
                                                    v152 = (v151 >> 10) ^ (WORD1(v435) * (HIWORD(v435) ^ v151)) ^ v149;
                                                    v153 = __ROR4__(v152, 10) ^ (WORD2(v435) * __ROR4__(v435 ^ v152, 12)) ^ v151;
                                                    v154 = (HIWORD(v435) * __ROR4__(v153 - v435, 14) - __ROL4__(v153, 8)) ^ v152;
                                                    v155 = (__ROL4__(v154, 2)
                                                          + (unsigned __int16)v435 * __ROR4__(v154 + HIDWORD(v435), 15)) ^ v153;
                                                    v156 = (WORD1(v435) * (WORD2(v435) ^ v155)) ^ __ROR4__(v155, 6) ^ v154;
                                                    v157 = (HIDWORD(v435) - (v435 ^ v156)) ^ v155;
                                                    v158 = (HIWORD(v435) * __ROL4__(WORD1(v435) ^ v157, 6)
                                                          - __ROL4__(v157, 2)) ^ v156;
                                                    v159 = ((unsigned __int16)v435 * (v158 - WORD2(v435)) - (v158 >> 13)) ^ v157;
                                                    v160 = (WORD1(v435) * __ROR4__(v159 + HIDWORD(v435), 9)
                                                          - __ROL4__(v159, 2)) ^ v158;
                                                    v161 = (_BYTE *)j;
                                                    v162 = AccessStatus;
                                                    v141 = *(unsigned __int8 **)v376;
                                                    v163 = (__ROL4__(v160, 10) + WORD2(v435) * __ROL4__(v160 - v435, 5)) ^ v159;
                                                    v142 = (unsigned __int8 *)ullAugend;
                                                    v343 = v353 ^ v163;
                                                    v353 = v147;
                                                    v328 = GrantedAccess ^ v435 ^ HIDWORD(v435) ^ v163 ^ v160;
                                                    *(_BYTE *)(j - 4) = v343;
                                                    v344 = __ROR4__(v343, 8);
                                                    *v161 = v328;
                                                    v329 = __ROR4__(v328, 8);
                                                    *(v161 - 5) = v344;
                                                    v345 = __ROR4__(v344, 8);
                                                    *(v161 - 1) = v329;
                                                    v330 = __ROR4__(v329, 8);
                                                    *(v161 - 6) = v345;
                                                    v346 = __ROR4__(v345, 8);
                                                    *(v161 - 2) = v330;
                                                    v331 = __ROR4__(v330, 8);
                                                    *(v161 - 7) = v346;
                                                    *(v161 - 3) = v331;
                                                    v138 = __ROR4__(v346, 8);
                                                    v136 = __ROR4__(v331, 8);
                                                    v88 = v363-- == 1;
                                                    GrantedAccess = v162;
                                                    j = (ULONGLONG)(v161 + 8);
                                                    v140 = *(_BYTE **)v377;
                                                  }
                                                  while ( !v88 );
                                                  v134 = v359;
                                                  v131 = pullResult;
                                                  v133 = (char *)v358;
                                                }
                                                Acl = 0;
                                                *(_QWORD *)&v133[v134] = (unsigned __int8)v361;
                                                P = v133;
                                                v421 = v131;
                                                if ( (_DWORD)v131 )
                                                {
                                                  v164 = ExAllocatePoolWithTag(
                                                           PagedPool,
                                                           (unsigned int)v131,
                                                           0x20534C53u);
                                                  v165 = v164;
                                                  if ( v164 )
                                                  {
                                                    memmove(v164, (const void *)v358, (unsigned int)v131);
                                                    v5 = v318;
                                                    v318[1] = v165;
                                                    *(_DWORD *)v318 = v131;
                                                  }
                                                  else
                                                  {
                                                    v5 = v318;
                                                    Acl = -1073741801;
                                                  }
                                                }
                                                else
                                                {
                                                  v5 = v318;
                                                  Acl = -1073741762;
                                                }
                                                v8 = v333;
                                              }
                                              else
                                              {
LABEL_710:
                                                Acl = -1073741823;
                                              }
                                              if ( P )
                                              {
                                                ExFreePoolWithTag(P, 0x20534C53u);
                                                P = 0LL;
                                              }
                                              if ( Acl >= 0 )
                                              {
                                                v166 = *(_DWORD *)v5;
                                                uAugend = 4;
                                                Acl = RtlUIntAdd(4u, v166, &uAugend);
                                                if ( Acl < 0
                                                  || (Acl = RtlUIntAdd(uAugend, v167, &uAugend), Acl < 0)
                                                  || (Acl = RtlUIntAdd(uAugend, *((_DWORD *)v5 + 4), &uAugend), Acl < 0)
                                                  || (Acl = RtlUIntAdd(uAugend, 4u, &uAugend), Acl < 0)
                                                  || (Acl = RtlUIntAdd(uAugend, *((_DWORD *)v5 + 8), &uAugend), Acl < 0) )
                                                {
                                                  v169 = v370;
                                                }
                                                else
                                                {
                                                  v169 = uAugend;
                                                  v370 = uAugend;
                                                }
                                                if ( Acl >= 0 )
                                                {
                                                  if ( v169 )
                                                  {
                                                    v170 = ExAllocatePoolWithTag(PagedPool, v169, 0x20534C53u);
                                                    v9 = v170;
                                                    if ( v170 )
                                                    {
                                                      ullAugend = (ULONGLONG)v170;
                                                      *v170 = *(_DWORD *)v5;
                                                      Acl = RtlULongLongAdd((ULONGLONG)v170, 4uLL, &ullAugend);
                                                      if ( Acl >= 0 )
                                                      {
                                                        memmove((void *)ullAugend, v5[1], *(unsigned int *)v5);
                                                        Acl = RtlULongLongAdd(
                                                                ullAugend,
                                                                *(unsigned int *)v5,
                                                                &ullAugend);
                                                        if ( Acl >= 0 )
                                                        {
                                                          v171 = ullAugend;
                                                          *(_DWORD *)ullAugend = *((_DWORD *)v5 + 4);
                                                          Acl = RtlULongLongAdd(v171, 4uLL, &ullAugend);
                                                          if ( Acl >= 0 )
                                                          {
                                                            memmove((void *)ullAugend, v5[3], *((unsigned int *)v5 + 4));
                                                            Acl = RtlULongLongAdd(
                                                                    ullAugend,
                                                                    *((unsigned int *)v5 + 4),
                                                                    &ullAugend);
                                                            if ( Acl >= 0 )
                                                            {
                                                              v172 = ullAugend;
                                                              *(_DWORD *)ullAugend = *((_DWORD *)v5 + 8);
                                                              Acl = RtlULongLongAdd(v172, 4uLL, &ullAugend);
                                                              if ( Acl >= 0 )
                                                              {
                                                                memmove(
                                                                  (void *)ullAugend,
                                                                  v5[5],
                                                                  *((unsigned int *)v5 + 8));
                                                                Acl = RtlULongLongAdd(
                                                                        ullAugend,
                                                                        *((unsigned int *)v5 + 8),
                                                                        &ullAugend);
                                                                if ( Acl >= 0 )
                                                                {
                                                                  v173 = v370;
                                                                  v168 = 0LL;
                                                                  goto LABEL_202;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                      ExFreePoolWithTag(v9, 0x20534C53u);
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
                                                v9 = 0LL;
                                                v173 = 0;
LABEL_202:
                                                v7 = (unsigned int *)v317;
                                                v6 = v348;
                                                if ( Acl >= 0 )
                                                {
                                                  *v422 = v9;
                                                  v9 = v168;
                                                  *v423 = v173;
                                                }
                                                goto LABEL_204;
                                              }
                                              v7 = (unsigned int *)v317;
                                              goto LABEL_724;
                                            }
                                            Acl = -1073741811;
                                            v9 = 0LL;
                                          }
                                          else
                                          {
                                            Acl = -1073741811;
                                            v9 = 0LL;
                                          }
                                        }
                                        else
                                        {
                                          Acl = -1073741811;
                                          v9 = 0LL;
                                        }
                                      }
                                      else
                                      {
                                        Acl = -1073741811;
                                        v9 = 0LL;
                                      }
                                    }
                                    else
                                    {
                                      Acl = -1073741811;
                                      v9 = 0LL;
                                    }
                                  }
                                  else
                                  {
                                    Acl = -1073741811;
                                    v9 = 0LL;
                                  }
LABEL_262:
                                  v6 = v348;
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
                      v116 = v353;
                      v8 = 0LL;
                      goto LABEL_151;
                    }
                    if ( v244 != 4 )
                    {
                      Acl = -1073741789;
                      goto LABEL_481;
                    }
                    v399 = *v245;
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                  if ( Acl >= 0 )
                  {
                    v413 = 8;
                    if ( qword_1407F30B0 )
                    {
                      ExFreePoolWithTag(qword_1407F30B0, 0x20534C53u);
                      qword_1407F30B0 = 0LL;
                    }
                    v246 = 2LL * v398;
                    DestinationString.Length = 0;
                    DestinationString.Buffer = 0LL;
                    if ( v246 > 0xFFFFFFFF )
                    {
                      Acl = -1073741675;
                    }
                    else
                    {
                      v247 = 2 * v398;
                      v248 = v246 + 2;
                      v249 = -1;
                      if ( v247 + 2 >= v247 )
                        v249 = v248;
                      Acl = v248 < v247 ? 0xC0000095 : 0;
                      if ( v248 >= v247 )
                      {
                        if ( v249 )
                        {
                          v250 = v249;
                          v251 = ExAllocatePoolWithTag(PagedPool, v249, 0x20534C53u);
                          if ( v251 )
                          {
                            qword_1407F30B0 = v251;
                            memset(v251, 0, v250);
                            memmove(qword_1407F30B0, v379, v247);
                            RtlInitUnicodeString(&DestinationString, (PCWSTR)qword_1407F30B0);
                            dword_1407F3100 = v399;
                            v412 = 16;
                            v411 = 24;
                            v5 = v318;
                            v252 = -1;
                            if ( *((_DWORD *)v318 + 4) < 0xFFFFFFE0 )
                              v252 = *((_DWORD *)v318 + 4) + 32;
                            Acl = *((_DWORD *)v318 + 4) >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                            if ( (unsigned int)(*((_DWORD *)v318 + 4) + 32) >= 0x20 )
                            {
                              v253 = v252 + 4;
                              v254 = -1;
                              if ( v252 + 4 >= v252 )
                                v254 = v252 + 4;
                              Acl = v253 < v252 ? 0xC0000095 : 0;
                              if ( v253 >= v252 )
                              {
                                v255 = v400;
                                v256 = v254 + *((_DWORD *)v318 + 8);
                                v257 = -1;
                                if ( v256 >= v254 )
                                  v257 = v254 + *((_DWORD *)v318 + 8);
                                Acl = v256 < v254 ? 0xC0000095 : 0;
                                if ( v256 >= v254 )
                                  v255 = v257;
                                v400 = v255;
                              }
                            }
                            if ( Acl >= 0 )
                            {
                              uAddend[1] = 8;
                              v258 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                              if ( v258 )
                              {
                                Src = v258;
                                uAddend[0] = 0;
                                v380 = 0;
                                Acl = RtlULongLongAdd((ULONGLONG)v258, 4uLL, v425);
                                if ( Acl >= 0 )
                                {
                                  if ( v260 + 2 <= (_DWORD *)((char *)v260 + uAddend[1]) )
                                  {
                                    v261 = (_DWORD *)v425[0];
                                    *v260 = v259;
                                    *v261 = v380;
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
                            v5 = v318;
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
                  goto LABEL_481;
                case 31:
                  DestinationString.Length = 0;
                  DestinationString.Buffer = 0LL;
                  if ( qword_1407F30B0 )
                  {
                    ExFreePoolWithTag(qword_1407F30B0, 0x20534C53u);
                    qword_1407F30B0 = 0LL;
                  }
                  dword_1407F3100 = 0;
                  dword_1407F30AC = 0;
                  v417 = 8;
                  v407 = 16;
                  v408 = 24;
                  v277 = -1;
                  if ( *((_DWORD *)v5 + 4) < 0xFFFFFFE0 )
                    v277 = *((_DWORD *)v5 + 4) + 32;
                  Acl = *((_DWORD *)v5 + 4) >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                  if ( (unsigned int)(*((_DWORD *)v5 + 4) + 32) >= 0x20 )
                  {
                    v278 = v277 + 4;
                    v279 = -1;
                    if ( v277 + 4 >= v277 )
                      v279 = v277 + 4;
                    Acl = v278 < v277 ? 0xC0000095 : 0;
                    if ( v278 >= v277 )
                    {
                      v280 = v384;
                      v281 = v279 + *((_DWORD *)v5 + 8);
                      v282 = -1;
                      if ( v281 >= v279 )
                        v282 = v279 + *((_DWORD *)v5 + 8);
                      Acl = v281 < v279 ? 0xC0000095 : 0;
                      if ( v281 >= v279 )
                        v280 = v282;
                      v384 = v280;
                    }
                  }
                  if ( Acl >= 0 )
                  {
                    uAddend[1] = 8;
                    v283 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                    if ( v283 )
                    {
                      Src = v283;
                      uAddend[0] = 0;
                      v388 = 0;
                      Acl = RtlULongLongAdd((ULONGLONG)v283, 4uLL, v427);
                      if ( Acl >= 0 )
                      {
                        if ( v285 + 2 <= (_DWORD *)((char *)v285 + uAddend[1]) )
                        {
                          v286 = (_DWORD *)v427[0];
                          *v285 = v284;
                          *v286 = v388;
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
                  v7 = (unsigned int *)v317;
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_664;
                case 37:
                  if ( (unsigned int)v354 <= 3 )
                  {
                    Acl = -1073741811;
                    goto LABEL_534;
                  }
                  v262 = (ULONGLONG)v356;
                  v359 = (ULONGLONG)v356;
                  do
                  {
                    Acl = RtlULongLongAdd(v262, 4uLL, &v359);
                    if ( Acl < 0 )
                      goto LABEL_527;
                    Acl = RtlULongLongAdd(v359, v263, &v359);
                    if ( Acl < 0 )
                      goto LABEL_527;
                    v262 = v359;
                  }
                  while ( (unsigned int)(v264 + 1) < 3 );
                  Acl = RtlULongLongAdd(v359, 4uLL, &v359);
                  if ( Acl < 0 )
                  {
LABEL_527:
                    v265 = v381;
                    v266 = v420;
                    goto LABEL_528;
                  }
                  v266 = (int *)v359;
                  v381 = v265;
                  if ( !v265 )
                    v266 = 0LL;
                  v420 = v266;
LABEL_528:
                  if ( Acl < 0 )
                    goto LABEL_531;
                  if ( v265 != 4 )
                  {
                    Acl = -1073741789;
                    goto LABEL_531;
                  }
                  v382 = *v266;
LABEL_534:
                  if ( Acl >= 0 )
                  {
                    v410 = 8;
                    v409 = 16;
                    v389 = 24;
                    v267 = -1;
                    if ( *((_DWORD *)v5 + 4) < 0xFFFFFFE0 )
                      v267 = *((_DWORD *)v5 + 4) + 32;
                    Acl = *((_DWORD *)v5 + 4) >= 0xFFFFFFE0 ? 0xC0000095 : 0;
                    if ( (unsigned int)(*((_DWORD *)v5 + 4) + 32) < 0x20 )
                      goto LABEL_546;
                    v268 = v267 + 4;
                    v269 = -1;
                    if ( v267 + 4 >= v267 )
                      v269 = v267 + 4;
                    Acl = v268 < v267 ? 0xC0000095 : 0;
                    if ( v268 < v267 )
                    {
LABEL_546:
                      v272 = v371;
                    }
                    else
                    {
                      v270 = v269 + *((_DWORD *)v5 + 8);
                      v271 = -1;
                      v272 = v371;
                      if ( v270 >= v269 )
                        v271 = v269 + *((_DWORD *)v5 + 8);
                      Acl = v270 < v269 ? 0xC0000095 : 0;
                      if ( v270 >= v269 )
                        v272 = v271;
                      v371 = v272;
                    }
                    if ( Acl >= 0 )
                    {
                      if ( v361 >= v272 )
                        dword_1407F30AC = v382;
                      uAddend[1] = 8;
                      v273 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u);
                      if ( v273 )
                      {
                        Src = v273;
                        uAddend[0] = 0;
                        v383 = 0;
                        Acl = RtlULongLongAdd((ULONGLONG)v273, 4uLL, v426);
                        if ( Acl >= 0 )
                        {
                          if ( v275 + 2 <= (_DWORD *)((char *)v275 + uAddend[1]) )
                          {
                            v276 = (_DWORD *)v426[0];
                            *v275 = v274;
                            *v276 = v383;
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
LABEL_531:
                  v7 = (unsigned int *)v317;
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_664;
                case 100:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076CB9C(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 101:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076C850(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 102:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076B26C(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 103:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140766B2C(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 104:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076BA6C(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 105:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076ABD4(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 106:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076A110(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 107:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14028BC04((__int64)&v354, (__int64)v5, 0, (__int64)uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 109:
                  updated = SPCallServerHandleIsAppLicensed(&v354, v5, 0LL, uAddend);
                  goto LABEL_142;
                case 110:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140767D38(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 111:
                  v7 = (unsigned int *)v317;
                  Acl = sub_1407662F8(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 112:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140766654(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 113:
                  updated = SPCallServerHandleClepKdf(&v354, v5, 0LL, uAddend);
                  goto LABEL_142;
                case 204:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076CEE8(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 205:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140765FAC(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 206:
                  v385 = 0;
                  v401 = 8LL;
                  v287 = 0;
                  ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v401, 8u, &v385);
                  v7 = (unsigned int *)v317;
                  if ( *((_DWORD *)v317 + 4) == 160 )
                  {
                    if ( !memcmp(qword_1407905A0, v317[3], 0xA0uLL)
                      && *((_DWORD *)v5 + 4) == 160
                      && !memcmp(qword_140790A00, v5[3], 0xA0uLL)
                      && *((_DWORD *)v317 + 8) == 8
                      && *(_QWORD *)v317[5] == 0x5638EBB72F3355A5LL
                      && *((_DWORD *)v5 + 8) == 8
                      && *(_QWORD *)v5[5] == 0x9F2DD8784FE939B7uLL )
                    {
                      v287 = 1;
                    }
                    else if ( !memcmp(qword_140790820, v317[3], 0xA0uLL)
                           && *((_DWORD *)v5 + 4) == 160
                           && !memcmp(qword_140790960, v5[3], 0xA0uLL)
                           && *((_DWORD *)v317 + 8) == 8
                           && *(_QWORD *)v317[5] == 0x5638EBB72F3355A5LL
                           && *((_DWORD *)v5 + 8) == 8
                           && *(_QWORD *)v5[5] == 0x9F2DD8784FE939B7uLL )
                    {
                      v287 = 1;
                    }
                    else if ( !memcmp(qword_1407901E0, v317[3], 0xA0uLL)
                           && *((_DWORD *)v5 + 4) == 160
                           && !memcmp(qword_140790460, v5[3], 0xA0uLL)
                           && *((_DWORD *)v317 + 8) == 8
                           && *(_QWORD *)v317[5] == 0xF10D668DB2BB8BB9uLL
                           && *((_DWORD *)v5 + 8) == 8
                           && *(_QWORD *)v5[5] == 0x768DFD321621EA95LL )
                    {
                      v287 = 1;
                    }
                    else if ( !memcmp(qword_14078FF60, v317[3], 0xA0uLL)
                           && *((_DWORD *)v5 + 4) == 160
                           && !memcmp(qword_140790140, v5[3], 0xA0uLL)
                           && *((_DWORD *)v317 + 8) == 8
                           && *(_QWORD *)v317[5] == 0xF10D668DB2BB8BB9uLL
                           && *((_DWORD *)v5 + 8) == 8 )
                    {
                      v287 = *(_QWORD *)v5[5] == 0x768DFD321621EA95LL;
                    }
                  }
                  Acl = -2147024891;
                  if ( !v287 )
                    goto LABEL_261;
                  updated = sub_14028C410((__int64)&v354, (__int64)v5, v288, (__int64)uAddend);
                  goto LABEL_143;
                case 207:
                  v7 = (unsigned int *)v317;
                  Acl = sub_1407673D8(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 208:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140769454(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 209:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076C270(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 210:
                  v7 = (unsigned int *)v317;
                  Acl = sub_14076556C(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                case 211:
                  v7 = (unsigned int *)v317;
                  Acl = sub_140764FA4(&v354, v5, 0LL, uAddend);
                  if ( Acl >= 0 )
                    goto LABEL_144;
                  goto LABEL_261;
                default:
                  v386 = -2147467263;
                  if ( Src )
                  {
                    v291 = (UINT *)Src;
                    v292 = 0;
                    for ( j = (ULONGLONG)Src; v292 < uAddend[0]; ++v292 )
                    {
                      v293 = RtlUIntAdd(4u, *v291, &v357);
                      Acl = v293;
                      if ( v293 >= 0 )
                        v295 = v357;
                      v369 = v295;
                      if ( v293 < 0 )
                        goto LABEL_666;
                      Acl = RtlULongLongAdd(v294, v295, &j);
                      if ( Acl < 0 )
                        goto LABEL_666;
                      v291 = (UINT *)j;
                    }
                    Acl = RtlULongLongAdd((ULONGLONG)v291, 4uLL, v428);
                    if ( Acl >= 0 )
                    {
                      if ( v297 + 2 > (_DWORD *)((char *)Src + uAddend[1]) )
                      {
                        Acl = -1073741789;
                        goto LABEL_663;
                      }
                      v298 = (int *)v428[0];
                      *v297 = v296;
                      *v298 = v386;
                      ++uAddend[0];
                    }
                  }
                  else
                  {
                    v289 = RtlUIntAdd(4u, 4u, &v365);
                    v290 = v369;
                    Acl = v289;
                    if ( v289 >= 0 )
                      v290 = v365;
                    v369 = v290;
                    if ( v289 >= 0 )
                    {
                      Acl = RtlUIntAdd(uAddend[1], v290, &uAddend[1]);
                      if ( Acl >= 0 )
                      {
                        ++uAddend[0];
                        goto LABEL_667;
                      }
                    }
                  }
LABEL_666:
                  if ( Acl < 0 )
                    goto LABEL_663;
LABEL_667:
                  if ( uAddend[1] )
                  {
                    v299 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                    if ( v299 )
                    {
                      Src = v299;
                      uAddend[0] = 0;
                      v387 = -2147467263;
                      Acl = RtlULongLongAdd((ULONGLONG)v299, 4uLL, &v429);
                      if ( Acl >= 0 )
                      {
                        if ( v301 + 2 <= (_DWORD *)((char *)v301 + uAddend[1]) )
                        {
                          v302 = (_DWORD *)v429;
                          *v301 = v300;
                          *v302 = v387;
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
LABEL_663:
                  v7 = (unsigned int *)v317;
                  if ( Acl < 0 )
                    goto LABEL_664;
                  goto LABEL_144;
              }
            }
LABEL_719:
            v7 = (unsigned int *)v317;
            goto LABEL_261;
          }
          v108 = ExAllocatePoolWithTag(PagedPool, v96, 0x20534C53u);
          if ( !v108 )
          {
LABEL_347:
            Acl = -1073741801;
            goto LABEL_348;
          }
          *((_QWORD *)v107 + 3) = v108;
          memmove(v108, v97, v96);
        }
        else
        {
          v107[4] = 0;
          *((_QWORD *)v107 + 3) = 0LL;
        }
        if ( !v103 )
        {
          v107[8] = 0;
          *((_QWORD *)v107 + 5) = 0LL;
          goto LABEL_138;
        }
        v107[8] = v102;
        if ( !(_DWORD)v102 )
        {
          Acl = -1073741762;
          goto LABEL_348;
        }
        v109 = ExAllocatePoolWithTag(PagedPool, v102, 0x20534C53u);
        if ( v109 )
        {
          *((_QWORD *)v107 + 5) = v109;
          memmove(v109, v103, v102);
LABEL_138:
          v5 = (const void **)v107;
          v318 = (const void **)v107;
          Acl = 0;
          goto LABEL_139;
        }
        goto LABEL_347;
      }
    }
LABEL_718:
    v5 = 0LL;
    goto LABEL_719;
  }
  v5 = 0LL;
  Acl = -1073741811;
  v6 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
LABEL_204:
  if ( v356 )
    ExFreePoolWithTag(v356, 0x20534C53u);
LABEL_206:
  *(_QWORD *)uAddend = 0LL;
  if ( Src )
  {
    ExFreePoolWithTag(Src, 0x20534C53u);
    Src = 0LL;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20534C53u);
  if ( v7 )
  {
    v174 = (void *)*((_QWORD *)v7 + 1);
    if ( v174 )
    {
      ExFreePoolWithTag(v174, 0x20534C53u);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    v175 = (void *)*((_QWORD *)v7 + 3);
    if ( v175 )
    {
      ExFreePoolWithTag(v175, 0x20534C53u);
      *((_QWORD *)v7 + 3) = 0LL;
    }
    v176 = (void *)*((_QWORD *)v7 + 5);
    if ( v176 )
    {
      ExFreePoolWithTag(v176, 0x20534C53u);
      *((_QWORD *)v7 + 5) = 0LL;
    }
    ExFreePoolWithTag(v7, 0x20534C53u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x20534C53u);
  if ( v5 )
  {
    v177 = (void *)v5[1];
    if ( v177 )
    {
      ExFreePoolWithTag(v177, 0x20534C53u);
      v5[1] = 0LL;
    }
    v178 = (void *)v5[3];
    if ( v178 )
    {
      ExFreePoolWithTag(v178, 0x20534C53u);
      v5[3] = 0LL;
    }
    v179 = (void *)v5[5];
    if ( v179 )
    {
      ExFreePoolWithTag(v179, 0x20534C53u);
      v5[5] = 0LL;
    }
    ExFreePoolWithTag(v5, 0x20534C53u);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20534C53u);
  return (unsigned int)Acl;
}
