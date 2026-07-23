/*
 * XREFs of CmpDoParseKey @ 0x1405A7800
 * Callers:
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpTransSilentIgnore @ 0x1401047C0 (CmpTransSilentIgnore.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x140105530 (CmpEffectiveTokenForSubject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     HvResetDirtyData @ 0x14049926C (HvResetDirtyData.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14049D18C (CmpLockHashEntrySharedByKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpIsKeyStackSymlink @ 0x1404A5108 (CmpIsKeyStackSymlink.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140513000 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x140513354 (CmpExpandPathInfo.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x14053E890 (SeAppendPrivileges.c)
 *     CmpTransSearchAddTransFromHive @ 0x14054C1D4 (CmpTransSearchAddTransFromHive.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpValidateComponents @ 0x1405554A0 (CmpValidateComponents.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405659B0 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteCreateLogic @ 0x140565A58 (CmpVEExecuteCreateLogic.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14056C508 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 *     CmRmIsKCBVisible @ 0x14056FB10 (CmRmIsKCBVisible.c)
 *     CmpGetComponentNameAtIndex @ 0x140573538 (CmpGetComponentNameAtIndex.c)
 *     CmpUpdateHiveRootCellFlags @ 0x14057AE60 (CmpUpdateHiveRootCellFlags.c)
 *     CmListGetPrevElement @ 0x14057B328 (CmListGetPrevElement.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14057D4EC (CmpTryToLockHashEntryExclusive.c)
 *     CmpGetComponentHashAtIndex @ 0x140582268 (CmpGetComponentHashAtIndex.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1405BFEE4 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1405F2528 (CmpSetAccessStateForBackupRestore.c)
 *     CmpWaitForHiveMount @ 0x140647A90 (CmpWaitForHiveMount.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmpPublishEventForPcaResolver @ 0x1406EE62C (CmpPublishEventForPcaResolver.c)
 *     CmpCleanupPathInfo @ 0x1406EEE5C (CmpCleanupPathInfo.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406FB3E8 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        PCUNICODE_STRING String2,
        __m128i *a6,
        __int64 a7,
        int a8,
        ULONG_PTR a9)
{
  __int64 v10; // r13
  __m128i v11; // xmm6
  int v12; // r15d
  volatile signed __int32 *v13; // rsi
  ULONG_PTR v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  char v22; // al
  wchar_t *Buffer; // rax
  __int16 v24; // r10
  unsigned __int64 v25; // rcx
  __int16 v26; // r8
  __int16 v27; // dx
  __int64 v28; // r9
  __int16 v29; // cx
  _WORD *v30; // rax
  ULONG_PTR v31; // r12
  int v32; // esi
  __int64 v33; // rax
  unsigned __int16 v34; // cx
  bool v35; // zf
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int16 v39; // r10
  char IsKeyDeleted; // di
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // r10d
  ULONG_PTR v45; // r14
  char v46; // cl
  __int16 v47; // di
  __int16 v48; // r14
  _WORD *v49; // rsi
  __int16 v50; // r12
  __int16 v51; // r14
  __int16 v52; // r15
  int v53; // eax
  __m128i v54; // xmm0
  unsigned int v55; // edx
  int v56; // r14d
  struct _SECURITY_SUBJECT_CONTEXT *v57; // rcx
  WCHAR *v58; // r15
  WCHAR v59; // ax
  __int16 v60; // r14
  __int64 v61; // r15
  __int16 v62; // ax
  int v63; // edi
  WCHAR *v64; // rsi
  __int64 v65; // r14
  WCHAR v66; // ax
  unsigned int v67; // edx
  int *v68; // rcx
  __int64 v69; // r12
  struct _KTHREAD *v70; // rax
  int v71; // eax
  __int64 v72; // r9
  ULONG_PTR v73; // rdi
  char v74; // cl
  int v75; // ecx
  int v76; // eax
  char v77; // al
  __int64 v78; // rdi
  ULONG_PTR v79; // r12
  _DWORD *v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  int *v83; // rcx
  ULONG_PTR v84; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  __int16 i; // dx
  __int64 v87; // rcx
  int *v88; // rsi
  char v89; // r15
  int v90; // edi
  int v91; // esi
  __int64 *p_SubjectContext; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  void *v95; // rax
  bool v96; // di
  bool v97; // di
  int v98; // eax
  int v99; // eax
  ULONG_PTR v100; // r12
  ULONG_PTR v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  int *v108; // rdi
  struct _PRIVILEGE_SET *v109; // r9
  __int16 v110; // di
  struct _PRIVILEGE_SET *v111; // rsi
  __int16 v112; // bx
  SIZE_T v113; // rbx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v115; // r12
  struct _PRIVILEGE_SET *v116; // rsi
  unsigned __int16 v117; // r11
  SIZE_T v118; // rdi
  struct _PRIVILEGE_SET *v119; // rax
  int *v120; // r15
  int *v121; // r14
  __int64 v122; // r10
  __int64 v123; // r10
  __int16 v124; // r11
  __int16 v125; // r12
  __int16 v126; // di
  int *v127; // rsi
  int *v128; // rbx
  __int64 v129; // rbx
  __int16 v130; // r8
  __int64 v131; // rdx
  __int64 ComponentNameAtIndex; // rax
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r8
  char v136; // bl
  __int64 v137; // rbx
  char *NextElement; // rax
  __int64 v139; // r9
  int v140; // ecx
  __int16 v141; // dx
  __int64 v142; // r8
  __int16 v143; // di
  ULONG_PTR *v144; // r14
  ULONG_PTR *v145; // rbx
  ULONG_PTR v146; // rbx
  int v147; // esi
  int v148; // r12d
  __int64 v149; // r8
  __m128i *v150; // r9
  int v151; // eax
  char v152; // dl
  ULONG_PTR v153; // rax
  int *v154; // rax
  __int64 v155; // rax
  __int64 *v156; // r12
  struct _PRIVILEGE_SET *v157; // rcx
  unsigned __int16 v158; // r11
  int SymbolicLinkTarget; // eax
  __int64 v160; // rcx
  __int64 v161; // rcx
  unsigned __int8 v162; // al
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // rcx
  unsigned __int8 v170; // al
  __int64 v171; // r10
  __int64 v172; // r10
  __int16 v173; // r11
  __int64 v174; // rbx
  __int16 PrivilegeCount_high; // r14
  __int16 v176; // di
  __int64 v177; // r15
  __int64 v178; // rsi
  __int64 *v179; // rbx
  __int64 v180; // rbx
  __int16 v181; // r14
  __int16 v182; // di
  int *v183; // rsi
  int *v184; // rbx
  __int64 v185; // rbx
  int v186; // eax
  int v187; // edx
  __int64 v188; // rdx
  __int64 v189; // rdi
  __int64 v190; // rdi
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // r12
  __int64 v195; // rbx
  unsigned __int16 *v196; // r12
  unsigned int v197; // edx
  int ComponentHashAtIndex; // eax
  __int64 v199; // rdi
  int v200; // ebx
  __int64 v201; // rdi
  ULONG_PTR v202; // rdx
  _DWORD *v203; // r15
  ULONG_PTR v204; // rcx
  int HiveRootCell; // eax
  int v206; // r8d
  int v207; // edx
  __int16 v208; // r15
  __int16 v209; // si
  int *v210; // r12
  ULONG_PTR *v211; // r14
  ULONG_PTR *v212; // rbx
  int updated; // eax
  signed __int32 *v214; // rbx
  int started; // eax
  __int64 v216; // r9
  unsigned __int8 v217; // dl
  int KeyBody; // eax
  ULONG_PTR v219; // rdi
  ULONG_PTR v220; // rcx
  int v221; // ebx
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rbx
  signed __int64 *v226; // rbx
  __int64 KeyNodeForKcb; // rax
  __int64 v228; // rdx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 v231; // rbx
  __int64 v232; // rbx
  volatile signed __int32 *v233; // rbx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rbx
  unsigned __int16 *v237; // rbx
  __int64 v238; // r12
  __int64 v239; // rcx
  unsigned __int8 v240; // dl
  __int64 v241; // rdi
  __int64 v242; // r9
  __int16 v243; // r8
  __int64 v244; // rdx
  char *v245; // rax
  __int64 v246; // r9
  int v247; // ecx
  __int64 v248; // rdx
  __int64 v249; // r8
  int v250; // eax
  __int64 v251; // rcx
  __int64 v252; // rbx
  int v253; // eax
  int v254; // eax
  int v255; // eax
  __int64 v256; // rax
  __int64 v257; // rdx
  __int64 v258; // r8
  __int64 v259; // rax
  __int64 v260; // rdx
  __int64 v261; // r8
  UNICODE_STRING *v262; // rbx
  int v263; // eax
  __int64 v264; // rdi
  _KPROCESS *v265; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v268; // rdx
  __int64 v269; // r8
  __int64 v270; // r9
  int v271; // eax
  int v272; // eax
  int Logic; // eax
  __int64 v274; // rdi
  _KPROCESS *v275; // rdi
  __int64 v276; // rax
  int v277; // ebx
  int v278; // eax
  int v279; // eax
  __int64 v280; // rdi
  int v281; // r12d
  __int64 v282; // rdx
  int v283; // edx
  __int64 v284; // rdx
  __int64 v285; // r8
  __int64 v286; // r9
  int v287; // eax
  __int64 v288; // rcx
  __int64 v289; // rbx
  int v290; // eax
  unsigned __int8 v291; // r12
  int v292; // eax
  int v293; // eax
  __int16 v294; // ax
  __int64 v295; // rsi
  __int64 PrevElement; // rbx
  PACCESS_STATE v297; // rbx
  _QWORD *v298; // r15
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v300; // rdi
  __int64 v301; // rdx
  int v302; // esi
  __int16 v303; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v305; // r14
  _WORD *v306; // r12
  struct _PRIVILEGE_SET *v307; // rbx
  int v308; // eax
  PACCESS_STATE v309; // r15
  struct _PRIVILEGE_SET *v310; // rdi
  __int64 v311; // r14
  __int16 v312; // si
  __int16 v313; // r10
  SIZE_T v314; // r15
  struct _PRIVILEGE_SET *v315; // rax
  __int64 v316; // r11
  __int64 v317; // r11
  __int16 v318; // r10
  __int64 j; // rdx
  __int64 v320; // rcx
  __int16 v321; // ax
  struct _KTHREAD *v322; // rax
  void *v323; // rsi
  PSECURITY_SUBJECT_CONTEXT v324; // r14
  struct _KTHREAD *v325; // rax
  BOOLEAN v326; // al
  struct _PRIVILEGE_SET *v327; // rbx
  ACCESS_MASK v328; // eax
  __int16 v329; // cx
  _KPROCESS *v330; // rdi
  __int64 v331; // rax
  int v332; // ebx
  ULONG_PTR v333; // rbx
  int v334; // edi
  __int16 v335; // si
  __int16 v336; // r15
  __int64 v337; // r13
  __int64 v338; // r14
  ULONG_PTR *v339; // rbx
  ULONG_PTR v340; // rbx
  int v341; // edi
  ULONG_PTR v342; // rbx
  int v343; // edi
  ULONG_PTR v344; // rbx
  unsigned __int32 v345; // eax
  unsigned __int32 v346; // r8d
  ULONG_PTR v347; // rdi
  unsigned int v348; // ebx
  __int64 v349; // r14
  __int64 v350; // rdx
  __int64 v351; // r8
  __int64 v352; // r9
  ULONG_PTR v353; // rsi
  ULONG_PTR v354; // r15
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // r8
  __int64 v358; // r9
  int v359; // r12d
  __int64 v360; // rdx
  __int64 v361; // r8
  __int64 v362; // r9
  ULONG_PTR v363; // rcx
  int v364; // eax
  __int64 v365; // rdx
  _SLIST_ENTRY *v366; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-D0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  char v372; // [rsp+60h] [rbp-A0h]
  int Child; // [rsp+64h] [rbp-9Ch] BYREF
  char v374; // [rsp+68h] [rbp-98h]
  unsigned __int8 v375; // [rsp+69h] [rbp-97h]
  _WORD v376[7]; // [rsp+6Ah] [rbp-96h] BYREF
  ULONG_PTR v377; // [rsp+78h] [rbp-88h] BYREF
  __int16 v378[2]; // [rsp+80h] [rbp-80h] BYREF
  int v379; // [rsp+84h] [rbp-7Ch]
  char v380; // [rsp+88h] [rbp-78h]
  char v381; // [rsp+89h] [rbp-77h]
  _WORD v382[7]; // [rsp+8Ah] [rbp-76h] BYREF
  char v383; // [rsp+98h] [rbp-68h]
  PACCESS_STATE AccessState; // [rsp+A0h] [rbp-60h]
  __int64 v385; // [rsp+A8h] [rbp-58h] BYREF
  int *v386; // [rsp+B0h] [rbp-50h]
  int v387; // [rsp+B8h] [rbp-48h]
  __int64 v388; // [rsp+C0h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v390; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v391; // [rsp+D8h] [rbp-28h]
  NTSTATUS AccessStatus; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v393; // [rsp+E8h] [rbp-18h]
  __m128i v394; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+100h] [rbp+0h]
  __int64 v396; // [rsp+108h] [rbp+8h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext[2]; // [rsp+110h] [rbp+10h]
  ACCESS_MASK GrantedAccess; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v399; // [rsp+128h] [rbp+28h] BYREF
  PVOID TokenInformation; // [rsp+130h] [rbp+30h] BYREF
  __m128i v401; // [rsp+140h] [rbp+40h]
  ULONG_PTR BugCheckParameter2; // [rsp+150h] [rbp+50h]
  __int64 v403; // [rsp+158h] [rbp+58h] BYREF
  ULONG_PTR v404; // [rsp+160h] [rbp+60h] BYREF
  __int64 v405; // [rsp+168h] [rbp+68h]
  int v406; // [rsp+170h] [rbp+70h] BYREF
  __int64 v407; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v408[2]; // [rsp+180h] [rbp+80h]
  struct _PRIVILEGE_SET *v409; // [rsp+190h] [rbp+90h]
  struct _PRIVILEGE_SET *v410; // [rsp+198h] [rbp+98h] BYREF
  _QWORD *v411; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v412; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  PPRIVILEGE_SET v414; // [rsp+1C0h] [rbp+C0h] BYREF
  int v415[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v416; // [rsp+1D8h] [rbp+D8h]
  __int64 v417; // [rsp+1E0h] [rbp+E0h]
  PPRIVILEGE_SET v418; // [rsp+1E8h] [rbp+E8h]
  int v419[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v420; // [rsp+1F8h] [rbp+F8h]
  __int64 v421; // [rsp+200h] [rbp+100h]
  PPRIVILEGE_SET v422; // [rsp+208h] [rbp+108h]
  PPRIVILEGE_SET v423[3]; // [rsp+210h] [rbp+110h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+228h] [rbp+128h]
  __int64 v425; // [rsp+230h] [rbp+130h]
  _QWORD v426[3]; // [rsp+238h] [rbp+138h]
  _QWORD v427[3]; // [rsp+250h] [rbp+150h] BYREF
  PPRIVILEGE_SET v428; // [rsp+268h] [rbp+168h]
  __m128i v429; // [rsp+270h] [rbp+170h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+280h] [rbp+180h] BYREF
  int v431[44]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v10 = a7;
  BugCheckParameter2 = a9;
  v11 = *a6;
  v388 = a1;
  v12 = 0;
  v372 = 0;
  v383 = 0;
  v13 = 0LL;
  v380 = 0;
  v374 = 0;
  LOBYTE(v387) = 0;
  v375 = a3;
  AccessState = a2;
  Object = 0LL;
  *(_QWORD *)&v376[3] = 0LL;
  v377 = 0LL;
  v399 = 0LL;
  LOBYTE(v382[0]) = 0;
  *(_QWORD *)&v382[3] = 0LL;
  v378[0] = 0;
  v404 = 0LL;
  v403 = 0xFFFFFFFFLL;
  v394 = v11;
  v393 = (__int64)String2;
  v405 = a7;
  v381 = 0;
  *(_WORD *)((char *)v376 + 1) = 0;
  v379 = 0;
  LOBYTE(v376[0]) = 0;
  memset(v431, 0, 0xA8uLL);
  *(_QWORD *)v419 = 4294901760LL;
  *(_QWORD *)v415 = 4294901760LL;
  v416 = 0LL;
  v417 = 0LL;
  v418 = 0LL;
  v427[0] = 4294901760LL;
  *(_QWORD *)(a7 + 160) = 0LL;
  *(_QWORD *)(a7 + 168) = 0LL;
  *(_QWORD *)(a7 + 176) = 0LL;
  *(_QWORD *)(a7 + 184) = 0LL;
  *(_QWORD *)(a7 + 192) = 0LL;
  v420 = 0LL;
  v421 = 0LL;
  v422 = 0LL;
  v427[1] = 0LL;
  v427[2] = 0LL;
  v428 = 0LL;
  *(_QWORD *)(a7 + 200) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  memset((void *)(a7 + 216), 0, 0x50uLL);
  *(_QWORD *)(a7 + 216) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD *)(a7 + 88);
  v15 = *(_QWORD *)(a7 + 72);
  v16 = v388;
  BugCheckParameter4 = v14;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v16 + 56);
    if ( v17 && v15 != v17 )
    {
      v18 = -1072103422;
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_713;
    }
    v386 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v16 + 56);
    v386 = *(int **)(v16 + 64);
  }
  v20 = v388;
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v16 + 50);
  if ( *(_QWORD *)(v20 + 8) != *((_QWORD *)CmpRegistryRootObject + 1) )
  {
    if ( !v14 )
      goto LABEL_47;
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v14);
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry();
    goto LABEL_46;
  }
  if ( !v14 )
    goto LABEL_47;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  v21 = *(_QWORD *)(v14 + 288);
  HIBYTE(v376[0]) = 1;
  v22 = v21 & 1;
  if ( (v21 & 1) != 0 )
    v21 &= ~1uLL;
  if ( !v21 || v22 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v21, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry();
    v11 = v394;
    *(_QWORD *)&v376[3] = v377;
LABEL_46:
    HIBYTE(v376[0]) = 0;
    goto LABEL_47;
  }
  Buffer = String2->Buffer;
  v24 = String2->Length - *(_WORD *)v21;
  v25 = (unsigned __int64)*(unsigned __int16 *)v21 >> 1;
  v26 = String2->MaximumLength - *(_WORD *)v21;
  v27 = v26;
  v394.m128i_i16[1] = v26;
  v28 = (__int64)&Buffer[v25];
  v29 = v24;
  v394.m128i_i16[0] = v24;
  v30 = (_WORD *)v28;
  v394.m128i_i64[1] = v28;
  if ( v24 )
  {
    do
    {
      if ( *v30 != 92 )
        break;
      ++v30;
      v27 -= 2;
      v29 -= 2;
    }
    while ( v29 );
    v394.m128i_i64[1] = (__int64)v30;
    v394.m128i_i16[0] = v29;
    v394.m128i_i16[1] = v27;
  }
  v31 = BugCheckParameter4;
  v32 = ((*(_DWORD *)(BugCheckParameter4 + 4) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v29 )
  {
    v33 = *(_QWORD *)(BugCheckParameter4 + 72);
    v34 = *(_WORD *)(v33 + 24);
    v35 = (*(_DWORD *)v33 & 1) == 0;
    v36 = v34;
    if ( v35 )
      v36 = (unsigned __int64)v34 >> 1;
    else
      v34 *= 2;
    v394.m128i_i16[1] = v34 + v26;
    v394.m128i_i64[1] = v28 - 2 * v36;
    v12 = 1;
    v394.m128i_i16[0] = v24 + v34;
    v379 = 1;
    --v32;
  }
  v37 = CmpComputeComponentHashes(&v394, v378, (__int64)v431);
  Child = v37;
  v18 = v37;
  if ( v37 < 0 )
  {
    CmpRecordParseFailure(a7, 512, v37);
    v13 = (volatile signed __int32 *)v377;
    goto LABEL_713;
  }
  LODWORD(v391) = v378[0];
  if ( (unsigned int)(v378[0] + v32) > 0x20 )
  {
    Child = -1073741811;
    v18 = -1073741811;
    CmpRecordParseFailure(a7, 768, -1073741811);
    v13 = (volatile signed __int32 *)v377;
    goto LABEL_713;
  }
  v38 = CmpValidateComponents(v378[0], (__int64)v431);
  Child = v38;
  v18 = v38;
  if ( v38 < 0 )
  {
    CmpRecordParseFailure(a7, 1024, v38);
    v13 = (volatile signed __int32 *)v377;
    goto LABEL_713;
  }
  if ( (_WORD)v12 == v39 )
  {
    CmpLockHashEntrySharedByKcb(v31);
    LOBYTE(v32) = 1;
    v387 = v32;
  }
  else
  {
    LOBYTE(v32) = v387;
  }
  ExAcquirePushLockSharedEx(v31 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v31 + 48));
  IsKeyDeleted = CmpIsKeyDeleted(v31, 0LL);
  CmpUnlockKcb(v31, v41, v42, v43);
  if ( !IsKeyDeleted )
  {
    v44 = v391;
    v45 = v31;
    v390 = v31;
    *(_QWORD *)&v376[3] = v377;
    goto LABEL_106;
  }
  if ( (_BYTE)v32 )
    CmpUnlockHashEntryByKcb(v31);
  CmpDereferenceKeyControlBlock(v31);
  v11 = *a6;
  BugCheckParameter4 = 0LL;
  v394 = v11;
  CmpCleanupPathInfo(v431);
  memset(v431, 0, 0xA8uLL);
  *(_QWORD *)&v376[3] = v377;
  LOBYTE(v387) = 0;
LABEL_47:
  *(__m128i *)SubjectSecurityContext = v11;
  v401 = v11;
  v45 = *(_QWORD *)(v388 + 8);
  v46 = 0;
  v390 = v45;
  HIBYTE(v376[1]) = 0;
  v394.m128i_i16[0] = _mm_cvtsi128_si32(v11);
  if ( !v394.m128i_i16[0] )
  {
    v378[0] = 0;
LABEL_99:
    v44 = v378[0];
    v67 = 0;
    LODWORD(v391) = v378[0];
    if ( v378[0] )
    {
      while ( 1 )
      {
        v68 = v67 >= 8 ? (int *)(*(_QWORD *)&v431[40] + 16 * (v67 - 8 + 6LL)) : &v431[4 * v67 + 8];
        if ( *(_WORD *)v68 > 0x200u )
          break;
        if ( ++v67 >= v378[0] )
          goto LABEL_105;
      }
      Child = -1073741811;
      v18 = -1073741811;
      CmpRecordParseFailure(a7, 1536, -1073741811);
      goto LABEL_708;
    }
LABEL_105:
    LOBYTE(v32) = v387;
    v12 = 0;
    v379 = 0;
LABEL_106:
    v69 = a7 + 216;
    *(_QWORD *)(a7 + 224) = v45;
    *(_QWORD *)(a7 + 248) = v45;
    if ( v44 + ((*(_DWORD *)(v45 + 4) >> 21) & 0x3FF) - (unsigned __int16)v12 > 0x200 )
    {
      Child = -1073741811;
      v18 = -1073741811;
      CmpRecordParseFailure(a7, 1792, -1073741811);
      goto LABEL_708;
    }
    if ( HIBYTE(v376[0]) )
    {
LABEL_116:
      v71 = *(_DWORD *)(v388 + 48);
      if ( (v71 & 9) != 0 )
      {
        v18 = -1073741444;
        if ( (v71 & 1) != 0 )
          v18 = -1073740763;
        Child = v18;
        CmpRecordParseFailure(a7, 2048, v18);
        goto LABEL_708;
      }
      if ( (_WORD)v12 == v378[0] )
      {
        if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v45) )
        {
          v18 = -1073741670;
          Child = -1073741670;
          CmpRecordParseFailure(a7, 2304, -1073741670);
          goto LABEL_708;
        }
        v73 = BugCheckParameter4;
        v377 = v45;
        if ( v45 == BugCheckParameter4 )
        {
          v74 = v387;
        }
        else
        {
          CmpLockHashEntrySharedByKcb(v45);
          v74 = 1;
        }
        LOBYTE(v376[0]) = v74;
        v75 = 0;
        if ( v45 != v73 )
          v75 = (unsigned __int8)v32;
        v387 = v75;
      }
      else
      {
        v76 = CmpPerformCompleteKcbCacheLookup(
                v45,
                (unsigned __int16)v12,
                v44,
                (__int64)v431,
                (_DWORD *)a7,
                &v377,
                (char *)v376,
                &v396);
        Child = v76;
        v18 = v76;
        if ( v76 < 0 || v76 == 259 )
        {
          CmpRecordParseFailure(a7, 2432, v76);
          v101 = v377;
          *(_QWORD *)&v376[3] = v377;
LABEL_706:
          if ( LOBYTE(v376[0]) )
            CmpUnlockHashEntryByKcb(v101);
          goto LABEL_708;
        }
        v45 = v377;
        v77 = v396;
        LOWORD(v12) = v396 + v12;
        v390 = v377;
        v379 = v12;
        *(_QWORD *)(v69 + 16) = v377;
        *(_BYTE *)(v69 + 40) = v77;
        *(_QWORD *)(v69 + 32) = v45;
      }
      if ( (_WORD)v12 == v378[0] && (*(_DWORD *)a7 & 1) == 0 )
      {
        v78 = *(_QWORD *)(v45 + 24);
        *(_QWORD *)(*(_QWORD *)(v78 + 1640)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v78 + 1648) - 1) & ((unsigned int)(101027
                                                                                 * (*(_DWORD *)(v45 + 8) ^ (*(_DWORD *)(v45 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v45 + 8) ^ (*(_DWORD *)(v45 + 8) >> 9))) >> 9)))
                  + 8) = 0LL;
        ExReleasePushLockEx(
          *(_QWORD *)(*(_QWORD *)(v45 + 24) + 1640LL)
        + 24
        * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v45 + 24) + 1648LL) - 1) & ((unsigned int)(101027
                                                                                           * (*(_DWORD *)(v45 + 8) ^ (*(_DWORD *)(v45 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v45 + 8) ^ (*(_DWORD *)(v45 + 8) >> 9))) >> 9))),
          0LL,
          *(_QWORD *)(v45 + 24),
          v72);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v78 + 4288), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v78);
        v45 = v377;
        v390 = v377;
        LOBYTE(v376[0]) = 0;
      }
      v79 = v45 + 40;
      ExAcquirePushLockSharedEx(v45 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v45 + 48));
      if ( (__int16)v12 >= v378[0] )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      else
      {
        v82 = (unsigned int)(__int16)v12;
        if ( (unsigned int)v82 >= 8 )
          v83 = (int *)(*(_QWORD *)&v431[40] + 16 * ((unsigned int)(v82 - 8) + 6LL));
        else
          v83 = &v431[4 * v82 + 8];
        DestinationString.Buffer = (wchar_t *)*((_QWORD *)v83 + 1);
        DestinationString.Length = v394.m128i_i16[0]
                                 - 2 * (((__int64)DestinationString.Buffer - v394.m128i_i64[1]) >> 1);
        DestinationString.MaximumLength = DestinationString.Length;
      }
      v84 = v377;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      SubjectSecurityContext[0] = &AccessState->SubjectSecurityContext;
      if ( CmpVEEnabled )
      {
        if ( (*(_DWORD *)(a7 + 24) & 0x10) == 0 && !*(_WORD *)(v377 + 58) )
        {
          v80 = *(_DWORD **)(v377 + 24);
          if ( v80 != CmpMasterHive )
          {
            v426[2] = 0LL;
            v425 = 0LL;
            v426[1] = 0LL;
            v426[0] = v377;
            for ( i = 0; i >= 0; --i )
            {
              v87 = i < 2 ? v426[i] : *(_QWORD *)(8LL * (i - 2));
              if ( *(_WORD *)(v87 + 58) && *(_BYTE *)(v87 + 57) == 1 )
                break;
              if ( *(_DWORD *)(v87 + 32) != -1 )
              {
                if ( (v80[1038] & 0x10) == 0 && (*(_DWORD *)(v377 + 176) & 0x2000000) == 0 )
                  goto LABEL_161;
                break;
              }
            }
            v88 = (int *)(a7 + 16);
            v89 = 0;
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            if ( a7 != -16 && (*v88 & 1) != 0 )
            {
              if ( (*v88 & 2) != 0 )
                goto LABEL_161;
              goto LABEL_181;
            }
            if ( v375 )
            {
              if ( AccessState == (PACCESS_STATE)-32LL )
              {
                CurrentThread = KeGetCurrentThread();
                CurrentThreadProcess = PsGetCurrentThreadProcess();
                SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
                v84 = v377;
                p_SubjectContext = (__int64 *)&SubjectContext;
                v89 = 1;
              }
              else
              {
                p_SubjectContext = (__int64 *)&AccessState->SubjectSecurityContext;
              }
              LODWORD(TokenInformation) = 0;
              v95 = (void *)CmpEffectiveTokenForSubject(p_SubjectContext, &v406);
              v96 = 0;
              if ( v406 == 1 )
              {
                SeQueryInformationToken(v95, TokenVirtualizationEnabled, &TokenInformation);
                if ( (_DWORD)TokenInformation )
                  v96 = 1;
              }
              v97 = !v96;
              if ( a7 != -16 )
              {
                v98 = *v88 | 1;
                *v88 = v98;
                if ( v97 )
                  v99 = v98 | 2;
                else
                  v99 = v98 | 4;
                *v88 = v99;
              }
              if ( v89 )
                SeReleaseSubjectContext(&SubjectContext);
              if ( !v97 )
              {
                p_SubjectSecurityContext = SubjectSecurityContext[0];
LABEL_181:
                if ( (*(_DWORD *)a7 & 8) != 0 )
                  goto LABEL_161;
                if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                {
                  CmpAttachToRegistryProcess(a7 + 168);
                  *(_DWORD *)(a7 + 160) |= 1u;
                }
                if ( (*(_DWORD *)(v84 + 176) & 0x2000000) != 0 )
                  v90 = CmpVEExecuteVirtualStoreParseLogic(v84, &DestinationString, a7, v393);
                else
                  v90 = CmpVEExecuteRealStoreParseLogic(
                          v84,
                          (unsigned int)&DestinationString,
                          a7,
                          v393,
                          (__int64)p_SubjectSecurityContext);
LABEL_162:
                v91 = *(_DWORD *)(v84 + 4) & 0x80000;
                Child = v90;
                if ( *(struct _KTHREAD **)(v390 + 48) == KeGetCurrentThread() )
                  *(_QWORD *)(v390 + 48) = 0LL;
                else
                  _InterlockedDecrement((volatile signed __int32 *)(v390 + 48));
                ExReleasePushLockEx(v79, 0LL, (__int64)v80, v81);
                v100 = v377;
                *(_QWORD *)&v376[3] = v377;
                if ( v91 && (*(_DWORD *)(v84 + 4) & 0x80000) != 0 )
                  CmpFreeKeyControlBlock(v377);
                if ( v90 != -1073741199 )
                {
                  CmpRecordParseFailure(a7, 2496, v90);
                  v18 = Child;
                  v101 = *(_QWORD *)&v376[3];
                  goto LABEL_706;
                }
                v102 = *(_QWORD *)(v100 + 24);
                v103 = *(_QWORD *)(a7 + 64);
                if ( !PsIsCurrentThreadInServerSilo() && v103 && v103 != v102 )
                {
                  if ( (*(_DWORD *)(v102 + 4152) & 1) != 0 )
                  {
                    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                    v106 = *(_QWORD *)(v102 + 4160);
                    if ( v106 != v102 + 4160 )
                    {
                      while ( 1 )
                      {
                        v107 = v106 - 4160;
                        if ( v107 == v103 )
                          break;
                        v106 = *(_QWORD *)(v107 + 4160);
                        if ( v106 == v102 + 4160 )
                          goto LABEL_200;
                      }
                      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v104, v105);
                      goto LABEL_203;
                    }
LABEL_200:
                    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v104, v105);
                  }
                  v18 = -1073741790;
                  Child = -1073741790;
                  CmpRecordParseFailure(a7, 2560, -1073741790);
                  v101 = *(_QWORD *)&v376[3];
                  goto LABEL_706;
                }
LABEL_203:
                if ( v15 || v386 )
                {
                  v101 = *(_QWORD *)&v376[3];
                  if ( *(PVOID *)(*(_QWORD *)&v376[3] + 24LL) == CmpMasterHive )
                  {
                    v380 = 1;
                    v15 = 0LL;
                    v108 = 0LL;
                  }
                  else if ( (v15 || v386) && *(_WORD *)(*(_QWORD *)&v376[3] + 58LL) )
                  {
                    CmpLogUnsupportedOperation(8LL);
                    if ( !PsIsCurrentThreadInServerSilo() )
                    {
                      v18 = -1072103419;
                      Child = -1072103419;
                      CmpRecordParseFailure(a7, 2816, -1072103419);
                      goto LABEL_706;
                    }
                    v15 = 0LL;
                    v108 = 0LL;
                  }
                  else
                  {
                    v108 = v386;
                  }
                }
                else
                {
                  v101 = *(_QWORD *)&v376[3];
                  v108 = 0LL;
                }
                if ( !CmpTransSilentIgnore() && (v15 || v108) )
                {
                  if ( (int)CmpTransSearchAddTransFromHive(*(_QWORD *)(v101 + 24), v15, (int)v108, 0, (__int64)&v385) < 0 )
                  {
                    if ( LOBYTE(v376[0]) )
                    {
                      CmpUnlockHashEntryByKcb(v101);
                      LOBYTE(v376[0]) = 0;
                    }
                    CmpUnlockRegistry();
                    v18 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v101 + 24), v15, (int)v108, 1u, (__int64)&v385);
                    CmpLockRegistry();
                    HIBYTE(v376[0]) = 1;
                    if ( v18 >= 0 )
                      v18 = -1073741267;
                    Child = v18;
                    CmpRecordParseFailure(a7, 3072, v18);
                    goto LABEL_706;
                  }
                  v109 = 0LL;
                }
                else
                {
                  v385 = (__int64)v109;
                }
                v110 = *(_WORD *)(v101 + 58);
                v111 = v109;
                v112 = v110;
                if ( v110 < 2 || v110 == 1 )
                {
                  v115 = *(_QWORD *)&v376[3];
                }
                else
                {
                  v113 = 8LL * (unsigned int)(v110 - 1);
                  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                                    PagedPool,
                                                                    v113,
                                                                    0x35364D43u);
                  v111 = TransientPoolWithTag;
                  if ( !TransientPoolWithTag )
                  {
                    v18 = -1073741670;
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3328, -1073741670);
                    v101 = *(_QWORD *)&v376[3];
                    goto LABEL_706;
                  }
                  memset(TransientPoolWithTag, 0, v113);
                  v115 = *(_QWORD *)&v376[3];
                  v109 = 0LL;
                  v112 = *(_WORD *)(*(_QWORD *)&v376[3] + 58LL);
                }
                LOWORD(v415[0]) = v110;
                HIWORD(v415[0]) = -1;
                v418 = v111;
                v116 = v109;
                v117 = v112;
                if ( v112 >= 2 && v112 != 1 )
                {
                  v118 = 8LL * (unsigned int)(v112 - 1);
                  v119 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v118, 0x35364D43u);
                  v116 = v119;
                  if ( !v119 )
                  {
                    v18 = -1073741670;
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3584, -1073741670);
                    v101 = *(_QWORD *)&v376[3];
                    goto LABEL_706;
                  }
                  memset(v119, 0, v118);
                  v117 = *(_WORD *)(v115 + 58);
                  v109 = 0LL;
                }
                HIWORD(v419[0]) = -1;
                LOWORD(v419[0]) = v112;
                v422 = v116;
                v101 = *(_QWORD *)&v376[3];
                v120 = v415;
                v386 = v415;
                v121 = v419;
                v390 = (ULONG_PTR)v419;
                Child = (int)v109;
                HIWORD(v415[0]) = v117;
                if ( v117 )
                {
                  v122 = *(_QWORD *)(*(_QWORD *)&v376[3] + 184LL);
                  if ( v122 )
                  {
                    do
                    {
                      CmpSetKcbAtLayerHeight(v415, v117, *(_QWORD *)(v122 + 16));
                      v122 = *(_QWORD *)(v123 + 24);
                      v117 = v124 - 1;
                    }
                    while ( v122 );
                    v109 = 0LL;
                  }
                }
                else
                {
                  v416 = *(_QWORD *)&v376[3];
                }
                if ( (__int16)v379 < v378[0] )
                {
                  while ( 1 )
                  {
                    v125 = *((_WORD *)v120 + 1);
                    v126 = (__int16)v109;
                    if ( (__int16)v109 <= v125 )
                    {
                      v127 = v120 + 2;
                      do
                      {
                        if ( v126 < 2 )
                          v128 = v127;
                        else
                          v128 = (int *)(*((_QWORD *)v120 + 3) + 8LL * (v126 - 2));
                        v129 = *(_QWORD *)v128;
                        ExAcquirePushLockSharedEx(v129 + 40, 0LL);
                        _InterlockedIncrement((volatile signed __int32 *)(v129 + 48));
                        ++v126;
                        v127 += 2;
                      }
                      while ( v126 <= v125 );
                      v101 = v377;
                      v109 = 0LL;
                      *(_QWORD *)&v376[3] = v377;
                    }
                    v410 = v109;
                    v130 = v125;
                    if ( v125 < 0 )
                    {
LABEL_258:
                      if ( CmpLoadingSystemHivesActive )
                      {
                        if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() )
                        {
                          *(_QWORD *)&v376[3] = v377;
                        }
                        else
                        {
                          *(_QWORD *)&v376[3] = v377;
                          if ( *(PVOID *)(v377 + 24) == CmpMasterHive
                            && (*(_DWORD *)(v377 + 4) & 0x7FE00000) == 0x600000
                            && (__int16)v379 > 0 )
                          {
                            ComponentNameAtIndex = CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379 - 1);
                            if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v133, v134, v10 + 136) )
                            {
                              *(_DWORD *)v10 |= 0x100u;
                              v18 = 259;
                              Child = 259;
                              CmpRecordParseFailure(v10, 3840, 259);
                              v136 = 0;
                              goto LABEL_390;
                            }
                          }
                        }
                      }
                      Child = -1073741772;
                      v18 = -1073741772;
                      CmpRecordParseFailure(v10, 4096, -1073741772);
                      v136 = 0;
                      goto LABEL_390;
                    }
                    while ( 1 )
                    {
                      if ( v130 < 2 )
                        v131 = *(_QWORD *)&v120[2 * v130 + 2];
                      else
                        v131 = *(_QWORD *)(*((_QWORD *)v120 + 3) + 8LL * (v130 - 2));
                      if ( *(_WORD *)(v131 + 58) && *(_BYTE *)(v131 + 57) == 1 )
                        goto LABEL_258;
                      if ( *(_DWORD *)(v131 + 32) != -1 )
                        break;
                      if ( --v130 < 0 )
                        goto LABEL_258;
                    }
                    v137 = v385;
                    if ( v385 )
                    {
                      NextElement = CmListGetNextElement(
                                      (_QWORD **)(*((_QWORD *)v120 + 1) + 200LL),
                                      (_QWORD **)&v410,
                                      32);
                      if ( NextElement )
                      {
                        while ( 1 )
                        {
                          v140 = *((_DWORD *)NextElement + 17);
                          if ( v140 == 2 || v140 == 11 )
                            break;
                          NextElement = CmListGetNextElement((_QWORD **)(v139 + 200), (_QWORD **)&v410, 32);
                          if ( !NextElement )
                            goto LABEL_272;
                        }
                        if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v137) )
                          goto LABEL_258;
                      }
LABEL_272:
                      v109 = 0LL;
                    }
                    v141 = v125;
                    while ( 1 )
                    {
                      v142 = v141 < 2
                           ? *(_QWORD *)&v120[2 * v141 + 2]
                           : *(_QWORD *)(*((_QWORD *)v120 + 3) + 8LL * (v141 - 2));
                      if ( *(_DWORD *)(v142 + 32) != -1 )
                        break;
                      if ( --v141 < 0 )
                        goto LABEL_281;
                    }
                    if ( (*(_DWORD *)(v142 + 176) & 0x100000) != 0 )
                    {
                      SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                             (__int64)v120,
                                             (__int64)v431,
                                             v379,
                                             v378[0],
                                             v137,
                                             v10,
                                             v393,
                                             (ULONG_PTR *)(v10 + 88));
                      Child = SymbolicLinkTarget;
                      v18 = SymbolicLinkTarget;
                      if ( SymbolicLinkTarget >= 0 )
                      {
                        *(_DWORD *)v10 &= ~8u;
                        if ( !*(_QWORD *)(v10 + 64) )
                        {
                          v160 = *(_QWORD *)(v101 + 24);
                          if ( (*(_DWORD *)(v160 + 4152) & 1) != 0 )
                            *(_QWORD *)(v10 + 64) = v160;
                        }
                        v161 = v10 + 216;
                        v18 = 260;
                        v162 = *(_BYTE *)(v10 + 258);
                        Child = 260;
                        if ( v162 < 4u )
                        {
                          *(_DWORD *)(v161 + 4LL * v162 + 44) = 4864;
                          *(_DWORD *)(v161 + 4LL * (unsigned __int8)(*(_BYTE *)(v10 + 258))++ + 60) = 260;
                        }
                      }
                      else
                      {
                        CmpRecordParseFailure(v10, 4608, SymbolicLinkTarget);
                      }
                      goto LABEL_706;
                    }
LABEL_281:
                    v143 = (__int16)v109;
                    if ( (__int16)v109 <= v125 )
                    {
                      v144 = (ULONG_PTR *)(v120 + 2);
                      do
                      {
                        if ( v143 < 2 )
                          v145 = v144;
                        else
                          v145 = (ULONG_PTR *)(*((_QWORD *)v120 + 3) + 8LL * (v143 - 2));
                        v146 = *v145;
                        v147 = *(_DWORD *)(v146 + 4) & 0x80000;
                        if ( *(struct _KTHREAD **)(v146 + 48) == KeGetCurrentThread() )
                          *(_QWORD *)(v146 + 48) = 0LL;
                        else
                          _InterlockedDecrement((volatile signed __int32 *)(v146 + 48));
                        ExReleasePushLockEx(v146 + 40, 0LL, v142, (__int64)v109);
                        if ( v147 && (*(_DWORD *)(v146 + 4) & 0x80000) != 0 )
                          CmpFreeKeyControlBlock(v146);
                        ++v143;
                        ++v144;
                      }
                      while ( v143 <= v125 );
                      v101 = v377;
                      v10 = v405;
                      v137 = v385;
                      v121 = (int *)v390;
                      *(_QWORD *)&v376[3] = v377;
                    }
                    v148 = v379;
                    v149 = (unsigned int)(__int16)v379;
                    v150 = (unsigned int)v149 >= 8
                         ? (__m128i *)(*(_QWORD *)&v431[40] + 16 * ((unsigned int)(v149 - 8) + 6LL))
                         : (__m128i *)&v431[4 * (unsigned int)v149 + 8];
                    v151 = (unsigned int)v149 >= 8
                         ? *(_DWORD *)(*(_QWORD *)&v431[40] + 4LL * (unsigned int)(v149 - 8))
                         : v431[v149];
                    v152 = (*(_DWORD *)v10 & 1) != 0 && (_DWORD)v149 == (_DWORD)v391 - 1;
                    *(_DWORD *)AccessMode = v151 + 37 * *(_DWORD *)(v101 + 8);
                    v18 = CmpWalkOneLevel(
                            v101,
                            (__int64)v120,
                            &v399,
                            (__int64)v121,
                            (bool *)v382,
                            v150,
                            v151,
                            *(ULONG_PTR *)AccessMode,
                            v137,
                            v152,
                            v10);
                    Child = v18;
                    if ( v18 == -1073741772 )
                      break;
                    if ( v18 < 0 )
                      goto LABEL_329;
                    v153 = v399;
                    ++*(_BYTE *)(v10 + 257);
                    *(_QWORD *)(v10 + 240) = v153;
                    *(_QWORD *)(v10 + 248) = v153;
                    v109 = 0LL;
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v101, 0xFFFFFFFF) == 1 )
                      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                    LOWORD(v148) = v148 + 1;
                    v101 = v399;
                    LOBYTE(v376[0]) = v382[0];
                    v154 = v120;
                    v120 = v121;
                    v386 = v121;
                    v121 = v154;
                    v390 = (ULONG_PTR)v154;
                    *(_QWORD *)&v376[3] = v399;
                    v377 = v399;
                    v399 = 0LL;
                    LOBYTE(v382[0]) = 0;
                    v379 = v148;
                    if ( (__int16)v148 >= v378[0] )
                      goto LABEL_308;
                  }
                  if ( CmpLoadingSystemHivesActive )
                  {
                    v101 = v377;
                    *(_QWORD *)&v376[3] = v377;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(PVOID *)(v377 + 24) == CmpMasterHive )
                    {
                      if ( (*(_DWORD *)(v377 + 4) & 0x7FE00000) == 0x600000 && (__int16)v148 > 0 )
                      {
                        v163 = CmpGetComponentNameAtIndex((__int64)v431, (__int16)v148 - 1);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v163, v164, v165, v10 + 136) )
                        {
                          *(_DWORD *)v10 |= 0x100u;
                          v18 = 259;
                          Child = 259;
                          CmpRecordParseFailure(v10, 5120, 259);
                          goto LABEL_706;
                        }
                      }
                      if ( (*(_DWORD *)(v101 + 4) & 0x7FE00000) == 0x400000 )
                      {
                        v166 = CmpGetComponentNameAtIndex((__int64)v431, (__int16)v148);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v166, v167, v168, v10 + 136) )
                        {
                          *(_DWORD *)v10 |= 0x100u;
                          v18 = 259;
                          Child = 259;
                          CmpRecordParseFailure(v10, 5376, 259);
                          goto LABEL_706;
                        }
                      }
                    }
                    v18 = Child;
                  }
LABEL_329:
                  v169 = v10 + 216;
                  v170 = *(_BYTE *)(v10 + 258);
                  if ( v170 < 4u )
                  {
                    *(_DWORD *)(v169 + 4LL * v170 + 44) = 5504;
                    *(_DWORD *)(v169 + 4LL * (unsigned __int8)(*(_BYTE *)(v10 + 258))++ + 60) = v18;
                  }
                  goto LABEL_706;
                }
LABEL_308:
                v155 = *(_QWORD *)(v101 + 64);
                v156 = (__int64 *)(v101 + 64);
                v391 = v101 + 64;
                v157 = (struct _PRIVILEGE_SET *)v121;
                *(_QWORD *)&v382[3] = v121;
                if ( v155 )
                {
                  v158 = *(_WORD *)(v155 + 58);
                  *((_WORD *)v121 + 1) = v158;
                  if ( v158 )
                  {
                    v171 = *(_QWORD *)(v155 + 184);
                    if ( v171 )
                    {
                      do
                      {
                        CmpSetKcbAtLayerHeight(v121, v158, *(_QWORD *)(v171 + 16));
                        v171 = *(_QWORD *)(v172 + 24);
                        v158 = v173 - 1;
                      }
                      while ( v171 );
                      v155 = *v156;
                    }
                  }
                  else
                  {
                    *((_QWORD *)v121 + 1) = v155;
                  }
                }
                else
                {
                  v157 = v109;
                  *(_QWORD *)&v382[3] = v109;
                }
                v174 = *(_QWORD *)(v388 + 8);
                if ( v155 != v174 && v101 != v174 )
                {
                  ExAcquirePushLockSharedEx(v174 + 40, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v174 + 48));
                  v101 = v377;
                  v157 = *(struct _PRIVILEGE_SET **)&v382[3];
                  *(_QWORD *)&v376[3] = v377;
                  v374 = 1;
                }
                if ( v157 )
                {
                  PrivilegeCount_high = HIWORD(v157->PrivilegeCount);
                  v176 = 0;
                  if ( PrivilegeCount_high >= 0 )
                  {
                    v177 = *(_QWORD *)&v382[3];
                    v178 = *(_QWORD *)&v382[3] + 8LL;
                    do
                    {
                      if ( v176 < 2 )
                        v179 = (__int64 *)v178;
                      else
                        v179 = (__int64 *)(*(_QWORD *)(v177 + 24) + 8LL * (v176 - 2));
                      v180 = *v179;
                      ExAcquirePushLockSharedEx(v180 + 40, 0LL);
                      _InterlockedIncrement((volatile signed __int32 *)(v180 + 48));
                      ++v176;
                      v178 += 8LL;
                    }
                    while ( v176 <= PrivilegeCount_high );
                    v101 = v377;
                    v120 = v386;
                    *(_QWORD *)&v376[3] = v377;
                  }
                  v372 = 1;
                }
                v181 = *((_WORD *)v120 + 1);
                v182 = 0;
                if ( v181 >= 0 )
                {
                  v183 = v120 + 2;
                  do
                  {
                    if ( v182 < 2 )
                      v184 = v183;
                    else
                      v184 = (int *)(*((_QWORD *)v120 + 3) + 8LL * (v182 - 2));
                    v185 = *(_QWORD *)v184;
                    ExAcquirePushLockSharedEx(v185 + 40, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v185 + 48));
                    ++v182;
                    v183 += 2;
                  }
                  while ( v182 <= v181 );
                  v101 = v377;
                  *(_QWORD *)&v376[3] = v377;
                }
                v186 = *(_DWORD *)(v388 + 48);
                if ( (v186 & 9) != 0 )
                {
                  v18 = -1073741444;
                  v187 = 5888;
                  if ( (v186 & 1) != 0 )
                    v18 = -1073740763;
LABEL_359:
                  Child = v18;
                  CmpRecordParseFailure(v10, v187, v18);
LABEL_389:
                  v136 = v372;
LABEL_390:
                  v208 = *((_WORD *)v120 + 1);
                  v209 = 0;
                  if ( v208 < 0 )
                  {
LABEL_680:
                    if ( v136 )
                    {
                      v335 = 0;
                      v336 = *(_WORD *)(*(_QWORD *)&v382[3] + 2LL);
                      if ( v336 >= 0 )
                      {
                        v337 = *(_QWORD *)&v382[3];
                        v338 = *(_QWORD *)&v382[3] + 8LL;
                        do
                        {
                          if ( v335 < 2 )
                            v339 = (ULONG_PTR *)v338;
                          else
                            v339 = (ULONG_PTR *)(*(_QWORD *)(v337 + 24) + 8LL * (v335 - 2));
                          v340 = *v339;
                          v341 = *(_DWORD *)(v340 + 4) & 0x80000;
                          if ( *(struct _KTHREAD **)(v340 + 48) == KeGetCurrentThread() )
                            *(_QWORD *)(v340 + 48) = 0LL;
                          else
                            _InterlockedDecrement((volatile signed __int32 *)(v340 + 48));
                          ExReleasePushLockEx(v340 + 40, 0LL, v135, v19);
                          if ( v341 && (*(_DWORD *)(v340 + 4) & 0x80000) != 0 )
                            CmpFreeKeyControlBlock(v340);
                          ++v335;
                          v338 += 8LL;
                        }
                        while ( v335 <= v336 );
                        v18 = Child;
                        v10 = v405;
                        *(_QWORD *)&v376[3] = v377;
                      }
                    }
LABEL_694:
                    if ( v374 )
                    {
                      v342 = *(_QWORD *)(v388 + 8);
                      v343 = *(_DWORD *)(v342 + 4) & 0x80000;
                      if ( *(struct _KTHREAD **)(v342 + 48) == KeGetCurrentThread() )
                        *(_QWORD *)(v342 + 48) = 0LL;
                      else
                        _InterlockedDecrement((volatile signed __int32 *)(v342 + 48));
                      ExReleasePushLockEx(v342 + 40, 0LL, v135, v19);
                      if ( v343 && (*(_DWORD *)(v342 + 4) & 0x80000) != 0 )
                        CmpFreeKeyControlBlock(v342);
                      v101 = v377;
                      v18 = Child;
                      *(_QWORD *)&v376[3] = v377;
                    }
                    else
                    {
                      v101 = *(_QWORD *)&v376[3];
                    }
                    if ( v381 )
                      CmpUnlockHashEntry(*(PVOID *)(v10 + 48), 0, v135, v19);
                    goto LABEL_706;
                  }
                  v210 = v386;
                  v211 = (ULONG_PTR *)(v386 + 2);
                  do
                  {
                    if ( v209 < 2 )
                      v212 = v211;
                    else
                      v212 = (ULONG_PTR *)(*((_QWORD *)v210 + 3) + 8LL * (v209 - 2));
                    v333 = *v212;
                    v334 = *(_DWORD *)(v333 + 4) & 0x80000;
                    if ( *(struct _KTHREAD **)(v333 + 48) == KeGetCurrentThread() )
                      *(_QWORD *)(v333 + 48) = 0LL;
                    else
                      _InterlockedDecrement((volatile signed __int32 *)(v333 + 48));
                    ExReleasePushLockEx(v333 + 40, 0LL, v135, v19);
                    if ( v334 && (*(_DWORD *)(v333 + 4) & 0x80000) != 0 )
                      CmpFreeKeyControlBlock(v333);
                    ++v209;
                    ++v211;
                  }
                  while ( v209 <= v208 );
                  v18 = Child;
                  v10 = v405;
                  *(_QWORD *)&v376[3] = v377;
LABEL_679:
                  v136 = v372;
                  goto LABEL_680;
                }
                LOWORD(v379) = v379 - 1;
                v35 = (*(_DWORD *)(v101 + 176) & 0x20000) == 0;
                v390 = v101 + 176;
                if ( !v35 )
                {
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 6144, -1073741772);
                  goto LABEL_389;
                }
                v188 = *(_QWORD *)(v101 + 232);
                v189 = v385;
                if ( v188 && !CmEqualTrans(v385, v188) )
                {
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 6400, -1073741772);
                  goto LABEL_389;
                }
                if ( (*(_DWORD *)v10 & 2) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v120);
                  v190 = *(_QWORD *)&v382[3];
                  CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                  v194 = v388;
                  if ( v374 )
                    CmpUnlockKcb(*(_QWORD *)(v388 + 8), v191, v192, v193);
                  v381 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v10 + 48), 0LL);
                  if ( v374 )
                  {
                    v195 = *(_QWORD *)(v194 + 8);
                    ExAcquirePushLockSharedEx(v195 + 40, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v195 + 48));
                    v101 = v377;
                    *(_QWORD *)&v376[3] = v377;
                  }
                  CmpLockKcbStackTopExclusiveRestShared(v190);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v120);
                  v196 = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379);
                  ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v431, v197);
                  v199 = v388;
                  v200 = ComponentHashAtIndex;
                  if ( CmpIsKeyDeletedForKeyBody(v388, 0LL) )
                  {
                    v35 = (*(_BYTE *)(v199 + 48) & 1) == 0;
                    v18 = -1073741444;
                    v187 = 6656;
                    if ( !v35 )
                      v18 = -1073740763;
                    goto LABEL_359;
                  }
                  v201 = v385;
                  if ( CmpIsKeyStackDeleted(*(__int64 *)&v382[3], v385) )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 6912, -1073741772);
                    goto LABEL_389;
                  }
                  if ( !CmpIsKeyStackDeleted((__int64)v120, v201) )
                  {
                    v18 = -1073741790;
                    Child = -1073741790;
                    CmpRecordParseFailure(v10, 7168, -1073741790);
                    goto LABEL_389;
                  }
                  if ( *(PVOID *)(*(_QWORD *)v391 + 24LL) != CmpMasterHive )
                  {
                    v18 = -1073741790;
                    Child = -1073741790;
                    CmpRecordParseFailure(v10, 7424, -1073741790);
                    goto LABEL_389;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)v391 + 176LL) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 7680, -1073741772);
                    goto LABEL_389;
                  }
                  if ( (*(_DWORD *)(v10 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(v10 + 168);
                    *(_DWORD *)(v10 + 160) |= 1u;
                  }
                  v202 = *(unsigned int *)(v10 + 40);
                  v203 = (_DWORD *)(v10 + 40);
                  v204 = *(_QWORD *)(v10 + 48);
                  if ( (_DWORD)v202 == -1 )
                  {
                    HiveRootCell = CmpCreateHiveRootCell(v204, v10 + 40);
                    Child = HiveRootCell;
                    v18 = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v206 = HiveRootCell;
                      v207 = 7808;
LABEL_387:
                      CmpRecordParseFailure(v10, v207, v206);
LABEL_388:
                      v120 = v386;
                      goto LABEL_389;
                    }
                  }
                  else
                  {
                    updated = CmpUpdateHiveRootCellFlags(v204, v202);
                    Child = updated;
                    v18 = updated;
                    if ( updated < 0 )
                    {
                      v206 = updated;
                      v207 = 7936;
                      goto LABEL_387;
                    }
                  }
                  *(_WORD *)(v101 + 178) |= 2u;
                  *(_DWORD *)AccessMode = 0;
                  LODWORD(GenericMapping) = v200;
                  v18 = CmpCreateKeyControlBlock(
                          *(_QWORD *)(v10 + 48),
                          -1,
                          v101,
                          *(_QWORD *)(v10 + 80),
                          1,
                          v196,
                          GenericMapping,
                          *(_QWORD *)AccessMode,
                          &v404);
                  Child = v18;
                  *(_WORD *)(v101 + 178) = *(_WORD *)(v390 + 2) & 0xFFFD;
                  if ( v18 < 0 )
                  {
                    v206 = v18;
                    v207 = 0x2000;
                    goto LABEL_387;
                  }
                  v214 = (signed __int32 *)v404;
                  *(_QWORD *)&v376[3] = v404;
                  v377 = v404;
                  CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v101);
                  CmpUnlockHashEntryByKcb(v101);
                  LOBYTE(v376[0]) = 0;
                  started = CmpStartKcbStackForTopLayerKcb((__int64)v427, (__int64)v214);
                  Child = started;
                  v18 = started;
                  if ( started < 0 )
                  {
                    v206 = started;
                    v207 = 8448;
                    goto LABEL_387;
                  }
                  *(_WORD *)(v101 + 178) |= 2u;
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v427);
                  v216 = v385;
                  v217 = v375;
                  *(_WORD *)(v101 + 178) &= ~2u;
                  v383 = 1;
                  KeyBody = CmpCreateKeyBody(v214, v217, v10, v216, 0, (ULONG_PTR **)&Object, (bool *)&v376[1]);
                  Child = KeyBody;
                  v18 = KeyBody;
                  if ( KeyBody < 0 )
                  {
                    CmpRecordParseFailure(v10, 8576, KeyBody);
                    CmpUnlockKcbStack((__int64)v427);
                    goto LABEL_388;
                  }
                  ExAcquirePushLockSharedEx(*(_QWORD *)(v101 + 24) + 72LL, 0LL);
                  v219 = *(_QWORD *)&v376[3];
                  ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)&v376[3] + 24LL) + 72LL, 0LL);
                  v220 = *(_QWORD *)(v219 + 24);
                  v221 = *(_DWORD *)(v220 + 104);
                  if ( !HvpMarkCellDirty(v220, (unsigned int)*v203, 0) )
                  {
                    Child = -1073741443;
                    CmpRecordParseFailure(v10, 8704, -1073741443);
LABEL_404:
                    v225 = *(_QWORD *)(v219 + 24);
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v225 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v225 + 72), v222, v223, v224);
                    KeAbPostRelease(v225 + 72);
                    v226 = (signed __int64 *)(*(_QWORD *)(v101 + 24) + 72LL);
                    if ( _InterlockedCompareExchange64(v226, 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared(v226);
                    KeAbPostRelease((ULONG_PTR)v226);
                    v18 = Child;
                    *(_QWORD *)&v376[3] = v377;
                    CmpUnlockKcbStack((__int64)v427);
                    goto LABEL_388;
                  }
                  Child = CmpCreateChild(
                            *(__int64 *)&v382[3],
                            (__int64)v386,
                            (__int64)AccessState,
                            v196,
                            v10,
                            10,
                            1,
                            v385);
                  if ( Child < 0 )
                    goto LABEL_404;
                  *(_DWORD *)(v219 + 32) = *v203;
                  KeyNodeForKcb = CmpGetKeyNodeForKcb(v219, (__int64)&v403, 1);
                  *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v101 + 32);
                  ++*(_QWORD *)(v219 + 296);
                  CmpRebuildKcbCacheFromNode(v219, KeyNodeForKcb);
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v219 + 24) + 16LL))(
                    *(_QWORD *)(v219 + 24),
                    &v403);
                  if ( !v221 )
                    HvResetDirtyData(*(_QWORD *)(v219 + 24));
                  v231 = *(_QWORD *)(v219 + 24);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v231 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v231 + 72), v228, v229, v230);
                  KeAbPostRelease(v231 + 72);
                  v232 = *(_QWORD *)(v101 + 24);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v232 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v232 + 72));
                  KeAbPostRelease(v232 + 72);
                  v233 = (volatile signed __int32 *)v404;
                  *(_WORD *)(v101 + 4) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe(v233);
                  *(_QWORD *)(v101 + 96) = v233;
                  CmpUnlockHashEntry(*(PVOID *)(v10 + 48), 0, v234, v235);
                  v120 = v386;
                  *(_QWORD *)&v376[3] = v377;
                  *(_DWORD *)(v10 + 32) = 1;
                  goto LABEL_545;
                }
                if ( (*(_DWORD *)v10 & 0x20) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v120);
                  v236 = *(_QWORD *)&v382[3];
                  CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                  CmpLockKcbStackTopExclusiveRestShared(v236);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v120);
                  if ( CmpIsKeyStackDeleted(v236, v189) )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 8960, -1073741772);
                    goto LABEL_389;
                  }
                  if ( (*(_DWORD *)(*v156 + 176) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 9216, -1073741772);
                    goto LABEL_389;
                  }
                  v237 = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379);
                  v238 = *(_QWORD *)&v382[3];
                  v239 = *(_DWORD *)(v10 + 24) >> 2;
                  LOBYTE(v239) = (*(_DWORD *)(v10 + 24) & 4) != 0;
                  if ( !CmpCheckCreateAccessOnKcbStack(
                          v239,
                          *(__int64 *)&v382[3],
                          (__int64)AccessState,
                          v375,
                          16 * (*(_DWORD *)(v10 + 24) & 2),
                          v239,
                          v189,
                          &Child) )
                  {
                    v18 = Child;
                    CmpRecordParseFailure(v10, 9472, Child);
                    goto LABEL_389;
                  }
                  CmpCleanUpKcbValueCache(v101);
                  *(_WORD *)(v101 + 178) |= 0x40u;
                  v240 = v375;
                  *(_DWORD *)(v101 + 88) = *(_DWORD *)(v10 + 56);
                  Child = CmpCreateKeyBody(
                            (signed __int32 *)v101,
                            v240,
                            v10,
                            v189,
                            1,
                            (ULONG_PTR **)&Object,
                            (bool *)&v376[1]);
                  v18 = Child;
                  if ( Child < 0 )
                    goto LABEL_389;
                  v241 = v385;
                  if ( CmpIsKeyStackDeleted((__int64)v120, v385) )
                  {
                    Child = CmpCreateChild(v238, (__int64)v120, (__int64)AccessState, v237, v10, 64, 0, v241);
                    v18 = Child;
                    if ( Child < 0 )
                      goto LABEL_389;
                    *(_DWORD *)(v10 + 32) = 1;
                  }
                  goto LABEL_545;
                }
                v242 = 0LL;
                v243 = v181;
                v411 = 0LL;
                if ( v181 >= 0 )
                {
                  while ( 1 )
                  {
                    if ( v243 < 2 )
                      v244 = *(_QWORD *)&v120[2 * v243 + 2];
                    else
                      v244 = *(_QWORD *)(*((_QWORD *)v120 + 3) + 8LL * (v243 - 2));
                    if ( *(_WORD *)(v244 + 58) && *(_BYTE *)(v244 + 57) == 1 )
                      goto LABEL_436;
                    if ( *(_DWORD *)(v244 + 32) != -1 )
                      break;
                    if ( --v243 < 0 )
                      goto LABEL_436;
                  }
                  if ( !v189 )
                  {
LABEL_446:
                    v248 = (unsigned __int16)v181;
                    while ( 1 )
                    {
                      v249 = (__int16)v248 < 2
                           ? *(_QWORD *)&v120[2 * (__int16)v248 + 2]
                           : *(_QWORD *)(*((_QWORD *)v120 + 3) + 8LL * ((__int16)v248 - 2));
                      if ( *(_DWORD *)(v249 + 32) != -1 )
                        break;
                      LOWORD(v248) = v248 - 1;
                      if ( (v248 & 0x8000u) != 0LL )
                        goto LABEL_452;
                    }
                    if ( (*(_DWORD *)(v249 + 176) & 0x100000) != 0 && (*(_DWORD *)v10 & 0x200) == 0 )
                    {
                      if ( (*(_DWORD *)(v10 + 24) & 2) != 0 )
                      {
                        v18 = -1073741771;
                        Child = -1073741771;
                        CmpRecordParseFailure(v10, 14080, -1073741771);
                        goto LABEL_389;
                      }
                      if ( v372 )
                        CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                      v136 = 0;
                      if ( v374 )
                        CmpUnlockKcb(*(_QWORD *)(v388 + 8), v248, v249, v242);
                      v374 = 0;
                      if ( LOBYTE(v376[0]) )
                      {
                        CmpUnlockHashEntryByKcb(v101);
                        LOBYTE(v376[0]) = 0;
                      }
                      v250 = CmpGetSymbolicLinkTarget(
                               (__int64)v120,
                               (__int64)v431,
                               0,
                               0,
                               v189,
                               v10,
                               v393,
                               (ULONG_PTR *)(v10 + 88));
                      Child = v250;
                      v18 = v250;
                      if ( v250 >= 0 )
                      {
                        *(_DWORD *)v10 &= ~8u;
                        if ( !*(_QWORD *)(v10 + 64) )
                        {
                          v251 = *(_QWORD *)(v101 + 24);
                          if ( (*(_DWORD *)(v251 + 4152) & 1) != 0 )
                            *(_QWORD *)(v10 + 64) = v251;
                        }
                        v18 = 260;
                        Child = 260;
                        CmpRecordParseFailure(v10, 14592, 260);
                        v374 = 0;
                      }
                      else
                      {
                        CmpRecordParseFailure(v10, 14336, v250);
                      }
                      goto LABEL_680;
                    }
LABEL_452:
                    if ( v380 )
                    {
                      Child = -1073741811;
                      v18 = -1073741811;
                      CmpRecordParseFailure(v10, 14848, -1073741811);
                      goto LABEL_389;
                    }
                    if ( (*(_DWORD *)(v101 + 176) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      v18 = -1073741772;
                      CmpRecordParseFailure(v10, 15104, -1073741772);
                      goto LABEL_389;
                    }
                    if ( (*(_DWORD *)(v10 + 24) & 2) != 0 )
                    {
                      v18 = -1073741771;
                      Child = -1073741771;
                      CmpRecordParseFailure(v10, 15360, -1073741771);
                      goto LABEL_389;
                    }
                    v252 = v393;
                    v253 = CmpDoWritethroughReparse(
                             v101,
                             (__int64)v120,
                             *(__int64 *)&v382[3],
                             0,
                             0LL,
                             v10,
                             (UNICODE_STRING *)v393);
                    Child = v253;
                    v18 = v253;
                    if ( v253 != -1073741199 )
                    {
                      CmpRecordParseFailure(v10, 15424, v253);
                      goto LABEL_389;
                    }
                    v254 = CmpVEExecuteOpenLogic(v101, (_DWORD *)v10, 0, v252, v375, (__int64)SubjectSecurityContext[0]);
                    Child = v254;
                    v18 = v254;
                    if ( v254 != -1073741199 )
                    {
                      CmpRecordParseFailure(v10, 15488, v254);
                      goto LABEL_389;
                    }
                    v255 = CmpCreateKeyBody(
                             (signed __int32 *)v101,
                             v375,
                             v10,
                             v385,
                             0,
                             (ULONG_PTR **)&Object,
                             (bool *)&v376[1]);
                    Child = v255;
                    v18 = v255;
                    if ( v255 < 0 )
                    {
                      CmpRecordParseFailure(v10, 15552, v255);
                      goto LABEL_389;
                    }
                    goto LABEL_545;
                  }
                  v245 = CmListGetNextElement((_QWORD **)(*((_QWORD *)v120 + 1) + 200LL), &v411, 32);
                  if ( !v245 )
                    goto LABEL_445;
                  while ( 1 )
                  {
                    v247 = *((_DWORD *)v245 + 17);
                    if ( v247 == 2 || v247 == 11 )
                      break;
                    v245 = CmListGetNextElement((_QWORD **)(v246 + 200), &v411, 32);
                    if ( !v245 )
                      goto LABEL_445;
                  }
                  if ( !CmEqualTrans(*((_QWORD *)v245 + 7), v189) )
                  {
LABEL_445:
                    v242 = 0LL;
                    goto LABEL_446;
                  }
                }
LABEL_436:
                if ( v380 )
                {
                  Child = -1073741811;
                  v18 = -1073741811;
                  CmpRecordParseFailure(v10, 9728, -1073741811);
                  goto LABEL_389;
                }
                if ( CmpIsKeyStackDeleted(*(__int64 *)&v382[3], v189) || !CmRmIsKCBVisible(*v156, v189) )
                {
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 9984, -1073741772);
                  goto LABEL_389;
                }
                if ( (*(_DWORD *)(*v156 + 176) & 0x20000) != 0 )
                {
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 10240, -1073741772);
                  goto LABEL_389;
                }
                if ( (*(_DWORD *)v10 & 1) == 0 )
                {
                  if ( CmpLoadingSystemHivesActive )
                  {
                    if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() )
                    {
                      *(_QWORD *)&v376[3] = v377;
                    }
                    else
                    {
                      *(_QWORD *)&v376[3] = v377;
                      if ( *(PVOID *)(v377 + 24) == CmpMasterHive && (*(_DWORD *)(v377 + 4) & 0x7FE00000) == 0x600000 )
                      {
                        v256 = CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v256, v257, v258, v10 + 136) )
                        {
                          *(_DWORD *)v10 |= 0x100u;
                          v18 = 259;
                          Child = 259;
                          CmpRecordParseFailure(v10, 10496, 259);
                          goto LABEL_389;
                        }
                      }
                    }
                  }
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 10752, -1073741772);
                  goto LABEL_389;
                }
                if ( *(PVOID *)(v101 + 24) == CmpMasterHive && CmpNoMasterCreates )
                {
                  if ( CmpLoadingSystemHivesActive
                    && (*(_QWORD *)&v376[3] = v377, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                    && (*(_DWORD *)(v377 + 4) & 0x7FE00000) == 0x600000
                    && (v259 = CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379),
                        (unsigned __int8)CmpWaitForHiveMount(v259, v260, v261, v10 + 136)) )
                  {
                    *(_DWORD *)v10 |= 0x100u;
                    v18 = 259;
                    Child = 259;
                    CmpRecordParseFailure(v10, 11008, 259);
                  }
                  else
                  {
                    Child = -1073741811;
                    v18 = -1073741811;
                    CmpRecordParseFailure(v10, 11264, -1073741811);
                  }
                  goto LABEL_389;
                }
                v262 = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v431, (__int16)v379);
                v263 = CmpDoWritethroughReparse(
                         v101,
                         (__int64)v120,
                         *(__int64 *)&v382[3],
                         1,
                         v262,
                         v10,
                         (UNICODE_STRING *)v393);
                Child = v263;
                v18 = v263;
                if ( v263 != -1073741199 )
                {
                  CmpRecordParseFailure(v10, 11392, v263);
                  goto LABEL_389;
                }
                if ( (*(_DWORD *)(v10 + 160) & 1) == 0 )
                {
                  CmpAttachToRegistryProcess(v10 + 168);
                  *(_DWORD *)(v10 + 160) |= 1u;
                }
                if ( *(_DWORD *)(*v156 + 32) == -1 )
                {
                  v264 = v385;
                  if ( !CmpCheckCreateAccessOnKcbStack(
                          16 * (*(_DWORD *)(v10 + 24) & 2u),
                          *(__int64 *)&v382[3],
                          (__int64)AccessState,
                          v375,
                          16 * (*(_DWORD *)(v10 + 24) & 2),
                          (*(_DWORD *)(v10 + 24) & 4) != 0,
                          v385,
                          &Child) )
                  {
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v265 = PsGetCurrentThreadProcess();
                      ProcessServerSilo = PsGetProcessServerSilo((__int64)v265);
                      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                      if ( (unsigned int)MmGetSessionIdEx((__int64)v265) != ServerSiloServiceSessionId )
                      {
                        if ( CmpCheckWrpKeyAccess(*(__int64 *)&v382[3]) )
                          CmpPublishEventForPcaResolver(*v156);
                      }
                    }
                    v18 = Child;
                    CmpRecordParseFailure(v10, 11520, Child);
                    *(_QWORD *)&v376[3] = v377;
                    goto LABEL_389;
                  }
                  CmpUnlockKcbStack((__int64)v120);
                  CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                  if ( v374 )
                    CmpUnlockKcb(*(_QWORD *)(v388 + 8), v268, v269, v270);
                  v271 = *(_DWORD *)(v10 + 160);
                  v374 = 0;
                  if ( (v271 & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(v10 + 168);
                    *(_DWORD *)(v10 + 160) |= 1u;
                  }
                  LOBYTE(v269) = 1;
                  v272 = CmpPromoteKey(*(_QWORD *)&v382[3], 0LL, v269);
                  if ( v272 < 0 )
                  {
                    if ( v272 == -1073741444 )
                      v272 = -1073741772;
                    Child = v272;
                    v18 = v272;
                    CmpRecordParseFailure(v10, 11776, v272);
                    goto LABEL_679;
                  }
                }
                else
                {
                  CmpUnlockKcbStack((__int64)v120);
                  CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                  CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)&v382[3]);
                  v264 = v385;
                }
                CmpLockKcbStackTopExclusiveRestShared((__int64)v120);
                if ( !CmRmIsKCBVisible(v101, v264) )
                {
                  Child = -1073741772;
                  v18 = -1073741772;
                  CmpRecordParseFailure(v10, 12032, -1073741772);
                  v136 = 1;
                  v372 = 1;
                  goto LABEL_390;
                }
                if ( CmpIsKeyStackDeleted((__int64)v120, v264) )
                {
                  if ( CmpIsKeyStackDeleted(*(__int64 *)&v382[3], v264) || !CmRmIsKCBVisible(*v156, v264) )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 12288, -1073741772);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  if ( (*(_DWORD *)(*v156 + 176) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 12544, -1073741772);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  Logic = CmpVEExecuteCreateLogic(
                            *v156,
                            v393,
                            (__int64)v262,
                            (__int64)AccessState,
                            v375,
                            16 * (*(_DWORD *)(v10 + 24) & 2u),
                            v264,
                            v10,
                            (UNICODE_STRING *)v393);
                  Child = Logic;
                  v18 = Logic;
                  if ( Logic == -1073741739 )
                  {
                    *(_DWORD *)v10 |= 0x400u;
                    Child = -1073741267;
                    v18 = -1073741267;
                    CmpRecordParseFailure(v10, 12672, -1073741267);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  if ( Logic != -1073741199 )
                  {
                    CmpRecordParseFailure(v10, 12736, Logic);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  v274 = v385;
                  if ( !CmpCheckCreateAccessOnKcbStack(
                          16 * (*(_DWORD *)(v10 + 24) & 2u),
                          *(__int64 *)&v382[3],
                          (__int64)AccessState,
                          v375,
                          16 * (*(_DWORD *)(v10 + 24) & 2),
                          (*(_DWORD *)(v10 + 24) & 4) != 0,
                          v385,
                          &Child) )
                  {
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v275 = PsGetCurrentThreadProcess();
                      v276 = PsGetProcessServerSilo((__int64)v275);
                      v277 = PsGetServerSiloServiceSessionId(v276);
                      if ( (unsigned int)MmGetSessionIdEx((__int64)v275) != v277 )
                      {
                        if ( CmpCheckWrpKeyAccess(*(__int64 *)&v382[3]) )
                          CmpPublishEventForPcaResolver(*v156);
                      }
                    }
                    v18 = Child;
                    CmpRecordParseFailure(v10, 12800, Child);
                    v136 = 1;
                    v372 = 1;
                    *(_QWORD *)&v376[3] = v377;
                    goto LABEL_390;
                  }
                  v278 = CmpCreateKeyBody(
                           (signed __int32 *)v101,
                           v375,
                           v10,
                           v274,
                           1,
                           (ULONG_PTR **)&Object,
                           (bool *)&v376[1]);
                  Child = v278;
                  v18 = v278;
                  if ( v278 < 0 )
                  {
                    CmpRecordParseFailure(v10, 12928, v278);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  v279 = CmpCreateChild(
                           *(__int64 *)&v382[3],
                           (__int64)v120,
                           (__int64)AccessState,
                           &v262->Length,
                           v10,
                           8 * (*(_WORD *)(v10 + 24) & 2u),
                           0,
                           v385);
                  Child = v279;
                  v18 = v279;
                  if ( v279 < 0 )
                  {
                    CmpRecordParseFailure(v10, 12992, v279);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  *(_DWORD *)(v10 + 32) = 1;
                  goto LABEL_544;
                }
                if ( !CmpIsKeyStackSymlink((__int64)v120) || (*(_DWORD *)v10 & 0x200) != 0 )
                {
                  if ( (*(_DWORD *)v390 & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    v18 = -1073741772;
                    CmpRecordParseFailure(v10, 13568, -1073741772);
                    v136 = 1;
                    v372 = 1;
                    goto LABEL_390;
                  }
                  if ( (*(_DWORD *)(v10 + 24) & 2) == 0 )
                  {
                    v289 = v393;
                    v290 = CmpDoWritethroughReparse(
                             v101,
                             (__int64)v120,
                             *(__int64 *)&v382[3],
                             0,
                             0LL,
                             v10,
                             (UNICODE_STRING *)v393);
                    Child = v290;
                    v18 = v290;
                    if ( v290 != -1073741199 )
                    {
                      CmpRecordParseFailure(v10, 13888, v290);
                      v136 = 1;
                      v372 = 1;
                      goto LABEL_390;
                    }
                    v291 = v375;
                    v292 = CmpVEExecuteOpenLogic(v101, (_DWORD *)v10, 1, v289, v375, (__int64)SubjectSecurityContext[0]);
                    Child = v292;
                    v18 = v292;
                    if ( v292 != -1073741199 )
                    {
                      CmpRecordParseFailure(v10, 13952, v292);
                      v136 = 1;
                      v372 = 1;
                      goto LABEL_390;
                    }
                    v293 = CmpCreateKeyBody(
                             (signed __int32 *)v101,
                             v291,
                             v10,
                             v385,
                             1,
                             (ULONG_PTR **)&Object,
                             (bool *)&v376[1]);
                    Child = v293;
                    v18 = v293;
                    if ( v293 < 0 )
                    {
                      CmpRecordParseFailure(v10, 14016, v293);
                      v136 = 1;
                      v372 = 1;
                      goto LABEL_390;
                    }
LABEL_544:
                    v372 = 1;
LABEL_545:
                    if ( *(_DWORD *)(v10 + 32) == 1 )
                      goto LABEL_664;
                    v280 = 0LL;
                    v281 = (*(unsigned __int8 *)(v10 + 24) >> 2) & 1;
                    for ( LODWORD(v391) = v281; v181 >= 0; --v181 )
                    {
                      if ( v181 < 2 )
                        v282 = *(_QWORD *)&v120[2 * v181 + 2];
                      else
                        v282 = *(_QWORD *)(*((_QWORD *)v120 + 3) + 8LL * (v181 - 2));
                      v294 = *(_WORD *)(v282 + 58);
                      if ( v294 && *(_BYTE *)(v282 + 57) == 1 )
                        break;
                      if ( *(_DWORD *)(v282 + 32) != -1 )
                      {
                        v280 = v282;
                        if ( v294 )
                        {
                          if ( *(_BYTE *)(v282 + 57) )
                            break;
                        }
                      }
                    }
                    v19 = v385;
                    v295 = *(_QWORD *)(v280 + 80);
                    if ( v385 )
                    {
                      v412 = 0LL;
                      PrevElement = CmListGetPrevElement(v280 + 200, &v412);
                      if ( PrevElement )
                      {
                        while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), v19) || *(_DWORD *)(PrevElement + 68) != 9 )
                        {
                          PrevElement = CmListGetPrevElement(v280 + 200, &v412);
                          if ( !PrevElement )
                            goto LABEL_589;
                          v19 = v385;
                        }
                        v295 = *(_QWORD *)(PrevElement + 88);
                      }
                    }
LABEL_589:
                    v297 = AccessState;
                    v135 = v295 + 32;
                    if ( (_BYTE)v281 )
                    {
                      LOBYTE(v19) = 1;
                      if ( (int)CmpSetAccessStateForBackupRestore(AccessState, v375, v135, v19) < 0 )
                        goto LABEL_663;
                    }
                    v298 = Object;
                    OriginalDesiredAccess = v297->OriginalDesiredAccess;
                    memset(v423, 0, sizeof(v423));
                    v300 = *((_QWORD *)Object + 1);
                    Privileges = 0LL;
                    WORD1(v423[0]) = -1;
                    v301 = *(_QWORD *)(v300 + 24);
                    if ( (*(_DWORD *)(v301 + 160) & 0x100000) != 0 )
                    {
                      if ( (OriginalDesiredAccess & 0xD0026) != 0 )
                      {
                        if ( (OriginalDesiredAccess & 0xD0002) != 0 )
                        {
                          v302 = -1073741790;
                        }
                        else if ( (*(_DWORD *)(v301 + 4152) & 0x2000) != 0 )
                        {
                          if ( *(_BYTE *)(v300 + 57) )
                          {
                            v302 = -1073741790;
                          }
                          else
                          {
                            v302 = CmpStartKcbStackForTopLayerKcb((__int64)v423, v300);
                            if ( v302 >= 0 )
                            {
                              v303 = *(_WORD *)(v300 + 58) - 1;
                              if ( v303 >= 0 )
                              {
                                while ( 1 )
                                {
                                  KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v423, v303);
                                  WORD1(v423[0]) = v303;
                                  v305 = KcbAtLayerHeight;
                                  if ( CmpIsKeyStackDeleted((__int64)v423, 0LL) )
                                    break;
                                  if ( (*(_DWORD *)(*(_QWORD *)(v305 + 24) + 160LL) & 0x100000) == 0 )
                                  {
                                    v302 = 0;
                                    goto LABEL_611;
                                  }
                                  if ( (*(_DWORD *)(*(_QWORD *)(v300 + 24) + 4152LL) & 0x2000) == 0
                                    || *(_BYTE *)(v300 + 57) )
                                  {
                                    break;
                                  }
                                  if ( --v303 < 0 )
                                    goto LABEL_611;
                                }
                                v302 = -1073741790;
                              }
LABEL_611:
                              v297 = AccessState;
                            }
                          }
                        }
                        else
                        {
                          v302 = -1073741790;
                        }
                      }
                      else
                      {
                        v302 = 0;
                      }
                    }
                    else
                    {
                      v302 = 0;
                    }
                    if ( Privileges )
                      CmSiFreeMemory(Privileges);
                    if ( v302 < 0 )
                      goto LABEL_663;
                    if ( (_BYTE)v281 && !v297->RemainingDesiredAccess
                      || !v297->OriginalDesiredAccess && (*(_DWORD *)v10 & 0x1000) != 0 )
                    {
                      goto LABEL_664;
                    }
                    v306 = Object;
                    v307 = 0LL;
                    v407 = 0LL;
                    v408[0] = 0LL;
                    v408[1] = 0LL;
                    v308 = *((_DWORD *)Object + 12);
                    v409 = 0LL;
                    WORD1(v407) = -1;
                    if ( (v308 & 9) != 0 )
                    {
                      v309 = AccessState;
                      LOBYTE(v310) = 0;
                      AccessStatus = -1073741444;
                      goto LABEL_652;
                    }
                    v311 = v298[1];
                    v310 = 0LL;
                    v312 = *(_WORD *)(v311 + 58);
                    v313 = v312;
                    if ( v312 >= 2 && v312 != 1 )
                    {
                      v314 = 8LL * (unsigned int)(v312 - 1);
                      v315 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v314, 0x35364D43u);
                      v310 = v315;
                      if ( !v315 )
                      {
                        v309 = AccessState;
                        AccessStatus = -1073741670;
                        goto LABEL_652;
                      }
                      memset(v315, 0, v314);
                      v313 = *(_WORD *)(v311 + 58);
                    }
                    LOWORD(v407) = v312;
                    v409 = v310;
                    WORD1(v407) = v313;
                    if ( v313 )
                    {
                      v316 = *(_QWORD *)(v311 + 184);
                      if ( v316 )
                      {
                        do
                        {
                          CmpSetKcbAtLayerHeight(&v407, (unsigned __int16)v313, *(_QWORD *)(v316 + 16));
                          v316 = *(_QWORD *)(v317 + 24);
                          v313 = v318 - 1;
                        }
                        while ( v316 );
                        v310 = v409;
                        v313 = WORD1(v407);
                      }
                    }
                    else
                    {
                      v408[0] = v311;
                    }
                    AccessStatus = 0;
                    for ( j = 0LL; v313 >= 0; --v313 )
                    {
                      if ( v313 < 2 )
                        v320 = v408[v313];
                      else
                        v320 = *((_QWORD *)v310 + v313 - 2);
                      v321 = *(_WORD *)(v320 + 58);
                      if ( v321 && *(_BYTE *)(v320 + 57) == 1 )
                        break;
                      if ( *(_DWORD *)(v320 + 32) != -1 )
                      {
                        j = v320;
                        if ( v321 )
                        {
                          if ( *(_BYTE *)(v320 + 57) )
                            break;
                        }
                      }
                    }
                    v322 = KeGetCurrentThread();
                    v323 = (void *)(*(_QWORD *)(j + 80) + 32LL);
                    --v322->KernelApcDisable;
                    v324 = SubjectSecurityContext[0];
                    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectSecurityContext[0]->PrimaryToken + 6), 1u);
                    if ( v324->ClientToken )
                    {
                      v325 = KeGetCurrentThread();
                      --v325->KernelApcDisable;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)v324->ClientToken + 6), 1u);
                    }
                    GrantedAccess = 0;
                    v414 = 0LL;
                    v309 = AccessState;
                    v326 = SeAccessCheck(
                             v323,
                             v324,
                             1u,
                             AccessState->RemainingDesiredAccess,
                             AccessState->PreviouslyGrantedAccess,
                             &v414,
                             (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                             v375,
                             &GrantedAccess,
                             &AccessStatus);
                    v327 = v414;
                    LOBYTE(v310) = v326;
                    if ( v414 )
                    {
                      SeAppendPrivileges(v309, v414);
                      CmSiFreeMemory(v327);
                    }
                    if ( (_BYTE)v310 )
                    {
                      v328 = GrantedAccess;
                      v309->PreviouslyGrantedAccess |= GrantedAccess;
                      v309->RemainingDesiredAccess &= ~(v328 | 0x2000000);
                    }
                    v306[24] |= 2u;
                    v329 = v306[24];
                    if ( v375 )
                    {
                      SeOpenObjectAuditAlarmWithTransaction(
                        (PUNICODE_STRING)CmKeyObjectType + 1,
                        Object,
                        0LL,
                        v323,
                        v309,
                        0,
                        (BOOLEAN)v310,
                        v375,
                        0LL,
                        &v309->GenerateOnClose);
                      v329 = v306[24];
                    }
                    v306[24] = v329 & 0xFFFD;
                    ExReleaseResourceLite(*((PERESOURCE *)v324->PrimaryToken + 6));
                    KeLeaveCriticalRegion();
                    if ( v324->ClientToken )
                    {
                      ExReleaseResourceLite(*((PERESOURCE *)v324->ClientToken + 6));
                      KeLeaveCriticalRegion();
                    }
                    v307 = v409;
                    *(_QWORD *)&v376[3] = v377;
LABEL_652:
                    if ( v307 )
                      CmSiFreeMemory(v307);
                    if ( !(_BYTE)v310 )
                    {
                      if ( (_BYTE)v391 )
                      {
LABEL_663:
                        v18 = -1073741790;
                        Child = -1073741790;
                        CmpRecordParseFailure(v10, 15584, -1073741790);
LABEL_667:
                        v381 = 0;
                        if ( v383 )
                          CmpUnlockKcbStack((__int64)v427);
                        goto LABEL_388;
                      }
                      if ( (int)CmpVEPerformOpenAccessCheck(Object, v385, (__int64)v309, v375, v10, AccessStatus) < 0 )
                      {
                        if ( KeGetCurrentThread()->PreviousMode == 1
                          && (v330 = PsGetCurrentThreadProcess(),
                              v331 = PsGetProcessServerSilo((__int64)v330),
                              v332 = PsGetServerSiloServiceSessionId(v331),
                              (unsigned int)MmGetSessionIdEx((__int64)v330) != v332)
                          && (v309->RemainingDesiredAccess & 0xD0026) != 0
                          && CmpCheckWrpKeyAccess((__int64)v386) )
                        {
                          *(_QWORD *)&v376[3] = v377;
                          CmpPublishEventForPcaResolver(v377);
                        }
                        else
                        {
                          *(_QWORD *)&v376[3] = v377;
                        }
                        goto LABEL_663;
                      }
                    }
LABEL_664:
                    *(_QWORD *)BugCheckParameter2 = Object;
                    Object = 0LL;
                    if ( !*(_DWORD *)(v10 + 32) )
                      *(_DWORD *)(v10 + 32) = 2;
                    v18 = LOBYTE(v376[1]) != 0 ? 0x40000016 : 0;
                    Child = v18;
                    goto LABEL_667;
                  }
                  v283 = 13824;
                }
                else
                {
                  if ( (*(_DWORD *)(v10 + 24) & 2) == 0 )
                  {
                    CmpUnlockKcbStack(*(__int64 *)&v382[3]);
                    if ( v374 )
                      CmpUnlockKcb(*(_QWORD *)(v388 + 8), v284, v285, v286);
                    v374 = 0;
                    if ( LOBYTE(v376[0]) )
                    {
                      CmpUnlockHashEntryByKcb(v101);
                      LOBYTE(v376[0]) = 0;
                    }
                    v287 = CmpGetSymbolicLinkTarget(
                             (__int64)v120,
                             (__int64)v431,
                             0,
                             0,
                             v264,
                             v10,
                             v393,
                             (ULONG_PTR *)(v10 + 88));
                    Child = v287;
                    v18 = v287;
                    if ( v287 >= 0 )
                    {
                      *(_DWORD *)v10 &= ~8u;
                      if ( !*(_QWORD *)(v10 + 64) )
                      {
                        v288 = *(_QWORD *)(v101 + 24);
                        if ( (*(_DWORD *)(v288 + 4152) & 1) != 0 )
                          *(_QWORD *)(v10 + 64) = v288;
                      }
                      v18 = 260;
                      Child = 260;
                      CmpRecordParseFailure(v10, 13440, 260);
                    }
                    else
                    {
                      CmpRecordParseFailure(v10, 13312, v287);
                    }
                    goto LABEL_694;
                  }
                  v283 = 13056;
                }
                v18 = -1073741771;
                Child = -1073741771;
                CmpRecordParseFailure(v10, v283, -1073741771);
                v136 = 1;
                v372 = 1;
                goto LABEL_390;
              }
            }
          }
        }
      }
LABEL_161:
      v90 = -1073741199;
      goto LABEL_162;
    }
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
    {
      CmpLockRegistryExclusive();
    }
    else
    {
      if ( CmpPuntBoot )
      {
LABEL_115:
        HIBYTE(v376[0]) = 1;
        goto LABEL_116;
      }
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      v70 = KeGetCurrentThread();
      --v70->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
      *(_QWORD *)&v376[3] = v377;
      v69 = a7 + 216;
    }
    v44 = v391;
    goto LABEL_115;
  }
  v47 = v401.m128i_i16[0];
  v48 = 0;
  v49 = (_WORD *)v401.m128i_i64[1];
  v50 = v401.m128i_i16[1];
  do
  {
    if ( v48 >= 32 )
      break;
    if ( *v49 == 92 )
    {
      v51 = v48 + 1;
      v52 = LOWORD(SubjectSecurityContext[0]) - v47;
      LOWORD(Child) = v51;
      LOWORD(SubjectSecurityContext[0]) = v52;
      WORD1(SubjectSecurityContext[0]) = v52;
      if ( v51 > 8 && !v46 )
      {
        v53 = CmpExpandPathInfo((__int64)v431);
        if ( v53 < 0 )
          goto LABEL_96;
        HIBYTE(v376[1]) = 1;
      }
      v54 = *(__m128i *)SubjectSecurityContext;
      v55 = v51 - 1;
      LODWORD(v391) = v55;
      if ( v55 >= 8 )
        *(_OWORD *)(16 * ((unsigned int)(v51 - 9) + 6LL) + *(_QWORD *)&v431[40]) = *(_OWORD *)SubjectSecurityContext;
      else
        *(_OWORD *)&v431[4 * v55 + 8] = *(_OWORD *)SubjectSecurityContext;
      v429 = v54;
      v56 = 0;
      if ( v52 )
      {
        v57 = (struct _SECURITY_SUBJECT_CONTEXT *)(unsigned __int16)(((unsigned __int16)(v52 - 1) >> 1) + 1);
        v58 = (WCHAR *)v429.m128i_i64[1];
        SubjectSecurityContext[0] = v57;
        do
        {
          v59 = *v58;
          if ( *v58 >= 0x61u )
          {
            if ( v59 <= 0x7Au )
            {
              v59 -= 32;
            }
            else
            {
              v59 = RtlUpcaseUnicodeChar(v59);
              v57 = SubjectSecurityContext[0];
            }
          }
          ++v58;
          v56 = v59 + 37 * v56;
          v57 = (struct _SECURITY_SUBJECT_CONTEXT *)((char *)v57 - 1);
          SubjectSecurityContext[0] = v57;
        }
        while ( v57 );
        v55 = v391;
      }
      if ( v55 >= 8 )
        *(_DWORD *)(*(_QWORD *)&v431[40] + 4LL * (v55 - 8)) = v56;
      else
        v431[v55] = v56;
      if ( v47 )
      {
        do
        {
          if ( *v49 != 92 )
            break;
          ++v49;
          v50 -= 2;
          v47 -= 2;
        }
        while ( v47 );
        v401.m128i_i16[0] = v47;
        v401.m128i_i64[1] = (__int64)v49;
        v401.m128i_i16[1] = v50;
      }
      v11 = v401;
      v48 = Child;
      v46 = HIBYTE(v376[1]);
      *(__m128i *)SubjectSecurityContext = v401;
    }
    else
    {
      ++v49;
      v47 -= 2;
      v50 -= 2;
      v401.m128i_i64[1] = (__int64)v49;
      v401.m128i_i16[1] = v50;
      v401.m128i_i16[0] = v47;
    }
  }
  while ( v47 );
  if ( v47 )
  {
    v53 = -1073741811;
    v18 = -1073741811;
    Child = -1073741811;
  }
  else
  {
    v60 = v48 + 1;
    LOWORD(Child) = v60;
    if ( v60 <= 8 || v46 || (v53 = CmpExpandPathInfo((__int64)v431), v53 >= 0) )
    {
      v61 = (unsigned int)(v60 - 1);
      if ( (unsigned int)v61 >= 8 )
        *(__m128i *)(*(_QWORD *)&v431[40] + 16 * ((unsigned int)(v60 - 9) + 6LL)) = v11;
      else
        *(__m128i *)&v431[4 * (unsigned int)v61 + 8] = v11;
      v62 = _mm_cvtsi128_si32(v11);
      v429 = v11;
      v63 = 0;
      if ( v62 )
      {
        v64 = (WCHAR *)v429.m128i_i64[1];
        v65 = (unsigned __int16)(((unsigned __int16)(v62 - 1) >> 1) + 1);
        do
        {
          v66 = *v64;
          if ( *v64 >= 0x61u )
          {
            if ( v66 <= 0x7Au )
              v66 -= 32;
            else
              v66 = RtlUpcaseUnicodeChar(v66);
          }
          ++v64;
          v63 = v66 + 37 * v63;
          --v65;
        }
        while ( v65 );
        v60 = Child;
      }
      if ( (unsigned int)v61 >= 8 )
      {
        v378[0] = v60;
        *(_DWORD *)(*(_QWORD *)&v431[40] + 4LL * (unsigned int)(v61 - 8)) = v63;
        v53 = 0;
      }
      else
      {
        v431[v61] = v63;
        v53 = 0;
        v378[0] = v60;
      }
    }
LABEL_96:
    Child = v53;
    v18 = v53;
    if ( v53 >= 0 )
    {
      v45 = v390;
      goto LABEL_99;
    }
  }
  CmpRecordParseFailure(a7, 1280, v53);
LABEL_708:
  if ( (_BYTE)v387 )
    CmpUnlockHashEntryByKcb(BugCheckParameter4);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  v13 = *(volatile signed __int32 **)&v376[3];
LABEL_713:
  if ( v418 )
    CmSiFreeMemory(v418);
  if ( v422 )
    CmSiFreeMemory(v422);
  if ( v428 )
    CmSiFreeMemory(v428);
  v344 = v399;
  if ( v399 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v13);
    CmpDereferenceKeyControlBlock(v344);
  }
  else if ( v13 )
  {
    v345 = *v13;
    if ( *v13 <= 1u )
    {
LABEL_725:
      v347 = v377;
      v348 = *(_DWORD *)(v377 + 8);
      v349 = *(_QWORD *)(v377 + 24);
      CmpLockHashEntryExclusiveByKcb(v377);
      BugCheckParameter2 = v347 + 40;
      ExAcquirePushLockExclusiveEx(v347 + 40, 0LL);
      v353 = v377;
      *(_QWORD *)(v347 + 48) = KeGetCurrentThread();
      v354 = 0LL;
      v355 = *(_QWORD *)(v353 + 184);
      if ( v355 )
      {
        v356 = *(_QWORD *)(v355 + 24);
        if ( v356 )
        {
          v354 = *(_QWORD *)(v356 + 16);
          CmpUnlockKcb(v353, v350, v351, v352);
          CmpLockKcbExclusive(v354);
          CmpLockKcbExclusive(v353);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v353);
      v359 = *(_DWORD *)(v353 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v347 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v347 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v347 + 48));
      ExReleasePushLockEx(BugCheckParameter2, 0LL, v357, v358);
      if ( v359 && (*(_DWORD *)(v353 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v377);
      if ( v354 )
        CmpUnlockKcb(v354, v360, v361, v362);
      v363 = *(_QWORD *)(v349 + 1640)
           + 24
           * ((unsigned int)(*(_DWORD *)(v349 + 1648) - 1) & ((101027 * (v348 ^ (v348 >> 9))) ^ ((unsigned __int64)(101027 * (v348 ^ (v348 >> 9))) >> 9)));
      *(_QWORD *)(v363 + 8) = 0LL;
      ExReleasePushLockEx(v363, 0LL, v361, v362);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v349 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v349);
    }
    else
    {
      while ( 1 )
      {
        v346 = v345;
        v345 = _InterlockedCompareExchange((volatile signed __int32 *)v377, v345 - 1, v345);
        if ( v345 == v346 )
          break;
        if ( v345 <= 1 )
          goto LABEL_725;
      }
    }
    v18 = Child;
  }
  if ( BugCheckParameter4 )
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  v364 = *(_DWORD *)(v10 + 96);
  if ( v364 && (v364 & 2) != 0 )
  {
    LOBYTE(v19) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(v10 + 112), 0LL, v19);
    *(_DWORD *)(v10 + 96) &= ~2u;
  }
  if ( HIBYTE(v376[0]) && !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v365) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v365);
    v18 = Child;
  }
  if ( (*(_DWORD *)(v10 + 160) & 1) != 0 )
    KiUnstackDetachProcess(v10 + 168, 0LL);
  v366 = *(_SLIST_ENTRY **)&v431[40];
  if ( !*(_QWORD *)&v431[40] )
    return (unsigned int)v18;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[8].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, v366);
    return (unsigned int)Child;
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v366);
    return (unsigned int)Child;
  }
}
