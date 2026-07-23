/*
 * XREFs of SPCall2ServerInternal @ 0x1404A9590
 * Callers:
 *     Callout @ 0x1404A8940 (Callout.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     RtlUIntAdd @ 0x14004C5F0 (RtlUIntAdd.c)
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     RtlULongLongAdd @ 0x14006B3A0 (RtlULongLongAdd.c)
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     SPCallServerHandleGetCurrentHardwareID @ 0x140152A3C (SPCallServerHandleGetCurrentHardwareID.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     ZwSetCachedSigningLevel @ 0x140180EC0 (ZwSetCachedSigningLevel.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     sub_140262394 @ 0x140262394 (sub_140262394.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     SPCallServerHandleClepKdf @ 0x14044FB70 (SPCallServerHandleClepKdf.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     sub_1404AD470 @ 0x1404AD470 (sub_1404AD470.c)
 *     sub_1404AD4E0 @ 0x1404AD4E0 (sub_1404AD4E0.c)
 *     sub_1404AD550 @ 0x1404AD550 (sub_1404AD550.c)
 *     sub_1404AD5D0 @ 0x1404AD5D0 (sub_1404AD5D0.c)
 *     sub_1404AD650 @ 0x1404AD650 (sub_1404AD650.c)
 *     sub_1404AD6F0 @ 0x1404AD6F0 (sub_1404AD6F0.c)
 *     sub_1404AD7A0 @ 0x1404AD7A0 (sub_1404AD7A0.c)
 *     sub_1404AD7D0 @ 0x1404AD7D0 (sub_1404AD7D0.c)
 *     sub_1404AD850 @ 0x1404AD850 (sub_1404AD850.c)
 *     sub_1404AD880 @ 0x1404AD880 (sub_1404AD880.c)
 *     sub_1404AD940 @ 0x1404AD940 (sub_1404AD940.c)
 *     sub_1404AD970 @ 0x1404AD970 (sub_1404AD970.c)
 *     sub_1404ADA30 @ 0x1404ADA30 (sub_1404ADA30.c)
 *     sub_1404ADAA0 @ 0x1404ADAA0 (sub_1404ADAA0.c)
 *     sub_1404ADB10 @ 0x1404ADB10 (sub_1404ADB10.c)
 *     sub_1404ADB40 @ 0x1404ADB40 (sub_1404ADB40.c)
 *     sub_1404ADBF0 @ 0x1404ADBF0 (sub_1404ADBF0.c)
 *     sub_1404ADCA0 @ 0x1404ADCA0 (sub_1404ADCA0.c)
 *     sub_1404ADD40 @ 0x1404ADD40 (sub_1404ADD40.c)
 *     sub_1404ADDE0 @ 0x1404ADDE0 (sub_1404ADDE0.c)
 *     sub_1404ADE80 @ 0x1404ADE80 (sub_1404ADE80.c)
 *     sub_1404ADEF0 @ 0x1404ADEF0 (sub_1404ADEF0.c)
 *     sub_1404ADFB0 @ 0x1404ADFB0 (sub_1404ADFB0.c)
 *     sub_1404AE050 @ 0x1404AE050 (sub_1404AE050.c)
 *     sub_1404AE100 @ 0x1404AE100 (sub_1404AE100.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     sub_140594A60 @ 0x140594A60 (sub_140594A60.c)
 *     sub_140594B10 @ 0x140594B10 (sub_140594B10.c)
 *     sub_140594BB0 @ 0x140594BB0 (sub_140594BB0.c)
 *     sub_1405957E0 @ 0x1405957E0 (sub_1405957E0.c)
 *     SPCallServerHandleClepSign @ 0x1405973B8 (SPCallServerHandleClepSign.c)
 *     SPCallServerHandleGetLicenseChallenge @ 0x1405989F8 (SPCallServerHandleGetLicenseChallenge.c)
 *     SPCallServerHandleUpdateLicense @ 0x140599CA4 (SPCallServerHandleUpdateLicense.c)
 *     SPCallServerHandleRemoveLicense @ 0x140599FC4 (SPCallServerHandleRemoveLicense.c)
 *     sub_1407254D4 @ 0x1407254D4 (sub_1407254D4.c)
 *     sub_140725A88 @ 0x140725A88 (sub_140725A88.c)
 *     sub_140726100 @ 0x140726100 (sub_140726100.c)
 *     sub_1407264B4 @ 0x1407264B4 (sub_1407264B4.c)
 *     sub_140726800 @ 0x140726800 (sub_140726800.c)
 *     sub_140726B4C @ 0x140726B4C (sub_140726B4C.c)
 *     sub_140727404 @ 0x140727404 (sub_140727404.c)
 *     sub_140727D68 @ 0x140727D68 (sub_140727D68.c)
 *     sub_1407282B8 @ 0x1407282B8 (sub_1407282B8.c)
 *     sub_140728F7C @ 0x140728F7C (sub_140728F7C.c)
 *     sub_140729A58 @ 0x140729A58 (sub_140729A58.c)
 *     sub_140729EF8 @ 0x140729EF8 (sub_140729EF8.c)
 *     sub_14072A730 @ 0x14072A730 (sub_14072A730.c)
 *     sub_14072ACD0 @ 0x14072ACD0 (sub_14072ACD0.c)
 */

__int64 __fastcall SPCall2ServerInternal(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  char *v5; // rsi
  PVOID v6; // rbx
  UINT *v7; // rdi
  const void **v8; // r12
  unsigned int *v9; // r14
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
  _DWORD *PoolWithTag; // rax
  _DWORD *v22; // rbx
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // rax
  int v26; // eax
  void *v27; // rcx
  ULONGLONG v28; // rsi
  ULONGLONG v29; // rdi
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  ULONGLONG v33; // r15
  UINT *v34; // rax
  UINT *v35; // r8
  unsigned __int8 *v36; // r14
  UINT *v37; // r12
  int v38; // esi
  UINT v39; // r10d
  UINT v40; // r11d
  ULONGLONG v41; // rsi
  unsigned __int8 *v42; // rdi
  unsigned __int8 *v43; // r8
  _BYTE *v44; // r12
  int v45; // edx
  int v46; // eax
  int v47; // r11d
  UINT v48; // edx
  int v49; // r8d
  unsigned int v50; // r15d
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
  bool v66; // zf
  int v67; // eax
  int v68; // eax
  unsigned __int64 v69; // rax
  __m128i v70; // xmm2
  __m128i v71; // xmm1
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __m128i v75; // xmm1
  __m128i v76; // xmm1
  __m128i v77; // xmm1
  int v78; // ecx
  int v79; // eax
  SIZE_T v80; // r14
  _DWORD *v81; // rbx
  unsigned __int64 v82; // rdx
  PVOID v83; // r15
  unsigned int v84; // edi
  _DWORD *v85; // rcx
  unsigned int v86; // r9d
  int v87; // eax
  ACCESS_MASK v88; // edx
  int *v89; // rax
  int v90; // eax
  unsigned int *v91; // rax
  int v92; // edx
  __int64 v93; // r8
  unsigned int *v94; // rcx
  SIZE_T v95; // r14
  const void *v96; // r12
  unsigned int *v97; // rax
  unsigned int i; // edx
  __int64 v99; // r8
  unsigned int *v100; // rcx
  SIZE_T v101; // rdi
  const void *v102; // r15
  unsigned int *v103; // rax
  __int64 v104; // r8
  unsigned int *v105; // rbx
  PVOID v106; // rax
  PVOID v107; // rax
  int v108; // eax
  unsigned int v109; // edi
  ULONGLONG v110; // rcx
  NTSTATUS v111; // ebx
  unsigned int v112; // r10d
  int v113; // r9d
  int v114; // r9d
  _QWORD *v115; // rax
  ULONGLONG v116; // rcx
  unsigned int v117; // r10d
  int v118; // r9d
  unsigned int v119; // r9d
  const wchar_t *v120; // rcx
  unsigned int v121; // r15d
  WCHAR *v122; // rax
  const WCHAR *v123; // r14
  ULONGLONG v124; // rcx
  unsigned int v125; // r10d
  int v126; // r9d
  int v127; // r9d
  _DWORD *v128; // rax
  ULONGLONG v129; // rcx
  unsigned int v130; // r10d
  int v131; // r9d
  int v132; // r9d
  unsigned int *v133; // rax
  unsigned int v134; // r15d
  int v135; // ebx
  PVOID v136; // r14
  int v137; // eax
  int v138; // r14d
  int v139; // eax
  unsigned int v140; // eax
  unsigned int v141; // ecx
  unsigned int v142; // eax
  unsigned int v143; // ecx
  unsigned int v144; // eax
  unsigned int v145; // ecx
  int v146; // r8d
  unsigned int v147; // ecx
  int v148; // edx
  unsigned int v149; // eax
  unsigned int v150; // ecx
  unsigned int v151; // eax
  int v152; // ebx
  int v153; // r12d
  __int64 v154; // rbx
  __int64 v155; // rcx
  UINT v156; // ebx
  __int64 v157; // r12
  PVOID v158; // rax
  int v159; // edx
  unsigned int v160; // r9d
  _DWORD *v161; // r10
  _DWORD *v162; // rcx
  _DWORD *v163; // r10
  unsigned int v164; // r14d
  int v165; // r11d
  _DWORD *v166; // r10
  _QWORD *v167; // rax
  _DWORD *v168; // r10
  unsigned int v169; // r14d
  int v170; // r11d
  int v171; // edx
  _DWORD *v172; // r10
  _DWORD *v173; // rcx
  _DWORD *v174; // r10
  unsigned int v175; // r14d
  int v176; // r11d
  unsigned int *v177; // r10
  _DWORD *v178; // r10
  unsigned int v179; // r14d
  int v180; // r11d
  int v181; // edx
  _DWORD *v182; // r10
  unsigned int *v183; // rcx
  _DWORD *v184; // r10
  unsigned int v185; // edi
  unsigned int v186; // r9d
  int v187; // r11d
  int v188; // edx
  _DWORD *v189; // r10
  unsigned int *v190; // rcx
  signed int CurrentHardwareID; // r15d
  bool v192; // sf
  POOL_TYPE v193; // edi
  UINT v194; // ecx
  char *v195; // rax
  char *v196; // rbx
  ULONGLONG v197; // rdx
  ULONGLONG v198; // rcx
  ULONGLONG v199; // rdx
  __int64 *v200; // rbx
  unsigned int v201; // eax
  LARGE_INTEGER v202; // rdi
  UINT v203; // ecx
  __int64 v204; // rbx
  unsigned __int64 v205; // rax
  __m128i v206; // xmm1
  __m128i v207; // xmm2
  __m128i v208; // xmm0
  __m128i v209; // xmm0
  __m128i v210; // xmm1
  __m128i v211; // xmm1
  __m128i v212; // xmm1
  __m128i v213; // xmm1
  ULONGLONG v214; // r12
  char *v215; // rax
  char *v216; // rcx
  ULONGLONG v217; // r8
  ULONG v218; // r11d
  int v219; // r10d
  unsigned __int8 *v220; // r14
  char *v221; // rsi
  unsigned int v222; // r15d
  int v223; // ebx
  size_t v224; // r8
  size_t v225; // r9
  unsigned __int8 *v226; // rdx
  _BYTE *v227; // rbx
  __int64 v228; // rsi
  unsigned __int8 *v229; // rdi
  __int64 v230; // r14
  int v231; // r12d
  int v232; // r15d
  int v233; // ecx
  int v234; // r10d
  unsigned __int8 v235; // al
  unsigned int v236; // r15d
  int v237; // edi
  int v238; // r15d
  int v239; // edi
  int v240; // r15d
  int v241; // edi
  int v242; // r15d
  unsigned int v243; // edi
  int v244; // r15d
  int v245; // edi
  _BYTE *v246; // r8
  ULONG v247; // r11d
  int v248; // r15d
  PVOID v249; // rax
  PVOID v250; // rbx
  _DWORD *v251; // rax
  UINT v252; // edx
  UINT v253; // ecx
  UINT v254; // eax
  _DWORD *v255; // rax
  void *v256; // rdi
  ULONGLONG v257; // rcx
  ULONGLONG v258; // rcx
  UINT v259; // eax
  void *v260; // rcx
  void *v261; // rcx
  void *v262; // rcx
  void *v263; // rcx
  void *v264; // rcx
  void *v265; // rcx
  int v267; // eax
  int v268; // eax
  ULONGLONG v269; // rcx
  unsigned int v270; // r10d
  int v271; // r9d
  int v272; // r9d
  _QWORD *v273; // rax
  ULONGLONG v274; // rcx
  unsigned int v275; // r10d
  int v276; // r9d
  int v277; // r9d
  _DWORD *v278; // rax
  ULONGLONG v279; // rcx
  unsigned int v280; // r10d
  int v281; // r9d
  unsigned int v282; // r9d
  const wchar_t *v283; // rcx
  unsigned int v284; // edi
  PVOID v285; // rax
  void *v286; // rbx
  ULONGLONG v287; // rcx
  unsigned int v288; // r10d
  int v289; // r9d
  unsigned int v290; // r9d
  const wchar_t *v291; // rcx
  unsigned int v292; // edi
  PVOID v293; // rax
  void *v294; // rbx
  ULONGLONG v295; // rcx
  unsigned int v296; // r10d
  int v297; // r9d
  int v298; // r10d
  ULONGLONG v299; // rax
  ULONGLONG v300; // rcx
  unsigned int v301; // r11d
  int v302; // r9d
  int v303; // r9d
  _DWORD *v304; // rax
  int v305; // ebx
  NTSTATUS v306; // eax
  UINT v307; // ecx
  UINT v308; // r10d
  UINT v309; // r11d
  NTSTATUS v310; // eax
  UINT v311; // r10d
  UINT v312; // edx
  SIZE_T v313; // r10
  UINT v314; // ecx
  UINT v315; // edx
  UINT v316; // ecx
  PVOID v317; // rax
  int v318; // edx
  _DWORD *v319; // r10
  UINT v320; // r11d
  int *v321; // rcx
  UINT *v322; // r10
  int v323; // ebx
  ULONGLONG v324; // r10
  UINT v325; // r11d
  _DWORD *v326; // r10
  _QWORD *v327; // rax
  UINT *v328; // r10
  int v329; // ebx
  ULONGLONG v330; // r10
  unsigned int v331; // r11d
  _DWORD *v332; // r10
  _OWORD *v333; // rax
  int v334; // eax
  unsigned int v335; // eax
  int v336; // eax
  PSID *v337; // r15
  ULONG v338; // ebx
  ULONG v339; // ebx
  ULONG v340; // ebx
  ACL *v341; // rax
  ACL *v342; // r14
  BOOLEAN v343; // bl
  int v344; // eax
  int v345; // eax
  unsigned int v346; // edx
  unsigned int v347; // ecx
  unsigned int v348; // r10d
  ULONGLONG v349; // rcx
  unsigned int v350; // r11d
  int v351; // r9d
  int v352; // r9d
  _QWORD *v353; // rax
  int v354; // eax
  ULONGLONG v355; // rcx
  NTSTATUS v356; // eax
  unsigned int v357; // r10d
  int v358; // r9d
  unsigned int v359; // r9d
  ULONGLONG v360; // rdx
  int v361; // eax
  int v362; // ebx
  UINT v363; // r11d
  PVOID v364; // rax
  int v365; // edx
  _DWORD *v366; // r10
  int *v367; // rcx
  int v368; // eax
  NTSTATUS v369; // eax
  UINT v370; // r10d
  int v371; // ecx
  UINT v372; // r10d
  UINT v373; // ecx
  UINT v374; // edx
  UINT v375; // ecx
  UINT v376; // r10d
  UINT v377; // eax
  PVOID v378; // rax
  int v379; // edx
  _DWORD *v380; // r10
  UINT v381; // r11d
  _DWORD *v382; // rcx
  UINT *v383; // r10
  int v384; // ebx
  ULONGLONG v385; // r10
  unsigned int v386; // r11d
  _DWORD *v387; // r10
  unsigned __int64 *v388; // rax
  ULONGLONG v389; // rcx
  unsigned int v390; // r10d
  int v391; // r9d
  int v392; // r9d
  _QWORD *v393; // rax
  int v394; // eax
  int v395; // ebx
  int v396; // eax
  NTSTATUS v397; // eax
  NTSTATUS v398; // ebx
  unsigned int v399; // edx
  unsigned int v400; // ecx
  PVOID v401; // rax
  int v402; // edx
  _DWORD *v403; // r10
  int *v404; // rcx
  unsigned int v405; // r9d
  _DWORD *v406; // r10
  unsigned int v407; // ebx
  int v408; // eax
  int v409; // eax
  int v410; // r11d
  _DWORD *v411; // r10
  _QWORD *v412; // rax
  _DWORD *v413; // r10
  unsigned int v414; // ebx
  int v415; // eax
  unsigned int v416; // r9d
  int v417; // r11d
  int v418; // edx
  _DWORD *v419; // r10
  int *v420; // rcx
  int v421; // eax
  int v422; // eax
  unsigned int v423; // r8d
  int v424; // eax
  int LicenseChallenge; // eax
  void *v426; // rcx
  void *v427; // rcx
  void *v428; // rcx
  void *v429; // rcx
  void *v430; // rcx
  void *v431; // rcx
  int v432; // r11d
  int v433; // r10d
  UINT v434; // r9d
  UINT v435; // ebx
  int v436; // r8d
  char v437; // dl
  int v438; // eax
  ULONGLONG v439; // rcx
  unsigned __int8 *v440; // r15
  unsigned __int8 *v441; // rbx
  __int64 v442; // rdi
  unsigned __int8 v443; // al
  int v444; // eax
  int v445; // eax
  UINT v446; // r10d
  int v447; // eax
  int v448; // eax
  void *v449; // rcx
  void *v450; // rcx
  void *v451; // rcx
  UINT v452; // edx
  UINT v453; // eax
  UINT v454; // ecx
  bool v455; // cf
  _DWORD *v456; // r9
  unsigned int v457; // r10d
  int v458; // edx
  signed int v459; // ecx
  int v460; // r11d
  int v461; // edx
  _DWORD *v462; // r9
  _DWORD *v463; // rcx
  PVOID v464; // rax
  int v465; // edx
  _DWORD *v466; // r10
  _DWORD *v467; // rcx
  UINT v468; // edx
  UINT v469; // eax
  UINT v470; // ecx
  bool v471; // cf
  int v472; // eax
  _DWORD *v473; // r9
  unsigned int v474; // r10d
  int v475; // edx
  signed int v476; // ecx
  int v477; // r11d
  int v478; // edx
  _DWORD *v479; // r9
  int *v480; // rcx
  PVOID v481; // rax
  int v482; // edx
  _DWORD *v483; // r10
  int *v484; // rcx
  UINT v485; // edx
  UINT v486; // eax
  UINT v487; // ecx
  bool v488; // cf
  int v489; // eax
  _DWORD *v490; // r9
  unsigned int v491; // r10d
  int v492; // edx
  signed int v493; // ecx
  int v494; // r11d
  int v495; // edx
  _DWORD *v496; // r9
  int *v497; // rcx
  PVOID v498; // rax
  int v499; // edx
  _DWORD *v500; // r10
  _DWORD *v501; // rcx
  int v502; // eax
  NTSTATUS v503; // eax
  UINT v504; // edx
  UINT v505; // eax
  UINT v506; // ecx
  bool v507; // cf
  UINT v508; // edx
  UINT v509; // eax
  UINT v510; // ecx
  bool v511; // cf
  int v512; // eax
  ULONGLONG v513; // rcx
  unsigned int v514; // r10d
  int v515; // r9d
  int v516; // r9d
  _QWORD *v517; // rax
  int v518; // eax
  NTSTATUS v519; // eax
  NTSTATUS v520; // edi
  NTSTATUS v521; // eax
  unsigned int v522; // ecx
  signed int v523; // r9d
  unsigned int v524; // eax
  unsigned int v525; // r8d
  unsigned int v526; // edx
  int v527; // ecx
  int v528; // eax
  PVOID v529; // rax
  UINT v530; // r9d
  _DWORD *v531; // r10
  int *v532; // rcx
  UINT v533; // edx
  UINT v534; // eax
  UINT v535; // ecx
  bool v536; // cf
  _DWORD *v537; // r10
  int v538; // ebx
  unsigned int v539; // r11d
  int v540; // edx
  signed int v541; // ecx
  unsigned int v542; // r9d
  _DWORD *v543; // r10
  _QWORD *v544; // rax
  ULONGLONG v545; // rcx
  unsigned int v546; // r10d
  int v547; // r9d
  int v548; // r9d
  _QWORD *v549; // rax
  NTSTATUS v550; // eax
  __int64 v551; // rbx
  ULONG TimeIncrement; // eax
  unsigned int v553; // ecx
  unsigned int v554; // eax
  unsigned int v555; // r8d
  int v556; // eax
  unsigned int v557; // edx
  int v558; // ecx
  PVOID v559; // rax
  int v560; // edx
  UINT v561; // r9d
  _DWORD *v562; // r10
  int *v563; // rcx
  UINT v564; // edx
  UINT v565; // ecx
  _DWORD *v566; // r10
  int v567; // ebx
  unsigned int v568; // r11d
  int v569; // edx
  int v570; // r15d
  unsigned int v571; // r9d
  _DWORD *v572; // r10
  _QWORD *v573; // rax
  PSID *v574; // r15
  ULONG v575; // ebx
  ULONG v576; // ebx
  ULONG v577; // ebx
  ACL *v578; // rax
  ACL *v579; // r14
  NTSTATUS v580; // eax
  BOOLEAN v581; // bl
  bool v582; // bl
  int updated; // eax
  unsigned int v584; // r10d
  ULONGLONG v585; // rcx
  unsigned int v586; // r11d
  int v587; // r9d
  int v588; // r9d
  void **v589; // rax
  ULONGLONG v590; // rcx
  unsigned int v591; // r11d
  int v592; // r9d
  int v593; // r9d
  NTSTATUS *v594; // rax
  ULONGLONG v595; // rcx
  unsigned int v596; // r11d
  int v597; // r9d
  int v598; // r9d
  NTSTATUS *v599; // rax
  ULONGLONG v600; // rcx
  unsigned int v601; // r10d
  struct _OBJECT_HANDLE_INFORMATION *v602; // r11
  int v603; // r9d
  int v604; // r9d
  _QWORD *v605; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v606; // r12
  NTSTATUS v607; // eax
  struct _FILE_OBJECT *v608; // r14
  LARGE_INTEGER *v609; // r15
  UINT v610; // edx
  UINT v611; // eax
  UINT v612; // ecx
  __m128i v613; // xmm6
  SE_SIGNING_LEVEL v614; // cl
  __int64 *v615; // rbx
  int v616; // edi
  char *v617; // rax
  char *v618; // rbx
  _DWORD *v619; // r9
  unsigned int v620; // r10d
  int v621; // edx
  int v622; // r15d
  int v623; // r11d
  int v624; // edx
  _DWORD *v625; // r9
  _DWORD *v626; // rcx
  PVOID v627; // rax
  int v628; // edx
  _DWORD *v629; // r10
  _DWORD *v630; // rcx
  unsigned int v631; // r10d
  ULONGLONG v632; // rcx
  unsigned int v633; // r11d
  int v634; // r9d
  int v635; // r9d
  _QWORD *v636; // rax
  ULONGLONG v637; // rcx
  unsigned int v638; // r11d
  int v639; // r9d
  int v640; // r9d
  void **v641; // rax
  ULONGLONG v642; // rcx
  unsigned int v643; // r10d
  int v644; // r9d
  int v645; // r9d
  unsigned int *v646; // rax
  NTSTATUS v647; // eax
  struct _FILE_OBJECT *v648; // rdi
  __int64 *v649; // rbx
  __int64 v650; // rax
  int v651; // ebx
  int v652; // ecx
  UINT v653; // ebx
  PVOID v654; // rax
  unsigned int v655; // edx
  _DWORD *v656; // r10
  _QWORD *v657; // rax
  size_t v658; // rbx
  int v659; // r8d
  unsigned int v660; // eax
  int v661; // ecx
  UINT v662; // eax
  _DWORD *v663; // r10
  unsigned int v664; // edi
  unsigned int v665; // r11d
  int v666; // edx
  int v667; // r15d
  unsigned int v668; // r9d
  _DWORD *v669; // r10
  void *v670; // rcx
  unsigned int v671; // r10d
  ULONGLONG v672; // rcx
  unsigned int v673; // r11d
  int v674; // r9d
  int v675; // r9d
  _QWORD *v676; // rax
  ULONGLONG v677; // rcx
  unsigned int v678; // r10d
  int v679; // r9d
  int v680; // r9d
  void **v681; // rax
  char *v682; // rbx
  __int64 v683; // rsi
  NTSTATUS v684; // eax
  struct _FILE_OBJECT *v685; // r12
  char *v686; // rax
  PVOID v687; // rax
  int v688; // eax
  __int64 v689; // r8
  __int64 v690; // rdx
  int v691; // edi
  __int64 *v692; // r15
  int v693; // r14d
  NTSTATUS v694; // eax
  UINT v695; // r10d
  NTSTATUS v696; // eax
  UINT v697; // r10d
  PVOID v698; // rax
  UINT v699; // edx
  _DWORD *v700; // r10
  UINT v701; // r11d
  _QWORD *v702; // rax
  NTSTATUS v703; // eax
  UINT v704; // edx
  UINT *v705; // r10
  int v706; // edi
  UINT v707; // ebx
  NTSTATUS v708; // eax
  ULONGLONG v709; // r10
  unsigned int v710; // r11d
  NTSTATUS v711; // eax
  int v712; // edx
  _DWORD *v713; // r10
  int *v714; // rcx
  NTSTATUS v715; // eax
  UINT v716; // edx
  ULONGLONG v717; // rcx
  unsigned int v718; // r10d
  int v719; // r9d
  unsigned int v720; // r9d
  const wchar_t *v721; // rcx
  unsigned int v722; // eax
  size_t v723; // rdi
  PVOID v724; // rax
  void *v725; // rbx
  ULONGLONG v726; // rcx
  unsigned int v727; // r10d
  int v728; // r9d
  int v729; // r9d
  int *v730; // rax
  NTSTATUS v731; // eax
  UINT v732; // edx
  NTSTATUS v733; // eax
  UINT v734; // ebx
  unsigned __int64 v735; // r14
  size_t v736; // rdi
  PVOID v737; // rax
  UINT v738; // ecx
  UINT v739; // edx
  NTSTATUS v740; // eax
  UINT v741; // ecx
  UINT v742; // eax
  PVOID v743; // rax
  int v744; // edx
  _DWORD *v745; // r10
  _DWORD *v746; // rcx
  ULONGLONG v747; // rcx
  unsigned int v748; // r10d
  int v749; // r9d
  int v750; // r9d
  int *v751; // rax
  NTSTATUS v752; // eax
  UINT v753; // edx
  NTSTATUS v754; // eax
  UINT v755; // r10d
  UINT v756; // r10d
  UINT v757; // ecx
  UINT v758; // edx
  NTSTATUS v759; // eax
  UINT v760; // ecx
  UINT v761; // eax
  UINT v762; // ecx
  PVOID v763; // rax
  int v764; // edx
  _DWORD *v765; // r10
  _DWORD *v766; // rcx
  NTSTATUS v767; // eax
  UINT v768; // edx
  NTSTATUS v769; // eax
  UINT v770; // r10d
  UINT v771; // r10d
  UINT v772; // ecx
  UINT v773; // edx
  NTSTATUS v774; // eax
  UINT v775; // ecx
  UINT v776; // eax
  PVOID v777; // rax
  int v778; // edx
  _DWORD *v779; // r10
  _DWORD *v780; // rcx
  int v781; // eax
  int v782; // eax
  int v783; // eax
  NTSTATUS v784; // eax
  UINT v785; // edx
  NTSTATUS v786; // eax
  NTSTATUS v787; // eax
  UINT v788; // edx
  ULONGLONG v789; // rcx
  unsigned int v790; // r10d
  int v791; // r9d
  int v792; // r9d
  _QWORD *v793; // rax
  ULONGLONG v794; // rcx
  unsigned int v795; // r10d
  int v796; // r9d
  unsigned int v797; // r9d
  const wchar_t *v798; // rcx
  unsigned int v799; // eax
  size_t v800; // rdi
  PVOID v801; // rax
  void *v802; // rbx
  ULONGLONG v803; // rcx
  unsigned int v804; // r10d
  int v805; // r9d
  unsigned int v806; // r10d
  ULONGLONG v807; // rax
  int v808; // ebx
  NTSTATUS v809; // eax
  UINT v810; // ecx
  UINT v811; // r10d
  NTSTATUS v812; // eax
  UINT v813; // r10d
  UINT v814; // edx
  NTSTATUS v815; // eax
  UINT v816; // r10d
  NTSTATUS v817; // eax
  UINT v818; // r10d
  UINT v819; // edx
  SIZE_T v820; // r10
  UINT v821; // ecx
  UINT v822; // edx
  NTSTATUS v823; // eax
  UINT v824; // ecx
  UINT v825; // eax
  PVOID v826; // rax
  int v827; // edx
  _DWORD *v828; // r10
  UINT v829; // r11d
  int *v830; // rcx
  NTSTATUS v831; // eax
  UINT v832; // r11d
  UINT v833; // edx
  NTSTATUS v834; // eax
  UINT *v835; // r10
  int v836; // edi
  UINT v837; // ebx
  NTSTATUS v838; // eax
  ULONGLONG v839; // r10
  NTSTATUS v840; // eax
  _DWORD *v841; // r10
  int v842; // edx
  _QWORD *v843; // rax
  NTSTATUS v844; // eax
  UINT v845; // edx
  UINT *v846; // r10
  int v847; // edi
  UINT v848; // ebx
  NTSTATUS v849; // eax
  ULONGLONG v850; // r10
  unsigned int v851; // r11d
  NTSTATUS v852; // eax
  _DWORD *v853; // r10
  int v854; // edx
  _OWORD *v855; // rax
  int v856; // eax
  int v857; // eax
  int v858; // eax
  int v859; // eax
  int v860; // eax
  int v861; // eax
  int v862; // eax
  int v863; // eax
  int v864; // eax
  int v865; // eax
  NTSTATUS v866; // eax
  UINT v867; // edx
  UINT *v868; // r10
  UINT v869; // ebx
  NTSTATUS v870; // eax
  ULONGLONG v871; // r10
  UINT v872; // r11d
  int v873; // edx
  _DWORD *v874; // r10
  int *v875; // rcx
  PVOID v876; // rax
  int v877; // edx
  _DWORD *v878; // r10
  _DWORD *v879; // rcx
  NTSTATUS v880; // eax
  int v881; // eax
  UINT v882; // eax
  __int64 v883; // rbx
  __int64 v884; // rcx
  unsigned __int64 v885; // r12
  int v886; // ebx
  NTSTATUS v887; // eax
  unsigned int *v888; // rdx
  unsigned int v889; // r8d
  unsigned int v890; // eax
  UINT v891; // edx
  UINT v892; // eax
  UINT v893; // ecx
  UINT v894; // edx
  UINT v895; // eax
  UINT v896; // ecx
  unsigned int v897; // ecx
  UINT v898; // edx
  UINT v899; // eax
  UINT v900; // ecx
  UINT v901; // edx
  UINT v902; // eax
  UINT v903; // ecx
  UINT v904; // edx
  UINT v905; // eax
  UINT v906; // ecx
  unsigned int v907; // r9d
  int v908; // edx
  char v909; // r8
  int v910; // eax
  ULONGLONG v911; // rdx
  unsigned __int8 *v912; // rax
  unsigned __int8 *v913; // r12
  __int64 v914; // rdi
  unsigned __int8 v915; // cl
  int v916; // eax
  int v917; // eax
  ULONG v918; // r10d
  int v919; // eax
  int v920; // eax
  int v921; // [rsp+58h] [rbp-B0h]
  signed int Acl; // [rsp+58h] [rbp-B0h]
  NTSTATUS v923; // [rsp+58h] [rbp-B0h]
  int v924; // [rsp+58h] [rbp-B0h]
  int v925; // [rsp+58h] [rbp-B0h]
  signed int v926; // [rsp+58h] [rbp-B0h]
  UINT uAddend[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONGLONG v928; // [rsp+68h] [rbp-A0h]
  PVOID v929; // [rsp+70h] [rbp-98h]
  PVOID v930; // [rsp+78h] [rbp-90h]
  UINT *v931; // [rsp+80h] [rbp-88h]
  PVOID v932; // [rsp+88h] [rbp-80h]
  void *v933; // [rsp+90h] [rbp-78h]
  unsigned __int64 v934; // [rsp+98h] [rbp-70h] BYREF
  ULONGLONG ullAugend; // [rsp+A0h] [rbp-68h]
  UINT v936; // [rsp+A8h] [rbp-60h]
  int v937; // [rsp+ACh] [rbp-5Ch]
  UINT v938; // [rsp+B0h] [rbp-58h]
  int v939; // [rsp+B4h] [rbp-54h]
  UINT v940; // [rsp+B8h] [rbp-50h] BYREF
  ULONG v941; // [rsp+BCh] [rbp-4Ch] BYREF
  UINT v942; // [rsp+C0h] [rbp-48h] BYREF
  PVOID P; // [rsp+C8h] [rbp-40h]
  unsigned int v944; // [rsp+D0h] [rbp-38h]
  UINT v945; // [rsp+D4h] [rbp-34h] BYREF
  UINT v946; // [rsp+D8h] [rbp-30h] BYREF
  UINT v947; // [rsp+DCh] [rbp-2Ch] BYREF
  UINT v948; // [rsp+E0h] [rbp-28h] BYREF
  UINT v949; // [rsp+E4h] [rbp-24h] BYREF
  UINT v950; // [rsp+E8h] [rbp-20h] BYREF
  UINT v951; // [rsp+ECh] [rbp-1Ch]
  ULONGLONG v952; // [rsp+F0h] [rbp-18h] BYREF
  ULONGLONG v953; // [rsp+F8h] [rbp-10h] BYREF
  ULONGLONG v954; // [rsp+100h] [rbp-8h] BYREF
  ULONGLONG v955; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v956; // [rsp+110h] [rbp+8h] BYREF
  UINT v957; // [rsp+114h] [rbp+Ch]
  UINT v958; // [rsp+118h] [rbp+10h] BYREF
  ULONGLONG v959; // [rsp+120h] [rbp+18h] BYREF
  UINT puResult; // [rsp+128h] [rbp+20h] BYREF
  ULONGLONG v961; // [rsp+130h] [rbp+28h] BYREF
  UINT v962; // [rsp+138h] [rbp+30h]
  int v963; // [rsp+13Ch] [rbp+34h] BYREF
  unsigned int v964; // [rsp+140h] [rbp+38h]
  UINT v965; // [rsp+144h] [rbp+3Ch] BYREF
  UINT v966[3]; // [rsp+14Ch] [rbp+44h] BYREF
  __m128i v967; // [rsp+158h] [rbp+50h]
  UINT v968; // [rsp+168h] [rbp+60h] BYREF
  int v969; // [rsp+16Ch] [rbp+64h]
  ULONG v970; // [rsp+170h] [rbp+68h] BYREF
  ULONG v971; // [rsp+174h] [rbp+6Ch] BYREF
  unsigned int Size; // [rsp+178h] [rbp+70h]
  unsigned int Size_4; // [rsp+17Ch] [rbp+74h]
  ULONG v974; // [rsp+180h] [rbp+78h] BYREF
  int v975; // [rsp+184h] [rbp+7Ch]
  UINT v976; // [rsp+188h] [rbp+80h]
  UINT v977; // [rsp+18Ch] [rbp+84h]
  UINT v978; // [rsp+190h] [rbp+88h]
  UINT v979; // [rsp+194h] [rbp+8Ch]
  UINT v980; // [rsp+198h] [rbp+90h]
  UINT v981; // [rsp+19Ch] [rbp+94h]
  UINT v982; // [rsp+1A0h] [rbp+98h]
  int v983; // [rsp+1A4h] [rbp+9Ch]
  int v984; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v985; // [rsp+1ACh] [rbp+A4h]
  ULONGLONG v986; // [rsp+1B0h] [rbp+A8h] BYREF
  ULONGLONG v987; // [rsp+1B8h] [rbp+B0h] BYREF
  ULONGLONG v988; // [rsp+1C0h] [rbp+B8h] BYREF
  ULONGLONG v989; // [rsp+1C8h] [rbp+C0h] BYREF
  ULONGLONG v990; // [rsp+1D0h] [rbp+C8h] BYREF
  ULONGLONG v991; // [rsp+1D8h] [rbp+D0h] BYREF
  ULONGLONG v992; // [rsp+1E0h] [rbp+D8h] BYREF
  ULONGLONG v993; // [rsp+1E8h] [rbp+E0h] BYREF
  ULONGLONG v994; // [rsp+1F0h] [rbp+E8h] BYREF
  ULONGLONG v995; // [rsp+1F8h] [rbp+F0h] BYREF
  ULONGLONG v996; // [rsp+200h] [rbp+F8h] BYREF
  ULONGLONG v997; // [rsp+208h] [rbp+100h] BYREF
  ULONGLONG v998; // [rsp+210h] [rbp+108h] BYREF
  ULONGLONG v999; // [rsp+218h] [rbp+110h] BYREF
  ULONGLONG v1000; // [rsp+220h] [rbp+118h] BYREF
  ULONGLONG v1001; // [rsp+228h] [rbp+120h] BYREF
  ULONGLONG v1002; // [rsp+230h] [rbp+128h] BYREF
  ULONGLONG v1003; // [rsp+238h] [rbp+130h] BYREF
  ULONGLONG v1004; // [rsp+240h] [rbp+138h] BYREF
  ULONGLONG pullResult; // [rsp+248h] [rbp+140h] BYREF
  ULONGLONG v1006; // [rsp+250h] [rbp+148h] BYREF
  ULONGLONG v1007; // [rsp+258h] [rbp+150h] BYREF
  NTSTATUS v1008; // [rsp+260h] [rbp+158h] BYREF
  ULONGLONG v1009; // [rsp+268h] [rbp+160h] BYREF
  NTSTATUS AccessStatus; // [rsp+270h] [rbp+168h] BYREF
  UINT v1011; // [rsp+274h] [rbp+16Ch] BYREF
  UINT v1012; // [rsp+278h] [rbp+170h] BYREF
  unsigned int v1013; // [rsp+27Ch] [rbp+174h]
  ULONGLONG v1014; // [rsp+280h] [rbp+178h] BYREF
  ULONGLONG v1015; // [rsp+288h] [rbp+180h] BYREF
  UINT v1016; // [rsp+290h] [rbp+188h]
  UINT v1017; // [rsp+294h] [rbp+18Ch]
  int v1018; // [rsp+298h] [rbp+190h]
  UINT v1019; // [rsp+29Ch] [rbp+194h]
  ULONGLONG v1020; // [rsp+2A0h] [rbp+198h] BYREF
  ULONGLONG v1021; // [rsp+2A8h] [rbp+1A0h] BYREF
  ULONGLONG v1022; // [rsp+2B0h] [rbp+1A8h] BYREF
  int v1023; // [rsp+2B8h] [rbp+1B0h]
  int v1024; // [rsp+2BCh] [rbp+1B4h]
  int v1025; // [rsp+2C0h] [rbp+1B8h]
  int v1026; // [rsp+2C4h] [rbp+1BCh]
  int v1027; // [rsp+2C8h] [rbp+1C0h]
  int v1028; // [rsp+2CCh] [rbp+1C4h]
  int v1029; // [rsp+2D0h] [rbp+1C8h]
  int v1030; // [rsp+2D8h] [rbp+1D0h]
  int v1031; // [rsp+2DCh] [rbp+1D4h]
  int v1032; // [rsp+2E0h] [rbp+1D8h] BYREF
  int v1033; // [rsp+2E4h] [rbp+1DCh]
  UINT v1034; // [rsp+2E8h] [rbp+1E0h]
  UINT v1035; // [rsp+2ECh] [rbp+1E4h]
  UINT v1036; // [rsp+2F0h] [rbp+1E8h] BYREF
  UINT v1037; // [rsp+2F4h] [rbp+1ECh] BYREF
  unsigned int v1038; // [rsp+2F8h] [rbp+1F0h]
  unsigned int v1039; // [rsp+2FCh] [rbp+1F4h]
  UINT v1040; // [rsp+300h] [rbp+1F8h] BYREF
  UINT v1041; // [rsp+304h] [rbp+1FCh] BYREF
  UINT v1042; // [rsp+308h] [rbp+200h] BYREF
  UINT v1043; // [rsp+30Ch] [rbp+204h] BYREF
  UINT v1044; // [rsp+310h] [rbp+208h] BYREF
  UINT v1045; // [rsp+314h] [rbp+20Ch] BYREF
  UINT v1046; // [rsp+318h] [rbp+210h]
  unsigned int v1047; // [rsp+320h] [rbp+218h]
  int v1048; // [rsp+328h] [rbp+220h]
  unsigned int v1049; // [rsp+330h] [rbp+228h]
  int v1050; // [rsp+338h] [rbp+230h]
  UINT v1051; // [rsp+33Ch] [rbp+234h]
  UINT v1052; // [rsp+340h] [rbp+238h] BYREF
  UINT v1053; // [rsp+344h] [rbp+23Ch] BYREF
  UINT v1054; // [rsp+348h] [rbp+240h]
  unsigned int v1055; // [rsp+34Ch] [rbp+244h]
  unsigned int NumberOfBytes; // [rsp+350h] [rbp+248h]
  unsigned int NumberOfBytes_4; // [rsp+354h] [rbp+24Ch]
  UINT v1058; // [rsp+358h] [rbp+250h]
  int v1059; // [rsp+35Ch] [rbp+254h] BYREF
  int v1060; // [rsp+360h] [rbp+258h] BYREF
  UINT v1061; // [rsp+364h] [rbp+25Ch]
  int v1062; // [rsp+368h] [rbp+260h] BYREF
  unsigned int v1063; // [rsp+36Ch] [rbp+264h]
  int v1064; // [rsp+370h] [rbp+268h]
  int v1065; // [rsp+374h] [rbp+26Ch]
  int v1066; // [rsp+378h] [rbp+270h]
  int v1067; // [rsp+380h] [rbp+278h]
  unsigned int v1068; // [rsp+388h] [rbp+280h]
  UINT v1069; // [rsp+38Ch] [rbp+284h] BYREF
  UINT v1070; // [rsp+390h] [rbp+288h] BYREF
  UINT v1071; // [rsp+394h] [rbp+28Ch] BYREF
  unsigned int v1072; // [rsp+398h] [rbp+290h]
  int v1073; // [rsp+39Ch] [rbp+294h]
  unsigned int v1074; // [rsp+3A0h] [rbp+298h]
  ULONGLONG v1075; // [rsp+3A8h] [rbp+2A0h] BYREF
  ULONGLONG v1076; // [rsp+3B0h] [rbp+2A8h] BYREF
  ULONGLONG v1077; // [rsp+3B8h] [rbp+2B0h] BYREF
  UINT v1078; // [rsp+3C0h] [rbp+2B8h] BYREF
  UINT v1079; // [rsp+3C4h] [rbp+2BCh] BYREF
  UINT v1080; // [rsp+3C8h] [rbp+2C0h] BYREF
  UINT v1081; // [rsp+3CCh] [rbp+2C4h]
  int v1082; // [rsp+3D0h] [rbp+2C8h]
  PVOID v1083; // [rsp+3D8h] [rbp+2D0h]
  PVOID v1084; // [rsp+3E0h] [rbp+2D8h]
  PVOID v1085; // [rsp+3E8h] [rbp+2E0h]
  PVOID v1086; // [rsp+3F0h] [rbp+2E8h]
  PCWSTR SourceString; // [rsp+3F8h] [rbp+2F0h]
  void *v1088; // [rsp+400h] [rbp+2F8h]
  HANDLE TargetFile[2]; // [rsp+408h] [rbp+300h] BYREF
  LARGE_INTEGER v1090[2]; // [rsp+418h] [rbp+310h] BYREF
  UINT v1091; // [rsp+428h] [rbp+320h] BYREF
  int v1092; // [rsp+430h] [rbp+328h]
  UINT v1093; // [rsp+438h] [rbp+330h] BYREF
  UINT v1094; // [rsp+43Ch] [rbp+334h]
  int v1095; // [rsp+440h] [rbp+338h]
  UINT v1096; // [rsp+448h] [rbp+340h] BYREF
  UINT v1097; // [rsp+44Ch] [rbp+344h] BYREF
  int v1098; // [rsp+450h] [rbp+348h]
  UINT v1099; // [rsp+454h] [rbp+34Ch] BYREF
  unsigned int v1100; // [rsp+458h] [rbp+350h]
  UINT v1101; // [rsp+45Ch] [rbp+354h] BYREF
  UINT v1102; // [rsp+460h] [rbp+358h]
  int v1103; // [rsp+468h] [rbp+360h]
  int v1104; // [rsp+470h] [rbp+368h]
  UINT v1105; // [rsp+474h] [rbp+36Ch] BYREF
  int v1106; // [rsp+478h] [rbp+370h]
  int v1107; // [rsp+480h] [rbp+378h]
  UINT v1108; // [rsp+488h] [rbp+380h] BYREF
  UINT v1109; // [rsp+48Ch] [rbp+384h]
  int v1110; // [rsp+490h] [rbp+388h]
  int v1111; // [rsp+498h] [rbp+390h]
  int v1112; // [rsp+49Ch] [rbp+394h]
  int v1113; // [rsp+4A0h] [rbp+398h]
  int v1114; // [rsp+4A4h] [rbp+39Ch]
  int v1115; // [rsp+4A8h] [rbp+3A0h]
  unsigned int v1116; // [rsp+4ACh] [rbp+3A4h]
  UINT v1117; // [rsp+4B0h] [rbp+3A8h] BYREF
  UINT v1118; // [rsp+4B4h] [rbp+3ACh] BYREF
  UINT v1119; // [rsp+4B8h] [rbp+3B0h] BYREF
  int v1120; // [rsp+4C0h] [rbp+3B8h]
  UINT v1121; // [rsp+4C8h] [rbp+3C0h] BYREF
  UINT v1122; // [rsp+4CCh] [rbp+3C4h] BYREF
  UINT v1123; // [rsp+4D0h] [rbp+3C8h] BYREF
  UINT v1124; // [rsp+4D4h] [rbp+3CCh] BYREF
  int v1125; // [rsp+4D8h] [rbp+3D0h]
  unsigned int v1126; // [rsp+4DCh] [rbp+3D4h]
  UINT v1127; // [rsp+4E0h] [rbp+3D8h] BYREF
  UINT v1128; // [rsp+4E4h] [rbp+3DCh] BYREF
  UINT v1129; // [rsp+4E8h] [rbp+3E0h] BYREF
  UINT v1130; // [rsp+4ECh] [rbp+3E4h]
  int v1131; // [rsp+4F0h] [rbp+3E8h]
  UINT v1132; // [rsp+4F8h] [rbp+3F0h] BYREF
  UINT v1133; // [rsp+4FCh] [rbp+3F4h] BYREF
  UINT v1134; // [rsp+500h] [rbp+3F8h] BYREF
  UINT v1135; // [rsp+504h] [rbp+3FCh] BYREF
  UINT v1136; // [rsp+508h] [rbp+400h] BYREF
  int v1137; // [rsp+510h] [rbp+408h]
  int v1138; // [rsp+518h] [rbp+410h]
  int v1139; // [rsp+520h] [rbp+418h]
  int v1140; // [rsp+524h] [rbp+41Ch]
  int v1141; // [rsp+528h] [rbp+420h]
  int v1142; // [rsp+52Ch] [rbp+424h]
  int v1143; // [rsp+530h] [rbp+428h] BYREF
  int v1144; // [rsp+534h] [rbp+42Ch] BYREF
  int v1145; // [rsp+538h] [rbp+430h] BYREF
  int v1146; // [rsp+53Ch] [rbp+434h]
  int v1147; // [rsp+540h] [rbp+438h]
  int v1148; // [rsp+548h] [rbp+440h]
  int v1149; // [rsp+550h] [rbp+448h]
  ULONG v1150; // [rsp+554h] [rbp+44Ch] BYREF
  unsigned int v1151; // [rsp+558h] [rbp+450h]
  unsigned int v1152; // [rsp+55Ch] [rbp+454h]
  unsigned int v1153; // [rsp+560h] [rbp+458h]
  int v1154; // [rsp+564h] [rbp+45Ch]
  ULONG ReturnLength; // [rsp+568h] [rbp+460h] BYREF
  int v1156; // [rsp+570h] [rbp+468h]
  int v1157; // [rsp+578h] [rbp+470h]
  int v1158; // [rsp+580h] [rbp+478h]
  int v1159; // [rsp+588h] [rbp+480h]
  int v1160; // [rsp+590h] [rbp+488h]
  unsigned int v1161; // [rsp+598h] [rbp+490h]
  int v1162; // [rsp+5A0h] [rbp+498h]
  int v1163; // [rsp+5A8h] [rbp+4A0h]
  int v1164; // [rsp+5B0h] [rbp+4A8h]
  int v1165; // [rsp+5B8h] [rbp+4B0h]
  int v1166; // [rsp+5C0h] [rbp+4B8h]
  int v1167; // [rsp+5C4h] [rbp+4BCh] BYREF
  int v1168; // [rsp+5C8h] [rbp+4C0h] BYREF
  int v1169; // [rsp+5CCh] [rbp+4C4h]
  int v1170; // [rsp+5D0h] [rbp+4C8h]
  int v1171; // [rsp+5D8h] [rbp+4D0h]
  int v1172; // [rsp+5DCh] [rbp+4D4h]
  int v1173; // [rsp+5E0h] [rbp+4D8h]
  int v1174; // [rsp+5E8h] [rbp+4E0h]
  int v1175; // [rsp+5ECh] [rbp+4E4h]
  int v1176; // [rsp+5F0h] [rbp+4E8h]
  ULONG v1177; // [rsp+5F8h] [rbp+4F0h] BYREF
  int v1178; // [rsp+5FCh] [rbp+4F4h]
  int v1179; // [rsp+600h] [rbp+4F8h]
  int v1180; // [rsp+604h] [rbp+4FCh]
  int v1181; // [rsp+608h] [rbp+500h]
  NTSTATUS v1182; // [rsp+60Ch] [rbp+504h]
  NTSTATUS v1183; // [rsp+610h] [rbp+508h]
  int v1184; // [rsp+618h] [rbp+510h]
  int v1185; // [rsp+620h] [rbp+518h]
  ULONGLONG v1186; // [rsp+628h] [rbp+520h] BYREF
  ULONGLONG v1187; // [rsp+630h] [rbp+528h] BYREF
  ULONGLONG v1188; // [rsp+640h] [rbp+538h] BYREF
  ULONGLONG v1189; // [rsp+648h] [rbp+540h] BYREF
  ULONGLONG v1190; // [rsp+650h] [rbp+548h] BYREF
  LARGE_INTEGER Interval; // [rsp+658h] [rbp+550h] BYREF
  ULONGLONG v1192; // [rsp+660h] [rbp+558h] BYREF
  ULONGLONG v1193; // [rsp+668h] [rbp+560h] BYREF
  ULONGLONG v1194; // [rsp+670h] [rbp+568h] BYREF
  ULONGLONG v1195; // [rsp+678h] [rbp+570h] BYREF
  ULONGLONG v1196; // [rsp+680h] [rbp+578h] BYREF
  ULONGLONG v1197; // [rsp+688h] [rbp+580h] BYREF
  ULONGLONG v1198; // [rsp+690h] [rbp+588h] BYREF
  ULONGLONG v1199; // [rsp+698h] [rbp+590h] BYREF
  ULONGLONG v1200; // [rsp+6A0h] [rbp+598h] BYREF
  ULONGLONG v1201; // [rsp+6A8h] [rbp+5A0h] BYREF
  ULONGLONG j; // [rsp+6B0h] [rbp+5A8h] BYREF
  HANDLE KeyHandle; // [rsp+6B8h] [rbp+5B0h] BYREF
  int v1204; // [rsp+6C0h] [rbp+5B8h]
  int v1205; // [rsp+6C4h] [rbp+5BCh]
  int v1206; // [rsp+6C8h] [rbp+5C0h]
  int v1207; // [rsp+6CCh] [rbp+5C4h]
  int v1208; // [rsp+6D0h] [rbp+5C8h]
  PVOID v1209; // [rsp+6D8h] [rbp+5D0h]
  PVOID v1210; // [rsp+6E0h] [rbp+5D8h] BYREF
  size_t v1211; // [rsp+6E8h] [rbp+5E0h] BYREF
  size_t v1212; // [rsp+6F0h] [rbp+5E8h] BYREF
  size_t pcbLength; // [rsp+6F8h] [rbp+5F0h] BYREF
  unsigned int v1214; // [rsp+700h] [rbp+5F8h] BYREF
  UINT v1215; // [rsp+704h] [rbp+5FCh] BYREF
  UINT v1216; // [rsp+708h] [rbp+600h] BYREF
  UINT v1217; // [rsp+70Ch] [rbp+604h] BYREF
  ULONGLONG v1218; // [rsp+710h] [rbp+608h]
  ULONGLONG v1219; // [rsp+718h] [rbp+610h]
  wchar_t *v1220; // [rsp+720h] [rbp+618h]
  unsigned __int64 v1221; // [rsp+728h] [rbp+620h]
  __int64 SystemInformation; // [rsp+730h] [rbp+628h] BYREF
  __int64 v1223; // [rsp+738h] [rbp+630h] BYREF
  HANDLE Handle; // [rsp+740h] [rbp+638h]
  HANDLE v1225; // [rsp+748h] [rbp+640h]
  HANDLE v1226; // [rsp+750h] [rbp+648h]
  unsigned __int64 v1227; // [rsp+758h] [rbp+650h]
  STRSAFE_PCNZWCH psz; // [rsp+760h] [rbp+658h]
  __int64 v1229; // [rsp+768h] [rbp+660h] BYREF
  wchar_t *v1230; // [rsp+770h] [rbp+668h]
  wchar_t *v1231; // [rsp+778h] [rbp+670h]
  ULONGLONG v1232; // [rsp+780h] [rbp+678h]
  STRSAFE_PCNZWCH v1233; // [rsp+788h] [rbp+680h]
  UNICODE_STRING DestinationString; // [rsp+790h] [rbp+688h] BYREF
  int v1235; // [rsp+7A0h] [rbp+698h]
  char v1236[4]; // [rsp+7A4h] [rbp+69Ch] BYREF
  unsigned int v1237; // [rsp+7A8h] [rbp+6A0h]
  int v1238; // [rsp+7ACh] [rbp+6A4h]
  int v1239; // [rsp+7B0h] [rbp+6A8h]
  char v1240[4]; // [rsp+7B4h] [rbp+6ACh] BYREF
  int v1241; // [rsp+7B8h] [rbp+6B0h]
  ACCESS_MASK GrantedAccess[8]; // [rsp+7BCh] [rbp+6B4h] BYREF
  ACCESS_MASK v1243[3]; // [rsp+7DCh] [rbp+6D4h] BYREF
  const void *v1244; // [rsp+7E8h] [rbp+6E0h]
  const void *v1245; // [rsp+7F0h] [rbp+6E8h]
  _QWORD *v1246; // [rsp+7F8h] [rbp+6F0h]
  __int64 v1247; // [rsp+800h] [rbp+6F8h]
  ULONGLONG v1248; // [rsp+808h] [rbp+700h]
  _QWORD *v1249; // [rsp+810h] [rbp+708h]
  __int64 v1250; // [rsp+818h] [rbp+710h]
  __int64 v1251; // [rsp+820h] [rbp+718h]
  _QWORD *v1252; // [rsp+828h] [rbp+720h]
  __int64 v1253; // [rsp+830h] [rbp+728h]
  __int64 v1254; // [rsp+838h] [rbp+730h]
  _QWORD *v1255; // [rsp+840h] [rbp+738h]
  LARGE_INTEGER Timeout; // [rsp+848h] [rbp+740h] BYREF
  __int64 v1257; // [rsp+850h] [rbp+748h]
  __int64 v1258; // [rsp+858h] [rbp+750h]
  void **v1259; // [rsp+860h] [rbp+758h]
  void *v1260; // [rsp+868h] [rbp+760h]
  NTSTATUS *v1261; // [rsp+870h] [rbp+768h]
  NTSTATUS *v1262; // [rsp+878h] [rbp+770h]
  _QWORD *v1263; // [rsp+880h] [rbp+778h]
  PVOID Object; // [rsp+888h] [rbp+780h] BYREF
  _QWORD *v1265; // [rsp+890h] [rbp+788h]
  void **v1266; // [rsp+898h] [rbp+790h]
  void *v1267; // [rsp+8A0h] [rbp+798h]
  unsigned int *v1268; // [rsp+8A8h] [rbp+7A0h]
  PVOID v1269; // [rsp+8B0h] [rbp+7A8h] BYREF
  __int64 v1270; // [rsp+8B8h] [rbp+7B0h]
  __int64 v1271; // [rsp+8C0h] [rbp+7B8h]
  _QWORD *v1272; // [rsp+8C8h] [rbp+7C0h]
  void **v1273; // [rsp+8D0h] [rbp+7C8h]
  void *v1274; // [rsp+8D8h] [rbp+7D0h]
  int v1275; // [rsp+8E0h] [rbp+7D8h]
  __int64 Source2; // [rsp+8E8h] [rbp+7E0h] BYREF
  __int64 v1277; // [rsp+8F0h] [rbp+7E8h]
  __int64 v1278; // [rsp+8F8h] [rbp+7F0h]
  unsigned __int64 v1279; // [rsp+900h] [rbp+7F8h]
  size_t v1280; // [rsp+908h] [rbp+800h] BYREF
  void *v1281; // [rsp+910h] [rbp+808h]
  int *v1282; // [rsp+918h] [rbp+810h]
  int *v1283; // [rsp+920h] [rbp+818h]
  _QWORD *v1284; // [rsp+928h] [rbp+820h]
  _DWORD *v1285; // [rsp+930h] [rbp+828h]
  size_t v1286; // [rsp+938h] [rbp+830h] BYREF
  void *v1287; // [rsp+940h] [rbp+838h]
  int v1288; // [rsp+948h] [rbp+840h]
  void *v1289; // [rsp+950h] [rbp+848h]
  _DWORD *v1290; // [rsp+958h] [rbp+850h]
  __int64 v1291; // [rsp+960h] [rbp+858h]
  __int64 v1292; // [rsp+968h] [rbp+860h]
  _QWORD *v1293; // [rsp+970h] [rbp+868h]
  UINT v1294; // [rsp+978h] [rbp+870h]
  void *v1295; // [rsp+980h] [rbp+878h]
  __int64 v1296; // [rsp+988h] [rbp+880h]
  __int64 v1297; // [rsp+990h] [rbp+888h]
  _QWORD *v1298; // [rsp+998h] [rbp+890h]
  int v1299; // [rsp+9A0h] [rbp+898h]
  void *Src; // [rsp+9A8h] [rbp+8A0h]
  _DWORD *v1301; // [rsp+9B0h] [rbp+8A8h]
  unsigned int *v1302; // [rsp+9B8h] [rbp+8B0h]
  int v1303; // [rsp+9C0h] [rbp+8B8h]
  __int64 v1304; // [rsp+9C8h] [rbp+8C0h]
  __int64 v1305; // [rsp+9D0h] [rbp+8C8h]
  ULONGLONG v1306; // [rsp+9D8h] [rbp+8D0h]
  _QWORD *v1307; // [rsp+9E0h] [rbp+8D8h]
  UINT *v1308; // [rsp+9E8h] [rbp+8E0h]
  int v1309; // [rsp+9F0h] [rbp+8E8h]
  int v1310; // [rsp+9F4h] [rbp+8ECh]
  ULONGLONG v1311[2]; // [rsp+A00h] [rbp+8F8h] BYREF
  ULONGLONG v1312[3]; // [rsp+A10h] [rbp+908h] BYREF
  ULONGLONG v1313[2]; // [rsp+A28h] [rbp+920h] BYREF
  ULONGLONG v1314[2]; // [rsp+A38h] [rbp+930h] BYREF
  ULONGLONG v1315[2]; // [rsp+A48h] [rbp+940h] BYREF
  ULONGLONG v1316[2]; // [rsp+A58h] [rbp+950h] BYREF
  ULONGLONG v1317[2]; // [rsp+A68h] [rbp+960h] BYREF
  ULONGLONG v1318[2]; // [rsp+A78h] [rbp+970h] BYREF
  ULONGLONG v1319[2]; // [rsp+A88h] [rbp+980h] BYREF
  ULONGLONG v1320[2]; // [rsp+AA8h] [rbp+9A0h] BYREF
  ULONGLONG v1321[2]; // [rsp+AB8h] [rbp+9B0h] BYREF
  ULONGLONG v1322; // [rsp+AC8h] [rbp+9C0h] BYREF
  UNICODE_STRING v1323; // [rsp+AD0h] [rbp+9C8h] BYREF
  ULONGLONG v1324[2]; // [rsp+AE8h] [rbp+9E0h] BYREF
  ULONGLONG v1325[2]; // [rsp+AF8h] [rbp+9F0h] BYREF
  ULONGLONG v1326[2]; // [rsp+B08h] [rbp+A00h] BYREF
  ULONGLONG v1327[2]; // [rsp+B18h] [rbp+A10h] BYREF
  ULONGLONG v1328[2]; // [rsp+B28h] [rbp+A20h] BYREF
  ULONGLONG v1329[2]; // [rsp+B38h] [rbp+A30h] BYREF
  ULONGLONG v1330[2]; // [rsp+B48h] [rbp+A40h] BYREF
  ULONGLONG v1331[2]; // [rsp+B58h] [rbp+A50h] BYREF
  ULONGLONG v1332[2]; // [rsp+B68h] [rbp+A60h] BYREF
  ULONGLONG v1333[2]; // [rsp+B78h] [rbp+A70h] BYREF
  __m128i v1334; // [rsp+B88h] [rbp+A80h] BYREF
  ULONGLONG v1335[2]; // [rsp+BA0h] [rbp+A98h] BYREF
  ULONGLONG v1336[2]; // [rsp+BB0h] [rbp+AA8h] BYREF
  ULONGLONG v1337[2]; // [rsp+BC0h] [rbp+AB8h] BYREF
  ULONGLONG v1338[2]; // [rsp+BD0h] [rbp+AC8h] BYREF
  ULONGLONG v1339[2]; // [rsp+BE0h] [rbp+AD8h] BYREF
  ULONGLONG v1340[2]; // [rsp+BF0h] [rbp+AE8h] BYREF
  ULONGLONG v1341[2]; // [rsp+C00h] [rbp+AF8h] BYREF
  ULONGLONG v1342[2]; // [rsp+C10h] [rbp+B08h] BYREF
  ULONGLONG v1343[2]; // [rsp+C20h] [rbp+B18h] BYREF
  ULONGLONG v1344[2]; // [rsp+C30h] [rbp+B28h] BYREF
  ULONGLONG v1345[2]; // [rsp+C40h] [rbp+B38h] BYREF
  ULONGLONG v1346[2]; // [rsp+C50h] [rbp+B48h] BYREF
  ULONGLONG v1347[2]; // [rsp+C60h] [rbp+B58h] BYREF
  ULONGLONG v1348[2]; // [rsp+C70h] [rbp+B68h] BYREF
  ULONGLONG v1349[2]; // [rsp+C80h] [rbp+B78h] BYREF
  ULONGLONG v1350; // [rsp+C90h] [rbp+B88h] BYREF
  UNICODE_STRING v1351; // [rsp+C98h] [rbp+B90h] BYREF
  ULONGLONG v1352; // [rsp+CB0h] [rbp+BA8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+CB8h] [rbp+BB0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+CD8h] [rbp+BD0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+CF8h] [rbp+BF0h] BYREF
  _BYTE v1356[40]; // [rsp+D20h] [rbp+C18h] BYREF
  __int64 v1357; // [rsp+D48h] [rbp+C40h] BYREF
  __int64 v1358; // [rsp+D50h] [rbp+C48h] BYREF
  __int128 v1359; // [rsp+D58h] [rbp+C50h] BYREF
  __int128 v1360; // [rsp+D68h] [rbp+C60h] BYREF
  __int64 v1361; // [rsp+D78h] [rbp+C70h] BYREF
  int v1362; // [rsp+D80h] [rbp+C78h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1308 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v1307 = a4;
  v951 = a3;
  v929 = 0LL;
  v931 = 0LL;
  v969 = 0;
  v934 = 0LL;
  ullAugend = 0LL;
  *(_QWORD *)uAddend = 0LL;
  v928 = 0LL;
  v932 = 0LL;
  v944 = 0;
  v1221 = 0LL;
  v930 = 0LL;
  v933 = 0LL;
  v1244 = 0LL;
  v1152 = 0;
  v1245 = 0LL;
  v1153 = 0;
  v954 = 0LL;
  if ( a2 < 4 )
  {
    CurrentHardwareID = -1073741762;
    goto LABEL_386;
  }
  v10 = *a1;
  v11 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
  {
    CurrentHardwareID = -1073741675;
    v7 = 0LL;
  }
  else
  {
    if ( a2 - 4 < (unsigned int)v10 )
    {
      v7 = 0LL;
      CurrentHardwareID = -1073741762;
      goto LABEL_386;
    }
    v12 = (unsigned int *)&v11[v10];
    if ( &v11[v10] < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
    {
      CurrentHardwareID = -1073741675;
      v7 = 0LL;
    }
    else
    {
      if ( a2 - ((_DWORD)v10 + 4) < 4 )
      {
        v7 = 0LL;
        CurrentHardwareID = -1073741762;
        goto LABEL_386;
      }
      v13 = *v12;
      v14 = (char *)(v12 + 1);
      if ( v12 + 1 < v12 )
        goto LABEL_2212;
      v15 = v10 + 8;
      if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
        goto LABEL_2212;
      if ( a2 - v15 < (unsigned int)v13 )
      {
        v8 = 0LL;
        CurrentHardwareID = -1073741762;
        v7 = 0LL;
        v5 = 0LL;
        goto LABEL_386;
      }
      v16 = (unsigned int *)&v14[v13];
      if ( &v14[v13] < v14 || (v17 = v13 + v15, (unsigned int)v13 + v15 < v15) )
      {
LABEL_2212:
        CurrentHardwareID = -1073741675;
        v8 = 0LL;
        v7 = 0LL;
        v5 = 0LL;
      }
      else
      {
        if ( a2 - v17 < 4 )
        {
          v8 = 0LL;
          CurrentHardwareID = -1073741762;
          v7 = 0LL;
          v5 = 0LL;
          goto LABEL_386;
        }
        v18 = *v16;
        v19 = v16 + 1;
        if ( v16 + 1 >= v16 )
        {
          v20 = v17 + 4;
          if ( v17 + 4 >= v17 )
          {
            if ( a2 - v20 < (unsigned int)v18 )
              goto LABEL_783;
            if ( (unsigned int)v18 + v20 >= v20 )
            {
              if ( a2 == (_DWORD)v18 + v20 && (unsigned int)(v10 + v18 + v13) + 12LL == a2 )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                v22 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v22 = (_DWORD *)v954;
                  v26 = -1073741801;
                  v921 = -1073741801;
LABEL_33:
                  if ( v26 < 0 )
                  {
                    if ( v22 )
                    {
                      v429 = (void *)*((_QWORD *)v22 + 1);
                      if ( v429 )
                      {
                        ExFreePoolWithTag(v429, 0x20534C53u);
                        *((_QWORD *)v22 + 1) = 0LL;
                      }
                      v430 = (void *)*((_QWORD *)v22 + 3);
                      if ( v430 )
                      {
                        ExFreePoolWithTag(v430, 0x20534C53u);
                        *((_QWORD *)v22 + 3) = 0LL;
                      }
                      v431 = (void *)*((_QWORD *)v22 + 5);
                      if ( v431 )
                      {
                        ExFreePoolWithTag(v431, 0x20534C53u);
                        *((_QWORD *)v22 + 5) = 0LL;
                      }
                      ExFreePoolWithTag(v22, 0x20534C53u);
                      v26 = v921;
                    }
                    v9 = (unsigned int *)v929;
                  }
                  else
                  {
                    v9 = v22;
                    v929 = v22;
                  }
                  if ( v26 < 0 )
                  {
                    v7 = v931;
                    goto LABEL_842;
                  }
                  v1218 = 0LL;
                  v27 = 0LL;
                  v1088 = 0LL;
                  v921 = 0;
                  if ( !v9
                    || !*((_QWORD *)v9 + 1)
                    || !*v9
                    || !*((_QWORD *)v9 + 5)
                    || !v9[8]
                    || !*((_QWORD *)v9 + 3)
                    || !v9[4] )
                  {
                    v8 = (const void **)v930;
                    CurrentHardwareID = -1073741811;
                    v7 = (UINT *)v930;
                    v5 = (char *)v930;
                    goto LABEL_810;
                  }
                  v1218 = *v9;
                  v28 = *((_QWORD *)v9 + 1);
                  v29 = *((_QWORD *)v9 + 3);
                  v30 = (__int64 *)*((_QWORD *)v9 + 5);
                  v31 = *v9;
                  v955 = v29;
                  v1075 = v28;
                  if ( v28 && v31 && v29 && v30 && v9[8] == 8 && v9[4] == 160 )
                  {
                    v32 = *v30;
                    v33 = v31 - 8;
                    LOBYTE(v941) = 0;
                    v952 = v31 - 8;
                    v34 = (UINT *)ExAllocatePoolWithTag(PagedPool, v31 - 8, 0x20534C53u);
                    v953 = (ULONGLONG)v34;
                    v35 = v34;
                    if ( v34 )
                    {
                      v36 = (unsigned __int8 *)v28;
                      v1357 = v32;
                      v37 = v34;
                      v38 = v33 & 7;
                      if ( (v33 & 7) != 0 )
                      {
                        v936 = -1;
                        v938 = 0;
                        v432 = 0;
                        v940 = 0;
                        v433 = -1;
                        v942 = 0;
                        v434 = 0;
                        v435 = 0;
                        v436 = 0;
                        v437 = 56;
                        do
                        {
                          v438 = *v36;
                          if ( v436 >= 4 )
                            v434 |= v438 << v437;
                          else
                            v435 |= v438 << (v437 - 32);
                          ++v436;
                          v437 -= 8;
                          ++v36;
                        }
                        while ( v436 < v38 );
                        v942 = v435;
                        v940 = v434;
                        v439 = 16LL;
                        v440 = (unsigned __int8 *)(v29 + 158);
                        v441 = (unsigned __int8 *)(v29 + 126);
                        v959 = 16LL;
                        v442 = 30LL;
                        do
                        {
                          v443 = v440[1];
                          if ( v443 < 0x1Fu )
                          {
                            v444 = funcs_1404A9C7B[v443](
                                     v442 + 1,
                                     *(v441 - 2),
                                     *(v441 - 1),
                                     *v441,
                                     v441[1],
                                     (__int64)&v1357,
                                     v432);
                            v432 = v938;
                            v433 = v444 ^ v936;
                            v439 = v959;
                            v936 ^= v444;
                          }
                          if ( *v440 < 0x1Fu )
                          {
                            v445 = funcs_1404A9C7B[*v440](
                                     v442,
                                     *(v441 - 6),
                                     *(v441 - 5),
                                     *(v441 - 4),
                                     *(v441 - 3),
                                     (__int64)&v1357,
                                     v433);
                            v433 = v936;
                            v432 = v445 ^ v938;
                            v439 = v959;
                            v938 ^= v445;
                          }
                          v442 -= 2LL;
                          v441 -= 8;
                          v440 -= 2;
                          v959 = --v439;
                        }
                        while ( v439 );
                        v40 = v942 ^ v432;
                        v446 = v940 ^ v433;
                        v447 = 0;
                        v29 = v955;
                        v938 = v40;
                        v936 = v446;
                        if ( v38 > 0 )
                        {
                          do
                          {
                            if ( v447 >= 4 )
                            {
                              v446 = __ROL4__(v446, 8);
                              *(_BYTE *)v37 = v446;
                            }
                            else
                            {
                              v40 = __ROL4__(v40, 8);
                              *(_BYTE *)v37 = v40;
                            }
                            ++v447;
                            v37 = (UINT *)((char *)v37 + 1);
                          }
                          while ( v447 < v38 );
                          v40 = v938;
                          v446 = v936;
                        }
                        LODWORD(v32) = v1357;
                        v448 = v38 - 4;
                        v33 = v952;
                        v35 = (UINT *)v953;
                        if ( v38 - 4 <= 0 )
                        {
                          v936 = 0;
                          v39 = 0;
                          if ( v448 < 0 )
                          {
                            v40 = v40 >> (-8 * v448) << (-8 * v448);
                            v938 = v40;
                          }
                        }
                        else
                        {
                          v39 = v446 >> (8 * (4 - v448)) << (8 * (4 - v448));
                          v936 = v39;
                        }
                      }
                      else
                      {
                        v940 = -1;
                        v942 = 0;
                        v39 = 0;
                        v936 = 0;
                        v40 = 0;
                        v938 = 0;
                      }
                      v954 = v33 >> 3;
                      if ( v33 >> 3 )
                      {
                        v41 = v29 + 158;
                        v42 = (unsigned __int8 *)(v29 + 126);
                        v1076 = (ULONGLONG)v42;
                        v43 = v36 + 2;
                        v44 = (char *)v37 + 7;
                        v1077 = v41;
                        while ( 1 )
                        {
                          v45 = v43[2] << 8;
                          v46 = v43[3];
                          v47 = (v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8)) ^ v40;
                          v964 = v43[1] | ((*v43 | ((*(v43 - 1) | (*(v43 - 2) << 8)) << 8)) << 8);
                          v48 = v43[5] | ((v43[4] | ((v46 | v45) << 8)) << 8);
                          v955 = (ULONGLONG)(v43 + 8);
                          v958 = v48;
                          v49 = (unsigned __int16)v32;
                          v50 = v47 ^ v48 ^ v39 ^ v32 ^ HIDWORD(v1357);
                          v51 = (v50 >> 8) ^ (WORD2(v1357) * (WORD1(v1357) ^ v50)) ^ v47;
                          v52 = (WORD1(v1357) * __ROR4__(HIDWORD(v1357) - v51, 11) - __ROR4__(v51, 12)) ^ v50;
                          v53 = ((unsigned __int16)v32 * __ROL4__(v52 ^ HIDWORD(v1357), 8) - __ROL4__(v52, 2)) ^ v51;
                          v54 = __ROR4__(v53, 9) ^ (HIWORD(v1357) * __ROR4__(v53 - v32, 4)) ^ v52;
                          v55 = (__ROR4__(v54, 4) + WORD2(v1357) * __ROR4__(v32 - v54, 10)) ^ v53;
                          v56 = (WORD1(v1357) * __ROL4__(HIWORD(v1357) ^ v55, 4) - __ROR4__(v55, 16)) ^ v54;
                          v57 = ((unsigned __int16)v32 * (WORD1(v1357) ^ v56) - __ROR4__(v56, 7)) ^ v55;
                          v58 = (v57 - v32 - HIWORD(v1357)) ^ v56;
                          v59 = __ROR4__(v58, 11) ^ (WORD2(v1357) * __ROR4__(v32 - v58, 9)) ^ v57;
                          v60 = (unsigned __int8 *)v41;
                          v61 = 30LL;
                          v62 = 16LL;
                          v63 = (WORD1(v1357) * (v59 - WORD2(v1357)) - (v59 >> 13)) ^ v58;
                          v936 = v63;
                          v64 = (v63 >> 15) ^ (v49 * __ROL4__(v63 - WORD2(v1357), 3)) ^ v59;
                          v938 = v64;
                          do
                          {
                            v65 = v60[1];
                            if ( v65 < 0x1Fu )
                            {
                              v68 = funcs_1404A9C7B[v65](
                                      v61 + 1,
                                      *(v42 - 2),
                                      *(v42 - 1),
                                      *v42,
                                      v42[1],
                                      (__int64)&v1357,
                                      v64);
                              v64 = v938;
                              v63 = v68 ^ v936;
                              v936 ^= v68;
                            }
                            if ( *v60 < 0x1Fu )
                            {
                              v67 = funcs_1404A9C7B[*v60](
                                      v61,
                                      *(v42 - 6),
                                      *(v42 - 5),
                                      *(v42 - 4),
                                      *(v42 - 3),
                                      (__int64)&v1357,
                                      v63);
                              v63 = v936;
                              v64 = v67 ^ v938;
                              v938 ^= v67;
                            }
                            v61 -= 2LL;
                            v42 -= 8;
                            v60 -= 2;
                            --v62;
                          }
                          while ( v62 );
                          v938 = v942 ^ v64;
                          v936 = v940 ^ v63;
                          *(v44 - 4) = v942 ^ v64;
                          v938 = __ROR4__(v938, 8);
                          *v44 = v936;
                          v936 = __ROR4__(v936, 8);
                          *(v44 - 5) = v938;
                          v938 = __ROR4__(v938, 8);
                          *(v44 - 1) = v936;
                          v936 = __ROR4__(v936, 8);
                          *(v44 - 6) = v938;
                          v938 = __ROR4__(v938, 8);
                          *(v44 - 2) = v936;
                          v936 = __ROR4__(v936, 8);
                          *(v44 - 7) = v938;
                          *(v44 - 3) = v936;
                          v44 += 8;
                          v40 = __ROR4__(v938, 8);
                          v39 = __ROR4__(v936, 8);
                          v66 = v954-- == 1;
                          v942 = v964;
                          v938 = v40;
                          v936 = v39;
                          v940 = v958;
                          if ( v66 )
                            break;
                          LODWORD(v32) = v1357;
                          v43 = (unsigned __int8 *)v955;
                          v41 = v1077;
                          v42 = (unsigned __int8 *)v1076;
                        }
                        v33 = v952;
                        v35 = (UINT *)v953;
                      }
                      v69 = 0LL;
                      if ( v33 )
                      {
                        if ( v33 < 0x20 )
                        {
                          v78 = v941;
                        }
                        else
                        {
                          v70 = 0LL;
                          v71 = 0LL;
                          do
                          {
                            v70 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v35 + v69)), v70);
                            v72 = _mm_loadu_si128((const __m128i *)((char *)v35 + v69 + 16));
                            v69 += 32LL;
                            v73 = _mm_xor_si128(v72, v71);
                            v71 = v73;
                          }
                          while ( v69 < (v33 & 0xFFFFFFFFFFFFFFE0uLL) );
                          v74 = _mm_xor_si128(v73, v70);
                          v75 = _mm_xor_si128(v74, _mm_srli_si128(v74, 8));
                          v76 = _mm_xor_si128(v75, _mm_srli_si128(v75, 4));
                          v77 = _mm_xor_si128(v76, _mm_srli_si128(v76, 2));
                          v78 = _mm_cvtsi128_si32(_mm_xor_si128(v77, _mm_srli_si128(v77, 1)));
                          v941 = v78;
                        }
                        if ( v69 < v33 )
                        {
                          do
                            LOBYTE(v78) = *((_BYTE *)v35 + v69++) ^ v78;
                          while ( v69 < v33 );
                          v941 = v78;
                        }
                      }
                      if ( (unsigned __int8)v941 == *(_QWORD *)(v33 + v1075) )
                      {
                        v79 = 0;
                        v7 = v35;
                        v9 = (unsigned int *)v929;
                        v931 = v35;
                        v1088 = 0LL;
                        v1218 = v33;
                        v969 = v33;
                        goto LABEL_73;
                      }
                      ExFreePoolWithTag(v35, 0x20534C53u);
                      v27 = v1088;
                      v9 = (unsigned int *)v929;
                    }
                    else
                    {
                      v27 = v1088;
                    }
                  }
                  v79 = -1073741823;
                  v921 = -1073741823;
                  if ( v27 )
                  {
                    ExFreePoolWithTag(v27, 0x20534C53u);
                    v79 = -1073741823;
                    v1088 = 0LL;
                    v7 = 0LL;
                  }
                  else
                  {
                    v7 = v931;
                  }
                  LODWORD(v33) = v969;
LABEL_73:
                  if ( v79 >= 0 )
                  {
                    if ( (unsigned int)v33 >= 4 )
                    {
                      v950 = *v7;
                      if ( v7 + 1 < v7 )
                      {
                        v8 = (const void **)v930;
                        CurrentHardwareID = -1073741675;
                        v5 = (char *)v930;
                        goto LABEL_810;
                      }
                      if ( (unsigned int)(v33 - 4) >= 4 )
                      {
                        v80 = v7[1];
                        v81 = v7 + 2;
                        if ( v7 + 2 < v7 + 1 )
                          goto LABEL_845;
                        if ( (int)v33 - 8 < (unsigned int)v80 )
                        {
                          v921 = -1073741762;
                          goto LABEL_841;
                        }
                        if ( (unsigned int)v80 >= 0xFFFFFFF8 )
                        {
LABEL_845:
                          v9 = (unsigned int *)v929;
                          CurrentHardwareID = -1073741675;
                          goto LABEL_844;
                        }
                        v82 = (unsigned __int64)v81 + v80;
                        if ( (char *)v7 + (unsigned int)v33 < (char *)v81 + v80 || (unsigned int)v33 - 8LL - v80 >= 8 )
                        {
                          v921 = -1073741762;
                          v87 = -1073741762;
LABEL_104:
                          if ( v87 >= 0 )
                          {
                            if ( ullAugend )
                            {
                              if ( (_DWORD)v934 )
                              {
                                v88 = *(_DWORD *)ullAugend;
                                v89 = (int *)(ullAugend + 4);
                                if ( ullAugend + 4 >= ullAugend )
                                {
                                  GrantedAccess[1] = *(_DWORD *)ullAugend;
                                  v921 = 0;
                                  if ( !v88 )
                                    v89 = 0LL;
                                  v1312[1] = (ULONGLONG)v89;
                                  if ( v88 == 4 )
                                  {
                                    v1154 = *v89;
                                    v90 = 0;
                                    goto LABEL_112;
                                  }
                                  v9 = (unsigned int *)v929;
                                  CurrentHardwareID = -1073741789;
                                  v8 = 0LL;
                                  v5 = 0LL;
LABEL_810:
                                  v6 = v5;
                                  goto LABEL_386;
                                }
                                v921 = -1073741675;
                                v90 = -1073741675;
                              }
                              else
                              {
                                v921 = -1073741811;
                                v90 = -1073741811;
                              }
                            }
                            else
                            {
                              v90 = -1073741811;
                              v921 = -1073741811;
                            }
LABEL_112:
                            if ( v90 >= 0 )
                            {
                              if ( !ullAugend )
                              {
                                v9 = (unsigned int *)v929;
                                v8 = 0LL;
                                v934 = 0LL;
                                v5 = 0LL;
                                v6 = 0LL;
                                CurrentHardwareID = -1073741811;
                                goto LABEL_388;
                              }
                              if ( (unsigned int)v934 <= 1 )
                              {
                                v9 = (unsigned int *)v929;
                                CurrentHardwareID = -1073741811;
                                goto LABEL_844;
                              }
                              v91 = (unsigned int *)ullAugend;
                              v92 = 0;
                              do
                              {
                                v93 = *v91;
                                v94 = v91 + 1;
                                if ( v91 + 1 < v91 )
                                  goto LABEL_845;
                                v91 = (unsigned int *)((char *)v94 + v93);
                                if ( (unsigned int *)((char *)v94 + v93) < v94 )
                                  goto LABEL_845;
                                ++v92;
                              }
                              while ( !v92 );
                              v95 = *v91;
                              v96 = v91 + 1;
                              if ( v91 + 1 >= v91 )
                              {
                                v1152 = *v91;
                                if ( !(_DWORD)v95 )
                                  v96 = 0LL;
                                v1244 = v96;
                                if ( (unsigned int)v934 > 2 )
                                {
                                  v97 = (unsigned int *)ullAugend;
                                  for ( i = 0; i < 2; ++i )
                                  {
                                    v99 = *v97;
                                    v100 = v97 + 1;
                                    if ( v97 + 1 < v97 )
                                      goto LABEL_845;
                                    v97 = (unsigned int *)((char *)v100 + v99);
                                    if ( (unsigned int *)((char *)v100 + v99) < v100 )
                                      goto LABEL_845;
                                  }
                                  v101 = *v97;
                                  v102 = v97 + 1;
                                  if ( v97 + 1 < v97 )
                                  {
                                    v8 = (const void **)v930;
                                    CurrentHardwareID = -1073741675;
                                    v9 = (unsigned int *)v929;
                                    v5 = (char *)v930;
                                    goto LABEL_689;
                                  }
                                  v1153 = *v97;
                                  if ( !(_DWORD)v101 )
                                    v102 = 0LL;
                                  v1245 = v102;
                                  v103 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
                                  v105 = v103;
                                  if ( !v103 )
                                  {
                                    v8 = (const void **)v930;
                                    v108 = -1073741801;
                                    Acl = -1073741801;
                                    goto LABEL_141;
                                  }
                                  memset(v103, 0, 0x30uLL);
                                  *v105 = 0;
                                  *((_QWORD *)v105 + 1) = 0LL;
                                  Acl = 0;
                                  if ( v96 )
                                  {
                                    v105[4] = v95;
                                    if ( !(_DWORD)v95 )
                                    {
                                      Acl = -1073741762;
LABEL_859:
                                      v449 = (void *)*((_QWORD *)v105 + 1);
                                      if ( v449 )
                                      {
                                        ExFreePoolWithTag(v449, 0x20534C53u);
                                        *((_QWORD *)v105 + 1) = 0LL;
                                      }
                                      v450 = (void *)*((_QWORD *)v105 + 3);
                                      if ( v450 )
                                      {
                                        ExFreePoolWithTag(v450, 0x20534C53u);
                                        *((_QWORD *)v105 + 3) = 0LL;
                                      }
                                      v451 = (void *)*((_QWORD *)v105 + 5);
                                      if ( v451 )
                                      {
                                        ExFreePoolWithTag(v451, 0x20534C53u);
                                        *((_QWORD *)v105 + 5) = 0LL;
                                      }
                                      ExFreePoolWithTag(v105, 0x20534C53u);
                                      v8 = (const void **)v930;
                                      goto LABEL_140;
                                    }
                                    v106 = ExAllocatePoolWithTag(PagedPool, v95, 0x20534C53u);
                                    if ( !v106 )
                                    {
LABEL_858:
                                      Acl = -1073741801;
                                      goto LABEL_859;
                                    }
                                    *((_QWORD *)v105 + 3) = v106;
                                    Acl = 0;
                                    memmove(v106, v96, v95);
                                  }
                                  else
                                  {
                                    v105[4] = 0;
                                    *((_QWORD *)v105 + 3) = 0LL;
                                  }
                                  if ( !v102 )
                                  {
                                    v105[8] = 0;
                                    *((_QWORD *)v105 + 5) = 0LL;
                                    goto LABEL_139;
                                  }
                                  v105[8] = v101;
                                  if ( !(_DWORD)v101 )
                                  {
                                    Acl = -1073741762;
                                    goto LABEL_859;
                                  }
                                  v107 = ExAllocatePoolWithTag(PagedPool, v101, 0x20534C53u);
                                  if ( v107 )
                                  {
                                    *((_QWORD *)v105 + 5) = v107;
                                    Acl = 0;
                                    memmove(v107, v102, v101);
LABEL_139:
                                    v8 = (const void **)v105;
                                    v930 = v105;
LABEL_140:
                                    v108 = Acl;
LABEL_141:
                                    if ( v108 < 0 )
                                    {
LABEL_1087:
                                      CurrentHardwareID = Acl;
                                      goto LABEL_687;
                                    }
                                    if ( !v1154 )
                                    {
                                      SourceString = 0LL;
                                      v963 = 0;
                                      v109 = 0;
                                      v956 = 0;
                                      P = 0LL;
                                      v1090[0].QuadPart = 0LL;
                                      if ( !v8 )
                                      {
LABEL_1802:
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = -1073741811;
                                        v5 = 0LL;
                                        v6 = 0LL;
                                        goto LABEL_690;
                                      }
                                      if ( ullAugend )
                                      {
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          v111 = -1073741811;
                                        }
                                        else
                                        {
                                          v110 = ullAugend;
                                          pullResult = ullAugend;
                                          do
                                          {
                                            v111 = RtlULongLongAdd(v110, 4uLL, &pullResult);
                                            if ( v111 < 0 )
                                              goto LABEL_2048;
                                            v111 = RtlULongLongAdd(pullResult, v112, &pullResult);
                                            if ( v111 < 0 )
                                              goto LABEL_2048;
                                            v110 = pullResult;
                                          }
                                          while ( (unsigned int)(v113 + 1) < 3 );
                                          v111 = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
                                          if ( v111 < 0 )
                                          {
LABEL_2048:
                                            v114 = v1139;
                                            v115 = v1298;
                                            goto LABEL_154;
                                          }
                                          v1139 = v114;
                                          if ( v114 )
                                            v115 = (_QWORD *)pullResult;
                                          else
                                            v115 = 0LL;
                                          v1298 = v115;
LABEL_154:
                                          if ( v111 < 0 )
                                            goto LABEL_321;
                                          if ( v114 != 8 )
                                          {
                                            v111 = -1073741789;
                                            goto LABEL_321;
                                          }
                                          v1304 = *v115;
                                        }
                                      }
                                      else
                                      {
                                        v111 = -1073741811;
                                      }
                                      if ( v111 >= 0 )
                                      {
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 <= 4 )
                                          {
                                            v111 = -1073741811;
                                          }
                                          else
                                          {
                                            v116 = ullAugend;
                                            v1006 = ullAugend;
                                            do
                                            {
                                              v111 = RtlULongLongAdd(v116, 4uLL, &v1006);
                                              if ( v111 < 0 )
                                                goto LABEL_2053;
                                              v111 = RtlULongLongAdd(v1006, v117, &v1006);
                                              if ( v111 < 0 )
                                                goto LABEL_2053;
                                              v116 = v1006;
                                            }
                                            while ( (unsigned int)(v118 + 1) < 4 );
                                            v111 = RtlULongLongAdd(v1006, 4uLL, &v1006);
                                            if ( v111 < 0 )
                                            {
LABEL_2053:
                                              v119 = v1063;
                                              v120 = v1220;
                                              goto LABEL_168;
                                            }
                                            v1063 = v119;
                                            if ( v119 )
                                              v120 = (const wchar_t *)v1006;
                                            else
                                              v120 = 0LL;
                                            v1220 = (wchar_t *)v120;
LABEL_168:
                                            if ( v111 < 0 )
                                              goto LABEL_316;
                                            if ( !v119 )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_179;
                                            }
                                            if ( (v119 & 1) != 0 )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_179;
                                            }
                                            if ( v120[((unsigned __int64)v119 >> 1) - 1] )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_179;
                                            }
                                            if ( StringCbLengthW(v120, v119, &pcbLength) < 0 )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_179;
                                            }
                                            if ( pcbLength + 2 != v1063 )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_179;
                                            }
                                            Src = v1220;
                                            NumberOfBytes_4 = pcbLength >> 1;
                                          }
                                        }
                                        else
                                        {
                                          v111 = -1073741811;
                                        }
                                        if ( v111 < 0 )
                                          goto LABEL_316;
                                        if ( 2 * NumberOfBytes_4 == -2 )
                                        {
                                          v111 = -1073741762;
                                        }
                                        else
                                        {
                                          v121 = 2 * NumberOfBytes_4 + 2;
                                          v122 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v121, 0x20534C53u);
                                          v123 = v122;
                                          if ( v122 )
                                          {
                                            v111 = 0;
                                            memmove(v122, Src, v121);
                                            v1055 = NumberOfBytes_4;
                                            SourceString = v123;
                                          }
                                          else
                                          {
                                            v111 = -1073741801;
                                          }
                                        }
LABEL_179:
                                        if ( v111 < 0 )
                                          goto LABEL_316;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 <= 5 )
                                          {
                                            v111 = -1073741811;
                                          }
                                          else
                                          {
                                            v124 = ullAugend;
                                            v953 = ullAugend;
                                            do
                                            {
                                              v111 = RtlULongLongAdd(v124, 4uLL, &v953);
                                              if ( v111 < 0 )
                                                goto LABEL_2064;
                                              v111 = RtlULongLongAdd(v953, v125, &v953);
                                              if ( v111 < 0 )
                                                goto LABEL_2064;
                                              v124 = v953;
                                            }
                                            while ( (unsigned int)(v126 + 1) < 5 );
                                            v111 = RtlULongLongAdd(v953, 4uLL, &v953);
                                            if ( v111 < 0 )
                                            {
LABEL_2064:
                                              v127 = v1140;
                                              v128 = v1301;
                                              goto LABEL_190;
                                            }
                                            v1140 = v127;
                                            if ( v127 )
                                              v128 = (_DWORD *)v953;
                                            else
                                              v128 = 0LL;
                                            v1301 = v128;
LABEL_190:
                                            if ( v111 < 0 )
                                              goto LABEL_316;
                                            if ( v127 != 4 )
                                            {
                                              v111 = -1073741789;
                                              goto LABEL_316;
                                            }
                                            v1146 = *v128;
                                          }
                                        }
                                        else
                                        {
                                          v111 = -1073741811;
                                        }
                                        if ( v111 < 0 )
                                          goto LABEL_316;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 <= 6 )
                                          {
                                            v111 = -1073741811;
                                          }
                                          else
                                          {
                                            v129 = ullAugend;
                                            v952 = ullAugend;
                                            do
                                            {
                                              v111 = RtlULongLongAdd(v129, 4uLL, &v952);
                                              if ( v111 < 0 )
                                                goto LABEL_2069;
                                              v111 = RtlULongLongAdd(v952, v130, &v952);
                                              if ( v111 < 0 )
                                                goto LABEL_2069;
                                              v129 = v952;
                                            }
                                            while ( (unsigned int)(v131 + 1) < 6 );
                                            v111 = RtlULongLongAdd(v952, 4uLL, &v952);
                                            if ( v111 < 0 )
                                            {
LABEL_2069:
                                              v132 = v1141;
                                              v133 = v1302;
                                              goto LABEL_204;
                                            }
                                            v1141 = v132;
                                            if ( v132 )
                                              v133 = (unsigned int *)v952;
                                            else
                                              v133 = 0LL;
                                            v1302 = v133;
LABEL_204:
                                            if ( v111 < 0 )
                                              goto LABEL_316;
                                            if ( v132 != 4 )
                                            {
                                              v111 = -1073741789;
                                              goto LABEL_316;
                                            }
                                            NumberOfBytes = *v133;
                                          }
                                        }
                                        else
                                        {
                                          v111 = -1073741811;
                                        }
                                        if ( v111 < 0 )
                                          goto LABEL_316;
                                        RtlInitUnicodeString(&DestinationString, SourceString);
                                        v134 = NumberOfBytes;
                                        if ( NumberOfBytes )
                                        {
                                          v135 = 1;
                                          if ( NumberOfBytes <= 0x100000 )
                                            goto LABEL_210;
                                        }
                                        else
                                        {
                                          v135 = 0;
                                        }
                                        v334 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, unsigned int *))qword_1407AC458)(
                                                 &DestinationString,
                                                 &v963,
                                                 0LL,
                                                 0LL,
                                                 &v956);
                                        v138 = v334;
                                        if ( v334 == -1073741789 )
                                        {
                                          v335 = v956;
                                          if ( NumberOfBytes < v956 )
                                          {
                                            if ( !NumberOfBytes )
                                              v138 = 0;
                                            goto LABEL_215;
                                          }
                                        }
                                        else
                                        {
                                          if ( v334 < 0 )
                                          {
                                            v111 = v334;
                                            goto LABEL_315;
                                          }
                                          v335 = v956;
                                          if ( v956 )
                                          {
                                            v111 = -2147418113;
                                            goto LABEL_315;
                                          }
                                          v135 = 0;
                                        }
                                        v134 = v335;
                                        v138 = 0;
                                        if ( !v135 )
                                          goto LABEL_215;
LABEL_210:
                                        P = ExAllocatePoolWithTag(PagedPool, v134, 0x20534C53u);
                                        v136 = P;
                                        if ( !P )
                                        {
                                          v8 = (const void **)v930;
                                          v111 = -1073741801;
                                          goto LABEL_317;
                                        }
                                        v137 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, PVOID, _QWORD, unsigned int *))qword_1407AC458)(
                                                 &DestinationString,
                                                 &v963,
                                                 P,
                                                 v134,
                                                 &v956);
                                        v138 = v137;
                                        if ( v137 != -1073741789 )
                                        {
                                          v111 = v137;
                                          if ( v137 < 0 )
                                            goto LABEL_315;
                                        }
                                        if ( v134 >= v956 )
                                          v134 = v956;
LABEL_215:
                                        v139 = 8;
                                        v983 = 8;
                                        v1013 = v134 + 4;
                                        if ( v134 >= 0xFFFFFFFC )
                                        {
                                          v111 = -1073741675;
                                        }
                                        else
                                        {
                                          v139 = v134 + 4;
                                          v983 = v134 + 4;
                                          v111 = 0;
                                        }
                                        if ( v111 < 0 )
                                        {
                                          v142 = v1055;
                                          v964 = v1055;
                                        }
                                        else
                                        {
                                          v140 = v139 + 28;
                                          if ( v140 < 0x1C )
                                            goto LABEL_2165;
                                          v983 = 8;
                                          v141 = v140 + 8;
                                          if ( v140 + 8 < v140 )
                                            goto LABEL_2165;
                                          v983 = 8;
                                          v142 = v140 + 16;
                                          v964 = v141 + 8;
                                          if ( v141 + 8 < v141 )
                                            goto LABEL_2165;
                                          v111 = 0;
                                        }
                                        if ( v111 < 0 )
                                          goto LABEL_315;
                                        v143 = v142 + 8;
                                        if ( v142 < 0xFFFFFFF8 )
                                        {
                                          v1149 = v142 + 8;
                                          v144 = (v142 + 15) & 0xFFFFFFF8;
                                          if ( v144 < v143 )
                                          {
                                            v145 = v1055;
                                            v111 = -1073741675;
                                          }
                                          else
                                          {
                                            v145 = v144 + 8;
                                            if ( v144 + 8 < v144 )
                                            {
                                              v8 = (const void **)v930;
                                              v1142 = -1;
                                              goto LABEL_2081;
                                            }
                                            v1142 = v144 + 8;
                                            v111 = 0;
                                          }
                                          v8 = (const void **)v930;
                                          if ( v111 < 0 )
                                            goto LABEL_316;
                                          v146 = *((_DWORD *)v930 + 8);
                                          v147 = v145 + 4;
                                          v148 = *((_DWORD *)v930 + 4);
                                          if ( v147 >= 4 )
                                          {
                                            v149 = v147 + 4;
                                            if ( v147 + 4 >= v147 )
                                            {
                                              v150 = v149 + v148;
                                              if ( v149 + v148 >= v149 )
                                              {
                                                v151 = v150 + 4;
                                                if ( v150 + 4 >= v150 && v151 + v146 >= v151 )
                                                {
                                                  v111 = 0;
                                                  v1309 = v151 + v146;
                                                  v1012 = v151 + v146;
                                                  goto LABEL_234;
                                                }
                                              }
                                            }
                                          }
LABEL_2081:
                                          v111 = -1073741675;
LABEL_234:
                                          if ( v111 >= 0 )
                                          {
                                            if ( v951 >= v1012 && v138 >= 0 )
                                            {
                                              v152 = 0;
                                              v153 = 0;
                                              if ( DestinationString.Length == stru_1407AC238.Length
                                                && !memcmp(
                                                      DestinationString.Buffer,
                                                      stru_1407AC238.Buffer,
                                                      stru_1407AC238.Length) )
                                              {
                                                v153 = dword_1407AC0EC;
                                                v152 = 1;
                                              }
                                              v1310 = v152;
                                              v1147 = v153;
                                              v951 = v153 || v152;
                                              v154 = MEMORY[0xFFFFF78000000320];
                                              v155 = v154 * KeQueryTimeIncrement();
                                              v156 = v951;
                                              v157 = v155 / 10000;
                                              if ( (unsigned __int64)(v155 / 10000 - g_qwSystemInitTime) >= 0xA4CBFB
                                                || v951 )
                                              {
                                                v880 = KeWaitForSingleObject(&stru_1403423C0, UserRequest, 1, 0, v1090);
                                                if ( v880 >= 0 && v880 != 192 && v880 != 258 )
                                                {
                                                  v958 = 1;
                                                  RtlInitUnicodeString(&v1351, L"Security-SPP-GenuineLocalStatus");
                                                  v881 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, char *))qword_1407AC458)(
                                                           &v1351,
                                                           &v1143,
                                                           &v1144,
                                                           4LL,
                                                           v1240);
                                                  if ( v881 == -1073741772 )
                                                  {
                                                    v882 = 0;
                                                  }
                                                  else if ( v881 < 0 || v1143 == 4 && v1144 )
                                                  {
                                                    v882 = v958;
                                                  }
                                                  else
                                                  {
                                                    v882 = 0;
                                                  }
                                                  v1058 = v882;
                                                  if ( g_ulOldGenuineState != v882 )
                                                  {
                                                    if ( v882 )
                                                    {
                                                      KeResetEvent(&stru_1403423A0);
                                                    }
                                                    else
                                                    {
                                                      v883 = MEMORY[0xFFFFF78000000320];
                                                      v884 = v883 * KeQueryTimeIncrement();
                                                      v156 = v951;
                                                      qword_1407AC148 = v884 / 10000;
                                                    }
                                                    v882 = v1058;
                                                  }
                                                  v885 = v157 - qword_1407AC148;
                                                  g_ulOldGenuineState = v882;
                                                  if ( v882 || v885 < 0xADF4FC && !v156 || !dword_1407AC1D4 )
                                                    goto LABEL_2123;
                                                  KeSetEvent(&stru_1403423A0, 1, 0);
                                                  v886 = dword_1407AC0D0;
                                                  if ( !dword_1407AC0D0 )
                                                  {
                                                    v1059 = 4;
                                                    v1145 = 0;
                                                    KeyHandle = 0LL;
                                                    v887 = ZwOpenKey(&KeyHandle, 1u, &stru_1407AC6D8);
                                                    if ( v887 < 0 )
                                                    {
                                                      v887 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_1407AC458)(
                                                               aBd,
                                                               &v1059,
                                                               &v984,
                                                               4LL,
                                                               &v1145);
                                                      v886 = v984;
                                                    }
                                                    else
                                                    {
                                                      v886 = 3;
                                                      v984 = 3;
                                                    }
                                                    if ( v887 < 0 || v1059 != 4 || (unsigned int)(v886 - 1) > 2 )
                                                    {
                                                      v886 = 1;
                                                      v984 = 1;
                                                    }
                                                    if ( KeyHandle )
                                                    {
                                                      ZwClose(KeyHandle);
                                                      KeyHandle = 0LL;
                                                    }
                                                  }
                                                  v1060 = 0;
                                                  v1062 = 0;
                                                  v1361 = 0LL;
                                                  v1362 = 0;
                                                  if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_1407AC458)(
                                                              aLn,
                                                              &v1060,
                                                              &v1361,
                                                              12LL,
                                                              &v1062) >= 0
                                                    && v1060 == 3
                                                    && v1062 == 12 )
                                                  {
                                                    v888 = (unsigned int *)&v1361;
                                                    v889 = 0;
                                                    while ( 1 )
                                                    {
                                                      v890 = *v888;
                                                      if ( (*v888 & 0xF) == v886 )
                                                        break;
                                                      ++v889;
                                                      ++v888;
                                                      if ( v889 >= 3 )
                                                        goto LABEL_2120;
                                                    }
                                                  }
                                                  else
                                                  {
LABEL_2120:
                                                    v890 = dword_1407AC060 & 0xFFFF0000 | 0x3211;
                                                  }
                                                  dword_1407AC060 = v890;
                                                  if ( v1146 || v1147 )
                                                    v109 = v890;
                                                  else
LABEL_2123:
                                                    KeReleaseMutex(&stru_1403423C0, 0);
                                                }
                                              }
                                            }
                                            uAddend[1] = v964;
                                            if ( !v964 )
                                            {
                                              v111 = -1073741762;
                                              goto LABEL_315;
                                            }
                                            v158 = ExAllocatePoolWithTag(PagedPool, v964, 0x20534C53u);
                                            if ( !v158 )
                                            {
                                              v111 = -1073741801;
                                              goto LABEL_315;
                                            }
                                            v928 = (ULONGLONG)v158;
                                            uAddend[0] = 0;
                                            v1148 = v138 | 0x10000000;
                                            v111 = RtlULongLongAdd((ULONGLONG)v158, 4uLL, &v1352);
                                            if ( v111 >= 0 )
                                            {
                                              if ( v161 + 2 > (_DWORD *)((char *)v161 + uAddend[1]) )
                                              {
                                                v111 = -1073741789;
                                                goto LABEL_315;
                                              }
                                              v162 = (_DWORD *)v1352;
                                              *v161 = v159;
                                              *v162 = v1148;
                                              v160 = ++uAddend[0];
                                            }
                                            if ( v111 < 0 )
                                              goto LABEL_315;
                                            v1305 = v1304;
                                            if ( v928 )
                                            {
                                              v163 = (_DWORD *)v928;
                                              v1075 = v928;
                                              if ( v160 )
                                              {
                                                v164 = v1064;
                                                do
                                                {
                                                  if ( *v163 >= 0xFFFFFFFC )
                                                  {
                                                    v111 = -1073741675;
                                                  }
                                                  else
                                                  {
                                                    v164 = *v163 + 4;
                                                    v1064 = v164;
                                                    v111 = 0;
                                                  }
                                                  if ( v111 < 0 )
                                                    goto LABEL_315;
                                                  v111 = RtlULongLongAdd((ULONGLONG)v163, v164, &v1075);
                                                  if ( v111 < 0 )
                                                    goto LABEL_260;
                                                  v163 = (_DWORD *)v1075;
                                                }
                                                while ( v165 + 1 < v160 );
                                              }
                                              v111 = RtlULongLongAdd((ULONGLONG)v163, 4uLL, v1312);
                                              if ( v111 >= 0 )
                                              {
                                                if ( (unsigned __int64)(v166 + 3) > v928 + uAddend[1] )
                                                {
                                                  v111 = -1073741789;
                                                  goto LABEL_315;
                                                }
                                                v167 = (_QWORD *)v1312[0];
                                                *v166 = 8;
                                                *v167 = v1305;
                                                v160 = ++uAddend[0];
                                              }
                                            }
                                            else
                                            {
                                              v1064 = 12;
                                              v891 = uAddend[1];
                                              v892 = -1;
                                              v893 = uAddend[1] + 12;
                                              if ( uAddend[1] + 12 >= uAddend[1] )
                                                v892 = uAddend[1] + 12;
                                              v111 = v893 < uAddend[1] ? 0xC0000095 : 0;
                                              uAddend[1] = v892;
                                              if ( v893 >= v891 )
                                              {
                                                uAddend[0] = ++v160;
                                                v1067 = v963;
                                                goto LABEL_2133;
                                              }
                                            }
LABEL_260:
                                            if ( v111 < 0 )
                                              goto LABEL_315;
                                            v1067 = v963;
                                            if ( v928 )
                                            {
                                              v168 = (_DWORD *)v928;
                                              v1076 = v928;
                                              if ( v160 )
                                              {
                                                v169 = v1066;
                                                do
                                                {
                                                  if ( *v168 >= 0xFFFFFFFC )
                                                  {
                                                    v111 = -1073741675;
                                                  }
                                                  else
                                                  {
                                                    v169 = *v168 + 4;
                                                    v1066 = v169;
                                                    v111 = 0;
                                                  }
                                                  if ( v111 < 0 )
                                                    goto LABEL_315;
                                                  v111 = RtlULongLongAdd((ULONGLONG)v168, v169, &v1076);
                                                  if ( v111 < 0 )
                                                    goto LABEL_272;
                                                  v168 = (_DWORD *)v1076;
                                                }
                                                while ( v170 + 1 < v160 );
                                              }
                                              v111 = RtlULongLongAdd((ULONGLONG)v168, 4uLL, v1313);
                                              if ( v111 >= 0 )
                                              {
                                                if ( (unsigned __int64)(v172 + 2) > v928 + uAddend[1] )
                                                {
                                                  v111 = -1073741789;
                                                  goto LABEL_315;
                                                }
                                                v173 = (_DWORD *)v1313[0];
                                                *v172 = v171;
                                                *v173 = v1067;
                                                v160 = ++uAddend[0];
                                              }
                                              goto LABEL_272;
                                            }
LABEL_2133:
                                            v1066 = 8;
                                            v894 = uAddend[1];
                                            v895 = -1;
                                            v896 = uAddend[1] + 8;
                                            if ( uAddend[1] + 8 >= uAddend[1] )
                                              v895 = uAddend[1] + 8;
                                            v111 = v896 < uAddend[1] ? 0xC0000095 : 0;
                                            uAddend[1] = v895;
                                            if ( v896 >= v894 )
                                            {
                                              uAddend[0] = ++v160;
                                              goto LABEL_273;
                                            }
LABEL_272:
                                            if ( v111 < 0 )
                                              goto LABEL_315;
LABEL_273:
                                            v136 = P;
                                            if ( P )
                                            {
                                              if ( v134 )
                                                goto LABEL_275;
                                            }
                                            else if ( !v134 )
                                            {
LABEL_275:
                                              if ( v928 )
                                              {
                                                v174 = (_DWORD *)v928;
                                                v1077 = v928;
                                                if ( v160 )
                                                {
                                                  v175 = v985;
                                                  while ( 1 )
                                                  {
                                                    if ( *v174 >= 0xFFFFFFFC )
                                                    {
                                                      v111 = -1073741675;
                                                    }
                                                    else
                                                    {
                                                      v175 = *v174 + 4;
                                                      v985 = v175;
                                                      v111 = 0;
                                                    }
                                                    if ( v111 < 0 )
                                                      goto LABEL_315;
                                                    v111 = RtlULongLongAdd((ULONGLONG)v174, v175, &v1077);
                                                    if ( v111 < 0 )
                                                      goto LABEL_289;
                                                    v174 = (_DWORD *)v1077;
                                                    if ( v176 + 1 >= v160 )
                                                    {
                                                      v136 = P;
                                                      break;
                                                    }
                                                  }
                                                }
                                                v111 = RtlULongLongAdd((ULONGLONG)v174, 4uLL, v1314);
                                                if ( v111 >= 0 )
                                                {
                                                  if ( (unsigned __int64)v177 + v134 + 4 > v928 + uAddend[1] )
                                                  {
                                                    v111 = -1073741789;
                                                    v8 = (const void **)v930;
                                                    goto LABEL_317;
                                                  }
                                                  *v177 = v134;
                                                  if ( v136 )
                                                    memmove((void *)v1314[0], v136, v134);
                                                  v160 = ++uAddend[0];
                                                }
                                              }
                                              else
                                              {
                                                v897 = v985;
                                                if ( v1013 >= 4 )
                                                  v897 = v1013;
                                                v985 = v897;
                                                v111 = v1013 < 4 ? 0xC0000095 : 0;
                                                if ( v1013 >= 4 )
                                                {
                                                  v898 = uAddend[1];
                                                  v899 = -1;
                                                  v900 = uAddend[1] + v897;
                                                  if ( v900 >= uAddend[1] )
                                                    v899 = v900;
                                                  v111 = v900 < uAddend[1] ? 0xC0000095 : 0;
                                                  uAddend[1] = v899;
                                                  if ( v900 >= v898 )
                                                  {
                                                    uAddend[0] = ++v160;
                                                    v1047 = v956;
                                                    goto LABEL_2149;
                                                  }
                                                }
                                              }
LABEL_289:
                                              if ( v111 < 0 )
                                                goto LABEL_315;
                                              v1047 = v956;
                                              if ( v928 )
                                              {
                                                v178 = (_DWORD *)v928;
                                                v955 = v928;
                                                if ( v160 )
                                                {
                                                  v179 = v1082;
                                                  do
                                                  {
                                                    if ( *v178 >= 0xFFFFFFFC )
                                                    {
                                                      v111 = -1073741675;
                                                    }
                                                    else
                                                    {
                                                      v179 = *v178 + 4;
                                                      v1082 = v179;
                                                      v111 = 0;
                                                    }
                                                    if ( v111 < 0 )
                                                      goto LABEL_315;
                                                    v111 = RtlULongLongAdd((ULONGLONG)v178, v179, &v955);
                                                    if ( v111 < 0 )
                                                      goto LABEL_301;
                                                    v178 = (_DWORD *)v955;
                                                  }
                                                  while ( v180 + 1 < v160 );
                                                }
                                                v111 = RtlULongLongAdd((ULONGLONG)v178, 4uLL, v1315);
                                                if ( v111 >= 0 )
                                                {
                                                  if ( (unsigned __int64)(v182 + 2) > v928 + uAddend[1] )
                                                  {
                                                    v111 = -1073741789;
                                                    goto LABEL_315;
                                                  }
                                                  v183 = (unsigned int *)v1315[0];
                                                  *v182 = v181;
                                                  *v183 = v1047;
                                                  v160 = ++uAddend[0];
                                                }
                                                goto LABEL_301;
                                              }
LABEL_2149:
                                              v1082 = 8;
                                              v901 = uAddend[1];
                                              v902 = -1;
                                              v903 = uAddend[1] + 8;
                                              if ( uAddend[1] + 8 >= uAddend[1] )
                                                v902 = uAddend[1] + 8;
                                              v111 = v903 < uAddend[1] ? 0xC0000095 : 0;
                                              uAddend[1] = v902;
                                              if ( v903 >= v901 )
                                              {
                                                ++v160;
                                                v1049 = v109;
                                                uAddend[0] = v160;
                                                goto LABEL_2153;
                                              }
LABEL_301:
                                              if ( v111 < 0 )
                                                goto LABEL_315;
                                              v1049 = v109;
                                              if ( v928 )
                                              {
                                                v184 = (_DWORD *)v928;
                                                v954 = v928;
                                                if ( v160 )
                                                {
                                                  v185 = v1048;
                                                  do
                                                  {
                                                    if ( *v184 >= 0xFFFFFFFC )
                                                    {
                                                      v111 = -1073741675;
                                                    }
                                                    else
                                                    {
                                                      v185 = *v184 + 4;
                                                      v1048 = v185;
                                                      v111 = 0;
                                                    }
                                                    if ( v111 < 0 )
                                                      goto LABEL_315;
                                                    v111 = RtlULongLongAdd((ULONGLONG)v184, v185, &v954);
                                                    if ( v111 < 0 )
                                                      goto LABEL_313;
                                                    v184 = (_DWORD *)v954;
                                                  }
                                                  while ( v187 + 1 < v186 );
                                                }
                                                v111 = RtlULongLongAdd((ULONGLONG)v184, 4uLL, v1321);
                                                if ( v111 >= 0 )
                                                {
                                                  if ( (unsigned __int64)(v189 + 2) > v928 + uAddend[1] )
                                                  {
                                                    v111 = -1073741789;
                                                    goto LABEL_315;
                                                  }
                                                  v190 = (unsigned int *)v1321[0];
                                                  *v189 = v188;
                                                  *v190 = v1049;
                                                  ++uAddend[0];
                                                }
LABEL_313:
                                                if ( v111 >= 0 )
LABEL_314:
                                                  v111 = 0;
LABEL_315:
                                                v8 = (const void **)v930;
                                                goto LABEL_316;
                                              }
LABEL_2153:
                                              v1048 = 8;
                                              v904 = uAddend[1];
                                              v905 = -1;
                                              v906 = uAddend[1] + 8;
                                              if ( uAddend[1] + 8 >= uAddend[1] )
                                                v905 = uAddend[1] + 8;
                                              v111 = v906 < uAddend[1] ? 0xC0000095 : 0;
                                              uAddend[1] = v905;
                                              if ( v906 >= v904 )
                                              {
                                                uAddend[0] = v160 + 1;
                                                goto LABEL_314;
                                              }
                                              goto LABEL_313;
                                            }
                                            v111 = -1073741811;
                                            goto LABEL_289;
                                          }
LABEL_316:
                                          v136 = P;
LABEL_317:
                                          if ( SourceString )
                                          {
                                            ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
                                            SourceString = 0LL;
                                          }
                                          if ( v136 )
                                            ExFreePoolWithTag(v136, 0x20534C53u);
                                          goto LABEL_321;
                                        }
                                        v1149 = -1;
LABEL_2165:
                                        v111 = -1073741675;
                                        goto LABEL_315;
                                      }
LABEL_321:
                                      CurrentHardwareID = v111;
                                      v192 = v111 < 0;
                                      goto LABEL_322;
                                    }
                                    switch ( v1154 )
                                    {
                                      case 1:
                                        v337 = (PSID *)qword_1407AC468;
                                        v338 = RtlLengthSid(*(PSID *)(qword_1407AC468 + 384));
                                        v339 = RtlLengthSid(v337[34]) + v338;
                                        v340 = RtlLengthSid(v337[49]) + 32 + v339;
                                        v341 = (ACL *)ExAllocatePoolWithTag(PagedPool, v340, 0x20534C53u);
                                        v342 = v341;
                                        if ( v341 )
                                        {
                                          Acl = RtlCreateAcl(v341, v340, 2u);
                                          if ( Acl >= 0 )
                                          {
                                            Acl = RtlpAddKnownAce((int)v342, 2, 0, 32, v337[48], 0);
                                            if ( Acl >= 0 )
                                            {
                                              Acl = RtlpAddKnownAce((int)v342, 2, 0, 32, v337[49], 0);
                                              if ( Acl >= 0 )
                                              {
                                                Acl = RtlpAddKnownAce((int)v342, 2, 0, 32, v337[34], 0);
                                                if ( Acl >= 0 )
                                                {
                                                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                                                  if ( Acl >= 0 )
                                                  {
                                                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v342, 0);
                                                    if ( Acl >= 0 )
                                                    {
                                                      SeCaptureSubjectContext(&SubjectContext);
                                                      v343 = SeAccessCheck(
                                                               SecurityDescriptor,
                                                               &SubjectContext,
                                                               0,
                                                               0x20u,
                                                               0,
                                                               0LL,
                                                               (PGENERIC_MAPPING)&IopFileMapping,
                                                               1,
                                                               GrantedAccess,
                                                               &AccessStatus);
                                                      SeReleaseSubjectContext(&SubjectContext);
                                                      if ( !v343 )
                                                        Acl = AccessStatus;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          ExFreePoolWithTag(v342, 0x20534C53u);
                                          if ( Acl < 0 )
                                            goto LABEL_597;
                                          ReturnLength = 0;
                                          Acl = 0;
                                          SystemInformation = 8LL;
                                          ZwQuerySystemInformation(
                                            SystemCodeIntegrityInformation,
                                            &SystemInformation,
                                            8u,
                                            &ReturnLength);
                                          if ( *((_DWORD *)v929 + 4) != 160 )
                                            goto LABEL_878;
                                          if ( !memcmp(qword_14074D9A0, *((const void **)v929 + 3), 0xA0uLL)
                                            && *((_DWORD *)v8 + 4) == 160
                                            && !memcmp(qword_14074DFE0, v8[3], 0xA0uLL)
                                            && *((_DWORD *)v929 + 8) == 8
                                            && **((_QWORD **)v929 + 5) == 0xA564595855B292C4uLL
                                            && *((_DWORD *)v8 + 8) == 8
                                            && *(_QWORD *)v8[5] == 0x1B732BD76B4D09FCLL )
                                          {
                                            goto LABEL_595;
                                          }
                                          if ( !memcmp(qword_14074DD60, *((const void **)v929 + 3), 0xA0uLL)
                                            && *((_DWORD *)v8 + 4) == 160
                                            && !memcmp(qword_14074D7C0, v8[3], 0xA0uLL)
                                            && *((_DWORD *)v929 + 8) == 8
                                            && **((_QWORD **)v929 + 5) == 0x93278D843BBDC445uLL
                                            && *((_DWORD *)v8 + 8) == 8
                                            && *(_QWORD *)v8[5] == 0x6223E824AB21D998LL )
                                          {
                                            v344 = 0;
                                          }
                                          else
                                          {
LABEL_878:
                                            v344 = -2147024891;
                                            Acl = -2147024891;
                                          }
                                          if ( v344 < 0 )
                                          {
LABEL_597:
                                            v345 = Acl;
                                            goto LABEL_598;
                                          }
LABEL_595:
                                          Acl = 0;
                                          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                                            Acl = -2147024891;
                                          goto LABEL_597;
                                        }
                                        v345 = -1073741801;
                                        Acl = -1073741801;
LABEL_598:
                                        if ( v345 < 0 )
                                          goto LABEL_1087;
                                        v1241 = 8;
                                        v1239 = 16;
                                        v1238 = 24;
                                        v346 = *((_DWORD *)v8 + 8);
                                        if ( *((_DWORD *)v8 + 4) >= 0xFFFFFFE0 )
                                          goto LABEL_949;
                                        v347 = *((_DWORD *)v8 + 4) + 36;
                                        if ( v347 < *((_DWORD *)v8 + 4) + 32 || v347 + v346 < v347 )
                                        {
                                          v923 = -1073741675;
                                          v368 = -1073741675;
                                          goto LABEL_645;
                                        }
                                        v1237 = v347 + v346;
                                        if ( v951 >= v347 + v346 )
                                        {
                                          v348 = v934;
                                          if ( ullAugend )
                                          {
                                            if ( (unsigned int)v934 <= 3 )
                                            {
                                              v923 = -1073741811;
                                              v354 = -1073741811;
                                            }
                                            else
                                            {
                                              v349 = ullAugend;
                                              v1015 = ullAugend;
                                              do
                                              {
                                                v923 = RtlULongLongAdd(v349, 4uLL, &v1015);
                                                if ( v923 < 0 )
                                                  goto LABEL_912;
                                                v923 = RtlULongLongAdd(v1015, v350, &v1015);
                                                if ( v923 < 0 )
                                                  goto LABEL_912;
                                                v349 = v1015;
                                              }
                                              while ( (unsigned int)(v351 + 1) < 3 );
                                              v923 = RtlULongLongAdd(v1015, 4uLL, &v1015);
                                              if ( v923 < 0 )
                                              {
LABEL_912:
                                                v352 = v1158;
                                                v353 = v1246;
                                                goto LABEL_613;
                                              }
                                              v1158 = v352;
                                              if ( v352 )
                                                v353 = (_QWORD *)v1015;
                                              else
                                                v353 = 0LL;
                                              v1246 = v353;
LABEL_613:
                                              if ( v923 >= 0 )
                                              {
                                                if ( v352 != 8 )
                                                {
                                                  v923 = -1073741789;
                                                  goto LABEL_644;
                                                }
                                                v1247 = *v353;
                                              }
                                              v354 = v923;
                                            }
                                          }
                                          else
                                          {
                                            v354 = -1073741811;
                                            v923 = -1073741811;
                                          }
                                          if ( v354 < 0 )
                                          {
LABEL_644:
                                            v368 = v923;
LABEL_645:
                                            v9 = (unsigned int *)v929;
                                            if ( v368 >= 0 )
                                              goto LABEL_324;
                                            CurrentHardwareID = v923;
                                            goto LABEL_688;
                                          }
                                          if ( v1247 && qword_1407AC258 )
                                          {
                                            if ( v1247 == qword_1407AC258 )
                                            {
                                              if ( !ullAugend )
                                              {
                                                v923 = -1073741811;
                                                v368 = -1073741811;
                                                goto LABEL_645;
                                              }
                                              if ( v348 <= 4 )
                                              {
                                                v923 = -1073741811;
                                                v368 = -1073741811;
                                                goto LABEL_645;
                                              }
                                              v355 = ullAugend;
                                              v1014 = ullAugend;
                                              do
                                              {
                                                v356 = RtlULongLongAdd(v355, 4uLL, &v1014);
                                                v923 = v356;
                                                if ( v356 < 0 )
                                                  goto LABEL_945;
                                                v356 = RtlULongLongAdd(v1014, v357, &v1014);
                                                v923 = v356;
                                                if ( v356 < 0 )
                                                  goto LABEL_945;
                                                v355 = v1014;
                                              }
                                              while ( (unsigned int)(v358 + 1) < 4 );
                                              v356 = RtlULongLongAdd(v1014, 4uLL, &v1014);
                                              v923 = v356;
                                              if ( v356 < 0 )
                                              {
LABEL_945:
                                                v359 = v1161;
                                                goto LABEL_631;
                                              }
                                              v1161 = v359;
                                              if ( v359 )
                                                v360 = v1014;
                                              else
                                                v360 = 0LL;
                                              v1248 = v360;
LABEL_631:
                                              if ( v356 >= 0 )
                                              {
                                                v361 = ((__int64 (__fastcall *)(_QWORD))qword_1407AC450)(v359);
                                                if ( v361 == 263 )
                                                {
                                                  v362 = 1074058754;
                                                }
                                                else if ( v361 == 0x40000000 )
                                                {
                                                  v362 = 1074058753;
                                                }
                                                else if ( v361 < 0 )
                                                {
                                                  v362 = v361 | 0x10000000;
                                                }
                                                else
                                                {
                                                  v362 = 0;
                                                }
                                                v363 = 0;
                                                uAddend[1] = 0;
                                                uAddend[0] = 0;
                                                if ( v928 )
                                                {
                                                  ExFreePoolWithTag((PVOID)v928, 0x20534C53u);
                                                  v363 = uAddend[0];
                                                  v928 = 0LL;
                                                }
                                                v1162 = v362;
                                                v1025 = 8;
                                                if ( uAddend[1] + 8 < uAddend[1] )
                                                {
                                                  uAddend[1] = -1;
LABEL_949:
                                                  v923 = -1073741675;
                                                }
                                                else
                                                {
                                                  uAddend[1] += 8;
                                                  uAddend[0] = v363 + 1;
                                                  if ( uAddend[1] )
                                                  {
                                                    v364 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                                    if ( v364 )
                                                    {
                                                      v928 = (ULONGLONG)v364;
                                                      uAddend[0] = 0;
                                                      v1163 = v362;
                                                      v923 = RtlULongLongAdd((ULONGLONG)v364, 4uLL, v1320);
                                                      if ( v923 >= 0 )
                                                      {
                                                        if ( v366 + 2 > (_DWORD *)((char *)v366 + uAddend[1]) )
                                                        {
                                                          v923 = -1073741789;
                                                        }
                                                        else
                                                        {
                                                          v367 = (int *)v1320[0];
                                                          *v366 = v365;
                                                          *v367 = v1163;
                                                          ++uAddend[0];
                                                        }
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v923 = -1073741801;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v923 = -1073741762;
                                                  }
                                                }
                                              }
                                              goto LABEL_644;
                                            }
                                            v1159 = -1073425151;
                                            if ( v928 )
                                            {
                                              v473 = (_DWORD *)v928;
                                              v1187 = v928;
                                              if ( uAddend[0] )
                                              {
                                                v474 = v1024;
                                                while ( 1 )
                                                {
                                                  v475 = -1;
                                                  if ( *v473 < 0xFFFFFFFC )
                                                    v475 = *v473 + 4;
                                                  v476 = *v473 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                                  v923 = v476;
                                                  if ( (unsigned int)(*v473 + 4) >= 4 )
                                                    v474 = v475;
                                                  v1024 = v474;
                                                  if ( v476 < 0 )
                                                    break;
                                                  v472 = RtlULongLongAdd((ULONGLONG)v473, v474, &v1187);
                                                  v923 = v472;
                                                  if ( v472 < 0 )
                                                    goto LABEL_933;
                                                  v473 = (_DWORD *)v1187;
                                                  if ( v477 + 1 >= uAddend[0] )
                                                    goto LABEL_928;
                                                }
                                                v472 = v476;
                                              }
                                              else
                                              {
LABEL_928:
                                                v472 = RtlULongLongAdd((ULONGLONG)v473, 4uLL, v1318);
                                                v923 = v472;
                                                if ( v472 >= 0 )
                                                {
                                                  if ( (unsigned __int64)(v479 + 2) > v928 + uAddend[1] )
                                                  {
                                                    v923 = -1073741789;
                                                    goto LABEL_644;
                                                  }
                                                  v480 = (int *)v1318[0];
                                                  *v479 = v478;
                                                  *v480 = v1159;
                                                  ++uAddend[0];
                                                }
                                              }
                                            }
                                            else
                                            {
                                              v1024 = 8;
                                              v468 = uAddend[1];
                                              v469 = -1;
                                              v470 = uAddend[1] + 8;
                                              v471 = uAddend[1] + 8 < uAddend[1];
                                              if ( uAddend[1] + 8 >= uAddend[1] )
                                                v469 = uAddend[1] + 8;
                                              uAddend[1] = v469;
                                              v472 = v471 ? 0xC0000095 : 0;
                                              v923 = v472;
                                              if ( v470 >= v468 )
                                              {
                                                ++uAddend[0];
                                                goto LABEL_934;
                                              }
                                            }
LABEL_933:
                                            if ( v472 >= 0 )
                                            {
LABEL_934:
                                              if ( uAddend[1] )
                                              {
                                                v481 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                                if ( v481 )
                                                {
                                                  v928 = (ULONGLONG)v481;
                                                  uAddend[0] = 0;
                                                  v1160 = -1073425151;
                                                  v923 = RtlULongLongAdd((ULONGLONG)v481, 4uLL, v1319);
                                                  if ( v923 >= 0 )
                                                  {
                                                    if ( v483 + 2 <= (_DWORD *)((char *)v483 + uAddend[1]) )
                                                    {
                                                      v484 = (int *)v1319[0];
                                                      *v483 = v482;
                                                      *v484 = v1160;
                                                      ++uAddend[0];
                                                    }
                                                    else
                                                    {
                                                      v923 = -1073741789;
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  v923 = -1073741801;
                                                }
                                              }
                                              else
                                              {
                                                v923 = -1073741762;
                                              }
                                              goto LABEL_644;
                                            }
                                            goto LABEL_644;
                                          }
                                          v1164 = -1073425151;
                                          if ( v928 )
                                          {
                                            v490 = (_DWORD *)v928;
                                            v1188 = v928;
                                            if ( uAddend[0] )
                                            {
                                              v491 = v1026;
                                              while ( 1 )
                                              {
                                                v492 = -1;
                                                if ( *v490 < 0xFFFFFFFC )
                                                  v492 = *v490 + 4;
                                                v493 = *v490 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                                v923 = v493;
                                                if ( (unsigned int)(*v490 + 4) >= 4 )
                                                  v491 = v492;
                                                v1026 = v491;
                                                if ( v493 < 0 )
                                                  break;
                                                v489 = RtlULongLongAdd((ULONGLONG)v490, v491, &v1188);
                                                v923 = v489;
                                                if ( v489 < 0 )
                                                  goto LABEL_972;
                                                v490 = (_DWORD *)v1188;
                                                if ( v494 + 1 >= uAddend[0] )
                                                  goto LABEL_967;
                                              }
                                              v489 = v493;
                                            }
                                            else
                                            {
LABEL_967:
                                              v489 = RtlULongLongAdd((ULONGLONG)v490, 4uLL, v1316);
                                              v923 = v489;
                                              if ( v489 >= 0 )
                                              {
                                                if ( (unsigned __int64)(v496 + 2) > v928 + uAddend[1] )
                                                {
                                                  v923 = -1073741789;
                                                  goto LABEL_644;
                                                }
                                                v497 = (int *)v1316[0];
                                                *v496 = v495;
                                                *v497 = v1164;
                                                ++uAddend[0];
                                              }
                                            }
                                          }
                                          else
                                          {
                                            v1026 = 8;
                                            v485 = uAddend[1];
                                            v486 = -1;
                                            v487 = uAddend[1] + 8;
                                            v488 = uAddend[1] + 8 < uAddend[1];
                                            if ( uAddend[1] + 8 >= uAddend[1] )
                                              v486 = uAddend[1] + 8;
                                            uAddend[1] = v486;
                                            v489 = v488 ? 0xC0000095 : 0;
                                            v923 = v489;
                                            if ( v487 >= v485 )
                                            {
                                              ++uAddend[0];
                                              goto LABEL_973;
                                            }
                                          }
LABEL_972:
                                          if ( v489 < 0 )
                                            goto LABEL_644;
LABEL_973:
                                          if ( uAddend[1] )
                                          {
                                            v498 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                            if ( v498 )
                                            {
                                              v928 = (ULONGLONG)v498;
                                              uAddend[0] = 0;
                                              v1165 = -1073425151;
                                              v923 = RtlULongLongAdd((ULONGLONG)v498, 4uLL, &v1322);
                                              if ( v923 >= 0 )
                                              {
                                                if ( v500 + 2 <= (_DWORD *)((char *)v500 + uAddend[1]) )
                                                {
                                                  v501 = (_DWORD *)v1322;
                                                  *v500 = v499;
                                                  *v501 = v1165;
                                                  ++uAddend[0];
                                                }
                                                else
                                                {
                                                  v923 = -1073741789;
                                                }
                                              }
                                            }
                                            else
                                            {
                                              v923 = -1073741801;
                                            }
                                          }
                                          else
                                          {
                                            v923 = -1073741762;
                                          }
                                          goto LABEL_644;
                                        }
                                        v1156 = 0;
                                        if ( v928 )
                                        {
                                          v456 = (_DWORD *)v928;
                                          v1186 = v928;
                                          if ( uAddend[0] )
                                          {
                                            v457 = v1023;
                                            while ( 1 )
                                            {
                                              v458 = -1;
                                              if ( *v456 < 0xFFFFFFFC )
                                                v458 = *v456 + 4;
                                              v459 = *v456 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                              v923 = v459;
                                              if ( (unsigned int)(*v456 + 4) >= 4 )
                                                v457 = v458;
                                              v1023 = v457;
                                              if ( v459 < 0 )
                                                break;
                                              v368 = RtlULongLongAdd((ULONGLONG)v456, v457, &v1186);
                                              v923 = v368;
                                              if ( v368 < 0 )
                                                goto LABEL_898;
                                              v456 = (_DWORD *)v1186;
                                              if ( v460 + 1 >= uAddend[0] )
                                                goto LABEL_893;
                                            }
                                            v368 = v459;
                                          }
                                          else
                                          {
LABEL_893:
                                            v368 = RtlULongLongAdd((ULONGLONG)v456, 4uLL, v1311);
                                            v923 = v368;
                                            if ( v368 >= 0 )
                                            {
                                              if ( (unsigned __int64)(v462 + 2) > v928 + uAddend[1] )
                                              {
                                                v923 = -1073741789;
                                                goto LABEL_907;
                                              }
                                              v463 = (_DWORD *)v1311[0];
                                              *v462 = v461;
                                              *v463 = v1156;
                                              ++uAddend[0];
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v1023 = 8;
                                          v452 = uAddend[1];
                                          v453 = -1;
                                          v454 = uAddend[1] + 8;
                                          v455 = uAddend[1] + 8 < uAddend[1];
                                          if ( uAddend[1] + 8 >= uAddend[1] )
                                            v453 = uAddend[1] + 8;
                                          uAddend[1] = v453;
                                          v368 = v455 ? 0xC0000095 : 0;
                                          v923 = v368;
                                          if ( v454 >= v452 )
                                          {
                                            ++uAddend[0];
LABEL_899:
                                            if ( uAddend[1] )
                                            {
                                              v464 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                              if ( v464 )
                                              {
                                                v928 = (ULONGLONG)v464;
                                                uAddend[0] = 0;
                                                v1157 = 0;
                                                v923 = RtlULongLongAdd((ULONGLONG)v464, 4uLL, v1317);
                                                if ( v923 >= 0 )
                                                {
                                                  if ( v466 + 2 <= (_DWORD *)((char *)v466 + uAddend[1]) )
                                                  {
                                                    v467 = (_DWORD *)v1317[0];
                                                    *v466 = v465;
                                                    *v467 = v1157;
                                                    ++uAddend[0];
                                                  }
                                                  else
                                                  {
                                                    v923 = -1073741789;
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                v923 = -1073741801;
                                              }
                                            }
                                            else
                                            {
                                              v923 = -1073741762;
                                            }
LABEL_907:
                                            v368 = v923;
                                            if ( v923 >= 0 )
                                              goto LABEL_323;
                                            goto LABEL_645;
                                          }
                                        }
LABEL_898:
                                        if ( v368 < 0 )
                                          goto LABEL_645;
                                        goto LABEL_899;
                                      case 2:
                                        v966[0] = 0;
                                        v369 = RtlUIntAdd(4u, 4u, &v1093);
                                        CurrentHardwareID = v369;
                                        if ( v369 < 0 )
                                        {
                                          v370 = v1035;
                                        }
                                        else
                                        {
                                          v370 = v1093;
                                          v1035 = v1093;
                                        }
                                        if ( v369 < 0
                                          || (CurrentHardwareID = RtlUIntAdd(0, v370, v966), CurrentHardwareID < 0)
                                          || (CurrentHardwareID = RtlUIntAdd(v371 + 4, v371 + 8, &v1011),
                                              CurrentHardwareID < 0)
                                          || (v1035 = v1011,
                                              CurrentHardwareID = RtlUIntAdd(v966[0], v1011, v966),
                                              CurrentHardwareID < 0) )
                                        {
                                          v372 = v1061;
                                        }
                                        else
                                        {
                                          v372 = v966[0];
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        v1036 = 8;
                                        CurrentHardwareID = RtlUIntAdd(8u, v372, &v1036);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        v373 = (v1036 + 7) & 0xFFFFFFF8;
                                        if ( v373 < v1036 )
                                        {
                                          CurrentHardwareID = -1073741675;
                                        }
                                        else
                                        {
                                          v1037 = (v1036 + 7) & 0xFFFFFFF8;
                                          CurrentHardwareID = RtlUIntAdd(v373, 8u, &v1037);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            v374 = v1037;
                                            goto LABEL_659;
                                          }
                                        }
                                        v374 = v1011;
LABEL_659:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        v949 = 4;
                                        CurrentHardwareID = RtlUIntAdd(4u, v374, &v949);
                                        if ( CurrentHardwareID < 0
                                          || (CurrentHardwareID = RtlUIntAdd(v949, v375, &v949), CurrentHardwareID < 0)
                                          || (CurrentHardwareID = RtlUIntAdd(v949, *((_DWORD *)v8 + 4), &v949),
                                              CurrentHardwareID < 0)
                                          || (CurrentHardwareID = RtlUIntAdd(v949, 4u, &v949), CurrentHardwareID < 0)
                                          || (CurrentHardwareID = RtlUIntAdd(v949, *((_DWORD *)v8 + 8), &v949),
                                              CurrentHardwareID < 0) )
                                        {
                                          v377 = v1094;
                                        }
                                        else
                                        {
                                          v377 = v949;
                                          v1094 = v949;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( v951 < v377 )
                                        {
                                          v1227 = 0LL;
                                        }
                                        else
                                        {
                                          v1227 = __rdtsc();
                                          qword_1407AC258 = v1227;
                                        }
                                        uAddend[1] = v376;
                                        v193 = PagedPool;
                                        if ( v376 )
                                        {
                                          v378 = ExAllocatePoolWithTag(PagedPool, v376, 0x20534C53u);
                                          if ( v378 )
                                          {
                                            v928 = (ULONGLONG)v378;
                                            uAddend[0] = 0;
                                            v1095 = 0;
                                            CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v378, 4uLL, v1338);
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_674;
                                            if ( v380 + 2 <= (_DWORD *)((char *)v380 + uAddend[1]) )
                                            {
                                              v382 = (_DWORD *)v1338[0];
                                              *v380 = v379;
                                              *v382 = v1095;
                                              v381 = ++uAddend[0];
LABEL_674:
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_687;
                                              v1279 = v1227;
                                              if ( v928 )
                                              {
                                                v383 = (UINT *)v928;
                                                v384 = 0;
                                                v1197 = v928;
                                                if ( v381 )
                                                {
                                                  do
                                                  {
                                                    CurrentHardwareID = RtlUIntAdd(4u, *v383, &v1097);
                                                    if ( CurrentHardwareID < 0 )
                                                      goto LABEL_684;
                                                    v977 = v1097;
                                                    CurrentHardwareID = RtlULongLongAdd(v385, v1097, &v1197);
                                                    if ( CurrentHardwareID < 0 )
                                                      goto LABEL_684;
                                                    v383 = (UINT *)v1197;
                                                  }
                                                  while ( ++v384 < v386 );
                                                }
                                                CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v383, 4uLL, v1339);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_684;
                                                if ( (unsigned __int64)(v387 + 3) <= v928 + uAddend[1] )
                                                {
                                                  v388 = (unsigned __int64 *)v1339[0];
                                                  *v387 = 8;
                                                  *v388 = v1279;
LABEL_683:
                                                  ++uAddend[0];
                                                  goto LABEL_684;
                                                }
LABEL_1461:
                                                CurrentHardwareID = -1073741789;
                                              }
                                              else
                                              {
                                                v715 = RtlUIntAdd(4u, 8u, &v1096);
                                                v716 = v977;
                                                CurrentHardwareID = v715;
                                                if ( v715 >= 0 )
                                                  v716 = v1096;
                                                v977 = v716;
                                                if ( v715 >= 0 )
                                                {
                                                  CurrentHardwareID = RtlUIntAdd(uAddend[1], v716, &uAddend[1]);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    CurrentHardwareID = 0;
                                                    goto LABEL_683;
                                                  }
                                                }
                                              }
LABEL_684:
                                              v193 = PagedPool;
                                              goto LABEL_685;
                                            }
                                            CurrentHardwareID = -1073741789;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741801;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741762;
                                        }
LABEL_685:
                                        if ( CurrentHardwareID >= 0 )
                                        {
LABEL_686:
                                          v9 = (unsigned int *)v929;
                                          goto LABEL_325;
                                        }
LABEL_687:
                                        v9 = (unsigned int *)v929;
LABEL_688:
                                        v5 = (char *)v932;
LABEL_689:
                                        v6 = v5;
                                        goto LABEL_690;
                                      case 4:
                                        v502 = sub_140726100(&v934, v8, v104, uAddend);
                                        if ( v502 >= 0 )
                                          goto LABEL_323;
                                        CurrentHardwareID = v502;
                                        goto LABEL_687;
                                      case 5:
                                        if ( !v8 )
                                          goto LABEL_984;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 <= 3 )
                                          {
                                            Acl = -1073741811;
                                            v394 = -1073741811;
                                          }
                                          else
                                          {
                                            v389 = ullAugend;
                                            v1020 = ullAugend;
                                            do
                                            {
                                              Acl = RtlULongLongAdd(v389, 4uLL, &v1020);
                                              if ( Acl < 0 )
                                                goto LABEL_988;
                                              Acl = RtlULongLongAdd(v1020, v390, &v1020);
                                              if ( Acl < 0 )
                                                goto LABEL_988;
                                              v389 = v1020;
                                            }
                                            while ( (unsigned int)(v391 + 1) < 3 );
                                            Acl = RtlULongLongAdd(v1020, 4uLL, &v1020);
                                            if ( Acl < 0 )
                                            {
LABEL_988:
                                              v392 = v1166;
                                              v393 = v1249;
                                              goto LABEL_703;
                                            }
                                            v1166 = v392;
                                            if ( v392 )
                                              v393 = (_QWORD *)v1020;
                                            else
                                              v393 = 0LL;
                                            v1249 = v393;
LABEL_703:
                                            if ( Acl >= 0 )
                                            {
                                              if ( v392 != 8 )
                                              {
                                                Acl = -1073741789;
                                                goto LABEL_990;
                                              }
                                              v1250 = *v393;
                                            }
                                            v394 = Acl;
                                          }
                                        }
                                        else
                                        {
                                          v394 = -1073741811;
                                          Acl = -1073741811;
                                        }
                                        if ( v394 < 0 )
                                          goto LABEL_1087;
                                        v395 = 1;
                                        RtlInitUnicodeString(&v1323, L"Security-SPP-GenuineLocalStatus");
                                        v396 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, char *))qword_1407AC458)(
                                                 &v1323,
                                                 &v1167,
                                                 &v1168,
                                                 4LL,
                                                 v1236);
                                        Acl = v396;
                                        if ( v396 == -1073741772 )
                                        {
                                          v1169 = 0;
                                        }
                                        else
                                        {
                                          if ( v396 >= 0 && (!v1168 || v1167 != 4) )
                                            v395 = 0;
                                          v1169 = v395;
                                          if ( v396 < 0 )
                                            goto LABEL_749;
                                          if ( v395 )
                                            KeResetEvent(&stru_1403423A0);
                                        }
                                        dword_1407AC1D4 = 1;
                                        do
                                        {
                                          v397 = KeWaitForSingleObject(&stru_1403423A0, UserRequest, 1, 1u, 0LL);
                                          v398 = v397;
                                        }
                                        while ( v397 == 257 );
                                        if ( v397 >= 0 && v397 != 192 )
                                        {
                                          do
                                          {
                                            v503 = KeWaitForSingleObject(&stru_1403423C0, UserRequest, 1, 1u, 0LL);
                                            v398 = v503;
                                          }
                                          while ( v503 == 257 );
                                          if ( v503 >= 0 && v503 != 192 && v503 != 258 )
                                            KeReleaseMutex(&stru_1403423C0, 0);
                                        }
                                        v1235 = 8;
                                        v1243[2] = 36;
                                        v1303 = 48;
                                        v399 = *((_DWORD *)v8 + 8);
                                        if ( *((_DWORD *)v8 + 4) >= 0xFFFFFFC8 )
                                        {
                                          Acl = -1073741675;
                                          v396 = -1073741675;
                                          goto LABEL_749;
                                        }
                                        v400 = *((_DWORD *)v8 + 4) + 60;
                                        if ( v400 < *((_DWORD *)v8 + 4) + 56 || v400 + v399 < v400 )
                                        {
                                          Acl = -1073741675;
                                          v396 = -1073741675;
                                          goto LABEL_749;
                                        }
                                        v1243[1] = v400 + v399;
                                        uAddend[1] = 28;
                                        v401 = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
                                        if ( !v401 )
                                        {
                                          Acl = -1073741801;
                                          v396 = -1073741801;
                                          goto LABEL_749;
                                        }
                                        v928 = (ULONGLONG)v401;
                                        uAddend[0] = 0;
                                        v1170 = v398 | 0x10000000;
                                        Acl = RtlULongLongAdd((ULONGLONG)v401, 4uLL, v1324);
                                        if ( Acl >= 0 )
                                        {
                                          if ( v403 + 2 > (_DWORD *)((char *)v403 + uAddend[1]) )
                                          {
                                            Acl = -1073741789;
                                            v396 = -1073741789;
                                          }
                                          else
                                          {
                                            v404 = (int *)v1324[0];
                                            *v403 = v402;
                                            *v404 = v1170;
                                            v405 = ++uAddend[0];
                                            v1251 = v1250;
                                            if ( !v928 )
                                            {
                                              v1027 = 12;
                                              v504 = uAddend[1];
                                              v505 = -1;
                                              v506 = uAddend[1] + 12;
                                              v507 = uAddend[1] + 12 < uAddend[1];
                                              if ( uAddend[1] + 12 >= uAddend[1] )
                                                v505 = uAddend[1] + 12;
                                              uAddend[1] = v505;
                                              v409 = v507 ? 0xC0000095 : 0;
                                              Acl = v409;
                                              if ( v506 >= v504 )
                                              {
                                                uAddend[0] = ++v405;
                                                v1029 = dword_1407AC060;
                                                goto LABEL_1004;
                                              }
                                              goto LABEL_736;
                                            }
                                            v406 = (_DWORD *)v928;
                                            v1189 = v928;
                                            if ( v405 )
                                            {
                                              v407 = v1027;
                                              do
                                              {
                                                if ( *v406 >= 0xFFFFFFFC )
                                                {
                                                  Acl = -1073741675;
                                                  v408 = -1073741675;
                                                }
                                                else
                                                {
                                                  v407 = *v406 + 4;
                                                  v408 = 0;
                                                  Acl = 0;
                                                  v1027 = v407;
                                                }
                                                if ( v408 < 0 )
                                                  goto LABEL_735;
                                                v409 = RtlULongLongAdd((ULONGLONG)v406, v407, &v1189);
                                                Acl = v409;
                                                if ( v409 < 0 )
                                                  goto LABEL_736;
                                                v406 = (_DWORD *)v1189;
                                              }
                                              while ( v410 + 1 < v405 );
                                            }
                                            v409 = RtlULongLongAdd((ULONGLONG)v406, 4uLL, v1325);
                                            Acl = v409;
                                            if ( v409 < 0 )
                                            {
LABEL_736:
                                              if ( v409 >= 0 )
                                              {
                                                v1029 = dword_1407AC060;
                                                if ( v928 )
                                                {
                                                  v413 = (_DWORD *)v928;
                                                  v1190 = v928;
                                                  if ( v405 )
                                                  {
                                                    v414 = v1028;
                                                    while ( 1 )
                                                    {
                                                      if ( *v413 >= 0xFFFFFFFC )
                                                      {
                                                        Acl = -1073741675;
                                                        v415 = -1073741675;
                                                      }
                                                      else
                                                      {
                                                        v414 = *v413 + 4;
                                                        v415 = 0;
                                                        Acl = 0;
                                                        v1028 = v414;
                                                      }
                                                      if ( v415 < 0 )
                                                        break;
                                                      Acl = RtlULongLongAdd((ULONGLONG)v413, v414, &v1190);
                                                      if ( Acl < 0 )
                                                        break;
                                                      v413 = (_DWORD *)v1190;
                                                      if ( v417 + 1 >= v416 )
                                                        goto LABEL_745;
                                                    }
                                                  }
                                                  else
                                                  {
LABEL_745:
                                                    Acl = RtlULongLongAdd((ULONGLONG)v413, 4uLL, v1326);
                                                    if ( Acl >= 0 )
                                                    {
                                                      if ( (unsigned __int64)(v419 + 2) > v928 + uAddend[1] )
                                                      {
                                                        Acl = -1073741789;
                                                      }
                                                      else
                                                      {
                                                        v420 = (int *)v1326[0];
                                                        *v419 = v418;
                                                        *v420 = v1029;
                                                        ++uAddend[0];
                                                      }
                                                    }
                                                  }
LABEL_748:
                                                  v396 = Acl;
                                                  goto LABEL_749;
                                                }
LABEL_1004:
                                                v1028 = 8;
                                                v508 = uAddend[1];
                                                v509 = -1;
                                                v510 = uAddend[1] + 8;
                                                v511 = uAddend[1] + 8 < uAddend[1];
                                                if ( uAddend[1] + 8 >= uAddend[1] )
                                                  v509 = uAddend[1] + 8;
                                                uAddend[1] = v509;
                                                Acl = v511 ? 0xC0000095 : 0;
                                                if ( v510 >= v508 )
                                                {
                                                  Acl = 0;
                                                  uAddend[0] = v405 + 1;
                                                }
                                                goto LABEL_748;
                                              }
                                              goto LABEL_990;
                                            }
                                            if ( (unsigned __int64)(v411 + 3) <= v928 + uAddend[1] )
                                            {
                                              v412 = (_QWORD *)v1325[0];
                                              *v411 = 8;
                                              *v412 = v1251;
                                              v405 = ++uAddend[0];
LABEL_735:
                                              v409 = Acl;
                                              goto LABEL_736;
                                            }
                                            Acl = -1073741789;
                                            v396 = -1073741789;
                                          }
LABEL_749:
                                          if ( v396 >= 0 )
                                            goto LABEL_323;
                                          goto LABEL_1087;
                                        }
LABEL_990:
                                        v396 = Acl;
                                        goto LABEL_749;
                                      case 6:
                                        if ( !v8 )
                                          goto LABEL_984;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 > 3 )
                                          {
                                            v513 = ullAugend;
                                            v1021 = ullAugend;
                                            do
                                            {
                                              Acl = RtlULongLongAdd(v513, 4uLL, &v1021);
                                              if ( Acl < 0 )
                                                goto LABEL_1029;
                                              Acl = RtlULongLongAdd(v1021, v514, &v1021);
                                              if ( Acl < 0 )
                                                goto LABEL_1029;
                                              v513 = v1021;
                                            }
                                            while ( (unsigned int)(v515 + 1) < 3 );
                                            Acl = RtlULongLongAdd(v1021, 4uLL, &v1021);
                                            if ( Acl < 0 )
                                            {
LABEL_1029:
                                              v516 = v1171;
                                              v517 = v1252;
                                              goto LABEL_1030;
                                            }
                                            v517 = (_QWORD *)v1021;
                                            v1171 = v516;
                                            if ( !v516 )
                                              v517 = 0LL;
                                            v1252 = v517;
LABEL_1030:
                                            if ( Acl >= 0 )
                                            {
                                              if ( v516 != 8 )
                                              {
                                                Acl = -1073741789;
                                                goto LABEL_1033;
                                              }
                                              v1253 = *v517;
                                            }
                                            v512 = Acl;
                                          }
                                          else
                                          {
                                            Acl = -1073741811;
                                            v512 = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          v512 = -1073741811;
                                          Acl = -1073741811;
                                        }
                                        if ( v512 < 0 )
                                          goto LABEL_1087;
                                        Interval.QuadPart = -35000000LL;
                                        do
                                        {
                                          v519 = KeDelayExecutionThread(1, 1u, &Interval);
                                          v520 = v519;
                                        }
                                        while ( v519 == 257 );
                                        if ( v519 >= 0 && v519 != 192 )
                                        {
                                          Interval.QuadPart = -270000000LL;
                                          do
                                          {
                                            v521 = KeWaitForSingleObject(&stru_1403423C0, UserRequest, 1, 1u, &Interval);
                                            v520 = v521;
                                          }
                                          while ( v521 == 257 );
                                          if ( v521 >= 0 && v521 != 192 && v521 != 258 )
                                            KeReleaseMutex(&stru_1403423C0, 0);
                                        }
                                        GrantedAccess[4] = 12;
                                        GrantedAccess[2] = 28;
                                        GrantedAccess[3] = 40;
                                        v522 = -1;
                                        if ( *((_DWORD *)v8 + 4) < 0xFFFFFFD0 )
                                          v522 = *((_DWORD *)v8 + 4) + 48;
                                        v523 = *((_DWORD *)v8 + 4) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
                                        Acl = v523;
                                        if ( (unsigned int)(*((_DWORD *)v8 + 4) + 48) >= 0x30 )
                                        {
                                          v524 = v522 + 4;
                                          v525 = -1;
                                          if ( v522 + 4 >= v522 )
                                            v525 = v522 + 4;
                                          v523 = v524 < v522 ? 0xC0000095 : 0;
                                          Acl = v523;
                                          if ( v524 >= v522 )
                                          {
                                            v526 = v525 + *((_DWORD *)v8 + 8);
                                            v527 = -1;
                                            if ( v526 >= v525 )
                                              v527 = v525 + *((_DWORD *)v8 + 8);
                                            Acl = v526 < v525 ? 0xC0000095 : 0;
                                            v528 = v1172;
                                            v523 = Acl;
                                            if ( v526 >= v525 )
                                              v528 = v527;
                                            v1172 = v528;
                                          }
                                        }
                                        if ( v523 >= 0 )
                                        {
                                          uAddend[1] = 20;
                                          v529 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
                                          if ( !v529 )
                                          {
                                            Acl = -1073741801;
                                            v518 = -1073741801;
                                            goto LABEL_1086;
                                          }
                                          v928 = (ULONGLONG)v529;
                                          uAddend[0] = 0;
                                          v1173 = v520 | 0x10000000;
                                          Acl = RtlULongLongAdd((ULONGLONG)v529, 4uLL, v1327);
                                          if ( Acl >= 0 )
                                          {
                                            if ( v531 + 2 > (_DWORD *)((char *)v531 + uAddend[1]) )
                                            {
                                              Acl = -1073741789;
                                              v518 = -1073741789;
                                              goto LABEL_1086;
                                            }
                                            v532 = (int *)v1327[0];
                                            *v531 = 4;
                                            *v532 = v1173;
                                            v530 = ++uAddend[0];
                                          }
                                          if ( Acl < 0 )
                                          {
                                            v518 = Acl;
                                          }
                                          else
                                          {
                                            v1254 = v1253;
                                            if ( v928 )
                                            {
                                              v537 = (_DWORD *)v928;
                                              v538 = 0;
                                              v1192 = v928;
                                              if ( v530 )
                                              {
                                                v539 = v1030;
                                                while ( 1 )
                                                {
                                                  v540 = -1;
                                                  if ( *v537 < 0xFFFFFFFC )
                                                    v540 = *v537 + 4;
                                                  v541 = *v537 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                                  Acl = v541;
                                                  if ( (unsigned int)(*v537 + 4) >= 4 )
                                                    v539 = v540;
                                                  v1030 = v539;
                                                  if ( v541 < 0 )
                                                    break;
                                                  Acl = RtlULongLongAdd((ULONGLONG)v537, v539, &v1192);
                                                  if ( Acl < 0 )
                                                    break;
                                                  v537 = (_DWORD *)v1192;
                                                  if ( ++v538 >= v542 )
                                                    goto LABEL_1080;
                                                }
                                              }
                                              else
                                              {
LABEL_1080:
                                                Acl = RtlULongLongAdd((ULONGLONG)v537, 4uLL, v1328);
                                                if ( Acl >= 0 )
                                                {
                                                  if ( (unsigned __int64)(v543 + 3) <= v928 + uAddend[1] )
                                                  {
                                                    v544 = (_QWORD *)v1328[0];
                                                    *v543 = 8;
                                                    *v544 = v1254;
                                                    ++uAddend[0];
                                                  }
                                                  else
                                                  {
                                                    Acl = -1073741789;
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              v1030 = 12;
                                              v533 = uAddend[1];
                                              v534 = -1;
                                              v535 = uAddend[1] + 12;
                                              v536 = uAddend[1] + 12 < uAddend[1];
                                              if ( uAddend[1] + 12 >= uAddend[1] )
                                                v534 = uAddend[1] + 12;
                                              uAddend[1] = v534;
                                              Acl = v536 ? 0xC0000095 : 0;
                                              if ( v535 >= v533 )
                                              {
                                                Acl = 0;
                                                uAddend[0] = v530 + 1;
                                              }
                                            }
                                            v518 = Acl;
                                          }
LABEL_1086:
                                          if ( v518 >= 0 )
                                            goto LABEL_323;
                                          goto LABEL_1087;
                                        }
LABEL_1033:
                                        v518 = Acl;
                                        goto LABEL_1086;
                                      case 7:
                                        if ( !v8 )
                                          goto LABEL_984;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1105;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1105;
                                        }
                                        v545 = ullAugend;
                                        v1022 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v545, 4uLL, &v1022);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1101;
                                          CurrentHardwareID = RtlULongLongAdd(v1022, v546, &v1022);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1101;
                                          v545 = v1022;
                                        }
                                        while ( (unsigned int)(v547 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v1022, 4uLL, &v1022);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1101:
                                          v548 = v1174;
                                          v549 = v1255;
                                          goto LABEL_1102;
                                        }
                                        v549 = (_QWORD *)v1022;
                                        v1174 = v548;
                                        if ( !v548 )
                                          v549 = 0LL;
                                        v1255 = v549;
LABEL_1102:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( v548 != 8 )
                                          goto LABEL_1461;
                                        v1257 = *v549;
LABEL_1105:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        Timeout.QuadPart = -270000000LL;
                                        v550 = KeWaitForSingleObject(&stru_1403423C0, UserRequest, 1, 0, &Timeout);
                                        if ( v550 < 0 || v550 == 192 || v550 == 258 )
                                        {
                                          v193 = PagedPool;
                                        }
                                        else
                                        {
                                          if ( stru_1403423A0.Header.SignalState || !dword_1407AC1AC )
                                          {
                                            v551 = MEMORY[0xFFFFF78000000320];
                                            TimeIncrement = KeQueryTimeIncrement();
                                            v193 = PagedPool;
                                            dword_1407AC1AC = 1;
                                            qword_1407AC148 = v551 * TimeIncrement / 10000;
                                            KeResetEvent(&stru_1403423A0);
                                          }
                                          else
                                          {
                                            v193 = PagedPool;
                                          }
                                          KeReleaseMutex(&stru_1403423C0, 0);
                                        }
                                        GrantedAccess[5] = 12;
                                        GrantedAccess[6] = 28;
                                        GrantedAccess[7] = 40;
                                        v553 = -1;
                                        if ( *((_DWORD *)v8 + 4) < 0xFFFFFFD0 )
                                          v553 = *((_DWORD *)v8 + 4) + 48;
                                        CurrentHardwareID = *((_DWORD *)v8 + 4) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
                                        if ( (unsigned int)(*((_DWORD *)v8 + 4) + 48) >= 0x30 )
                                        {
                                          v554 = v553 + 4;
                                          v555 = -1;
                                          if ( v553 + 4 >= v553 )
                                            v555 = v553 + 4;
                                          CurrentHardwareID = v554 < v553 ? 0xC0000095 : 0;
                                          if ( v554 >= v553 )
                                          {
                                            v556 = v1175;
                                            v557 = v555 + *((_DWORD *)v8 + 8);
                                            v558 = -1;
                                            if ( v557 >= v555 )
                                              v558 = v555 + *((_DWORD *)v8 + 8);
                                            CurrentHardwareID = v557 < v555 ? 0xC0000095 : 0;
                                            if ( v557 >= v555 )
                                              v556 = v558;
                                            v1175 = v556;
                                          }
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        uAddend[1] = 20;
                                        v559 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
                                        if ( !v559 )
                                        {
                                          CurrentHardwareID = -1073741801;
                                          goto LABEL_685;
                                        }
                                        v928 = (ULONGLONG)v559;
                                        uAddend[0] = 0;
                                        v1176 = 0x10000000;
                                        CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v559, 4uLL, v1329);
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          if ( v562 + 2 > (_DWORD *)((char *)v562 + uAddend[1]) )
                                          {
                                            CurrentHardwareID = -1073741789;
                                            goto LABEL_685;
                                          }
                                          v563 = (int *)v1329[0];
                                          *v562 = v560;
                                          *v563 = v1176;
                                          v561 = ++uAddend[0];
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        v1258 = v1257;
                                        if ( !v928 )
                                        {
                                          v1031 = 12;
                                          v564 = uAddend[1];
                                          v565 = uAddend[1] + 12;
                                          goto LABEL_1443;
                                        }
                                        v566 = (_DWORD *)v928;
                                        v567 = 0;
                                        v1193 = v928;
                                        if ( !v561 )
                                        {
LABEL_1145:
                                          CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v566, 4uLL, v1330);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            if ( (unsigned __int64)(v572 + 3) <= v928 + uAddend[1] )
                                            {
                                              v573 = (_QWORD *)v1330[0];
                                              *v572 = 8;
                                              *v573 = v1258;
                                              ++uAddend[0];
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741789;
                                            }
                                          }
                                          goto LABEL_685;
                                        }
                                        v568 = v1031;
                                        while ( 1 )
                                        {
                                          v569 = -1;
                                          if ( *v566 < 0xFFFFFFFC )
                                            v569 = *v566 + 4;
                                          v570 = -(*v566 >= 0xFFFFFFFC);
                                          if ( (unsigned int)(*v566 + 4) >= 4 )
                                            v568 = v569;
                                          v1031 = v568;
                                          CurrentHardwareID = v570 & 0xC0000095;
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_685;
                                          CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v566, v568, &v1193);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_685;
                                          v566 = (_DWORD *)v1193;
                                          if ( ++v567 >= v571 )
                                            goto LABEL_1145;
                                        }
                                      case 22:
                                        v631 = v934;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1362;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1362;
                                        }
                                        v632 = ullAugend;
                                        v989 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v632, 4uLL, &v989);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1358;
                                          CurrentHardwareID = RtlULongLongAdd(v989, v633, &v989);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1358;
                                          v632 = v989;
                                        }
                                        while ( (unsigned int)(v634 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v989, 4uLL, &v989);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1358:
                                          v635 = v1204;
                                          v636 = v1265;
                                          goto LABEL_1359;
                                        }
                                        v636 = (_QWORD *)v989;
                                        v1204 = v635;
                                        if ( !v635 )
                                          v636 = 0LL;
                                        v1265 = v636;
LABEL_1359:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( v635 != 8 )
                                          goto LABEL_1461;
                                        v1270 = *v636;
LABEL_1362:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( ullAugend )
                                        {
                                          if ( v631 > 4 )
                                          {
                                            v637 = ullAugend;
                                            v990 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v637, 4uLL, &v990);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1375;
                                              CurrentHardwareID = RtlULongLongAdd(v990, v638, &v990);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1375;
                                              v637 = v990;
                                            }
                                            while ( (unsigned int)(v639 + 1) < 4 );
                                            CurrentHardwareID = RtlULongLongAdd(v990, 4uLL, &v990);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1375:
                                              v640 = v1205;
                                              v641 = v1266;
                                              goto LABEL_1376;
                                            }
                                            v641 = (void **)v990;
                                            v1205 = v640;
                                            if ( !v640 )
                                              v641 = 0LL;
                                            v1266 = v641;
LABEL_1376:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_684;
                                            if ( v640 != 8 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_684;
                                            }
                                            v1267 = *v641;
                                            v1225 = v1267;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( ullAugend )
                                        {
                                          if ( v631 > 5 )
                                          {
                                            v642 = ullAugend;
                                            v991 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v642, 4uLL, &v991);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1393;
                                              CurrentHardwareID = RtlULongLongAdd(v991, v643, &v991);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1393;
                                              v642 = v991;
                                            }
                                            while ( (unsigned int)(v644 + 1) < 5 );
                                            CurrentHardwareID = RtlULongLongAdd(v991, 4uLL, &v991);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1393:
                                              v645 = v1206;
                                              v646 = v1268;
                                              goto LABEL_1394;
                                            }
                                            v646 = (unsigned int *)v991;
                                            v1206 = v645;
                                            if ( !v645 )
                                              v646 = 0LL;
                                            v1268 = v646;
LABEL_1394:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_684;
                                            if ( v645 != 4 )
                                              goto LABEL_1461;
                                            Size = *v646;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( Size != 16 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                          goto LABEL_687;
                                        }
                                        if ( !v1225 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_684;
                                        }
                                        v647 = ObReferenceObjectByHandle(
                                                 v1225,
                                                 0,
                                                 (POBJECT_TYPE)IoFileObjectType,
                                                 1,
                                                 &v1269,
                                                 0LL);
                                        v648 = (struct _FILE_OBJECT *)v1269;
                                        CurrentHardwareID = v647;
                                        if ( v647 < 0 )
                                          goto LABEL_1419;
                                        v649 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                                        if ( !v649 )
                                        {
                                          CurrentHardwareID = -1073741801;
                                          goto LABEL_1419;
                                        }
                                        CurrentHardwareID = FsRtlKernelFsControlFile(
                                                              v648,
                                                              590068,
                                                              0LL,
                                                              0,
                                                              v649,
                                                              0x248u,
                                                              &v941);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1418;
                                        if ( v941 < 0x40 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                          goto LABEL_1418;
                                        }
                                        v967.m128i_i64[0] = *v649;
                                        if ( v648->WriteAccess )
                                        {
                                          CurrentHardwareID = FsRtlKernelFsControlFile(
                                                                v648,
                                                                590063,
                                                                0LL,
                                                                0,
                                                                v649,
                                                                0x248u,
                                                                &v941);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1418;
                                          if ( v941 < 8 )
                                          {
                                            CurrentHardwareID = -1073741762;
                                            goto LABEL_1418;
                                          }
                                          v650 = *v649;
                                        }
                                        else
                                        {
                                          CurrentHardwareID = FsRtlKernelFsControlFile(
                                                                v648,
                                                                590059,
                                                                0LL,
                                                                0,
                                                                v649,
                                                                0x248u,
                                                                &v941);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1418;
                                          if ( v941 < 0x40 )
                                          {
                                            CurrentHardwareID = -1073741762;
                                            goto LABEL_1418;
                                          }
                                          v650 = v649[3];
                                        }
                                        v967.m128i_i64[1] = v650;
                                        v1334 = v967;
LABEL_1418:
                                        ExFreePoolWithTag(v649, 0x20534C53u);
LABEL_1419:
                                        if ( v648 )
                                          ObfDereferenceObject(v648);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        v651 = 12;
                                        v652 = -1;
                                        if ( Size < 0xFFFFFFFC )
                                          v652 = Size + 4;
                                        if ( Size + 4 >= 4 )
                                          v651 = v652;
                                        v1061 = v651;
                                        CurrentHardwareID = Size >= 0xFFFFFFFC ? 0xC0000095 : 0;
                                        if ( Size >= 0xFFFFFFFC )
                                          goto LABEL_684;
                                        v653 = v651 + 12;
                                        if ( v653 < 0xC )
                                        {
                                          CurrentHardwareID = -1073741675;
                                          goto LABEL_687;
                                        }
                                        uAddend[1] = v653;
                                        v193 = PagedPool;
                                        v654 = ExAllocatePoolWithTag(PagedPool, v653, 0x20534C53u);
                                        if ( !v654 )
                                        {
                                          CurrentHardwareID = -1073741801;
                                          goto LABEL_685;
                                        }
                                        v928 = (ULONGLONG)v654;
                                        uAddend[0] = 0;
                                        v1271 = v1270;
                                        CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v654, 4uLL, v1333);
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          if ( v656 + 3 > (_DWORD *)((char *)v656 + uAddend[1]) )
                                          {
                                            CurrentHardwareID = -1073741789;
                                            goto LABEL_685;
                                          }
                                          v657 = (_QWORD *)v1333[0];
                                          *v656 = 8;
                                          *v657 = v1271;
                                          v561 = ++uAddend[0];
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        v658 = Size;
                                        if ( !Size )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_685;
                                        }
                                        if ( !v928 )
                                        {
                                          v659 = Size_4;
                                          v660 = Size + 4;
                                          v661 = -1;
                                          if ( Size + 4 >= v655 )
                                            v661 = Size + 4;
                                          if ( v660 >= v655 )
                                            v659 = v661;
                                          Size_4 = v659;
                                          CurrentHardwareID = v660 < v655 ? 0xC0000095 : 0;
                                          if ( v660 >= v655 )
                                          {
                                            v564 = uAddend[1];
                                            v565 = uAddend[1] + v659;
LABEL_1443:
                                            v662 = -1;
                                            if ( v565 >= v564 )
                                              v662 = v565;
                                            CurrentHardwareID = v565 < v564 ? 0xC0000095 : 0;
                                            uAddend[1] = v662;
                                            if ( v565 >= v564 )
                                            {
                                              CurrentHardwareID = 0;
                                              uAddend[0] = v561 + 1;
                                            }
                                          }
                                          goto LABEL_685;
                                        }
                                        v663 = (_DWORD *)v928;
                                        v664 = 0;
                                        v1195 = v928;
                                        if ( v561 )
                                        {
                                          v665 = Size_4;
                                          do
                                          {
                                            v666 = -1;
                                            if ( *v663 < 0xFFFFFFFC )
                                              v666 = *v663 + 4;
                                            v667 = -(*v663 >= 0xFFFFFFFC);
                                            if ( (unsigned int)(*v663 + 4) >= 4 )
                                              v665 = v666;
                                            Size_4 = v665;
                                            CurrentHardwareID = v667 & 0xC0000095;
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_684;
                                            CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v663, v665, &v1195);
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_684;
                                            v663 = (_DWORD *)v1195;
                                            ++v664;
                                          }
                                          while ( v664 < v668 );
                                        }
                                        CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v663, 4uLL, v1335);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_684;
                                        if ( (unsigned __int64)v669 + v658 + 4 <= v928 + uAddend[1] )
                                        {
                                          v670 = (void *)v1335[0];
                                          *v669 = v658;
                                          memmove(v670, &v1334, v658);
                                          ++uAddend[0];
                                          goto LABEL_684;
                                        }
                                        goto LABEL_1461;
                                      case 23:
                                        v574 = (PSID *)qword_1407AC468;
                                        v575 = RtlLengthSid(*(PSID *)(qword_1407AC468 + 384));
                                        v576 = RtlLengthSid(v574[34]) + v575;
                                        v577 = RtlLengthSid(v574[49]) + 32 + v576;
                                        v578 = (ACL *)ExAllocatePoolWithTag(PagedPool, v577, 0x20534C53u);
                                        v579 = v578;
                                        if ( v578 )
                                        {
                                          v580 = RtlCreateAcl(v578, v577, 2u);
                                          if ( v580 < 0
                                            || (v580 = RtlpAddKnownAce((int)v579, 2, 0, 32, v574[48], 0), v580 < 0)
                                            || (v580 = RtlpAddKnownAce((int)v579, 2, 0, 32, v574[49], 0), v580 < 0) )
                                          {
                                            CurrentHardwareID = v580;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = RtlpAddKnownAce((int)v579, 2, 0, 32, v574[34], 0);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              CurrentHardwareID = RtlCreateSecurityDescriptor(v1356, 1u);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                CurrentHardwareID = RtlSetDaclSecurityDescriptor(v1356, 1u, v579, 0);
                                                if ( CurrentHardwareID >= 0 )
                                                {
                                                  SeCaptureSubjectContext(&SubjectSecurityContext);
                                                  v581 = SeAccessCheck(
                                                           v1356,
                                                           &SubjectSecurityContext,
                                                           0,
                                                           0x20u,
                                                           0,
                                                           0LL,
                                                           (PGENERIC_MAPPING)&IopFileMapping,
                                                           1,
                                                           v1243,
                                                           &v1008);
                                                  SeReleaseSubjectContext(&SubjectSecurityContext);
                                                  if ( !v581 )
                                                    CurrentHardwareID = v1008;
                                                }
                                              }
                                            }
                                          }
                                          ExFreePoolWithTag(v579, 0x20534C53u);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            v1177 = 0;
                                            v582 = 0;
                                            v1223 = 8LL;
                                            ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1223, 8u, &v1177);
                                            if ( *((_DWORD *)v929 + 4) == 160 )
                                            {
                                              if ( !memcmp(qword_14074DA40, *((const void **)v929 + 3), 0xA0uLL)
                                                && *((_DWORD *)v8 + 4) == 160
                                                && !memcmp(qword_14074DAE0, v8[3], 0xA0uLL)
                                                && *((_DWORD *)v929 + 8) == 8
                                                && **((_QWORD **)v929 + 5) == 0x35DCEB18766AABAALL
                                                && *((_DWORD *)v8 + 8) == 8
                                                && *(_QWORD *)v8[5] == 0x14CEA8BAE086077CLL )
                                              {
                                                v582 = 1;
                                              }
                                              else if ( !memcmp(qword_14074DEA0, *((const void **)v929 + 3), 0xA0uLL)
                                                     && *((_DWORD *)v8 + 4) == 160
                                                     && !memcmp(qword_14074E260, v8[3], 0xA0uLL)
                                                     && *((_DWORD *)v929 + 8) == 8
                                                     && **((_QWORD **)v929 + 5) == 0xF10D668DB2BB8BB9uLL
                                                     && *((_DWORD *)v8 + 8) == 8
                                                     && *(_QWORD *)v8[5] == 0x768DFD321621EA95LL )
                                              {
                                                v582 = 1;
                                              }
                                              else if ( !memcmp(qword_14074E1C0, *((const void **)v929 + 3), 0xA0uLL)
                                                     && *((_DWORD *)v8 + 4) == 160
                                                     && !memcmp(sub_14074D720, v8[3], 0xA0uLL)
                                                     && *((_DWORD *)v929 + 8) == 8
                                                     && **((_QWORD **)v929 + 5) == 0xA10B922F1A2F2A8AuLL
                                                     && *((_DWORD *)v8 + 8) == 8
                                                     && *(_QWORD *)v8[5] == 0xC349B50B0A716A96uLL )
                                              {
                                                v582 = 1;
                                              }
                                              else if ( !memcmp(qword_14074DC20, *((const void **)v929 + 3), 0xA0uLL)
                                                     && *((_DWORD *)v8 + 4) == 160
                                                     && !memcmp(qword_14074DE00, v8[3], 0xA0uLL)
                                                     && *((_DWORD *)v929 + 8) == 8
                                                     && **((_QWORD **)v929 + 5) == 0xA6723CF736811074uLL
                                                     && *((_DWORD *)v8 + 8) == 8 )
                                              {
                                                v582 = *(_QWORD *)v8[5] == 0x7511056E178DA076LL;
                                              }
                                            }
                                            CurrentHardwareID = -2147024891;
                                            if ( v582 )
                                            {
                                              v1032 = 0;
                                              CurrentHardwareID = 0;
                                              updated = QueryUpdateFileEaAllowedExt(&v1032);
                                              if ( updated == -1073741637
                                                || (CurrentHardwareID = updated, updated >= 0) && v1032 != 1 )
                                              {
                                                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) == 0 )
                                                  CurrentHardwareID = -2147024891;
                                              }
                                            }
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741801;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        v584 = v934;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1218;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1218;
                                        }
                                        v585 = ullAugend;
                                        v1009 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v585, 4uLL, &v1009);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1213;
                                          CurrentHardwareID = RtlULongLongAdd(v1009, v586, &v1009);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1213;
                                          v585 = v1009;
                                        }
                                        while ( (unsigned int)(v587 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v1009, 4uLL, &v1009);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1213:
                                          v588 = v1178;
                                          v589 = v1259;
                                          goto LABEL_1214;
                                        }
                                        v589 = (void **)v1009;
                                        v1178 = v588;
                                        if ( !v588 )
                                          v589 = 0LL;
                                        v1259 = v589;
LABEL_1214:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( v588 != 8 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                          goto LABEL_1344;
                                        }
                                        v1260 = *v589;
                                        Handle = v1260;
LABEL_1218:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( ullAugend )
                                        {
                                          if ( v584 > 4 )
                                          {
                                            v590 = ullAugend;
                                            v986 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v590, 4uLL, &v986);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1231;
                                              CurrentHardwareID = RtlULongLongAdd(v986, v591, &v986);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1231;
                                              v590 = v986;
                                            }
                                            while ( (unsigned int)(v592 + 1) < 4 );
                                            CurrentHardwareID = RtlULongLongAdd(v986, 4uLL, &v986);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1231:
                                              v593 = v1179;
                                              v594 = v1261;
                                              goto LABEL_1232;
                                            }
                                            v594 = (NTSTATUS *)v986;
                                            v1179 = v593;
                                            if ( !v593 )
                                              v594 = 0LL;
                                            v1261 = v594;
LABEL_1232:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_687;
                                            if ( v593 != 4 )
                                            {
                                              CurrentHardwareID = -1073741789;
                                              goto LABEL_1344;
                                            }
                                            v1183 = *v594;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( ullAugend )
                                        {
                                          if ( v584 > 5 )
                                          {
                                            v595 = ullAugend;
                                            v987 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v595, 4uLL, &v987);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1249;
                                              CurrentHardwareID = RtlULongLongAdd(v987, v596, &v987);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1249;
                                              v595 = v987;
                                            }
                                            while ( (unsigned int)(v597 + 1) < 5 );
                                            CurrentHardwareID = RtlULongLongAdd(v987, 4uLL, &v987);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1249:
                                              v598 = v1180;
                                              v599 = v1262;
                                              goto LABEL_1250;
                                            }
                                            v599 = (NTSTATUS *)v987;
                                            v1180 = v598;
                                            if ( !v598 )
                                              v599 = 0LL;
                                            v1262 = v599;
LABEL_1250:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_687;
                                            if ( v598 != 4 )
                                            {
                                              CurrentHardwareID = -1073741789;
                                              goto LABEL_1344;
                                            }
                                            v1182 = *v599;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1344;
                                        }
                                        if ( v584 <= 6 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1344;
                                        }
                                        v600 = ullAugend;
                                        v988 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v600, 4uLL, &v988);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1267;
                                          CurrentHardwareID = RtlULongLongAdd(v988, v601, &v988);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1267;
                                          v600 = v988;
                                        }
                                        while ( (unsigned int)(v603 + 1) < 6 );
                                        CurrentHardwareID = RtlULongLongAdd(v988, 4uLL, &v988);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1267:
                                          v604 = v1181;
                                          v605 = v1263;
                                          goto LABEL_1268;
                                        }
                                        v605 = (_QWORD *)v988;
                                        v1181 = v604;
                                        if ( !v604 )
                                          v605 = v602;
                                        v1263 = v605;
LABEL_1268:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( v604 != 16 )
                                        {
LABEL_984:
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_687;
                                        }
                                        v606 = v602;
                                        AccessStatus = v1182;
                                        v1008 = v1183;
                                        TargetFile[0] = v602;
                                        if ( !Handle )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1343;
                                        }
                                        if ( !v605 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1343;
                                        }
                                        v607 = ObReferenceObjectByHandle(
                                                 Handle,
                                                 0,
                                                 (POBJECT_TYPE)IoFileObjectType,
                                                 1,
                                                 &Object,
                                                 v602);
                                        v608 = (struct _FILE_OBJECT *)Object;
                                        CurrentHardwareID = v607;
                                        if ( v607 < 0 )
                                          goto LABEL_1277;
                                        v609 = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                                        if ( !v609 )
                                        {
                                          CurrentHardwareID = -1073741801;
                                          goto LABEL_1277;
                                        }
                                        v924 = FsRtlKernelFsControlFile(v608, 590068, 0LL, 0, v609, 0x248u, &v970);
                                        if ( v924 < 0 )
                                          goto LABEL_1295;
                                        if ( v970 < 0x40 )
                                          goto LABEL_1294;
                                        v1090[0] = *v609;
                                        v924 = FsRtlKernelFsControlFile(v608, 590059, 0LL, 0, v609, 0x248u, &v970);
                                        if ( v924 < 0 )
                                          goto LABEL_1295;
                                        if ( v970 < 0x40 )
                                        {
LABEL_1294:
                                          v924 = -1073741762;
LABEL_1295:
                                          v613 = v967;
                                        }
                                        else
                                        {
                                          v1090[1] = v609[3];
                                          v613 = *(__m128i *)&v1090[0].LowPart;
                                          v967 = *(__m128i *)&v1090[0].LowPart;
                                        }
                                        ExFreePoolWithTag(v609, 0x20534C53u);
                                        CurrentHardwareID = v924;
                                        if ( v924 < 0 )
                                          goto LABEL_1277;
                                        if ( v613.m128i_i64[0] != *v605 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                          goto LABEL_1277;
                                        }
                                        if ( _mm_srli_si128(v613, 8).m128i_u64[0] != v605[1] )
                                        {
                                          CurrentHardwareID = -1073741762;
                                          goto LABEL_1277;
                                        }
                                        if ( v1008 )
                                        {
                                          v967.m128i_i64[0] = -1LL;
                                          v967.m128i_i64[1] = 0x7FFFFFFFFFFFFFFFLL;
                                          v613 = v967;
                                        }
                                        else
                                        {
                                          if ( ObOpenObjectByPointer(
                                                 v608,
                                                 0x200u,
                                                 0LL,
                                                 0x18u,
                                                 (POBJECT_TYPE)IoFileObjectType,
                                                 0,
                                                 TargetFile) >= 0 )
                                          {
                                            v614 = 0;
                                            if ( (unsigned int)(AccessStatus - 2) <= 1 )
                                              v614 = 6;
                                            ZwSetCachedSigningLevel(2u, v614, TargetFile, 1u, TargetFile[0]);
                                          }
                                          v615 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                                          if ( !v615 )
                                          {
                                            CurrentHardwareID = -1073741801;
                                            goto LABEL_1277;
                                          }
                                          v925 = FsRtlKernelFsControlFile(v608, 590068, 0LL, 0, v615, 0x248u, &v971);
                                          v616 = v925;
                                          if ( v925 >= 0 )
                                          {
                                            if ( v971 >= 0x40 )
                                            {
                                              v967.m128i_i64[0] = *v615;
                                              v925 = FsRtlKernelFsControlFile(v608, 590059, 0LL, 0, v615, 0x248u, &v971);
                                              v616 = v925;
                                              if ( v925 >= 0 )
                                              {
                                                if ( v971 >= 0x40 )
                                                {
                                                  v967.m128i_i64[1] = v615[3];
                                                  v613 = v967;
                                                }
                                                else
                                                {
                                                  v616 = -1073741762;
                                                  v925 = -1073741762;
                                                }
                                              }
                                            }
                                            else
                                            {
                                              v616 = -1073741762;
                                              v925 = -1073741762;
                                            }
                                          }
                                          ExFreePoolWithTag(v615, 0x20534C53u);
                                          if ( v616 < 0 )
                                          {
                                            CurrentHardwareID = v925;
                                            goto LABEL_1277;
                                          }
                                        }
                                        v617 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
                                        v618 = v617;
                                        if ( v617 )
                                        {
                                          memset(v617, 0, 0x3AuLL);
                                          v618[4] = 0;
                                          *((_WORD *)v618 + 3) = 24;
                                          v618[5] = 25;
                                          qmemcpy(v618 + 8, "$Kernel.Purge.AppxFICache", 25);
                                          *(__m128i *)(v618 + 34) = v613;
                                          *(_QWORD *)(v618 + 50) = 0LL;
                                          v606 = (struct _OBJECT_HANDLE_INFORMATION *)v618;
                                          CurrentHardwareID = FsRtlSetKernelEaFile(v608, v618, 58);
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741801;
                                        }
LABEL_1277:
                                        if ( TargetFile[0] )
                                          ZwClose(TargetFile[0]);
                                        if ( v608 )
                                          ObfDereferenceObject(v608);
                                        if ( v606 )
                                          ExFreePoolWithTag(v606, 0x20534C53u);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1343;
                                        v1184 = 0;
                                        if ( v928 )
                                        {
                                          v619 = (_DWORD *)v928;
                                          v1194 = v928;
                                          if ( uAddend[0] )
                                          {
                                            v620 = v1033;
                                            while ( 1 )
                                            {
                                              v621 = -1;
                                              if ( *v619 < 0xFFFFFFFC )
                                                v621 = *v619 + 4;
                                              v622 = -(*v619 >= 0xFFFFFFFC);
                                              if ( (unsigned int)(*v619 + 4) >= 4 )
                                                v620 = v621;
                                              v1033 = v620;
                                              CurrentHardwareID = v622 & 0xC0000095;
                                              if ( CurrentHardwareID < 0 )
                                                break;
                                              CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v619, v620, &v1194);
                                              if ( CurrentHardwareID < 0 )
                                                break;
                                              v619 = (_DWORD *)v1194;
                                              if ( v623 + 1 >= uAddend[0] )
                                                goto LABEL_1330;
                                            }
                                          }
                                          else
                                          {
LABEL_1330:
                                            CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v619, 4uLL, v1331);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( (unsigned __int64)(v625 + 2) > v928 + uAddend[1] )
                                              {
                                                CurrentHardwareID = -1073741789;
                                                goto LABEL_1343;
                                              }
                                              v626 = (_DWORD *)v1331[0];
                                              *v625 = v624;
                                              *v626 = v1184;
                                              ++uAddend[0];
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v1033 = 8;
                                          v610 = uAddend[1];
                                          v611 = -1;
                                          v612 = uAddend[1] + 8;
                                          if ( uAddend[1] + 8 >= uAddend[1] )
                                            v611 = uAddend[1] + 8;
                                          CurrentHardwareID = v612 < uAddend[1] ? 0xC0000095 : 0;
                                          uAddend[1] = v611;
                                          if ( v612 >= v610 )
                                          {
                                            ++uAddend[0];
                                            goto LABEL_1335;
                                          }
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1343;
LABEL_1335:
                                        if ( uAddend[1] )
                                        {
                                          v627 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                          if ( v627 )
                                          {
                                            v928 = (ULONGLONG)v627;
                                            uAddend[0] = 0;
                                            v1185 = 0;
                                            CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v627, 4uLL, v1332);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( v629 + 2 <= (_DWORD *)((char *)v629 + uAddend[1]) )
                                              {
                                                v630 = (_DWORD *)v1332[0];
                                                *v629 = v628;
                                                *v630 = v1185;
                                                ++uAddend[0];
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741789;
                                              }
                                            }
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741801;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741762;
                                        }
LABEL_1343:
                                        v8 = (const void **)v930;
LABEL_1344:
                                        if ( CurrentHardwareID >= 0 )
                                          goto LABEL_323;
                                        goto LABEL_687;
                                      case 24:
                                        v671 = v934;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1478;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1478;
                                        }
                                        v672 = ullAugend;
                                        v992 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v672, 4uLL, &v992);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1474;
                                          CurrentHardwareID = RtlULongLongAdd(v992, v673, &v992);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1474;
                                          v672 = v992;
                                        }
                                        while ( (unsigned int)(v674 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v992, 4uLL, &v992);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1474:
                                          v675 = v1207;
                                          v676 = v1272;
                                          goto LABEL_1475;
                                        }
                                        v676 = (_QWORD *)v992;
                                        v1207 = v675;
                                        if ( !v675 )
                                          v676 = 0LL;
                                        v1272 = v676;
LABEL_1475:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1572;
                                        if ( v675 == 8 )
                                        {
                                          v1277 = *v676;
LABEL_1478:
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1572;
                                          if ( ullAugend )
                                          {
                                            if ( v671 > 4 )
                                            {
                                              v677 = ullAugend;
                                              v993 = ullAugend;
                                              do
                                              {
                                                CurrentHardwareID = RtlULongLongAdd(v677, 4uLL, &v993);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_1491;
                                                CurrentHardwareID = RtlULongLongAdd(v993, v678, &v993);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_1491;
                                                v677 = v993;
                                              }
                                              while ( (unsigned int)(v679 + 1) < 4 );
                                              CurrentHardwareID = RtlULongLongAdd(v993, 4uLL, &v993);
                                              if ( CurrentHardwareID < 0 )
                                              {
LABEL_1491:
                                                v680 = v1208;
                                                v681 = v1273;
                                                goto LABEL_1492;
                                              }
                                              v681 = (void **)v993;
                                              v1208 = v680;
                                              if ( !v680 )
                                                v681 = 0LL;
                                              v1273 = v681;
LABEL_1492:
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1572;
                                              if ( v680 != 8 )
                                              {
                                                CurrentHardwareID = -1073741762;
                                                goto LABEL_1572;
                                              }
                                              v1274 = *v681;
                                              v1226 = v1274;
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741811;
                                            }
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1572;
                                          v682 = 0LL;
                                          v683 = 0LL;
                                          if ( !v1226 )
                                          {
                                            CurrentHardwareID = -1073741811;
                                            goto LABEL_1572;
                                          }
                                          v684 = ObReferenceObjectByHandle(
                                                   v1226,
                                                   0,
                                                   (POBJECT_TYPE)IoFileObjectType,
                                                   1,
                                                   &v1210,
                                                   0LL);
                                          v685 = (struct _FILE_OBJECT *)v1210;
                                          CurrentHardwareID = v684;
                                          v193 = PagedPool;
                                          if ( v684 >= 0 )
                                          {
                                            v686 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
                                            v682 = v686;
                                            if ( v686 )
                                            {
                                              *(_QWORD *)v686 = 0LL;
                                              *((_QWORD *)v686 + 1) = 0LL;
                                              *((_QWORD *)v686 + 2) = 0LL;
                                              *((_DWORD *)v686 + 6) = 0;
                                              v686[29] = 0;
                                              v686[4] = 25;
                                              *(_DWORD *)v686 = 0;
                                              strcpy(v686 + 5, "$Kernel.Purge.AppxFICac");
                                              strcpy(v686 + 29, "e");
                                              v687 = ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
                                              v683 = (__int64)v687;
                                              if ( v687 )
                                              {
                                                memset(v687, 0, 0x3AuLL);
                                                v688 = FsRtlQueryKernelEaFile(
                                                         v685,
                                                         v683,
                                                         58,
                                                         1,
                                                         (__int64)v682,
                                                         31,
                                                         0LL,
                                                         1,
                                                         &v1214);
                                                v926 = v688;
                                                CurrentHardwareID = v688;
                                                if ( v688 == -1073741275 )
                                                {
                                                  v975 = 0;
                                                  CurrentHardwareID = 0;
                                                }
                                                else if ( v688 >= 0 )
                                                {
                                                  v689 = *(unsigned __int16 *)(v683 + 6);
                                                  v690 = *(unsigned __int8 *)(v683 + 5) + v683 + 9;
                                                  v1210 = (PVOID)v690;
                                                  if ( v690 + v689 <= v683 + (unsigned __int64)v1214 )
                                                  {
                                                    if ( (_WORD)v689 )
                                                    {
                                                      if ( (_DWORD)v689 == 24 )
                                                      {
                                                        Source2 = 0LL;
                                                        if ( RtlCompareMemory((const void *)(v690 + 16), &Source2, 8uLL) == 8 )
                                                        {
                                                          v691 = 2;
                                                          v692 = (__int64 *)ExAllocatePoolWithTag(
                                                                              PagedPool,
                                                                              0x248uLL,
                                                                              0x20534C53u);
                                                          if ( v692 )
                                                          {
                                                            v693 = FsRtlKernelFsControlFile(
                                                                     v685,
                                                                     590068,
                                                                     0LL,
                                                                     0,
                                                                     v692,
                                                                     0x248u,
                                                                     &v974);
                                                            if ( v693 >= 0 )
                                                            {
                                                              if ( v974 >= 0x40 )
                                                              {
                                                                v967.m128i_i64[0] = *v692;
                                                                v693 = FsRtlKernelFsControlFile(
                                                                         v685,
                                                                         590059,
                                                                         0LL,
                                                                         0,
                                                                         v692,
                                                                         0x248u,
                                                                         &v974);
                                                                if ( v693 >= 0 )
                                                                {
                                                                  if ( v974 >= 0x40 )
                                                                    v967.m128i_i64[1] = v692[3];
                                                                  else
                                                                    v693 = -1073741762;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v693 = -1073741762;
                                                              }
                                                            }
                                                            ExFreePoolWithTag(v692, 0x20534C53u);
                                                            if ( v693 >= 0 && *(_OWORD *)&v967 == *(_OWORD *)v1210 )
                                                              v691 = 3;
                                                          }
                                                          CurrentHardwareID = v926;
                                                          v975 = v691;
                                                          v193 = PagedPool;
                                                        }
                                                        else
                                                        {
                                                          CurrentHardwareID = -1073741762;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        CurrentHardwareID = -1073741762;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v975 = 0;
                                                      CurrentHardwareID = 0;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    CurrentHardwareID = -1073741762;
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741801;
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741801;
                                            }
                                          }
                                          if ( v685 )
                                            ObfDereferenceObject(v685);
                                          if ( v682 )
                                            ExFreePoolWithTag(v682, 0x20534C53u);
                                          if ( v683 )
                                            ExFreePoolWithTag((PVOID)v683, 0x20534C53u);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1544;
                                          v968 = 0;
                                          v694 = RtlUIntAdd(4u, 8u, &v1215);
                                          v695 = v1034;
                                          CurrentHardwareID = v694;
                                          if ( v694 >= 0 )
                                            v695 = v1215;
                                          v1034 = v695;
                                          if ( v694 < 0 )
                                            goto LABEL_1544;
                                          CurrentHardwareID = RtlUIntAdd(0, v695, &v968);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1544;
                                          v696 = RtlUIntAdd(4u, 4u, &v1216);
                                          CurrentHardwareID = v696;
                                          if ( v696 >= 0 )
                                            v697 = v1216;
                                          v1034 = v697;
                                          if ( v696 < 0
                                            || (CurrentHardwareID = RtlUIntAdd(v968, v697, &v968), CurrentHardwareID < 0) )
                                          {
LABEL_1544:
                                            v8 = (const void **)v930;
                                            goto LABEL_1574;
                                          }
                                          uAddend[1] = v968;
                                          if ( !v968 )
                                          {
                                            CurrentHardwareID = -1073741762;
                                            goto LABEL_1544;
                                          }
                                          v698 = ExAllocatePoolWithTag(PagedPool, v968, 0x20534C53u);
                                          if ( !v698 )
                                          {
                                            v8 = (const void **)v930;
                                            CurrentHardwareID = -1073741801;
                                            goto LABEL_1574;
                                          }
                                          v928 = (ULONGLONG)v698;
                                          uAddend[0] = 0;
                                          v1278 = v1277;
                                          CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v698, 4uLL, v1336);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            if ( v700 + 3 > (_DWORD *)((char *)v700 + uAddend[1]) )
                                            {
                                              v8 = (const void **)v930;
                                              CurrentHardwareID = -1073741789;
                                              goto LABEL_1574;
                                            }
                                            v702 = (_QWORD *)v1336[0];
                                            *v700 = 8;
                                            *v702 = v1278;
                                            v701 = ++uAddend[0];
                                          }
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1544;
                                          v1092 = v975;
                                          if ( v928 )
                                          {
                                            v705 = (UINT *)v928;
                                            v706 = 0;
                                            v1196 = v928;
                                            if ( v701 )
                                            {
                                              v707 = v976;
                                              while ( 1 )
                                              {
                                                v708 = RtlUIntAdd(4u, *v705, &v1091);
                                                CurrentHardwareID = v708;
                                                if ( v708 >= 0 )
                                                  v707 = v1091;
                                                v976 = v707;
                                                if ( v708 < 0 )
                                                  break;
                                                CurrentHardwareID = RtlULongLongAdd(v709, v707, &v1196);
                                                if ( CurrentHardwareID < 0 )
                                                  break;
                                                v705 = (UINT *)v1196;
                                                if ( ++v706 >= v710 )
                                                  goto LABEL_1565;
                                              }
                                              v193 = PagedPool;
                                            }
                                            else
                                            {
LABEL_1565:
                                              v711 = RtlULongLongAdd((ULONGLONG)v705, 4uLL, v1337);
                                              v193 = v712 - 3;
                                              CurrentHardwareID = v711;
                                              if ( v711 >= 0 )
                                              {
                                                if ( (unsigned __int64)(v713 + 2) <= v928 + uAddend[1] )
                                                {
                                                  v714 = (int *)v1337[0];
                                                  *v713 = v712;
                                                  *v714 = v1092;
                                                  ++uAddend[0];
                                                }
                                                else
                                                {
                                                  CurrentHardwareID = -1073741789;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            v703 = RtlUIntAdd(v699, v699, &v1217);
                                            v704 = v976;
                                            CurrentHardwareID = v703;
                                            if ( v703 >= 0 )
                                              v704 = v1217;
                                            v976 = v704;
                                            if ( v703 >= 0 )
                                            {
                                              CurrentHardwareID = RtlUIntAdd(uAddend[1], v704, &uAddend[1]);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                ++uAddend[0];
                                                CurrentHardwareID = 0;
                                              }
                                            }
                                          }
                                          v8 = (const void **)v930;
                                          goto LABEL_1574;
                                        }
                                        goto LABEL_1571;
                                      case 30:
                                        v1083 = 0LL;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 > 3 )
                                          {
                                            v717 = ullAugend;
                                            v994 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v717, 4uLL, &v994);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1603;
                                              CurrentHardwareID = RtlULongLongAdd(v994, v718, &v994);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1603;
                                              v717 = v994;
                                            }
                                            while ( (unsigned int)(v719 + 1) < 3 );
                                            CurrentHardwareID = RtlULongLongAdd(v994, 4uLL, &v994);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1603:
                                              v720 = v1038;
                                              v721 = psz;
                                              goto LABEL_1604;
                                            }
                                            v721 = (const wchar_t *)v994;
                                            v1038 = v720;
                                            if ( !v720 )
                                              v721 = 0LL;
                                            psz = v721;
LABEL_1604:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1653;
                                            if ( v720 )
                                            {
                                              if ( (v720 & 1) != 0 )
                                              {
                                                CurrentHardwareID = -1073741762;
                                              }
                                              else if ( v721[((unsigned __int64)v720 >> 1) - 1] )
                                              {
                                                CurrentHardwareID = -1073741762;
                                              }
                                              else if ( StringCbLengthW(v721, v720, &v1280) >= 0 )
                                              {
                                                if ( v1280 + 2 == v1038 )
                                                {
                                                  v1281 = (void *)psz;
                                                  v1039 = v1280 >> 1;
                                                  goto LABEL_1616;
                                                }
                                                CurrentHardwareID = -1073741762;
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741762;
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741762;
                                            }
LABEL_1622:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1653;
                                            if ( ullAugend )
                                            {
                                              if ( (unsigned int)v934 > 4 )
                                              {
                                                v726 = ullAugend;
                                                v995 = ullAugend;
                                                do
                                                {
                                                  CurrentHardwareID = RtlULongLongAdd(v726, 4uLL, &v995);
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_1635;
                                                  CurrentHardwareID = RtlULongLongAdd(v995, v727, &v995);
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_1635;
                                                  v726 = v995;
                                                }
                                                while ( (unsigned int)(v728 + 1) < 4 );
                                                CurrentHardwareID = RtlULongLongAdd(v995, 4uLL, &v995);
                                                if ( CurrentHardwareID < 0 )
                                                {
LABEL_1635:
                                                  v729 = v1098;
                                                  v730 = v1282;
                                                  goto LABEL_1636;
                                                }
                                                v730 = (int *)v995;
                                                v1098 = v729;
                                                if ( !v729 )
                                                  v730 = 0LL;
                                                v1282 = v730;
LABEL_1636:
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_1653;
                                                if ( v729 != 4 )
                                                {
                                                  CurrentHardwareID = -1073741789;
                                                  goto LABEL_1653;
                                                }
                                                v1018 = *v730;
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741811;
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741811;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1653;
                                            v1040 = 0;
                                            v731 = RtlUIntAdd(4u, 4u, &v1099);
                                            v732 = v1016;
                                            CurrentHardwareID = v731;
                                            if ( v731 >= 0 )
                                              v732 = v1099;
                                            v1016 = v732;
                                            if ( v731 < 0 )
                                            {
                                              v734 = v1016;
                                            }
                                            else
                                            {
                                              v733 = RtlUIntAdd(0, v732, &v1040);
                                              v734 = v1016;
                                              CurrentHardwareID = v733;
                                              if ( v733 >= 0 )
                                                v734 = v1040;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1653;
                                            if ( qword_1407AC0B0 )
                                            {
                                              ExFreePoolWithTag(qword_1407AC0B0, 0x20534C53u);
                                              qword_1407AC0B0 = 0LL;
                                            }
                                            stru_1407AC238.Length = 0;
                                            stru_1407AC238.Buffer = 0LL;
                                            v735 = 2LL * v1100;
                                            if ( v735 <= 0xFFFFFFFF )
                                            {
                                              CurrentHardwareID = RtlUIntAdd(v735, 2u, &v1101);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                if ( v1101 )
                                                {
                                                  v736 = v1101;
                                                  v737 = ExAllocatePoolWithTag(PagedPool, v1101, 0x20534C53u);
                                                  if ( v737 )
                                                  {
                                                    qword_1407AC0B0 = v737;
                                                    memset(v737, 0, v736);
                                                    memmove(qword_1407AC0B0, v1083, (unsigned int)v735);
                                                    RtlInitUnicodeString(&stru_1407AC238, (PCWSTR)qword_1407AC0B0);
                                                    dword_1407AC0EC = v1018;
                                                    v1041 = 8;
                                                    CurrentHardwareID = RtlUIntAdd(8u, v734, &v1041);
                                                    if ( CurrentHardwareID >= 0 )
                                                    {
                                                      v738 = (v1041 + 7) & 0xFFFFFFF8;
                                                      if ( v738 >= v1041 )
                                                      {
                                                        v1042 = (v1041 + 7) & 0xFFFFFFF8;
                                                        v740 = RtlUIntAdd(v738, 8u, &v1042);
                                                        v739 = v1018;
                                                        CurrentHardwareID = v740;
                                                        if ( v740 >= 0 )
                                                          v739 = v1042;
                                                      }
                                                      else
                                                      {
                                                        v739 = v1018;
                                                        CurrentHardwareID = -1073741675;
                                                      }
                                                      if ( CurrentHardwareID < 0 )
                                                        goto LABEL_1653;
                                                      v945 = 4;
                                                      CurrentHardwareID = RtlUIntAdd(4u, v739, &v945);
                                                      if ( CurrentHardwareID >= 0 )
                                                      {
                                                        CurrentHardwareID = RtlUIntAdd(v945, v741, &v945);
                                                        if ( CurrentHardwareID >= 0 )
                                                        {
                                                          CurrentHardwareID = RtlUIntAdd(
                                                                                v945,
                                                                                *((_DWORD *)v8 + 4),
                                                                                &v945);
                                                          if ( CurrentHardwareID >= 0 )
                                                          {
                                                            CurrentHardwareID = RtlUIntAdd(v945, 4u, &v945);
                                                            if ( CurrentHardwareID >= 0 )
                                                            {
                                                              CurrentHardwareID = RtlUIntAdd(
                                                                                    v945,
                                                                                    *((_DWORD *)v8 + 8),
                                                                                    &v945);
                                                              v742 = v1102;
                                                              if ( CurrentHardwareID >= 0 )
                                                                v742 = v945;
                                                              v1102 = v742;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    if ( CurrentHardwareID >= 0 )
                                                    {
                                                      uAddend[1] = v734;
                                                      v193 = PagedPool;
                                                      if ( v734 )
                                                      {
                                                        v743 = ExAllocatePoolWithTag(PagedPool, v734, 0x20534C53u);
                                                        if ( v743 )
                                                        {
                                                          v928 = (ULONGLONG)v743;
                                                          uAddend[0] = 0;
                                                          v1103 = 0;
                                                          CurrentHardwareID = RtlULongLongAdd(
                                                                                (ULONGLONG)v743,
                                                                                4uLL,
                                                                                v1340);
                                                          if ( CurrentHardwareID >= 0 )
                                                          {
                                                            if ( v745 + 2 <= (_DWORD *)((char *)v745 + uAddend[1]) )
                                                            {
                                                              v746 = (_DWORD *)v1340[0];
                                                              *v745 = v744;
                                                              *v746 = v1103;
                                                              ++uAddend[0];
                                                            }
                                                            else
                                                            {
                                                              CurrentHardwareID = -1073741789;
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          CurrentHardwareID = -1073741801;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        CurrentHardwareID = -1073741762;
                                                      }
LABEL_1654:
                                                      if ( v1083 )
                                                      {
                                                        ExFreePoolWithTag(v1083, 0x20534C53u);
                                                        v1083 = 0LL;
                                                      }
                                                      v9 = (unsigned int *)v929;
                                                      if ( CurrentHardwareID < 0 )
                                                        goto LABEL_688;
                                                      goto LABEL_325;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    CurrentHardwareID = -1073741801;
                                                  }
                                                }
                                                else
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                }
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741675;
                                            }
LABEL_1653:
                                            v193 = PagedPool;
                                            goto LABEL_1654;
                                          }
                                          CurrentHardwareID = -1073741811;
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
LABEL_1616:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1653;
                                        v722 = 2 * v1039 + 2;
                                        if ( 2 * v1039 == -2 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                        }
                                        else
                                        {
                                          v723 = v722;
                                          v724 = ExAllocatePoolWithTag(PagedPool, v722, 0x20534C53u);
                                          v725 = v724;
                                          if ( v724 )
                                          {
                                            CurrentHardwareID = 0;
                                            memmove(v724, v1281, v723);
                                            v1100 = v1039;
                                            v1083 = v725;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741801;
                                          }
                                        }
                                        goto LABEL_1622;
                                      case 31:
                                        stru_1407AC238.Length = 0;
                                        stru_1407AC238.Buffer = 0LL;
                                        if ( qword_1407AC0B0 )
                                        {
                                          ExFreePoolWithTag(qword_1407AC0B0, 0x20534C53u);
                                          qword_1407AC0B0 = 0LL;
                                        }
                                        dword_1407AC0EC = 0;
                                        dword_1407AC0D0 = 0;
                                        v1080 = 0;
                                        v767 = RtlUIntAdd(4u, 4u, &v1108);
                                        v768 = v962;
                                        CurrentHardwareID = v767;
                                        if ( v767 >= 0 )
                                          v768 = v1108;
                                        v962 = v768;
                                        if ( v767 < 0 )
                                        {
                                          v770 = v962;
                                        }
                                        else
                                        {
                                          v769 = RtlUIntAdd(0, v768, &v1080);
                                          v770 = v962;
                                          CurrentHardwareID = v769;
                                          if ( v769 >= 0 )
                                            v770 = v1080;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1771;
                                        v1079 = 8;
                                        CurrentHardwareID = RtlUIntAdd(8u, v770, &v1079);
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1762;
                                        v772 = (v1079 + 7) & 0xFFFFFFF8;
                                        if ( v772 >= v1079 )
                                        {
                                          v1078 = (v1079 + 7) & 0xFFFFFFF8;
                                          v774 = RtlUIntAdd(v772, 8u, &v1078);
                                          v773 = v962;
                                          CurrentHardwareID = v774;
                                          if ( v774 >= 0 )
                                            v773 = v1078;
                                        }
                                        else
                                        {
                                          v773 = v962;
                                          CurrentHardwareID = -1073741675;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1771;
                                        v947 = 4;
                                        CurrentHardwareID = RtlUIntAdd(4u, v773, &v947);
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          CurrentHardwareID = RtlUIntAdd(v947, v775, &v947);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            CurrentHardwareID = RtlUIntAdd(v947, *((_DWORD *)v8 + 4), &v947);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              CurrentHardwareID = RtlUIntAdd(v947, 4u, &v947);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                CurrentHardwareID = RtlUIntAdd(v947, *((_DWORD *)v8 + 8), &v947);
                                                v776 = v1109;
                                                if ( CurrentHardwareID >= 0 )
                                                  v776 = v947;
                                                v1109 = v776;
                                              }
                                            }
                                          }
                                        }
LABEL_1762:
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1771:
                                          v193 = PagedPool;
                                        }
                                        else
                                        {
                                          uAddend[1] = v771;
                                          v193 = PagedPool;
                                          if ( v771 )
                                          {
                                            v777 = ExAllocatePoolWithTag(PagedPool, v771, 0x20534C53u);
                                            if ( v777 )
                                            {
                                              v928 = (ULONGLONG)v777;
                                              uAddend[0] = 0;
                                              v1110 = 0;
                                              CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v777, 4uLL, v1342);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                if ( v779 + 2 <= (_DWORD *)((char *)v779 + uAddend[1]) )
                                                {
                                                  v780 = (_DWORD *)v1342[0];
                                                  *v779 = v778;
                                                  *v780 = v1110;
                                                  ++uAddend[0];
                                                }
                                                else
                                                {
                                                  CurrentHardwareID = -1073741789;
                                                }
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741801;
                                            }
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741762;
                                          }
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        goto LABEL_686;
                                      case 37:
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1701;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_1701;
                                        }
                                        v747 = ullAugend;
                                        v996 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v747, 4uLL, &v996);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1697;
                                          CurrentHardwareID = RtlULongLongAdd(v996, v748, &v996);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1697;
                                          v747 = v996;
                                        }
                                        while ( (unsigned int)(v749 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v996, 4uLL, &v996);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1697:
                                          v750 = v1104;
                                          v751 = v1283;
                                          goto LABEL_1698;
                                        }
                                        v751 = (int *)v996;
                                        v1104 = v750;
                                        if ( !v750 )
                                          v751 = 0LL;
                                        v1283 = v751;
LABEL_1698:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1572;
                                        if ( v750 != 4 )
                                          goto LABEL_1571;
                                        v1106 = *v751;
LABEL_1701:
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          v1043 = 0;
                                          v752 = RtlUIntAdd(4u, 4u, &v1105);
                                          v753 = v957;
                                          CurrentHardwareID = v752;
                                          if ( v752 >= 0 )
                                            v753 = v1105;
                                          v957 = v753;
                                          if ( v752 < 0 )
                                          {
                                            v755 = v957;
                                          }
                                          else
                                          {
                                            v754 = RtlUIntAdd(0, v753, &v1043);
                                            v755 = v957;
                                            CurrentHardwareID = v754;
                                            if ( v754 >= 0 )
                                              v755 = v1043;
                                          }
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            v1044 = 8;
                                            CurrentHardwareID = RtlUIntAdd(8u, v755, &v1044);
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1727;
                                            v757 = (v1044 + 7) & 0xFFFFFFF8;
                                            if ( v757 >= v1044 )
                                            {
                                              v1069 = (v1044 + 7) & 0xFFFFFFF8;
                                              v759 = RtlUIntAdd(v757, 8u, &v1069);
                                              v758 = v957;
                                              CurrentHardwareID = v759;
                                              if ( v759 >= 0 )
                                                v758 = v1069;
                                            }
                                            else
                                            {
                                              v758 = v957;
                                              CurrentHardwareID = -1073741675;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1727:
                                              v762 = v957;
                                            }
                                            else
                                            {
                                              v946 = 4;
                                              CurrentHardwareID = RtlUIntAdd(4u, v758, &v946);
                                              if ( CurrentHardwareID < 0
                                                || (CurrentHardwareID = RtlUIntAdd(v946, v760, &v946),
                                                    CurrentHardwareID < 0)
                                                || (CurrentHardwareID = RtlUIntAdd(v946, *((_DWORD *)v8 + 4), &v946),
                                                    CurrentHardwareID < 0)
                                                || (CurrentHardwareID = RtlUIntAdd(v946, 4u, &v946),
                                                    CurrentHardwareID < 0) )
                                              {
                                                v761 = v1081;
                                              }
                                              else
                                              {
                                                CurrentHardwareID = RtlUIntAdd(v946, *((_DWORD *)v8 + 8), &v946);
                                                v761 = v1081;
                                                if ( CurrentHardwareID >= 0 )
                                                  v761 = v946;
                                                v1081 = v761;
                                              }
                                              v762 = v957;
                                              if ( CurrentHardwareID >= 0 )
                                                v762 = v761;
                                            }
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( v951 >= v762 )
                                                dword_1407AC0D0 = v1106;
                                              uAddend[1] = v756;
                                              v193 = PagedPool;
                                              if ( v756 )
                                              {
                                                v763 = ExAllocatePoolWithTag(PagedPool, v756, 0x20534C53u);
                                                if ( v763 )
                                                {
                                                  v928 = (ULONGLONG)v763;
                                                  uAddend[0] = 0;
                                                  v1107 = 0;
                                                  CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v763, 4uLL, v1341);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    if ( v765 + 2 <= (_DWORD *)((char *)v765 + uAddend[1]) )
                                                    {
                                                      v766 = (_DWORD *)v1341[0];
                                                      *v765 = v764;
                                                      *v766 = v1107;
                                                      ++uAddend[0];
                                                    }
                                                    else
                                                    {
                                                      CurrentHardwareID = -1073741789;
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  CurrentHardwareID = -1073741801;
                                                }
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741762;
                                              }
                                              goto LABEL_1574;
                                            }
                                          }
                                        }
                                        goto LABEL_1572;
                                      case 100:
                                        v422 = SPCallServerHandleUpdateLicense(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v422;
                                        if ( v422 >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 101:
                                        v424 = SPCallServerHandleRemoveLicense(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v424;
                                        if ( v424 >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 102:
                                        v858 = sub_140729A58(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v858;
                                        if ( v858 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 103:
                                        v860 = sub_140726B4C(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v860;
                                        if ( v860 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 104:
                                        v862 = sub_140729EF8(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v862;
                                        if ( v862 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 105:
                                        LicenseChallenge = SPCallServerHandleGetLicenseChallenge(
                                                             &v934,
                                                             v8,
                                                             v104,
                                                             uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = LicenseChallenge;
                                        if ( LicenseChallenge >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 106:
                                        v782 = sub_140728F7C(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v782;
                                        if ( v782 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 107:
                                        v783 = sub_140262394((__int64)&v934, (__int64)v8, v104, (__int64)uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v783;
                                        if ( v783 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 109:
                                        v1084 = 0LL;
                                        v1085 = 0LL;
                                        v1232 = 0LL;
                                        v1359 = 0uLL;
                                        if ( !v8 )
                                          goto LABEL_1802;
                                        if ( !ullAugend )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_428;
                                        }
                                        if ( (unsigned int)v934 <= 3 )
                                        {
                                          CurrentHardwareID = -1073741811;
                                          goto LABEL_428;
                                        }
                                        v269 = ullAugend;
                                        v997 = ullAugend;
                                        do
                                        {
                                          CurrentHardwareID = RtlULongLongAdd(v269, 4uLL, &v997);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1806;
                                          CurrentHardwareID = RtlULongLongAdd(v997, v270, &v997);
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_1806;
                                          v269 = v997;
                                        }
                                        while ( (unsigned int)(v271 + 1) < 3 );
                                        CurrentHardwareID = RtlULongLongAdd(v997, 4uLL, &v997);
                                        if ( CurrentHardwareID < 0 )
                                        {
LABEL_1806:
                                          v272 = v1111;
                                          v273 = v1284;
                                          goto LABEL_425;
                                        }
                                        v1111 = v272;
                                        if ( v272 )
                                          v273 = (_QWORD *)v997;
                                        else
                                          v273 = 0LL;
                                        v1284 = v273;
LABEL_425:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( v272 != 8 )
                                        {
                                          CurrentHardwareID = -1073741789;
                                          goto LABEL_564;
                                        }
                                        v1291 = *v273;
LABEL_428:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 <= 4 )
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                          else
                                          {
                                            v274 = ullAugend;
                                            v998 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v274, 4uLL, &v998);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1811;
                                              CurrentHardwareID = RtlULongLongAdd(v998, v275, &v998);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1811;
                                              v274 = v998;
                                            }
                                            while ( (unsigned int)(v276 + 1) < 4 );
                                            CurrentHardwareID = RtlULongLongAdd(v998, 4uLL, &v998);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1811:
                                              v277 = v1112;
                                              v278 = v1285;
                                              goto LABEL_439;
                                            }
                                            v1112 = v277;
                                            if ( v277 )
                                              v278 = (_DWORD *)v998;
                                            else
                                              v278 = 0LL;
                                            v1285 = v278;
LABEL_439:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_687;
                                            if ( v277 != 4 )
                                            {
                                              CurrentHardwareID = -1073741789;
                                              goto LABEL_564;
                                            }
                                            v1116 = *v278;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_687;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 > 5 )
                                          {
                                            v279 = ullAugend;
                                            v999 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v279, 4uLL, &v999);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1816;
                                              CurrentHardwareID = RtlULongLongAdd(v999, v280, &v999);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1816;
                                              v279 = v999;
                                            }
                                            while ( (unsigned int)(v281 + 1) < 5 );
                                            CurrentHardwareID = RtlULongLongAdd(v999, 4uLL, &v999);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1816:
                                              v282 = v1074;
                                              v283 = v1230;
                                              goto LABEL_453;
                                            }
                                            v1074 = v282;
                                            if ( v282 )
                                              v283 = (const wchar_t *)v999;
                                            else
                                              v283 = 0LL;
                                            v1230 = (wchar_t *)v283;
LABEL_453:
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( !v282
                                                || (v282 & 1) != 0
                                                || v283[((unsigned __int64)v282 >> 1) - 1]
                                                || StringCbLengthW(v283, v282, &v1286) < 0
                                                || v1286 + 2 != v1074 )
                                              {
                                                CurrentHardwareID = -1073741762;
                                                goto LABEL_464;
                                              }
                                              v1287 = v1230;
                                              v1073 = v1286 >> 1;
                                              goto LABEL_460;
                                            }
LABEL_464:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_560;
                                            if ( ullAugend )
                                            {
                                              if ( (unsigned int)v934 <= 6 )
                                              {
                                                CurrentHardwareID = -1073741811;
                                              }
                                              else
                                              {
                                                v287 = ullAugend;
                                                v1000 = ullAugend;
                                                do
                                                {
                                                  CurrentHardwareID = RtlULongLongAdd(v287, 4uLL, &v1000);
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_1824;
                                                  CurrentHardwareID = RtlULongLongAdd(v1000, v288, &v1000);
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_1824;
                                                  v287 = v1000;
                                                }
                                                while ( (unsigned int)(v289 + 1) < 6 );
                                                CurrentHardwareID = RtlULongLongAdd(v1000, 4uLL, &v1000);
                                                if ( CurrentHardwareID < 0 )
                                                {
LABEL_1824:
                                                  v290 = v1072;
                                                  v291 = v1231;
                                                  goto LABEL_475;
                                                }
                                                v1072 = v290;
                                                if ( v290 )
                                                  v291 = (const wchar_t *)v1000;
                                                else
                                                  v291 = 0LL;
                                                v1231 = (wchar_t *)v291;
LABEL_475:
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_560;
                                                if ( !v290 )
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                  goto LABEL_486;
                                                }
                                                if ( (v290 & 1) != 0 )
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                  goto LABEL_486;
                                                }
                                                if ( v291[((unsigned __int64)v290 >> 1) - 1] )
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                  goto LABEL_486;
                                                }
                                                if ( StringCbLengthW(v291, v290, &v1211) < 0 )
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                  goto LABEL_486;
                                                }
                                                if ( v1211 + 2 != v1072 )
                                                {
                                                  CurrentHardwareID = -1073741762;
                                                  goto LABEL_486;
                                                }
                                                v1289 = v1231;
                                                v1050 = v1211 >> 1;
                                              }
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741811;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_560;
                                            if ( 2 * v1050 == -2 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                            }
                                            else
                                            {
                                              v292 = 2 * v1050 + 2;
                                              v293 = ExAllocatePoolWithTag(PagedPool, v292, 0x20534C53u);
                                              v294 = v293;
                                              if ( v293 )
                                              {
                                                CurrentHardwareID = 0;
                                                memmove(v293, v1289, v292);
                                                v1288 = v1050;
                                                v1085 = v294;
                                              }
                                              else
                                              {
                                                CurrentHardwareID = -1073741801;
                                              }
                                            }
LABEL_486:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_560;
                                            if ( !ullAugend )
                                            {
                                              CurrentHardwareID = -1073741811;
                                              goto LABEL_560;
                                            }
                                            if ( (unsigned int)v934 <= 7 )
                                            {
                                              CurrentHardwareID = -1073741811;
                                              goto LABEL_560;
                                            }
                                            v295 = ullAugend;
                                            v1001 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v295, 4uLL, &v1001);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1834;
                                              CurrentHardwareID = RtlULongLongAdd(v1001, v296, &v1001);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1834;
                                              v295 = v1001;
                                            }
                                            while ( (unsigned int)(v297 + 1) < 7 );
                                            CurrentHardwareID = RtlULongLongAdd(v1001, 4uLL, &v1001);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1834:
                                              v298 = v1113;
                                              goto LABEL_497;
                                            }
                                            v299 = v1001;
                                            v1113 = v298;
                                            if ( !v298 )
                                              v299 = 0LL;
                                            v1232 = v299;
LABEL_497:
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( (unsigned int)v934 <= 8 )
                                              {
                                                CurrentHardwareID = -1073741811;
                                                goto LABEL_510;
                                              }
                                              v300 = ullAugend;
                                              v1002 = ullAugend;
                                              do
                                              {
                                                CurrentHardwareID = RtlULongLongAdd(v300, 4uLL, &v1002);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_1837;
                                                CurrentHardwareID = RtlULongLongAdd(v1002, v301, &v1002);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_1837;
                                                v300 = v1002;
                                              }
                                              while ( (unsigned int)(v302 + 1) < 8 );
                                              CurrentHardwareID = RtlULongLongAdd(v1002, 4uLL, &v1002);
                                              if ( CurrentHardwareID < 0 )
                                              {
LABEL_1837:
                                                v303 = v1114;
                                                v304 = v1290;
                                                goto LABEL_507;
                                              }
                                              v1114 = v303;
                                              if ( v303 )
                                                v304 = (_DWORD *)v1002;
                                              else
                                                v304 = 0LL;
                                              v1290 = v304;
LABEL_507:
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                if ( v303 != 4 )
                                                {
                                                  CurrentHardwareID = -1073741789;
                                                  goto LABEL_560;
                                                }
                                                v1115 = *v304;
LABEL_510:
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_560;
                                                if ( qword_1407AC3B8 )
                                                  v305 = qword_1407AC3B8(
                                                           v1116,
                                                           v1084,
                                                           v1085,
                                                           v1232,
                                                           v298,
                                                           v1115,
                                                           &v1359);
                                                else
                                                  v305 = -1073700223;
                                                v306 = RtlUIntAdd(4u, 4u, &v1117);
                                                CurrentHardwareID = v306;
                                                if ( v306 < 0 )
                                                {
                                                  v308 = v1046;
                                                }
                                                else
                                                {
                                                  v308 = v1117;
                                                  v1046 = v1117;
                                                }
                                                if ( v306 >= 0 )
                                                {
                                                  v1045 = v308;
                                                  CurrentHardwareID = RtlUIntAdd(v307, 8u, &v1118);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    v1046 = v1118;
                                                    CurrentHardwareID = RtlUIntAdd(v309, v1118, &v1045);
                                                    if ( CurrentHardwareID >= 0 )
                                                      v950 = v1045;
                                                  }
                                                }
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_560;
                                                v310 = RtlUIntAdd(4u, 0x10u, &v1119);
                                                CurrentHardwareID = v310;
                                                if ( v310 < 0 )
                                                {
                                                  v312 = v1019;
                                                }
                                                else
                                                {
                                                  v312 = v1119;
                                                  v1019 = v1119;
                                                }
                                                if ( v310 < 0 )
                                                  goto LABEL_560;
                                                CurrentHardwareID = RtlUIntAdd(v311, v312, &v950);
                                                if ( CurrentHardwareID < 0 )
                                                  goto LABEL_560;
                                                v1071 = 8;
                                                CurrentHardwareID = RtlUIntAdd(8u, v950, &v1071);
                                                if ( CurrentHardwareID < 0 )
                                                {
LABEL_535:
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_560;
                                                  uAddend[1] = v313;
                                                  if ( !(_DWORD)v313 )
                                                  {
                                                    CurrentHardwareID = -1073741762;
                                                    goto LABEL_560;
                                                  }
                                                  v317 = ExAllocatePoolWithTag(PagedPool, v313, 0x20534C53u);
                                                  if ( !v317 )
                                                  {
                                                    CurrentHardwareID = -1073741801;
                                                    goto LABEL_560;
                                                  }
                                                  v928 = (ULONGLONG)v317;
                                                  uAddend[0] = 0;
                                                  v1120 = v305 | 0x10000000;
                                                  CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v317, 4uLL, v1343);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    if ( v319 + 2 > (_DWORD *)((char *)v319 + uAddend[1]) )
                                                    {
                                                      CurrentHardwareID = -1073741789;
                                                      goto LABEL_560;
                                                    }
                                                    v321 = (int *)v1343[0];
                                                    *v319 = v318;
                                                    *v321 = v1120;
                                                    v320 = ++uAddend[0];
                                                  }
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_560;
                                                  v1292 = v1291;
                                                  if ( v928 )
                                                  {
                                                    v322 = (UINT *)v928;
                                                    v323 = 0;
                                                    v1198 = v928;
                                                    if ( v320 )
                                                    {
                                                      while ( 1 )
                                                      {
                                                        CurrentHardwareID = RtlUIntAdd(4u, *v322, &v1122);
                                                        if ( CurrentHardwareID < 0 )
                                                          break;
                                                        v978 = v1122;
                                                        CurrentHardwareID = RtlULongLongAdd(v324, v1122, &v1198);
                                                        if ( CurrentHardwareID < 0 )
                                                          break;
                                                        v322 = (UINT *)v1198;
                                                        if ( ++v323 >= v325 )
                                                          goto LABEL_547;
                                                      }
                                                    }
                                                    else
                                                    {
LABEL_547:
                                                      CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v322, 4uLL, v1344);
                                                      if ( CurrentHardwareID >= 0 )
                                                      {
                                                        if ( (unsigned __int64)(v326 + 3) > v928 + uAddend[1] )
                                                        {
                                                          CurrentHardwareID = -1073741789;
                                                          goto LABEL_560;
                                                        }
                                                        v327 = (_QWORD *)v1344[0];
                                                        *v326 = 8;
                                                        *v327 = v1292;
                                                        v325 = ++uAddend[0];
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v784 = RtlUIntAdd(4u, 8u, &v1121);
                                                    v785 = v978;
                                                    CurrentHardwareID = v784;
                                                    if ( v784 >= 0 )
                                                      v785 = v1121;
                                                    v978 = v785;
                                                    if ( v784 >= 0 )
                                                    {
                                                      v786 = RtlUIntAdd(uAddend[1], v785, &uAddend[1]);
                                                      v325 = uAddend[0];
                                                      CurrentHardwareID = v786;
                                                      if ( v786 >= 0 )
                                                      {
                                                        v325 = ++uAddend[0];
                                                        goto LABEL_551;
                                                      }
                                                    }
                                                  }
                                                  if ( CurrentHardwareID < 0 )
                                                    goto LABEL_560;
LABEL_551:
                                                  if ( v928 )
                                                  {
                                                    v328 = (UINT *)v928;
                                                    v329 = 0;
                                                    v1199 = v928;
                                                    if ( v325 )
                                                    {
                                                      do
                                                      {
                                                        CurrentHardwareID = RtlUIntAdd(4u, *v328, &v1124);
                                                        if ( CurrentHardwareID < 0 )
                                                          goto LABEL_560;
                                                        v979 = v1124;
                                                        CurrentHardwareID = RtlULongLongAdd(v330, v1124, &v1199);
                                                        if ( CurrentHardwareID < 0 )
                                                          goto LABEL_560;
                                                        v328 = (UINT *)v1199;
                                                      }
                                                      while ( ++v329 < v331 );
                                                    }
                                                    CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v328, 4uLL, v1345);
                                                    if ( CurrentHardwareID < 0 )
                                                      goto LABEL_560;
                                                    if ( (unsigned __int64)(v332 + 5) > v928 + uAddend[1] )
                                                    {
                                                      CurrentHardwareID = -1073741789;
                                                      goto LABEL_560;
                                                    }
                                                    v333 = (_OWORD *)v1345[0];
                                                    *v332 = 16;
                                                    *v333 = v1359;
                                                  }
                                                  else
                                                  {
                                                    v787 = RtlUIntAdd(4u, 0x10u, &v1123);
                                                    v788 = v979;
                                                    CurrentHardwareID = v787;
                                                    if ( v787 >= 0 )
                                                      v788 = v1123;
                                                    v979 = v788;
                                                    if ( v787 < 0 )
                                                      goto LABEL_560;
                                                    CurrentHardwareID = RtlUIntAdd(uAddend[1], v788, &uAddend[1]);
                                                    if ( CurrentHardwareID < 0 )
                                                      goto LABEL_560;
                                                    CurrentHardwareID = 0;
                                                  }
                                                  ++uAddend[0];
                                                  goto LABEL_560;
                                                }
                                                v314 = (v1071 + 7) & 0xFFFFFFF8;
                                                if ( v314 < v1071 )
                                                {
                                                  CurrentHardwareID = -1073741675;
                                                }
                                                else
                                                {
                                                  v1070 = (v1071 + 7) & 0xFFFFFFF8;
                                                  CurrentHardwareID = RtlUIntAdd(v314, 8u, &v1070);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    v315 = v1070;
LABEL_528:
                                                    if ( CurrentHardwareID < 0 )
                                                      goto LABEL_560;
                                                    v948 = 4;
                                                    CurrentHardwareID = RtlUIntAdd(4u, v315, &v948);
                                                    if ( CurrentHardwareID >= 0 )
                                                    {
                                                      CurrentHardwareID = RtlUIntAdd(v948, v316, &v948);
                                                      if ( CurrentHardwareID >= 0 )
                                                      {
                                                        CurrentHardwareID = RtlUIntAdd(v948, *((_DWORD *)v8 + 4), &v948);
                                                        if ( CurrentHardwareID >= 0 )
                                                        {
                                                          CurrentHardwareID = RtlUIntAdd(v948, 4u, &v948);
                                                          if ( CurrentHardwareID >= 0 )
                                                          {
                                                            CurrentHardwareID = RtlUIntAdd(
                                                                                  v948,
                                                                                  *((_DWORD *)v8 + 8),
                                                                                  &v948);
                                                            if ( CurrentHardwareID >= 0 )
                                                              v1294 = v948;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_535;
                                                  }
                                                }
                                                v315 = v1019;
                                                goto LABEL_528;
                                              }
                                            }
LABEL_560:
                                            if ( v1084 )
                                            {
                                              ExFreePoolWithTag(v1084, 0x20534C53u);
                                              v1084 = 0LL;
                                            }
                                            if ( v1085 )
                                            {
                                              ExFreePoolWithTag(v1085, 0x20534C53u);
                                              v1085 = 0LL;
                                            }
LABEL_564:
                                            v192 = CurrentHardwareID < 0;
LABEL_322:
                                            if ( !v192 )
                                            {
LABEL_323:
                                              v9 = (unsigned int *)v929;
LABEL_324:
                                              v193 = PagedPool;
                                              goto LABEL_325;
                                            }
                                            goto LABEL_687;
                                          }
                                          CurrentHardwareID = -1073741811;
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
LABEL_460:
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          if ( 2 * v1073 == -2 )
                                          {
                                            CurrentHardwareID = -1073741762;
                                          }
                                          else
                                          {
                                            v284 = 2 * v1073 + 2;
                                            v285 = ExAllocatePoolWithTag(PagedPool, v284, 0x20534C53u);
                                            v286 = v285;
                                            if ( v285 )
                                            {
                                              CurrentHardwareID = 0;
                                              memmove(v285, v1287, v284);
                                              v1275 = v1073;
                                              v1084 = v286;
                                            }
                                            else
                                            {
                                              CurrentHardwareID = -1073741801;
                                            }
                                          }
                                        }
                                        goto LABEL_464;
                                      case 110:
                                        v856 = sub_140727D68(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v856;
                                        if ( v856 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 111:
                                        v859 = sub_140726800(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v859;
                                        if ( v859 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 112:
                                        v421 = SPCallServerHandleClepSign(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v421;
                                        if ( v421 >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 113:
                                        v336 = SPCallServerHandleClepKdf(
                                                 (__int64)&v934,
                                                 (__int64)v8,
                                                 v104,
                                                 (__int64)uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v336;
                                        if ( v336 >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 204:
                                        v863 = sub_14072A730(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v863;
                                        if ( v863 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 205:
                                        v857 = sub_1407264B4(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v857;
                                        if ( v857 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 206:
                                        v1150 = 0;
                                        v1229 = 8LL;
                                        CurrentHardwareID = 0;
                                        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1229, 8u, &v1150);
                                        v9 = (unsigned int *)v929;
                                        if ( *((_DWORD *)v929 + 4) != 160 )
                                          goto LABEL_1801;
                                        if ( !memcmp(qword_14074DCC0, *((const void **)v929 + 3), 0xA0uLL)
                                          && *((_DWORD *)v8 + 4) == 160
                                          && !memcmp(qword_14074E120, v8[3], 0xA0uLL)
                                          && *((_DWORD *)v929 + 8) == 8
                                          && **((_QWORD **)v929 + 5) == 0x5638EBB72F3355A5LL
                                          && *((_DWORD *)v8 + 8) == 8
                                          && *(_QWORD *)v8[5] == 0x9F2DD8784FE939B7uLL )
                                        {
                                          goto LABEL_776;
                                        }
                                        if ( !memcmp(qword_14074DF40, *((const void **)v929 + 3), 0xA0uLL)
                                          && *((_DWORD *)v8 + 4) == 160
                                          && !memcmp(qword_14074E080, v8[3], 0xA0uLL)
                                          && *((_DWORD *)v929 + 8) == 8
                                          && **((_QWORD **)v929 + 5) == 0x5638EBB72F3355A5LL
                                          && *((_DWORD *)v8 + 8) == 8
                                          && *(_QWORD *)v8[5] == 0x9F2DD8784FE939B7uLL )
                                        {
                                          goto LABEL_775;
                                        }
                                        if ( memcmp(qword_14074D900, *((const void **)v929 + 3), 0xA0uLL)
                                          || *((_DWORD *)v8 + 4) != 160
                                          || memcmp(qword_14074DB80, v8[3], 0xA0uLL)
                                          || *((_DWORD *)v929 + 8) != 8
                                          || **((_QWORD **)v929 + 5) != 0xF10D668DB2BB8BB9uLL
                                          || *((_DWORD *)v8 + 8) != 8
                                          || *(_QWORD *)v8[5] != 0x768DFD321621EA95LL )
                                        {
                                          if ( memcmp(qword_14074D680, *((const void **)v929 + 3), 0xA0uLL)
                                            || *((_DWORD *)v8 + 4) != 160
                                            || memcmp(qword_14074D860, v8[3], 0xA0uLL)
                                            || *((_DWORD *)v929 + 8) != 8
                                            || **((_QWORD **)v929 + 5) != 0xF10D668DB2BB8BB9uLL
                                            || *((_DWORD *)v8 + 8) != 8
                                            || *(_QWORD *)v8[5] != 0x768DFD321621EA95LL )
                                          {
LABEL_1801:
                                            CurrentHardwareID = -2147024891;
                                          }
LABEL_775:
                                          if ( CurrentHardwareID < 0 )
                                            goto LABEL_688;
                                        }
LABEL_776:
                                        CurrentHardwareID = SPCallServerHandleGetCurrentHardwareID(
                                                              (__int64)&v934,
                                                              (__int64)v8,
                                                              v423,
                                                              (__int64)uAddend);
                                        if ( CurrentHardwareID >= 0 )
                                          goto LABEL_324;
                                        v5 = (char *)v932;
                                        v7 = v931;
                                        v6 = v932;
                                        goto LABEL_386;
                                      case 207:
                                        v861 = sub_140727404(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v861;
                                        if ( v861 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 208:
                                        v781 = sub_1407282B8(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v781;
                                        if ( v781 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 209:
                                        v1086 = 0LL;
                                        v1219 = 0LL;
                                        v1360 = 0uLL;
                                        if ( !v8 )
                                          goto LABEL_1802;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 > 3 )
                                          {
                                            v789 = ullAugend;
                                            v1003 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v789, 4uLL, &v1003);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1873;
                                              CurrentHardwareID = RtlULongLongAdd(v1003, v790, &v1003);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1873;
                                              v789 = v1003;
                                            }
                                            while ( (unsigned int)(v791 + 1) < 3 );
                                            CurrentHardwareID = RtlULongLongAdd(v1003, 4uLL, &v1003);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1873:
                                              v792 = v1125;
                                              v793 = v1293;
                                              goto LABEL_1874;
                                            }
                                            v793 = (_QWORD *)v1003;
                                            v1125 = v792;
                                            if ( !v792 )
                                              v793 = 0LL;
                                            v1293 = v793;
LABEL_1874:
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1572;
                                            if ( v792 != 8 )
                                            {
LABEL_1571:
                                              CurrentHardwareID = -1073741789;
LABEL_1572:
                                              v193 = PagedPool;
LABEL_1574:
                                              v9 = (unsigned int *)v929;
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_688;
LABEL_325:
                                              v1221 = __rdtsc();
                                              puResult = 8;
                                              CurrentHardwareID = RtlUIntAdd(8u, uAddend[1], &puResult);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                v194 = (puResult + 7) & 0xFFFFFFF8;
                                                if ( v194 < puResult )
                                                {
                                                  CurrentHardwareID = -1073741675;
                                                }
                                                else
                                                {
                                                  puResult = (puResult + 7) & 0xFFFFFFF8;
                                                  if ( v194 )
                                                  {
                                                    v195 = (char *)ExAllocatePoolWithTag(v193, v194, 0x20534C53u);
                                                    v196 = v195;
                                                    if ( v195 )
                                                    {
                                                      v959 = (ULONGLONG)v195;
                                                      *(_DWORD *)v195 = uAddend[0];
                                                      CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v195, 4uLL, &v959);
                                                      if ( CurrentHardwareID >= 0 )
                                                      {
                                                        v198 = v959;
                                                        *(_DWORD *)v959 = uAddend[1];
                                                        CurrentHardwareID = RtlULongLongAdd(v198, v197, &v959);
                                                        if ( CurrentHardwareID >= 0 )
                                                        {
                                                          *(_QWORD *)&v196[puResult - 8] = v1221;
                                                          memmove((void *)v959, (const void *)v928, uAddend[1]);
                                                          v199 = puResult;
                                                          v5 = v196;
                                                          v932 = v196;
LABEL_332:
                                                          if ( CurrentHardwareID < 0 )
                                                          {
LABEL_2216:
                                                            v6 = v933;
                                                            goto LABEL_690;
                                                          }
                                                          v1209 = 0LL;
                                                          v1306 = 0LL;
                                                          if ( v5 )
                                                          {
                                                            if ( (_DWORD)v199 )
                                                            {
                                                              v200 = (__int64 *)v8[5];
                                                              if ( v200 )
                                                              {
                                                                v201 = *((_DWORD *)v8 + 8);
                                                                if ( v201 )
                                                                {
                                                                  v202.QuadPart = (LONGLONG)v8[3];
                                                                  v1090[0] = v202;
                                                                  if ( v202.QuadPart )
                                                                  {
                                                                    v203 = *((_DWORD *)v8 + 4);
                                                                    if ( v203 )
                                                                    {
                                                                      v952 = v199;
                                                                      if ( v201 != 8 || v203 != 160 )
                                                                        goto LABEL_2201;
                                                                      v204 = *v200;
                                                                      LOBYTE(v203) = 0;
                                                                      v950 = v203;
                                                                      v205 = 0LL;
                                                                      if ( v199 >= 0x20 )
                                                                      {
                                                                        v206 = 0LL;
                                                                        v207 = 0LL;
                                                                        do
                                                                        {
                                                                          v206 = _mm_xor_si128(
                                                                                   _mm_loadu_si128((const __m128i *)&v5[v205]),
                                                                                   v206);
                                                                          v208 = _mm_loadu_si128((const __m128i *)&v5[v205 + 16]);
                                                                          v205 += 32LL;
                                                                          v209 = _mm_xor_si128(v208, v207);
                                                                          v207 = v209;
                                                                        }
                                                                        while ( v205 < (v199 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                                        v210 = _mm_xor_si128(v206, v209);
                                                                        v211 = _mm_xor_si128(
                                                                                 v210,
                                                                                 _mm_srli_si128(v210, 8));
                                                                        v212 = _mm_xor_si128(
                                                                                 v211,
                                                                                 _mm_srli_si128(v211, 4));
                                                                        v213 = _mm_xor_si128(
                                                                                 v212,
                                                                                 _mm_srli_si128(v212, 2));
                                                                        v203 = _mm_cvtsi128_si32(
                                                                                 _mm_xor_si128(
                                                                                   v213,
                                                                                   _mm_srli_si128(v213, 1)));
                                                                        v950 = v203;
                                                                      }
                                                                      if ( v205 < v199 )
                                                                      {
                                                                        do
                                                                          LOBYTE(v203) = v5[v205++] ^ v203;
                                                                        while ( v205 < v199 );
                                                                        v950 = v203;
                                                                      }
                                                                      v214 = v199 + 8;
                                                                      v959 = v199 + 8;
                                                                      v215 = (char *)ExAllocatePoolWithTag(
                                                                                       PagedPool,
                                                                                       v199 + 8,
                                                                                       0x20534C53u);
                                                                      v953 = (ULONGLONG)v215;
                                                                      v216 = v215;
                                                                      if ( v215 )
                                                                      {
                                                                        v217 = v952;
                                                                        v218 = 0;
                                                                        v1358 = v204;
                                                                        v219 = -1;
                                                                        v939 = 0;
                                                                        v937 = -1;
                                                                        v220 = (unsigned __int8 *)v5;
                                                                        v941 = 0;
                                                                        v221 = v215;
                                                                        v944 = 0;
                                                                        v222 = 0;
                                                                        v223 = v952 & 7;
                                                                        if ( (v952 & 7) != 0 )
                                                                        {
                                                                          v941 = 0;
                                                                          v944 = 0;
                                                                          v907 = 0;
                                                                          v908 = 0;
                                                                          v909 = 56;
                                                                          do
                                                                          {
                                                                            v910 = *v220;
                                                                            if ( v908 >= 4 )
                                                                              v218 |= v910 << v909;
                                                                            else
                                                                              v907 |= v910 << (v909 - 32);
                                                                            ++v908;
                                                                            v909 -= 8;
                                                                            ++v220;
                                                                          }
                                                                          while ( v908 < v223 );
                                                                          v944 = v907;
                                                                          v941 = v218;
                                                                          v911 = 16LL;
                                                                          v912 = (unsigned __int8 *)(v202.QuadPart + 158);
                                                                          v913 = (unsigned __int8 *)(v202.QuadPart + 126);
                                                                          v954 = v202.QuadPart + 158;
                                                                          v955 = 16LL;
                                                                          v914 = 30LL;
                                                                          do
                                                                          {
                                                                            v915 = v912[1];
                                                                            if ( v915 < 0x1Fu )
                                                                            {
                                                                              v916 = funcs_1404A9C7B[v915](
                                                                                       v914 + 1,
                                                                                       *(v913 - 2),
                                                                                       *(v913 - 1),
                                                                                       *v913,
                                                                                       v913[1],
                                                                                       (__int64)&v1358,
                                                                                       v222);
                                                                              v222 = v939;
                                                                              v219 = v916 ^ v937;
                                                                              v912 = (unsigned __int8 *)v954;
                                                                              v911 = v955;
                                                                              v937 = v219;
                                                                            }
                                                                            if ( *v912 < 0x1Fu )
                                                                            {
                                                                              v917 = funcs_1404A9C7B[*v912](
                                                                                       v914,
                                                                                       *(v913 - 6),
                                                                                       *(v913 - 5),
                                                                                       *(v913 - 4),
                                                                                       *(v913 - 3),
                                                                                       (__int64)&v1358,
                                                                                       v219);
                                                                              v219 = v937;
                                                                              v222 = v917 ^ v939;
                                                                              v912 = (unsigned __int8 *)v954;
                                                                              v911 = v955;
                                                                              v939 = v222;
                                                                            }
                                                                            v912 -= 2;
                                                                            v914 -= 2LL;
                                                                            v913 -= 8;
                                                                            v954 = (ULONGLONG)v912;
                                                                            v955 = --v911;
                                                                          }
                                                                          while ( v911 );
                                                                          v222 ^= v944;
                                                                          v918 = v941 ^ v219;
                                                                          v919 = 0;
                                                                          v202 = v1090[0];
                                                                          v939 = v222;
                                                                          v937 = v918;
                                                                          if ( v223 > 0 )
                                                                          {
                                                                            do
                                                                            {
                                                                              if ( v919 >= 4 )
                                                                              {
                                                                                v918 = __ROL4__(v918, 8);
                                                                                *v221 = v918;
                                                                              }
                                                                              else
                                                                              {
                                                                                v222 = __ROL4__(v222, 8);
                                                                                *v221 = v222;
                                                                              }
                                                                              ++v919;
                                                                              ++v221;
                                                                            }
                                                                            while ( v919 < v223 );
                                                                            v222 = v939;
                                                                            v918 = v937;
                                                                          }
                                                                          v920 = v223 - 4;
                                                                          if ( v223 - 4 <= 0 )
                                                                          {
                                                                            v937 = 0;
                                                                            v219 = 0;
                                                                            if ( v920 < 0 )
                                                                            {
                                                                              v222 = v222 >> (-8 * v920) << (-8 * v920);
                                                                              v939 = v222;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v219 = v918 >> (8 * (4 - v920)) << (8 * (4 - v920));
                                                                            v937 = v219;
                                                                          }
                                                                          v217 = v952;
                                                                          v214 = v959;
                                                                          v216 = (char *)v953;
                                                                        }
                                                                        v955 = v217 >> 3;
                                                                        if ( v217 >> 3 )
                                                                        {
                                                                          v224 = v202.QuadPart + 129;
                                                                          v225 = v202.QuadPart + 2;
                                                                          v1212 = v202.QuadPart + 129;
                                                                          v1211 = v202.QuadPart + 2;
                                                                          v226 = v220 + 2;
                                                                          v954 = (ULONGLONG)(v221 + 7);
                                                                          do
                                                                          {
                                                                            v227 = (_BYTE *)v224;
                                                                            v228 = 0LL;
                                                                            v229 = (unsigned __int8 *)v225;
                                                                            v230 = 16LL;
                                                                            v231 = v226[1] | ((*v226 | ((*(v226 - 1) | (*(v226 - 2) << 8)) << 8)) << 8);
                                                                            v232 = v231 ^ v222;
                                                                            v233 = v226[5] | ((v226[4] | ((v226[3] | (v226[2] << 8)) << 8)) << 8);
                                                                            v939 = v232;
                                                                            v234 = v233 ^ v219;
                                                                            v1013 = v233;
                                                                            v937 = v234;
                                                                            pcbLength = (size_t)(v226 + 8);
                                                                            do
                                                                            {
                                                                              v235 = *(v227 - 1);
                                                                              if ( v235 < 0x1Fu )
                                                                              {
                                                                                v267 = funcs_1404A9C7B[v235](
                                                                                         v228,
                                                                                         *(v229 - 2),
                                                                                         *(v229 - 1),
                                                                                         *v229,
                                                                                         v229[1],
                                                                                         (__int64)&v1358,
                                                                                         v234);
                                                                                v234 = v937;
                                                                                v232 = v267 ^ v939;
                                                                                v939 ^= v267;
                                                                              }
                                                                              if ( *v227 < 0x1Fu )
                                                                              {
                                                                                v268 = funcs_1404A9C7B[(unsigned __int8)*v227](
                                                                                         v228 + 1,
                                                                                         v229[2],
                                                                                         v229[3],
                                                                                         v229[4],
                                                                                         v229[5],
                                                                                         (__int64)&v1358,
                                                                                         v232);
                                                                                v232 = v939;
                                                                                v234 = v268 ^ v937;
                                                                                v937 ^= v268;
                                                                              }
                                                                              v228 += 2LL;
                                                                              v229 += 8;
                                                                              v227 += 2;
                                                                              --v230;
                                                                            }
                                                                            while ( v230 );
                                                                            v236 = (HIWORD(v1358)
                                                                                  * ((unsigned __int16)v1358
                                                                                   + __ROR4__(~v234, 5))) ^ v232;
                                                                            v1090[0].QuadPart = (v236 >> 10) ^ (WORD1(v1358) * (HIWORD(v1358) ^ v236)) ^ v234;
                                                                            v237 = (v236 >> 10) ^ (WORD1(v1358)
                                                                                                 * (HIWORD(v1358) ^ v236)) ^ v234;
                                                                            v238 = __ROR4__(v237, 10) ^ (WORD2(v1358) * __ROR4__(v237 ^ v1358, 12)) ^ v236;
                                                                            v239 = (HIWORD(v1358)
                                                                                  * __ROR4__(v238 - v1358, 14)
                                                                                  - __ROL4__(v238, 8)) ^ v237;
                                                                            v240 = (__ROL4__(v239, 2)
                                                                                  + (unsigned __int16)v1358
                                                                                  * __ROR4__(HIDWORD(v1358) + v239, 15)) ^ v238;
                                                                            v241 = (WORD1(v1358) * (WORD2(v1358) ^ v240)) ^ __ROR4__(v240, 6) ^ v239;
                                                                            v242 = (HIDWORD(v1358) - (v241 ^ v1358)) ^ v240;
                                                                            v243 = (HIWORD(v1358)
                                                                                  * __ROL4__(WORD1(v1358) ^ v242, 6)
                                                                                  - __ROL4__(v242, 2)) ^ v241;
                                                                            v244 = ((unsigned __int16)v1358
                                                                                  * (v243 - WORD2(v1358))
                                                                                  - (v243 >> 13)) ^ v242;
                                                                            v245 = (WORD1(v1358)
                                                                                  * __ROR4__(HIDWORD(v1358) + v244, 9)
                                                                                  - __ROL4__(v244, 2)) ^ v243;
                                                                            v246 = (_BYTE *)v954;
                                                                            v247 = v1013;
                                                                            v225 = v1211;
                                                                            v248 = (__ROL4__(v245, 10)
                                                                                  + WORD2(v1358)
                                                                                  * __ROL4__(v245 - v1358, 5)) ^ v244;
                                                                            v226 = (unsigned __int8 *)pcbLength;
                                                                            v939 = v944 ^ v248;
                                                                            v937 = v941 ^ v248 ^ v245 ^ v1358 ^ HIDWORD(v1358);
                                                                            *(_BYTE *)(v954 - 4) = v944 ^ v248;
                                                                            v939 = __ROR4__(v939, 8);
                                                                            *v246 = v937;
                                                                            v937 = __ROR4__(v937, 8);
                                                                            *(v246 - 5) = v939;
                                                                            v939 = __ROR4__(v939, 8);
                                                                            *(v246 - 1) = v937;
                                                                            v937 = __ROR4__(v937, 8);
                                                                            *(v246 - 6) = v939;
                                                                            v939 = __ROR4__(v939, 8);
                                                                            *(v246 - 2) = v937;
                                                                            v937 = __ROR4__(v937, 8);
                                                                            *(v246 - 7) = v939;
                                                                            *(v246 - 3) = v937;
                                                                            v222 = __ROR4__(v939, 8);
                                                                            v219 = __ROR4__(v937, 8);
                                                                            v66 = v955-- == 1;
                                                                            v941 = v247;
                                                                            v954 = (ULONGLONG)(v246 + 8);
                                                                            v224 = v1212;
                                                                            v939 = v222;
                                                                            v937 = v219;
                                                                            v944 = v231;
                                                                          }
                                                                          while ( !v66 );
                                                                          v217 = v952;
                                                                          v214 = v959;
                                                                          v216 = (char *)v953;
                                                                        }
                                                                        CurrentHardwareID = 0;
                                                                        *(_QWORD *)&v216[v217] = (unsigned __int8)v950;
                                                                        v1209 = v216;
                                                                        v1306 = v214;
                                                                        if ( (_DWORD)v214 )
                                                                        {
                                                                          v249 = ExAllocatePoolWithTag(
                                                                                   PagedPool,
                                                                                   (unsigned int)v214,
                                                                                   0x20534C53u);
                                                                          v250 = v249;
                                                                          if ( v249 )
                                                                          {
                                                                            memmove(
                                                                              v249,
                                                                              (const void *)v953,
                                                                              (unsigned int)v214);
                                                                            v251 = v930;
                                                                            *((_QWORD *)v930 + 1) = v250;
                                                                            *v251 = v214;
                                                                          }
                                                                          else
                                                                          {
                                                                            CurrentHardwareID = -1073741801;
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          CurrentHardwareID = -1073741762;
                                                                        }
                                                                        v5 = (char *)v932;
                                                                      }
                                                                      else
                                                                      {
LABEL_2201:
                                                                        CurrentHardwareID = -1073741823;
                                                                      }
                                                                      if ( v1209 )
                                                                      {
                                                                        ExFreePoolWithTag(v1209, 0x20534C53u);
                                                                        v1209 = 0LL;
                                                                      }
                                                                      v8 = (const void **)v930;
                                                                      if ( CurrentHardwareID >= 0 )
                                                                      {
                                                                        v252 = *(_DWORD *)v930;
                                                                        v942 = 4;
                                                                        CurrentHardwareID = RtlUIntAdd(4u, v252, &v942);
                                                                        if ( CurrentHardwareID < 0
                                                                          || (CurrentHardwareID = RtlUIntAdd(
                                                                                                    v942,
                                                                                                    v253,
                                                                                                    &v942),
                                                                              CurrentHardwareID < 0)
                                                                          || (CurrentHardwareID = RtlUIntAdd(
                                                                                                    v942,
                                                                                                    *((_DWORD *)v8 + 4),
                                                                                                    &v942),
                                                                              CurrentHardwareID < 0)
                                                                          || (CurrentHardwareID = RtlUIntAdd(
                                                                                                    v942,
                                                                                                    4u,
                                                                                                    &v942),
                                                                              CurrentHardwareID < 0)
                                                                          || (CurrentHardwareID = RtlUIntAdd(
                                                                                                    v942,
                                                                                                    *((_DWORD *)v8 + 8),
                                                                                                    &v942),
                                                                              CurrentHardwareID < 0) )
                                                                        {
                                                                          v254 = v1051;
                                                                        }
                                                                        else
                                                                        {
                                                                          v254 = v942;
                                                                          v1051 = v942;
                                                                        }
                                                                        if ( CurrentHardwareID >= 0 )
                                                                        {
                                                                          if ( v254 )
                                                                          {
                                                                            v255 = ExAllocatePoolWithTag(
                                                                                     PagedPool,
                                                                                     v254,
                                                                                     0x20534C53u);
                                                                            v256 = v255;
                                                                            if ( v255 )
                                                                            {
                                                                              v961 = (ULONGLONG)v255;
                                                                              *v255 = *(_DWORD *)v8;
                                                                              CurrentHardwareID = RtlULongLongAdd(
                                                                                                    (ULONGLONG)v255,
                                                                                                    4uLL,
                                                                                                    &v961);
                                                                              if ( CurrentHardwareID >= 0 )
                                                                              {
                                                                                memmove(
                                                                                  (void *)v961,
                                                                                  v8[1],
                                                                                  *(unsigned int *)v8);
                                                                                CurrentHardwareID = RtlULongLongAdd(v961, *(unsigned int *)v8, &v961);
                                                                                if ( CurrentHardwareID >= 0 )
                                                                                {
                                                                                  v257 = v961;
                                                                                  *(_DWORD *)v961 = *((_DWORD *)v8 + 4);
                                                                                  CurrentHardwareID = RtlULongLongAdd(v257, 4uLL, &v961);
                                                                                  if ( CurrentHardwareID >= 0 )
                                                                                  {
                                                                                    memmove(
                                                                                      (void *)v961,
                                                                                      v8[3],
                                                                                      *((unsigned int *)v8 + 4));
                                                                                    CurrentHardwareID = RtlULongLongAdd(v961, *((unsigned int *)v8 + 4), &v961);
                                                                                    if ( CurrentHardwareID >= 0 )
                                                                                    {
                                                                                      v258 = v961;
                                                                                      *(_DWORD *)v961 = *((_DWORD *)v8 + 8);
                                                                                      CurrentHardwareID = RtlULongLongAdd(v258, 4uLL, &v961);
                                                                                      if ( CurrentHardwareID >= 0 )
                                                                                      {
                                                                                        memmove(
                                                                                          (void *)v961,
                                                                                          v8[5],
                                                                                          *((unsigned int *)v8 + 8));
                                                                                        CurrentHardwareID = RtlULongLongAdd(v961, *((unsigned int *)v8 + 8), &v961);
                                                                                        if ( CurrentHardwareID >= 0 )
                                                                                        {
                                                                                          v259 = v1051;
                                                                                          v6 = v256;
LABEL_383:
                                                                                          v7 = v931;
                                                                                          if ( CurrentHardwareID >= 0 )
                                                                                          {
                                                                                            *v1307 = v6;
                                                                                            v6 = 0LL;
                                                                                            *v1308 = v259;
                                                                                          }
                                                                                          v9 = (unsigned int *)v929;
                                                                                          goto LABEL_386;
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                              ExFreePoolWithTag(v256, 0x20534C53u);
                                                                            }
                                                                            else
                                                                            {
                                                                              CurrentHardwareID = -1073741801;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            CurrentHardwareID = -1073741762;
                                                                          }
                                                                        }
                                                                        v6 = v933;
                                                                        v259 = (unsigned int)v933;
                                                                        goto LABEL_383;
                                                                      }
                                                                      v9 = (unsigned int *)v929;
                                                                      goto LABEL_2216;
                                                                    }
                                                                    CurrentHardwareID = -1073741811;
                                                                    v6 = 0LL;
                                                                  }
                                                                  else
                                                                  {
                                                                    CurrentHardwareID = -1073741811;
                                                                    v6 = 0LL;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  CurrentHardwareID = -1073741811;
                                                                  v6 = 0LL;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                CurrentHardwareID = -1073741811;
                                                                v6 = 0LL;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              CurrentHardwareID = -1073741811;
                                                              v6 = 0LL;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            CurrentHardwareID = -1073741811;
                                                            v6 = 0LL;
                                                          }
LABEL_690:
                                                          v7 = v931;
                                                          goto LABEL_386;
                                                        }
                                                      }
                                                      ExFreePoolWithTag(v196, 0x20534C53u);
                                                    }
                                                    else
                                                    {
                                                      CurrentHardwareID = -1073741801;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    CurrentHardwareID = -1073741762;
                                                  }
                                                }
                                              }
                                              v199 = v944;
                                              v5 = (char *)v932;
                                              goto LABEL_332;
                                            }
                                            v1296 = *v793;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1572;
                                        if ( ullAugend )
                                        {
                                          if ( (unsigned int)v934 > 4 )
                                          {
                                            v794 = ullAugend;
                                            v1004 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v794, 4uLL, &v1004);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1890;
                                              CurrentHardwareID = RtlULongLongAdd(v1004, v795, &v1004);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1890;
                                              v794 = v1004;
                                            }
                                            while ( (unsigned int)(v796 + 1) < 4 );
                                            CurrentHardwareID = RtlULongLongAdd(v1004, 4uLL, &v1004);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1890:
                                              v797 = v1068;
                                              v798 = v1233;
                                            }
                                            else
                                            {
                                              v798 = (const wchar_t *)v1004;
                                              v1068 = v797;
                                              if ( !v797 )
                                                v798 = 0LL;
                                              v1233 = v798;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1999;
                                            if ( !v797 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_1909;
                                            }
                                            if ( (v797 & 1) != 0 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_1909;
                                            }
                                            if ( v798[((unsigned __int64)v797 >> 1) - 1] )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_1909;
                                            }
                                            if ( StringCbLengthW(v798, v797, &v1212) < 0 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_1909;
                                            }
                                            if ( v1212 + 2 != v1068 )
                                            {
                                              CurrentHardwareID = -1073741762;
                                              goto LABEL_1909;
                                            }
                                            v1295 = (void *)v1233;
                                            v1065 = v1212 >> 1;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741811;
                                        }
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1999;
                                        v799 = 2 * v1065 + 2;
                                        if ( 2 * v1065 == -2 )
                                        {
                                          CurrentHardwareID = -1073741762;
                                        }
                                        else
                                        {
                                          v800 = v799;
                                          v801 = ExAllocatePoolWithTag(PagedPool, v799, 0x20534C53u);
                                          v802 = v801;
                                          if ( v801 )
                                          {
                                            CurrentHardwareID = 0;
                                            memmove(v801, v1295, v800);
                                            v1299 = v1065;
                                            v1086 = v802;
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741801;
                                          }
                                        }
LABEL_1909:
                                        if ( CurrentHardwareID >= 0 )
                                        {
                                          if ( ullAugend && (unsigned int)v934 > 5 )
                                          {
                                            v803 = ullAugend;
                                            v1007 = ullAugend;
                                            do
                                            {
                                              CurrentHardwareID = RtlULongLongAdd(v803, 4uLL, &v1007);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1920;
                                              CurrentHardwareID = RtlULongLongAdd(v1007, v804, &v1007);
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1920;
                                              v803 = v1007;
                                            }
                                            while ( (unsigned int)(v805 + 1) < 5 );
                                            CurrentHardwareID = RtlULongLongAdd(v1007, 4uLL, &v1007);
                                            if ( CurrentHardwareID < 0 )
                                            {
LABEL_1920:
                                              v806 = v1126;
                                            }
                                            else
                                            {
                                              v807 = v1007;
                                              v1126 = v806;
                                              if ( !v806 )
                                                v807 = 0LL;
                                              v1219 = v807;
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1999;
                                            if ( qword_1407AC3D0 )
                                              v808 = qword_1407AC3D0(v1086, v1219, v806, &v1360);
                                            else
                                              v808 = -1073700223;
                                            v809 = RtlUIntAdd(4u, 4u, &v1127);
                                            v811 = v1054;
                                            CurrentHardwareID = v809;
                                            if ( v809 >= 0 )
                                              v811 = v1127;
                                            v1054 = v811;
                                            if ( v809 >= 0 )
                                            {
                                              v958 = v811;
                                              v812 = RtlUIntAdd(v810, 8u, &v1128);
                                              v814 = v813;
                                              CurrentHardwareID = v812;
                                              if ( v812 >= 0 )
                                                v814 = v1128;
                                              v1054 = v814;
                                              if ( v812 >= 0 )
                                              {
                                                v815 = RtlUIntAdd(v813, v814, &v958);
                                                v816 = v965;
                                                CurrentHardwareID = v815;
                                                if ( v815 >= 0 )
                                                  v816 = v958;
                                                v965 = v816;
                                              }
                                            }
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1999;
                                            v817 = RtlUIntAdd(4u, 0x10u, &v1129);
                                            v819 = v1017;
                                            CurrentHardwareID = v817;
                                            if ( v817 >= 0 )
                                              v819 = v1129;
                                            v1017 = v819;
                                            if ( v817 < 0 )
                                              goto LABEL_1999;
                                            CurrentHardwareID = RtlUIntAdd(v818, v819, &v965);
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_1999;
                                            v1053 = 8;
                                            CurrentHardwareID = RtlUIntAdd(8u, v965, &v1053);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              v821 = (v1053 + 7) & 0xFFFFFFF8;
                                              if ( v821 >= v1053 )
                                              {
                                                v1052 = (v1053 + 7) & 0xFFFFFFF8;
                                                v823 = RtlUIntAdd(v821, 8u, &v1052);
                                                v822 = v1017;
                                                CurrentHardwareID = v823;
                                                if ( v823 >= 0 )
                                                  v822 = v1052;
                                              }
                                              else
                                              {
                                                v822 = v1017;
                                                CurrentHardwareID = -1073741675;
                                              }
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_1999;
                                              v940 = 4;
                                              CurrentHardwareID = RtlUIntAdd(4u, v822, &v940);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                CurrentHardwareID = RtlUIntAdd(v940, v824, &v940);
                                                if ( CurrentHardwareID >= 0 )
                                                {
                                                  CurrentHardwareID = RtlUIntAdd(v940, *((_DWORD *)v8 + 4), &v940);
                                                  if ( CurrentHardwareID >= 0 )
                                                  {
                                                    CurrentHardwareID = RtlUIntAdd(v940, 4u, &v940);
                                                    if ( CurrentHardwareID >= 0 )
                                                    {
                                                      CurrentHardwareID = RtlUIntAdd(v940, *((_DWORD *)v8 + 8), &v940);
                                                      v825 = v1130;
                                                      if ( CurrentHardwareID >= 0 )
                                                        v825 = v940;
                                                      v1130 = v825;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              uAddend[1] = v820;
                                              v193 = PagedPool;
                                              if ( !(_DWORD)v820 )
                                              {
                                                CurrentHardwareID = -1073741762;
                                                goto LABEL_2000;
                                              }
                                              v826 = ExAllocatePoolWithTag(PagedPool, v820, 0x20534C53u);
                                              if ( !v826 )
                                              {
                                                CurrentHardwareID = -1073741801;
                                                goto LABEL_2000;
                                              }
                                              v928 = (ULONGLONG)v826;
                                              uAddend[0] = 0;
                                              v1131 = v808 | 0x10000000;
                                              CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v826, 4uLL, v1346);
                                              if ( CurrentHardwareID >= 0 )
                                              {
                                                if ( v828 + 2 > (_DWORD *)((char *)v828 + uAddend[1]) )
                                                {
                                                  CurrentHardwareID = -1073741789;
                                                  goto LABEL_2000;
                                                }
                                                v830 = (int *)v1346[0];
                                                *v828 = v827;
                                                *v830 = v1131;
                                                v829 = ++uAddend[0];
                                              }
                                              if ( CurrentHardwareID < 0 )
                                              {
LABEL_2000:
                                                if ( v1086 )
                                                {
                                                  ExFreePoolWithTag(v1086, 0x20534C53u);
                                                  v1086 = 0LL;
                                                }
                                                goto LABEL_1574;
                                              }
                                              v1297 = v1296;
                                              if ( v928 )
                                              {
                                                v835 = (UINT *)v928;
                                                v836 = 0;
                                                v1200 = v928;
                                                if ( v829 )
                                                {
                                                  v837 = v980;
                                                  while ( 1 )
                                                  {
                                                    v838 = RtlUIntAdd(4u, *v835, &v1133);
                                                    CurrentHardwareID = v838;
                                                    if ( v838 >= 0 )
                                                      v837 = v1133;
                                                    v980 = v837;
                                                    if ( v838 < 0 )
                                                      break;
                                                    CurrentHardwareID = RtlULongLongAdd(v839, v837, &v1200);
                                                    if ( CurrentHardwareID < 0 )
                                                      break;
                                                    v835 = (UINT *)v1200;
                                                    if ( ++v836 >= v832 )
                                                      goto LABEL_1975;
                                                  }
                                                  v193 = PagedPool;
                                                }
                                                else
                                                {
LABEL_1975:
                                                  v840 = RtlULongLongAdd((ULONGLONG)v835, 4uLL, v1347);
                                                  v193 = v842 - 3;
                                                  CurrentHardwareID = v840;
                                                  if ( v840 >= 0 )
                                                  {
                                                    if ( (unsigned __int64)(v841 + 3) > v928 + uAddend[1] )
                                                    {
                                                      CurrentHardwareID = -1073741789;
                                                      goto LABEL_2000;
                                                    }
                                                    v843 = (_QWORD *)v1347[0];
                                                    *v841 = 8;
                                                    *v843 = v1297;
                                                    v832 = ++uAddend[0];
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                v831 = RtlUIntAdd(4u, 8u, &v1132);
                                                v833 = v980;
                                                CurrentHardwareID = v831;
                                                if ( v831 >= 0 )
                                                  v833 = v1132;
                                                v980 = v833;
                                                if ( v831 >= 0 )
                                                {
                                                  v834 = RtlUIntAdd(uAddend[1], v833, &uAddend[1]);
                                                  v832 = uAddend[0];
                                                  CurrentHardwareID = v834;
                                                  if ( v834 >= 0 )
                                                  {
                                                    v832 = ++uAddend[0];
LABEL_1981:
                                                    if ( !v928 )
                                                    {
                                                      v844 = RtlUIntAdd(4u, 0x10u, &v1134);
                                                      v845 = v981;
                                                      CurrentHardwareID = v844;
                                                      if ( v844 >= 0 )
                                                        v845 = v1134;
                                                      v981 = v845;
                                                      if ( v844 >= 0 )
                                                      {
                                                        CurrentHardwareID = RtlUIntAdd(uAddend[1], v845, &uAddend[1]);
                                                        if ( CurrentHardwareID >= 0 )
                                                        {
                                                          ++uAddend[0];
                                                          CurrentHardwareID = 0;
                                                        }
                                                      }
                                                      goto LABEL_2000;
                                                    }
                                                    v846 = (UINT *)v928;
                                                    v847 = 0;
                                                    v1201 = v928;
                                                    if ( !v832 )
                                                    {
LABEL_1994:
                                                      v852 = RtlULongLongAdd((ULONGLONG)v846, 4uLL, v1348);
                                                      v193 = v854 - 3;
                                                      CurrentHardwareID = v852;
                                                      if ( v852 >= 0 )
                                                      {
                                                        if ( (unsigned __int64)(v853 + 5) <= v928 + uAddend[1] )
                                                        {
                                                          v855 = (_OWORD *)v1348[0];
                                                          *v853 = 16;
                                                          *v855 = v1360;
                                                          ++uAddend[0];
                                                        }
                                                        else
                                                        {
                                                          CurrentHardwareID = -1073741789;
                                                        }
                                                      }
                                                      goto LABEL_2000;
                                                    }
                                                    v848 = v981;
                                                    while ( 1 )
                                                    {
                                                      v849 = RtlUIntAdd(4u, *v846, &v1135);
                                                      CurrentHardwareID = v849;
                                                      if ( v849 >= 0 )
                                                        v848 = v1135;
                                                      v981 = v848;
                                                      if ( v849 < 0 )
                                                        goto LABEL_1999;
                                                      CurrentHardwareID = RtlULongLongAdd(v850, v848, &v1201);
                                                      if ( CurrentHardwareID < 0 )
                                                        goto LABEL_1999;
                                                      v846 = (UINT *)v1201;
                                                      if ( ++v847 >= v851 )
                                                        goto LABEL_1994;
                                                    }
                                                  }
                                                }
                                              }
                                              if ( CurrentHardwareID < 0 )
                                                goto LABEL_2000;
                                              goto LABEL_1981;
                                            }
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741811;
                                          }
                                        }
LABEL_1999:
                                        v193 = PagedPool;
                                        goto LABEL_2000;
                                      case 210:
                                        v864 = sub_140725A88(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v864;
                                        if ( v864 >= 0 )
                                          goto LABEL_324;
                                        goto LABEL_688;
                                      case 211:
                                        v865 = sub_1407254D4(&v934, v8, v104, uAddend);
                                        v9 = (unsigned int *)v929;
                                        CurrentHardwareID = v865;
                                        if ( v865 < 0 )
                                          goto LABEL_688;
                                        goto LABEL_324;
                                      default:
                                        v1137 = -2147467263;
                                        if ( v928 )
                                        {
                                          v868 = (UINT *)v928;
                                          v869 = 0;
                                          for ( j = v928; v869 < uAddend[0]; ++v869 )
                                          {
                                            v870 = RtlUIntAdd(4u, *v868, &v1012);
                                            CurrentHardwareID = v870;
                                            if ( v870 >= 0 )
                                              v872 = v1012;
                                            v982 = v872;
                                            if ( v870 < 0 )
                                              goto LABEL_2037;
                                            CurrentHardwareID = RtlULongLongAdd(v871, v872, &j);
                                            if ( CurrentHardwareID < 0 )
                                              goto LABEL_2037;
                                            v868 = (UINT *)j;
                                          }
                                          CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v868, 4uLL, v1349);
                                          if ( CurrentHardwareID >= 0 )
                                          {
                                            if ( (unsigned __int64)(v874 + 2) > v928 + uAddend[1] )
                                              goto LABEL_1571;
                                            v875 = (int *)v1349[0];
                                            *v874 = v873;
                                            *v875 = v1137;
                                            ++uAddend[0];
                                          }
                                        }
                                        else
                                        {
                                          v866 = RtlUIntAdd(4u, 4u, &v1136);
                                          v867 = v982;
                                          CurrentHardwareID = v866;
                                          if ( v866 >= 0 )
                                            v867 = v1136;
                                          v982 = v867;
                                          if ( v866 >= 0 )
                                          {
                                            CurrentHardwareID = RtlUIntAdd(uAddend[1], v867, &uAddend[1]);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              ++uAddend[0];
                                              goto LABEL_2038;
                                            }
                                          }
                                        }
LABEL_2037:
                                        if ( CurrentHardwareID < 0 )
                                          goto LABEL_1572;
LABEL_2038:
                                        v193 = PagedPool;
                                        if ( uAddend[1] )
                                        {
                                          v876 = ExAllocatePoolWithTag(PagedPool, uAddend[1], 0x20534C53u);
                                          if ( v876 )
                                          {
                                            v928 = (ULONGLONG)v876;
                                            uAddend[0] = 0;
                                            v1138 = -2147467263;
                                            CurrentHardwareID = RtlULongLongAdd((ULONGLONG)v876, 4uLL, &v1350);
                                            if ( CurrentHardwareID >= 0 )
                                            {
                                              if ( v878 + 2 > (_DWORD *)((char *)v878 + uAddend[1]) )
                                              {
                                                CurrentHardwareID = -1073741789;
                                              }
                                              else
                                              {
                                                v879 = (_DWORD *)v1350;
                                                *v878 = v877;
                                                *v879 = v1138;
                                                ++uAddend[0];
                                              }
                                            }
                                          }
                                          else
                                          {
                                            CurrentHardwareID = -1073741801;
                                          }
                                        }
                                        else
                                        {
                                          CurrentHardwareID = -1073741762;
                                        }
                                        goto LABEL_1574;
                                    }
                                  }
                                  goto LABEL_858;
                                }
                                v9 = (unsigned int *)v929;
                                CurrentHardwareID = -1073741811;
                                goto LABEL_844;
                              }
                              goto LABEL_845;
                            }
                          }
LABEL_841:
                          v9 = (unsigned int *)v929;
                          goto LABEL_842;
                        }
                        v921 = 0;
                        v83 = 0LL;
                        v84 = 0;
                        if ( v81 )
                        {
                          v85 = v81;
                          if ( v82 < (unsigned __int64)v81 )
                          {
LABEL_751:
                            v921 = -1073741675;
                            v87 = -1073741675;
LABEL_103:
                            v7 = v931;
                            goto LABEL_104;
                          }
                          v921 = 0;
                          if ( (unsigned __int64)v81 < v82 )
                          {
                            v86 = v1151;
                            while ( v85 + 1 >= v85 )
                            {
                              if ( (unsigned __int64)(v85 + 1) > v82 )
                                goto LABEL_847;
                              if ( *v85 >= 0xFFFFFFFC )
                              {
                                v921 = -1073741675;
                                v87 = -1073741675;
                              }
                              else
                              {
                                v86 = *v85 + 4;
                                v87 = 0;
                                v921 = 0;
                                v1151 = v86;
                              }
                              if ( v87 < 0 )
                                goto LABEL_103;
                              if ( (_DWORD *)((char *)v85 + v86) < v85 )
                                goto LABEL_751;
                              v85 = (_DWORD *)((char *)v85 + v86);
                              v921 = 0;
                              if ( (unsigned __int64)v85 > v82 )
                                goto LABEL_847;
                              ++v84;
                              if ( (unsigned __int64)v85 >= v82 )
                                goto LABEL_94;
                            }
                            goto LABEL_751;
                          }
LABEL_94:
                          if ( v85 != (_DWORD *)v82 )
                          {
LABEL_847:
                            v921 = -1073741811;
                            v87 = -1073741811;
                            goto LABEL_103;
                          }
                        }
                        if ( (_DWORD)v80 )
                        {
                          v83 = ExAllocatePoolWithTag(PagedPool, v80, 0x20534C53u);
                          if ( !v83 )
                          {
                            v921 = -1073741801;
                            goto LABEL_101;
                          }
                          v921 = 0;
                        }
                        if ( v81 )
                          memmove(v83, v81, v80);
                        ullAugend = (ULONGLONG)v83;
                        v934 = __PAIR64__(v80, v84);
LABEL_101:
                        v87 = v921;
                        if ( v921 >= 0 && v950 != (_DWORD)v934 )
                        {
                          v8 = (const void **)v930;
                          v9 = (unsigned int *)v929;
                          v5 = (char *)v930;
                          v6 = v930;
                          CurrentHardwareID = -1073741762;
                          goto LABEL_690;
                        }
                        goto LABEL_103;
                      }
                    }
                    v921 = -1073741762;
                  }
LABEL_842:
                  CurrentHardwareID = v921;
LABEL_844:
                  v8 = (const void **)v930;
                  v5 = (char *)v930;
                  goto LABEL_810;
                }
                memset(PoolWithTag, 0, 0x30uLL);
                v921 = 0;
                if ( v11 )
                {
                  *v22 = v10;
                  if ( !(_DWORD)v10 )
                  {
                    v921 = -1073741762;
                    goto LABEL_791;
                  }
                  v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x20534C53u);
                  if ( !v23 )
                    goto LABEL_790;
                  *((_QWORD *)v22 + 1) = v23;
                  v921 = 0;
                  memmove(v23, v11, (unsigned int)v10);
                }
                else
                {
                  *v22 = 0;
                  *((_QWORD *)v22 + 1) = 0LL;
                }
                if ( !v14 )
                {
                  v22[4] = 0;
                  *((_QWORD *)v22 + 3) = 0LL;
                  goto LABEL_28;
                }
                v22[4] = v13;
                if ( !(_DWORD)v13 )
                {
                  v921 = -1073741762;
                  goto LABEL_791;
                }
                v24 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
                if ( v24 )
                {
                  *((_QWORD *)v22 + 3) = v24;
                  v921 = 0;
                  memmove(v24, v14, v13);
LABEL_28:
                  if ( !v19 )
                  {
                    v22[8] = 0;
                    *((_QWORD *)v22 + 5) = 0LL;
                    goto LABEL_32;
                  }
                  v22[8] = v18;
                  if ( (_DWORD)v18 )
                  {
                    v25 = ExAllocatePoolWithTag(PagedPool, v18, 0x20534C53u);
                    if ( v25 )
                    {
                      *((_QWORD *)v22 + 5) = v25;
                      v921 = 0;
                      memmove(v25, v19, v18);
LABEL_32:
                      v26 = v921;
                      goto LABEL_33;
                    }
                    goto LABEL_790;
                  }
                  v921 = -1073741762;
LABEL_791:
                  v426 = (void *)*((_QWORD *)v22 + 1);
                  if ( v426 )
                  {
                    ExFreePoolWithTag(v426, 0x20534C53u);
                    *((_QWORD *)v22 + 1) = 0LL;
                  }
                  v427 = (void *)*((_QWORD *)v22 + 3);
                  if ( v427 )
                  {
                    ExFreePoolWithTag(v427, 0x20534C53u);
                    *((_QWORD *)v22 + 3) = 0LL;
                  }
                  v428 = (void *)*((_QWORD *)v22 + 5);
                  if ( v428 )
                  {
                    ExFreePoolWithTag(v428, 0x20534C53u);
                    *((_QWORD *)v22 + 5) = 0LL;
                  }
                  ExFreePoolWithTag(v22, 0x20534C53u);
                  v22 = (_DWORD *)v954;
                  goto LABEL_32;
                }
LABEL_790:
                v921 = -1073741801;
                goto LABEL_791;
              }
LABEL_783:
              v8 = 0LL;
              CurrentHardwareID = -1073741762;
              v9 = 0LL;
              v7 = 0LL;
              v5 = 0LL;
              goto LABEL_386;
            }
          }
        }
        CurrentHardwareID = -1073741675;
        v8 = 0LL;
        v9 = 0LL;
        v7 = 0LL;
        v5 = 0LL;
      }
    }
  }
LABEL_386:
  v934 = 0LL;
  if ( ullAugend )
  {
    ExFreePoolWithTag((PVOID)ullAugend, 0x20534C53u);
    ullAugend = 0LL;
  }
LABEL_388:
  uAddend[1] = 0;
  uAddend[0] = 0;
  if ( v928 )
  {
    ExFreePoolWithTag((PVOID)v928, 0x20534C53u);
    v928 = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  if ( v9 )
  {
    v260 = (void *)*((_QWORD *)v9 + 1);
    if ( v260 )
    {
      ExFreePoolWithTag(v260, 0x20534C53u);
      *((_QWORD *)v9 + 1) = 0LL;
    }
    v261 = (void *)*((_QWORD *)v9 + 3);
    if ( v261 )
    {
      ExFreePoolWithTag(v261, 0x20534C53u);
      *((_QWORD *)v9 + 3) = 0LL;
    }
    v262 = (void *)*((_QWORD *)v9 + 5);
    if ( v262 )
    {
      ExFreePoolWithTag(v262, 0x20534C53u);
      *((_QWORD *)v9 + 5) = 0LL;
    }
    ExFreePoolWithTag(v9, 0x20534C53u);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20534C53u);
  if ( v8 )
  {
    v263 = (void *)v8[1];
    if ( v263 )
    {
      ExFreePoolWithTag(v263, 0x20534C53u);
      v8[1] = 0LL;
    }
    v264 = (void *)v8[3];
    if ( v264 )
    {
      ExFreePoolWithTag(v264, 0x20534C53u);
      v8[3] = 0LL;
    }
    v265 = (void *)v8[5];
    if ( v265 )
    {
      ExFreePoolWithTag(v265, 0x20534C53u);
      v8[5] = 0LL;
    }
    ExFreePoolWithTag(v8, 0x20534C53u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x20534C53u);
  return (unsigned int)CurrentHardwareID;
}
