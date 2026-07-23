/*
 * XREFs of CmpDoParseKey @ 0x1405343E0
 * Callers:
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     RtlGetCurrentServiceSessionId @ 0x140085340 (RtlGetCurrentServiceSessionId.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpTransSilentIgnore @ 0x1400F0F40 (CmpTransSilentIgnore.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14042B290 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14042B3E4 (CmpSetAccessStateForBackupRestore.c)
 *     CmpTransSearchAddTransFromHive @ 0x14042DBD4 (CmpTransSearchAddTransFromHive.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     CmpExpandPathInfo @ 0x14043C248 (CmpExpandPathInfo.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14043D1E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     CmpGetComponentNameAtIndex @ 0x140447470 (CmpGetComponentNameAtIndex.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmRmIsKCBVisible @ 0x14044C0B4 (CmRmIsKCBVisible.c)
 *     CmListGetPrevElement @ 0x140451764 (CmListGetPrevElement.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1404568B4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140456CB4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpGetComponentHashAtIndex @ 0x14045BDD0 (CmpGetComponentHashAtIndex.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     CmpIsKeyStackSymlink @ 0x14048FCAC (CmpIsKeyStackSymlink.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     HvResetDirtyData @ 0x1404B7098 (HvResetDirtyData.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1404CFE70 (CmpUnlockHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404D4178 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpComputeComponentHashes @ 0x140500780 (CmpComputeComponentHashes.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x140501640 (CmpKeyFullNameLength.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpPublishEventForPcaResolver @ 0x14057CDD4 (CmpPublishEventForPcaResolver.c)
 *     CmpWaitForHiveMount @ 0x1405CB154 (CmpWaitForHiveMount.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmpCleanupPathInfo @ 0x1406617E8 (CmpCleanupPathInfo.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
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
        PVOID *a9)
{
  __int16 v10; // r15
  ULONG_PTR v11; // r12
  __m128i v12; // xmm6
  ULONG_PTR v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  unsigned __int64 v20; // rdi
  char v21; // al
  wchar_t *Buffer; // rax
  __int16 v23; // r8
  unsigned __int64 v24; // rcx
  __int16 v25; // r9
  __int16 v26; // dx
  __int64 v27; // r10
  __int16 v28; // cx
  _WORD *v29; // rax
  int v30; // esi
  __int64 v31; // rcx
  bool v32; // zf
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // r12d
  struct _PRIVILEGE_SET *v37; // rsi
  unsigned int v38; // edx
  int *v39; // rcx
  ULONG_PTR v40; // r14
  __int64 v41; // rcx
  __int16 v42; // r15
  struct _PRIVILEGE_SET *v43; // rdi
  SIZE_T v44; // r14
  struct _PRIVILEGE_SET *v45; // rax
  unsigned __int16 v46; // r11
  __int64 v47; // r10
  __int64 v48; // r10
  __int16 v49; // r11
  char IsKeyStackDeleted; // si
  ULONG_PTR v51; // r13
  __int64 *v52; // rsi
  int v53; // r15d
  unsigned int v54; // edi
  char v55; // cl
  __int16 v56; // di
  __int16 v57; // r14
  _WORD *v58; // rsi
  __int16 v59; // r12
  __int16 v60; // r14
  __int16 v61; // r15
  int v62; // eax
  __m128i v63; // xmm0
  unsigned int v64; // edx
  int v65; // r14d
  __int64 v66; // r13
  WCHAR *v67; // r15
  WCHAR v68; // ax
  __int16 v69; // r14
  __int64 v70; // r15
  __int16 v71; // ax
  int v72; // edi
  WCHAR *v73; // rsi
  __int64 v74; // r14
  WCHAR v75; // ax
  unsigned int v76; // edx
  int *v77; // rcx
  _DWORD *v78; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v80; // eax
  int v81; // eax
  char v82; // al
  __int64 v83; // rdi
  ULONG_PTR v84; // r14
  __int64 v85; // rax
  int *v86; // rcx
  _DWORD *v87; // r11
  ULONG_PTR v88; // r10
  __int64 v89; // r8
  __int16 v90; // dx
  __int64 v91; // rcx
  int *v92; // rsi
  bool v93; // r12
  int v94; // edi
  bool v95; // si
  struct _KTHREAD *v96; // rdi
  __int64 v97; // r15
  struct _KTHREAD *v98; // r13
  signed __int64 *p_WaitBlockList; // r14
  void *v100; // rdi
  ULONG_PTR v101; // rdi
  _QWORD *v102; // r13
  void *v103; // r14
  signed __int64 *v104; // rdi
  int v105; // eax
  __int64 v106; // r14
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rcx
  struct _PRIVILEGE_SET *v113; // r10
  __int16 v114; // si
  struct _PRIVILEGE_SET *v115; // rbx
  SIZE_T v116; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int16 v118; // si
  struct _PRIVILEGE_SET *v119; // rdi
  SIZE_T v120; // rbx
  struct _PRIVILEGE_SET *v121; // rax
  unsigned __int16 v122; // r11
  int *v123; // rax
  int *v124; // r13
  __int64 v125; // r10
  __int64 v126; // r10
  __int16 v127; // r11
  int v128; // esi
  __int16 v129; // r15
  __int16 v130; // di
  __int64 *v131; // rsi
  __int64 v132; // rbx
  __int16 v133; // r8
  __int64 v134; // rdx
  __int64 ComponentNameAtIndex; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  int v138; // edx
  int v139; // r8d
  __int64 v140; // rcx
  __int16 v141; // r15
  __int16 v142; // si
  unsigned __int64 *v143; // r14
  unsigned __int64 v144; // rbx
  __int64 v145; // rbx
  char *NextElement; // rax
  __int64 v147; // r10
  int v148; // ecx
  __int16 v149; // dx
  __int64 v150; // r8
  __int16 v151; // si
  unsigned __int64 *v152; // r14
  unsigned __int64 v153; // rbx
  bool v154; // di
  __int64 v155; // r8
  __m128i *v156; // r9
  int v157; // eax
  char v158; // dl
  int *v159; // rbx
  ULONG_PTR v160; // rax
  __int64 v161; // r10
  __int64 *v162; // r15
  int *v163; // rsi
  unsigned __int16 v164; // r11
  int SymbolicLinkTarget; // eax
  __int64 v166; // rcx
  __int64 v167; // rcx
  unsigned __int8 v168; // al
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // rcx
  unsigned __int8 v176; // al
  __int64 i; // r10
  __int64 v178; // r10
  __int16 v179; // r11
  __int64 v180; // rbx
  __int16 v181; // r14
  __int16 v182; // di
  __int64 v183; // r15
  __int64 *v184; // rsi
  __int64 v185; // rbx
  __int16 v186; // si
  __int16 v187; // di
  __int64 *v188; // r14
  __int64 v189; // rbx
  int v190; // eax
  __int16 v191; // bx
  __int64 v192; // rdx
  __int64 v193; // rdi
  __int64 v194; // r12
  UNICODE_STRING *v195; // r12
  unsigned int v196; // edx
  int ComponentHashAtIndex; // ebx
  __int64 v198; // r15
  _DWORD *v199; // r14
  ULONG_PTR v200; // rdx
  ULONG_PTR v201; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v204; // r15
  __int64 v205; // r8
  __int64 v206; // rbx
  int v207; // eax
  __int64 v208; // rbx
  __int64 v209; // r15
  int started; // eax
  int v211; // r9d
  int v212; // r8d
  int KeyBody; // eax
  ULONG_PTR v214; // rcx
  bool v215; // r15
  ULONG_PTR v216; // r12
  __int64 v217; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v219; // r15
  UNICODE_STRING *v220; // rbx
  unsigned __int8 v221; // r15
  __int16 v222; // dx
  __int64 v223; // r8
  char *v224; // rax
  _QWORD *v225; // r10
  int v226; // ecx
  __int16 v227; // dx
  __int64 v228; // r8
  int v229; // eax
  __int64 v230; // rcx
  struct _PRIVILEGE_SET *v231; // rbx
  __int64 v232; // rax
  unsigned __int16 v233; // bx
  __int64 v234; // r9
  int v235; // eax
  UNICODE_STRING *v236; // rdi
  int v237; // eax
  int v238; // eax
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // r8
  UNICODE_STRING *v245; // rbx
  int v246; // eax
  __int64 v247; // rdi
  int v248; // ebx
  __int64 v249; // r8
  int v250; // eax
  int Logic; // eax
  __int64 v252; // rdi
  int v253; // ebx
  int v254; // eax
  int v255; // eax
  __int64 v256; // rdi
  int v257; // r14d
  __int64 v258; // rdx
  int v259; // eax
  __int64 v260; // rcx
  int v261; // eax
  int v262; // eax
  int v263; // eax
  __int16 v264; // cx
  __int64 v265; // rsi
  __int64 PrevElement; // rbx
  PACCESS_STATE v267; // rbx
  _QWORD *v268; // r15
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v270; // rdi
  __int64 v271; // rdx
  int v272; // esi
  __int16 v273; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v275; // r14
  PPRIVILEGE_SET v276; // rcx
  struct _PRIVILEGE_SET *v277; // rbx
  _WORD *v278; // r12
  KPROCESSOR_MODE v279; // si
  struct _PRIVILEGE_SET *v280; // rdi
  __int64 v281; // rsi
  __int16 v282; // r15
  SIZE_T v283; // r14
  struct _PRIVILEGE_SET *v284; // rax
  __int16 v285; // r10
  __int64 v286; // r11
  __int64 v287; // r11
  __int16 v288; // r10
  __int64 k; // r8
  __int64 v290; // rcx
  __int16 v291; // dx
  __int64 v292; // r14
  struct _KTHREAD *v293; // rax
  PACCESS_STATE v294; // r15
  struct _KTHREAD *v295; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v297; // al
  struct _PRIVILEGE_SET *v298; // rsi
  int v299; // eax
  PERESOURCE *ClientToken; // rcx
  PACCESS_STATE v301; // rdi
  int SessionId; // ebx
  bool v303; // di
  __int64 v304; // rdx
  __int16 v305; // si
  __int16 v306; // r15
  unsigned __int64 *v307; // r14
  unsigned __int64 v308; // rbx
  bool v309; // di
  unsigned __int64 v310; // rbx
  bool v311; // di
  ULONG_PTR v312; // rbx
  unsigned __int32 v313; // eax
  unsigned __int32 v314; // r8d
  ULONG_PTR v315; // r14
  unsigned int v316; // r12d
  ULONG_PTR v317; // rsi
  ULONG_PTR v318; // rbx
  ULONG_PTR v319; // rbx
  ULONG_PTR v320; // rdi
  __int64 v321; // r15
  __int64 v322; // rax
  __int64 v323; // rax
  signed __int32 v324; // r8d
  signed __int32 v325; // eax
  signed __int32 v326; // ett
  signed __int32 v327; // edx
  __int64 v328; // rdi
  struct _KTHREAD *v329; // rax
  int v330; // ecx
  bool v331; // cl
  PRTL_BALANCED_NODE v332; // rax
  PRTL_BALANCED_NODE v333; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v335; // rdx
  ULONG_PTR v336; // rcx
  _QWORD *v337; // rax
  unsigned __int8 v338; // r14
  bool v339; // di
  signed __int32 v340; // eax
  bool v341; // di
  ULONG_PTR v342; // r14
  ULONG_PTR v343; // rcx
  __int64 v344; // rbx
  int v345; // eax
  __int64 v346; // rdx
  _SLIST_ENTRY *v347; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-D0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  PACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-C0h]
  int Child; // [rsp+60h] [rbp-A0h] BYREF
  char v355; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v356; // [rsp+65h] [rbp-9Bh]
  char v357; // [rsp+66h] [rbp-9Ah] BYREF
  __int64 v358; // [rsp+67h] [rbp-99h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-90h] BYREF
  char v360; // [rsp+78h] [rbp-88h]
  __int16 v361; // [rsp+7Ch] [rbp-84h] BYREF
  int j; // [rsp+80h] [rbp-80h]
  ULONG_PTR Process; // [rsp+88h] [rbp-78h]
  __int64 v364; // [rsp+90h] [rbp-70h]
  __int64 v365; // [rsp+98h] [rbp-68h] BYREF
  int v366[2]; // [rsp+A0h] [rbp-60h]
  char v367; // [rsp+A8h] [rbp-58h]
  char v368; // [rsp+A9h] [rbp-57h]
  PACCESS_STATE AccessState; // [rsp+B0h] [rbp-50h]
  BOOLEAN v370[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v371; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v372; // [rsp+C8h] [rbp-38h]
  PVOID Object; // [rsp+D0h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v375; // [rsp+E0h] [rbp-20h]
  int v376[2]; // [rsp+E8h] [rbp-18h]
  unsigned int v377; // [rsp+F0h] [rbp-10h]
  __m128i v378; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR v379; // [rsp+110h] [rbp+10h]
  __int64 v380; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v381; // [rsp+120h] [rbp+20h]
  __m128i v382; // [rsp+130h] [rbp+30h]
  PVOID TokenInformation; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR v384; // [rsp+148h] [rbp+48h] BYREF
  __m128i v385; // [rsp+150h] [rbp+50h]
  PCUNICODE_STRING SourceString; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v387; // [rsp+168h] [rbp+68h] BYREF
  __int64 v388; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v389[2]; // [rsp+180h] [rbp+80h]
  struct _PRIVILEGE_SET *v390; // [rsp+190h] [rbp+90h]
  struct _PRIVILEGE_SET *v391; // [rsp+198h] [rbp+98h] BYREF
  ULONG_PTR v392; // [rsp+1A0h] [rbp+A0h] BYREF
  char v393[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v394; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v395; // [rsp+1B8h] [rbp+B8h] BYREF
  PPRIVILEGE_SET v396; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v398; // [rsp+1D8h] [rbp+D8h] BYREF
  ULONG_PTR v399; // [rsp+1E0h] [rbp+E0h]
  __int64 v400; // [rsp+1E8h] [rbp+E8h]
  struct _PRIVILEGE_SET *v401; // [rsp+1F0h] [rbp+F0h]
  int v402[2]; // [rsp+200h] [rbp+100h] BYREF
  ULONG_PTR v403; // [rsp+208h] [rbp+108h]
  __int64 v404; // [rsp+210h] [rbp+110h]
  PPRIVILEGE_SET v405; // [rsp+218h] [rbp+118h]
  _QWORD v406[3]; // [rsp+220h] [rbp+120h] BYREF
  PPRIVILEGE_SET v407; // [rsp+238h] [rbp+138h]
  PPRIVILEGE_SET v408[3]; // [rsp+240h] [rbp+140h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+258h] [rbp+158h]
  __int64 v410; // [rsp+260h] [rbp+160h]
  _QWORD v411[3]; // [rsp+268h] [rbp+168h]
  _QWORD v412[3]; // [rsp+280h] [rbp+180h] BYREF
  PPRIVILEGE_SET v413; // [rsp+298h] [rbp+198h]
  PVOID *v414; // [rsp+2A0h] [rbp+1A0h]
  __int64 v415; // [rsp+2A8h] [rbp+1A8h]
  __int64 v416; // [rsp+2B0h] [rbp+1B0h]
  __int64 v417; // [rsp+2B8h] [rbp+1B8h]
  __int64 v418; // [rsp+2C0h] [rbp+1C0h]
  int v419[44]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v414 = a9;
  v10 = 0;
  v371 = a1;
  j = 0;
  v356 = a3;
  v11 = 0LL;
  AccessState = a2;
  v375 = (__int64)String2;
  v364 = a7;
  v360 = 0;
  Object = 0LL;
  Process = 0LL;
  BugCheckParameter4 = 0LL;
  v384 = 0LL;
  LOWORD(v365) = 0;
  *(_QWORD *)v366 = 0LL;
  v355 = 0;
  v368 = 0;
  LODWORD(v358) = 0;
  v361 = 0;
  v392 = 0LL;
  HvpGetCellContextReinitialize((__int64)v393);
  v12 = *a6;
  v357 = 0;
  v378 = v12;
  memset(v419, 0, 0xA8uLL);
  v406[0] = 4294901760LL;
  *(_QWORD *)v402 = 4294901760LL;
  v412[0] = 4294901760LL;
  v403 = 0LL;
  v404 = 0LL;
  v405 = 0LL;
  v406[1] = 0LL;
  v406[2] = 0LL;
  v407 = 0LL;
  v412[1] = 0LL;
  v412[2] = 0LL;
  v413 = 0LL;
  v381 = (__int64 *)(a7 + 144);
  memset((void *)(a7 + 144), 0, 0x50uLL);
  *(_QWORD *)(a7 + 144) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v13 = *(_QWORD *)(a7 + 88);
  v14 = *(_QWORD *)(a7 + 72);
  v15 = v371;
  v372 = v13;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v15 + 56);
    if ( v16 && v14 != v16 )
    {
      v17 = -1072103422;
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_749;
    }
    *(_QWORD *)v376 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v15 + 56);
    *(_QWORD *)v376 = *(_QWORD *)(v15 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v15 + 50);
  if ( *(_QWORD *)(v15 + 8) != *((_QWORD *)CmpRegistryRootObject + 1) && v13 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v13);
    v13 = 0LL;
    v372 = 0LL;
    CmpUnlockRegistry();
  }
  BYTE1(v358) = 0;
  if ( !v13 )
  {
LABEL_68:
    v55 = 0;
    v385 = v12;
    v382 = v12;
    v51 = *(_QWORD *)(v371 + 8);
    v379 = v51;
    v367 = 0;
    v378.m128i_i16[0] = _mm_cvtsi128_si32(v12);
    if ( !v378.m128i_i16[0] )
    {
      v361 = 0;
      goto LABEL_120;
    }
    v56 = v382.m128i_i16[0];
    v57 = 0;
    v58 = (_WORD *)v382.m128i_i64[1];
    v59 = v382.m128i_i16[1];
    while ( v57 < 32 )
    {
      if ( *v58 == 92 )
      {
        v60 = v57 + 1;
        v61 = v385.m128i_i16[0] - v56;
        LOWORD(Child) = v60;
        v385.m128i_i16[0] = v61;
        v385.m128i_i16[1] = v61;
        if ( v60 > 8 && !v55 )
        {
          v62 = CmpExpandPathInfo((__int64)v419);
          if ( v62 < 0 )
          {
            v51 = v379;
            goto LABEL_118;
          }
          v367 = 1;
        }
        v63 = v385;
        v64 = v60 - 1;
        v377 = v64;
        if ( v64 >= 8 )
          *(__m128i *)(16 * ((unsigned int)(v60 - 9) + 6LL) + *(_QWORD *)&v419[40]) = v385;
        else
          *(__m128i *)&v419[4 * v64 + 8] = v385;
        v385 = v63;
        v65 = 0;
        if ( v61 )
        {
          v66 = (unsigned __int16)(((unsigned __int16)(v61 - 1) >> 1) + 1);
          v67 = (WCHAR *)v385.m128i_i64[1];
          do
          {
            v68 = *v67;
            if ( *v67 >= 0x61u )
            {
              if ( v68 <= 0x7Au )
                v68 -= 32;
              else
                v68 = RtlUpcaseUnicodeChar(v68);
            }
            ++v67;
            v65 = v68 + 37 * v65;
            --v66;
          }
          while ( v66 );
          v64 = v377;
        }
        if ( v64 >= 8 )
          *(_DWORD *)(*(_QWORD *)&v419[40] + 4LL * (v64 - 8)) = v65;
        else
          v419[v64] = v65;
        if ( v56 )
        {
          do
          {
            if ( *v58 != 92 )
              break;
            ++v58;
            v59 -= 2;
            v56 -= 2;
          }
          while ( v56 );
          v382.m128i_i16[0] = v56;
          v382.m128i_i64[1] = (__int64)v58;
          v382.m128i_i16[1] = v59;
        }
        v12 = v382;
        v57 = Child;
        v55 = v367;
        v385 = v382;
      }
      else
      {
        ++v58;
        v56 -= 2;
        v59 -= 2;
        v382.m128i_i64[1] = (__int64)v58;
        v382.m128i_i16[1] = v59;
        v382.m128i_i16[0] = v56;
      }
      if ( !v56 )
        break;
    }
    v51 = v379;
    if ( v56 )
    {
      v62 = -1073741811;
      v17 = -1073741811;
      Child = -1073741811;
    }
    else
    {
      v69 = v57 + 1;
      LOWORD(Child) = v69;
      if ( v69 <= 8 || v55 || (v62 = CmpExpandPathInfo((__int64)v419), v62 >= 0) )
      {
        v70 = (unsigned int)(v69 - 1);
        if ( (unsigned int)v70 >= 8 )
          *(__m128i *)(*(_QWORD *)&v419[40] + 16 * ((unsigned int)(v69 - 9) + 6LL)) = v12;
        else
          *(__m128i *)&v419[4 * (unsigned int)v70 + 8] = v12;
        v71 = _mm_cvtsi128_si32(v12);
        v72 = 0;
        v385 = v12;
        if ( v71 )
        {
          v73 = (WCHAR *)v385.m128i_i64[1];
          v74 = (unsigned __int16)(((unsigned __int16)(v71 - 1) >> 1) + 1);
          do
          {
            v75 = *v73;
            if ( *v73 >= 0x61u )
            {
              if ( v75 <= 0x7Au )
                v75 -= 32;
              else
                v75 = RtlUpcaseUnicodeChar(v75);
            }
            ++v73;
            v72 = v75 + 37 * v72;
            --v74;
          }
          while ( v74 );
          v69 = Child;
        }
        if ( (unsigned int)v70 >= 8 )
        {
          v361 = v69;
          *(_DWORD *)(*(_QWORD *)&v419[40] + 4LL * (unsigned int)(v70 - 8)) = v72;
          v62 = 0;
        }
        else
        {
          v419[v70] = v72;
          v62 = 0;
          v361 = v69;
        }
      }
LABEL_118:
      Child = v62;
      v17 = v62;
      if ( v62 >= 0 )
      {
LABEL_120:
        v76 = 0;
        v36 = v361;
        v377 = v361;
        if ( v361 )
        {
          while ( 1 )
          {
            v77 = v76 >= 8 ? (int *)(*(_QWORD *)&v419[40] + 16 * (v76 - 8 + 6LL)) : &v419[4 * v76 + 8];
            if ( *(_WORD *)v77 > 0x200u )
              break;
            if ( ++v76 >= v361 )
              goto LABEL_64;
          }
          Child = -1073741811;
          v17 = -1073741811;
          CmpRecordParseFailure(v364, 1536, -1073741811);
          v11 = Process;
          goto LABEL_745;
        }
LABEL_64:
        v52 = v381;
        v53 = j;
        v54 = (__int16)j;
        v381[1] = v51;
        v52[4] = v51;
        if ( v36 + ((*(_DWORD *)(v51 + 4) >> 21) & 0x3FF) - v54 > 0x200 )
        {
          Child = -1073741811;
          v17 = -1073741811;
          CmpRecordParseFailure(v364, 1792, -1073741811);
          v11 = Process;
LABEL_745:
          if ( BYTE3(v358) )
            CmpUnlockHashEntryByKcb(v372);
          if ( Object )
            ObDereferenceObjectDeferDelete(Object);
          goto LABEL_749;
        }
        v78 = (_DWORD *)v364;
        if ( !BYTE1(v358) )
        {
          if ( (*(_DWORD *)v364 & 0x400) != 0 )
          {
            CmpLockRegistryExclusive();
          }
          else if ( !CmpPuntBoot )
          {
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
            Process = BugCheckParameter4;
            v53 = j;
          }
          BYTE1(v358) = 1;
        }
        v80 = *(_DWORD *)(v371 + 48);
        if ( (v80 & 9) != 0 )
        {
          v17 = -1073741444;
          if ( (v80 & 1) != 0 )
            v17 = -1073740763;
          Child = v17;
          CmpRecordParseFailure((__int64)v78, 2048, v17);
          v11 = Process;
          goto LABEL_745;
        }
        if ( (_WORD)v53 == v361 )
        {
          if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v51) )
          {
            v17 = -1073741670;
            Child = -1073741670;
            CmpRecordParseFailure((__int64)v78, 2304, -1073741670);
            v11 = Process;
            goto LABEL_745;
          }
          BugCheckParameter4 = v51;
          if ( v51 == v372 )
          {
            v357 = BYTE3(v358);
            BYTE3(v358) = 0;
          }
          else
          {
            CmpLockHashEntrySharedByKcb(v51);
            v357 = 1;
          }
        }
        else
        {
          v81 = CmpPerformCompleteKcbCacheLookup(
                  (volatile signed __int32 *)v51,
                  v54,
                  v36,
                  (__int64)v419,
                  v78,
                  &BugCheckParameter4,
                  &v357,
                  &v380);
          Child = v81;
          v17 = v81;
          if ( v81 < 0 || v81 == 259 )
          {
            CmpRecordParseFailure((__int64)v78, 2432, v81);
            v11 = BugCheckParameter4;
LABEL_743:
            if ( v357 )
              CmpUnlockHashEntryByKcb(v11);
            goto LABEL_745;
          }
          v51 = BugCheckParameter4;
          v82 = v380;
          LOWORD(v53) = v380 + v53;
          v379 = BugCheckParameter4;
          j = v53;
          v52[2] = BugCheckParameter4;
          *((_BYTE *)v52 + 40) = v82;
          v52[4] = v51;
        }
        if ( (_WORD)v53 == v361 && (*v78 & 1) == 0 )
        {
          v83 = *(_QWORD *)(v51 + 24);
          *(_QWORD *)(*(_QWORD *)(v83 + 2800)
                    + 24LL
                    * (((101027 * (*(_DWORD *)(v51 + 8) ^ (*(_DWORD *)(v51 + 8) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(v51 + 8) ^ (*(_DWORD *)(v51 + 8) >> 9))) >> 9)) & (*(_DWORD *)(v83 + 2808) - 1))
                    + 8) = 0LL;
          ExReleasePushLockEx(
            *(_QWORD *)(*(_QWORD *)(v51 + 24) + 2800LL)
          + 24LL
          * (((101027 * (*(_DWORD *)(v51 + 8) ^ (*(_DWORD *)(v51 + 8) >> 9))) ^ ((unsigned int)(101027
                                                                                              * (*(_DWORD *)(v51 + 8) ^ (*(_DWORD *)(v51 + 8) >> 9))) >> 9)) & (*(_DWORD *)(*(_QWORD *)(v51 + 24) + 2808LL) - 1)),
            0LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive(v83);
          v51 = BugCheckParameter4;
          v379 = BugCheckParameter4;
          v357 = 0;
        }
        if ( (*(_DWORD *)(v51 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v51 + 60) = CmpLockTableAdd(v51, 0);
        v84 = v51 + 40;
        v381 = (__int64 *)(v51 + 40);
        ExAcquirePushLockSharedEx(v51 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 48));
        if ( (__int16)v53 >= v361 )
        {
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
        else
        {
          v85 = (unsigned int)(__int16)v53;
          if ( (unsigned int)v85 >= 8 )
            v86 = (int *)(*(_QWORD *)&v419[40] + 16 * ((unsigned int)(v85 - 8) + 6LL));
          else
            v86 = &v419[4 * v85 + 8];
          DestinationString.Buffer = (wchar_t *)*((_QWORD *)v86 + 1);
          DestinationString.Length = v378.m128i_i16[0]
                                   - 2 * (((__int64)DestinationString.Buffer - v378.m128i_i64[1]) >> 1);
          DestinationString.MaximumLength = DestinationString.Length;
        }
        if ( !CmpVEEnabled
          || (v87 = (_DWORD *)v364, (*(_DWORD *)(v364 + 24) & 0x10) != 0)
          || (v88 = BugCheckParameter4, *(_WORD *)(BugCheckParameter4 + 58))
          || (v89 = *(_QWORD *)(BugCheckParameter4 + 24), v89 == CmpMasterHive) )
        {
LABEL_178:
          v94 = -1073741199;
          goto LABEL_179;
        }
        v411[0] = BugCheckParameter4;
        v410 = 0LL;
        v90 = 0;
        v411[2] = 0LL;
        v411[1] = 0LL;
        do
        {
          v91 = v90 < 2 ? v411[v90] : *(_QWORD *)(8LL * (v90 - 2));
          if ( *(_WORD *)(v91 + 58) && *(_BYTE *)(v91 + 57) == 1 )
            break;
          if ( *(_DWORD *)(v91 + 32) != -1 )
          {
            if ( (*(_DWORD *)(v89 + 5360) & 0x10) == 0 && (*(_WORD *)(BugCheckParameter4 + 178) & 0x200) == 0 )
              goto LABEL_178;
            break;
          }
          --v90;
        }
        while ( v90 >= 0 );
        v92 = (int *)(v364 + 16);
        v93 = 1;
        if ( v364 != -16 && (*v92 & 1) != 0 )
        {
          if ( (*v92 & 2) != 0 )
            goto LABEL_178;
          goto LABEL_201;
        }
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v96 = KeGetCurrentThread();
          v97 = (__int64)v96;
          LODWORD(TokenInformation) = 0;
          Process = (ULONG_PTR)v96->ApcState.Process;
          if ( (*(_DWORD *)(&v96[1].SwapListEntry + 1) & 8) == 0 )
            goto LABEL_190;
          v98 = KeGetCurrentThread();
          --v98->KernelApcDisable;
          p_WaitBlockList = (signed __int64 *)&v96[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v96[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&v96[1].SwapListEntry + 1) & 8) != 0 )
          {
            v100 = (void *)(*(_QWORD *)&v96[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v100);
          }
          else
          {
            v100 = 0LL;
          }
          if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_WaitBlockList);
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v98);
          if ( v100 )
          {
            ObfDereferenceObject(v100);
          }
          else
          {
LABEL_190:
            v101 = Process;
            v102 = (_QWORD *)(Process + 856);
            v103 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
            if ( !v103 )
            {
              --*(_WORD *)(v97 + 484);
              v104 = (signed __int64 *)(v101 + 728);
              ExAcquirePushLockSharedEx((ULONG_PTR)v104, 0LL);
              v103 = (void *)ObFastReferenceObjectLocked(v102);
              if ( _InterlockedCompareExchange64(v104, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v104);
              KeAbPostRelease((ULONG_PTR)v104);
              KeLeaveCriticalRegionThread(v97);
            }
            SeQueryInformationToken(v103, TokenVirtualizationEnabled, &TokenInformation);
            ObFastDereferenceObject(
              (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
              (unsigned __int64)v103);
            v93 = (_BYTE)TokenInformation == 0;
          }
          v51 = v379;
          v87 = (_DWORD *)v364;
          v84 = (ULONG_PTR)v381;
        }
        if ( v92 )
        {
          v105 = *v92 | 1;
          *v92 = v105;
          if ( !v93 )
          {
            *v92 = v105 | 4;
LABEL_200:
            v88 = BugCheckParameter4;
LABEL_201:
            if ( (*v87 & 8) != 0 )
              goto LABEL_178;
            if ( (*(_WORD *)(v88 + 178) & 0x200) != 0 )
              v94 = CmpVEExecuteVirtualStoreParseLogic(v88, &DestinationString, v87, v375);
            else
              v94 = CmpVEExecuteRealStoreParseLogic(v88, (__int64)&DestinationString, v87, (UNICODE_STRING *)v375);
LABEL_179:
            v95 = (*(_DWORD *)(v51 + 4) & 0x80000) != 0;
            Child = v94;
            if ( *(struct _KTHREAD **)(v51 + 48) == KeGetCurrentThread() )
              *(_QWORD *)(v51 + 48) = 0LL;
            else
              _InterlockedDecrement((volatile signed __int32 *)(v51 + 48));
            ExReleasePushLockEx(v84, 0LL);
            v32 = (*(_DWORD *)(v51 + 4) & 0x100000) == 0;
            v11 = BugCheckParameter4;
            Process = BugCheckParameter4;
            if ( !v32 )
              CmpLockTableRemove(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 60));
            if ( v95 && (*(_DWORD *)(v51 + 4) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(v11);
            if ( v94 != -1073741199 )
            {
              CmpRecordParseFailure(v364, 2496, v94);
              v17 = Child;
              goto LABEL_743;
            }
            v106 = v364;
            v107 = *(_QWORD *)(v11 + 24);
            v108 = *(_QWORD *)(v364 + 64);
            if ( !PsIsCurrentThreadInServerSilo() && v108 && v108 != v107 )
            {
              if ( (*(_DWORD *)(v107 + 5360) & 1) != 0 )
              {
                ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                v109 = *(_QWORD *)(v107 + 5368);
                if ( v109 != v107 + 5368 )
                {
                  while ( 1 )
                  {
                    v110 = v109 - 5368;
                    if ( v110 == v108 )
                      break;
                    v109 = *(_QWORD *)(v110 + 5368);
                    if ( v109 == v107 + 5368 )
                      goto LABEL_221;
                  }
                  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                  goto LABEL_224;
                }
LABEL_221:
                ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
              }
              v17 = -1073741790;
              Child = -1073741790;
              CmpRecordParseFailure(v106, 2560, -1073741790);
              goto LABEL_743;
            }
LABEL_224:
            if ( v14 || *(_QWORD *)v376 )
            {
              if ( *(_QWORD *)(v11 + 24) == CmpMasterHive )
              {
                BYTE1(v365) = 1;
                v14 = 0LL;
                v111 = 0LL;
              }
              else if ( (v14 || *(_QWORD *)v376) && *(_WORD *)(v11 + 58) )
              {
                CmpLogUnsupportedOperation(8LL);
                if ( !PsIsCurrentThreadInServerSilo() )
                {
                  v17 = -1072103419;
                  Child = -1072103419;
                  CmpRecordParseFailure(v106, 2816, -1072103419);
                  goto LABEL_743;
                }
                v14 = 0LL;
                v111 = 0LL;
              }
              else
              {
                v111 = *(_QWORD *)v376;
              }
            }
            else
            {
              v111 = 0LL;
            }
            if ( !CmpTransSilentIgnore() && (v14 || v111) )
            {
              if ( (int)CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 24), v14, v111, 0, (__int64)v370) < 0 )
              {
                if ( v357 )
                {
                  CmpUnlockHashEntryByKcb(v11);
                  v357 = 0;
                }
                CmpUnlockRegistry();
                v17 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 24), v14, v111, 1u, (__int64)v370);
                CmpLockRegistry();
                BYTE1(v358) = 1;
                if ( v17 >= 0 )
                  v17 = -1073741267;
                Child = v17;
                CmpRecordParseFailure(v106, 3072, v17);
                goto LABEL_743;
              }
              v113 = 0LL;
            }
            else
            {
              *(_QWORD *)v370 = v113;
            }
            v114 = *(_WORD *)(v11 + 58);
            v115 = v113;
            if ( v114 >= 2 && v114 != 1 )
            {
              v116 = 8LL * (unsigned int)(v114 - 1);
              TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v112, v116, 0x35364D43u);
              v115 = TransientPoolWithTag;
              if ( !TransientPoolWithTag )
              {
                v17 = -1073741670;
                Child = -1073741670;
                CmpRecordParseFailure(v106, 3328, -1073741670);
                goto LABEL_743;
              }
              memset(TransientPoolWithTag, 0, v116);
              v113 = 0LL;
            }
            LOWORD(v402[0]) = v114;
            HIWORD(v402[0]) = -1;
            v405 = v115;
            v118 = *(_WORD *)(v11 + 58);
            v119 = v113;
            if ( v118 >= 2 && v118 != 1 )
            {
              v120 = 8LL * (unsigned int)(v118 - 1);
              v121 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v112, v120, 0x35364D43u);
              v119 = v121;
              if ( !v121 )
              {
                v17 = -1073741670;
                Child = -1073741670;
                CmpRecordParseFailure(v106, 3584, -1073741670);
                goto LABEL_743;
              }
              memset(v121, 0, v120);
              v113 = 0LL;
            }
            WORD1(v406[0]) = -1;
            LOWORD(v406[0]) = v118;
            v407 = v119;
            v122 = *(_WORD *)(v11 + 58);
            v123 = (int *)v406;
            Child = (int)v113;
            v124 = v402;
            *(_QWORD *)v376 = v406;
            HIWORD(v402[0]) = v122;
            if ( v122 )
            {
              v125 = *(_QWORD *)(v11 + 184);
              if ( v125 )
              {
                do
                {
                  CmpSetKcbAtLayerHeight(v402, v122, *(_QWORD *)(v125 + 16));
                  v125 = *(_QWORD *)(v126 + 24);
                  v122 = v127 - 1;
                }
                while ( v125 );
                v123 = (int *)v406;
              }
              v113 = 0LL;
            }
            else
            {
              v403 = v11;
            }
            LOWORD(v128) = j;
            if ( (__int16)j < v361 )
            {
              while ( 1 )
              {
                v129 = *((_WORD *)v124 + 1);
                v130 = (__int16)v113;
                if ( (__int16)v113 <= v129 )
                {
                  v131 = (__int64 *)(v124 + 2);
                  do
                  {
                    if ( v130 < 2 )
                      v132 = *v131;
                    else
                      v132 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v130 - 2));
                    if ( (*(_DWORD *)(v132 + 4) & 0x100000) != 0 )
                      *(_DWORD *)(v132 + 60) = CmpLockTableAdd(v132, 0);
                    ExAcquirePushLockSharedEx(v132 + 40, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v132 + 48));
                    ++v130;
                    ++v131;
                  }
                  while ( v130 <= v129 );
                  v11 = BugCheckParameter4;
                  v113 = 0LL;
                  LOWORD(v128) = j;
                  Process = BugCheckParameter4;
                }
                v391 = v113;
                v133 = v129;
                if ( v129 < 0 )
                {
LABEL_281:
                  if ( CmpLoadingSystemHivesActive )
                  {
                    Process = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(_QWORD *)(BugCheckParameter4 + 24) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                      && (__int16)v128 > 0 )
                    {
                      ComponentNameAtIndex = CmpGetComponentNameAtIndex((__int64)v419, (__int16)v128 - 1);
                      if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v136, v137, v106 + 136) )
                      {
                        *(_DWORD *)v106 |= 0x100u;
                        v17 = 259;
                        Child = 259;
                        v138 = 3840;
                        goto LABEL_288;
                      }
                    }
                  }
                  v138 = 4096;
                  v17 = -1073741772;
                  Child = -1073741772;
                  v139 = -1073741772;
                  goto LABEL_289;
                }
                while ( 1 )
                {
                  if ( v133 < 2 )
                    v134 = *(_QWORD *)&v124[2 * v133 + 2];
                  else
                    v134 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v133 - 2));
                  if ( *(_WORD *)(v134 + 58) && *(_BYTE *)(v134 + 57) == 1 )
                    goto LABEL_281;
                  if ( *(_DWORD *)(v134 + 32) != -1 )
                    break;
                  if ( --v133 < 0 )
                    goto LABEL_281;
                }
                v145 = *(_QWORD *)v370;
                if ( *(_QWORD *)v370 )
                {
                  NextElement = CmListGetNextElement((_QWORD *)(*((_QWORD *)v124 + 1) + 200LL), &v391, 32);
                  if ( NextElement )
                  {
                    while ( 1 )
                    {
                      v148 = *((_DWORD *)NextElement + 17);
                      if ( v148 == 2 || v148 == 11 )
                        break;
                      NextElement = CmListGetNextElement((_QWORD *)(v147 + 200), &v391, 32);
                      if ( !NextElement )
                        goto LABEL_303;
                    }
                    if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v145) )
                      goto LABEL_281;
                  }
LABEL_303:
                  v113 = 0LL;
                }
                v149 = v129;
                while ( 1 )
                {
                  v150 = v149 < 2
                       ? *(_QWORD *)&v124[2 * v149 + 2]
                       : *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v149 - 2));
                  if ( *(_DWORD *)(v150 + 32) != -1 )
                    break;
                  if ( --v149 < 0 )
                    goto LABEL_312;
                }
                if ( (*(_BYTE *)(v150 + 178) & 0x10) != 0 )
                {
                  SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                         (__int64)v124,
                                         (__int64)v419,
                                         v128,
                                         v361,
                                         v145,
                                         v375,
                                         (ULONG_PTR *)(v106 + 88));
                  Child = SymbolicLinkTarget;
                  v17 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget >= 0 )
                  {
                    *(_DWORD *)v106 &= ~8u;
                    if ( !*(_QWORD *)(v106 + 64) )
                    {
                      v166 = *(_QWORD *)(v11 + 24);
                      if ( (*(_DWORD *)(v166 + 5360) & 1) != 0 )
                        *(_QWORD *)(v106 + 64) = v166;
                    }
                    v167 = v106 + 144;
                    v17 = 260;
                    v168 = *(_BYTE *)(v106 + 186);
                    Child = 260;
                    if ( v168 < 4u )
                    {
                      *(_DWORD *)(v167 + 4LL * v168 + 44) = 4864;
                      *(_DWORD *)(v167 + 4LL * (unsigned __int8)(*(_BYTE *)(v106 + 186))++ + 60) = 260;
                    }
                  }
                  else
                  {
                    CmpRecordParseFailure(v106, 4608, SymbolicLinkTarget);
                  }
                  goto LABEL_743;
                }
LABEL_312:
                v151 = (__int16)v113;
                if ( (__int16)v113 <= v129 )
                {
                  v152 = (unsigned __int64 *)(v124 + 2);
                  do
                  {
                    if ( v151 < 2 )
                      v153 = *v152;
                    else
                      v153 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v151 - 2));
                    v154 = (*(_DWORD *)(v153 + 4) & 0x80000) != 0;
                    if ( *(struct _KTHREAD **)(v153 + 48) == KeGetCurrentThread() )
                      *(_QWORD *)(v153 + 48) = v113;
                    else
                      _InterlockedDecrement((volatile signed __int32 *)(v153 + 48));
                    ExReleasePushLockEx(v153 + 40, 0LL);
                    if ( (*(_DWORD *)(v153 + 4) & 0x100000) != 0 )
                      CmpLockTableRemove(v153, *(_DWORD *)(v153 + 60));
                    if ( v154 && (*(_DWORD *)(v153 + 4) & 0x80000) != 0 )
                      CmpFreeKeyControlBlock(v153);
                    ++v151;
                    ++v152;
                    v113 = 0LL;
                  }
                  while ( v151 <= v129 );
                  v11 = BugCheckParameter4;
                  v106 = v364;
                  v145 = *(_QWORD *)v370;
                }
                v128 = j;
                v155 = (unsigned int)(__int16)j;
                if ( (unsigned int)v155 >= 8 )
                  v156 = (__m128i *)(*(_QWORD *)&v419[40] + 16 * ((unsigned int)(v155 - 8) + 6LL));
                else
                  v156 = (__m128i *)&v419[4 * (unsigned int)v155 + 8];
                if ( (unsigned int)v155 >= 8 )
                  v157 = *(_DWORD *)(*(_QWORD *)&v419[40] + 4LL * (unsigned int)(v155 - 8));
                else
                  v157 = v419[v155];
                if ( (*(_DWORD *)v106 & 1) == 0 || (v158 = 1, (_DWORD)v155 != v377 - 1) )
                  v158 = (char)v113;
                GrantedAccess = (PACCESS_MASK)v145;
                v159 = *(int **)v376;
                *(_DWORD *)AccessMode = v157 + 37 * *(_DWORD *)(v11 + 8);
                v17 = CmpWalkOneLevel(
                        v11,
                        (__int64)v124,
                        &v384,
                        *(__int64 *)v376,
                        &v365,
                        v156,
                        v157,
                        *(ULONG_PTR *)AccessMode,
                        (__int64)GrantedAccess,
                        v158,
                        v106);
                Child = v17;
                if ( v17 == -1073741772 )
                  break;
                if ( v17 < 0 )
                  goto LABEL_361;
                v160 = v384;
                ++*(_BYTE *)(v106 + 185);
                *(_QWORD *)(v106 + 168) = v160;
                *(_QWORD *)(v106 + 176) = v160;
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
                  KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                v113 = 0LL;
                v11 = v384;
                LOWORD(v128) = v128 + 1;
                v357 = v365;
                v123 = v124;
                v124 = v159;
                *(_QWORD *)v376 = v123;
                Process = v384;
                BugCheckParameter4 = v384;
                v384 = 0LL;
                LOBYTE(v365) = 0;
                j = v128;
                if ( (__int16)v128 >= v361 )
                  goto LABEL_340;
              }
              if ( CmpLoadingSystemHivesActive )
              {
                v11 = BugCheckParameter4;
                if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                  && *(_QWORD *)(BugCheckParameter4 + 24) == CmpMasterHive )
                {
                  if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000 && (__int16)v128 > 0 )
                  {
                    v169 = CmpGetComponentNameAtIndex((__int64)v419, (__int16)v128 - 1);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v169, v170, v171, v106 + 136) )
                    {
                      *(_DWORD *)v106 |= 0x100u;
                      v17 = 259;
                      Child = 259;
                      CmpRecordParseFailure(v106, 5120, 259);
                      goto LABEL_743;
                    }
                  }
                  if ( (*(_DWORD *)(v11 + 4) & 0x7FE00000) == 0x400000 )
                  {
                    v172 = CmpGetComponentNameAtIndex((__int64)v419, (__int16)v128);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v172, v173, v174, v106 + 136) )
                    {
                      *(_DWORD *)v106 |= 0x100u;
                      v17 = 259;
                      Child = 259;
                      CmpRecordParseFailure(v106, 5376, 259);
                      goto LABEL_743;
                    }
                  }
                }
                v17 = Child;
              }
LABEL_361:
              v175 = v106 + 144;
              v176 = *(_BYTE *)(v106 + 186);
              if ( v176 < 4u )
              {
                *(_DWORD *)(v175 + 4LL * v176 + 44) = 5504;
                *(_DWORD *)(v175 + 4LL * (unsigned __int8)(*(_BYTE *)(v106 + 186))++ + 60) = v17;
              }
              goto LABEL_743;
            }
LABEL_340:
            v161 = *(_QWORD *)(v11 + 64);
            v162 = (__int64 *)(v11 + 64);
            *(_QWORD *)v366 = v123;
            v163 = v123;
            v381 = (__int64 *)(v11 + 64);
            if ( v161 )
            {
              v164 = *(_WORD *)(v161 + 58);
              *((_WORD *)v123 + 1) = v164;
              if ( v164 )
              {
                for ( i = *(_QWORD *)(v161 + 184); i; v123 = *(int **)v376 )
                {
                  CmpSetKcbAtLayerHeight(v123, v164, *(_QWORD *)(i + 16));
                  i = *(_QWORD *)(v178 + 24);
                  v164 = v179 - 1;
                }
              }
              else
              {
                *((_QWORD *)v123 + 1) = v161;
              }
            }
            else
            {
              v163 = 0LL;
              *(_QWORD *)v366 = 0LL;
            }
            v180 = *(_QWORD *)(v371 + 8);
            if ( *v162 != v180 && v11 != v180 )
            {
              if ( (*(_DWORD *)(v180 + 4) & 0x100000) != 0 )
                *(_DWORD *)(v180 + 60) = CmpLockTableAdd(*(_QWORD *)(v371 + 8), 0);
              ExAcquirePushLockSharedEx(v180 + 40, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v180 + 48));
              v11 = BugCheckParameter4;
              Process = BugCheckParameter4;
              LOBYTE(v358) = 1;
            }
            if ( v163 )
            {
              v181 = *((_WORD *)v163 + 1);
              v182 = 0;
              if ( v181 >= 0 )
              {
                v183 = *(_QWORD *)v366;
                v184 = (__int64 *)(*(_QWORD *)v366 + 8LL);
                do
                {
                  if ( v182 < 2 )
                    v185 = *v184;
                  else
                    v185 = *(_QWORD *)(*(_QWORD *)(v183 + 24) + 8LL * (v182 - 2));
                  if ( (*(_DWORD *)(v185 + 4) & 0x100000) != 0 )
                    *(_DWORD *)(v185 + 60) = CmpLockTableAdd(v185, 0);
                  ExAcquirePushLockSharedEx(v185 + 40, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v185 + 48));
                  ++v182;
                  ++v184;
                }
                while ( v182 <= v181 );
                v11 = BugCheckParameter4;
                v162 = v381;
                Process = BugCheckParameter4;
              }
              v355 = 1;
            }
            v186 = *((_WORD *)v124 + 1);
            v187 = 0;
            if ( v186 >= 0 )
            {
              v188 = (__int64 *)(v124 + 2);
              do
              {
                if ( v187 < 2 )
                  v189 = *v188;
                else
                  v189 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v187 - 2));
                if ( (*(_DWORD *)(v189 + 4) & 0x100000) != 0 )
                  *(_DWORD *)(v189 + 60) = CmpLockTableAdd(v189, 0);
                ExAcquirePushLockSharedEx(v189 + 40, 0LL);
                _InterlockedIncrement((volatile signed __int32 *)(v189 + 48));
                ++v187;
                ++v188;
              }
              while ( v187 <= v186 );
              v11 = BugCheckParameter4;
              Process = BugCheckParameter4;
            }
            v190 = *(_DWORD *)(v371 + 48);
            if ( (v190 & 9) != 0 )
            {
              v17 = -1073741444;
              if ( (v190 & 1) != 0 )
                v17 = -1073740763;
              Child = v17;
              CmpRecordParseFailure(v364, 5888, v17);
              goto LABEL_292;
            }
            v191 = j - 1;
            if ( (*(_BYTE *)(v11 + 178) & 2) != 0 )
            {
              Child = -1073741772;
              v17 = -1073741772;
              CmpRecordParseFailure(v364, 6144, -1073741772);
              goto LABEL_292;
            }
            v192 = *(_QWORD *)(v11 + 232);
            v193 = *(_QWORD *)v370;
            if ( v192 && !CmEqualTrans(*(__int64 *)v370, v192) )
            {
              Child = -1073741772;
              v17 = -1073741772;
              CmpRecordParseFailure(v364, 6400, -1073741772);
              goto LABEL_292;
            }
            v106 = v364;
            if ( (*(_DWORD *)v364 & 2) != 0 )
            {
              CmpUnlockKcbStack((__int64)v124);
              v194 = *(_QWORD *)v366;
              CmpUnlockKcbStack(*(__int64 *)v366);
              if ( (_BYTE)v358 )
                CmpUnlockKcb(*(_QWORD *)(v371 + 8));
              v360 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v106 + 48), 0LL);
              if ( (_BYTE)v358 )
                CmpLockKcbShared(*(_QWORD *)(v371 + 8));
              CmpLockKcbStackTopExclusiveRestShared(v194);
              CmpLockKcbStackTopExclusiveRestShared((__int64)v124);
              v195 = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v419, v191);
              ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v419, v196);
              if ( CmpIsKeyDeletedForKeyBody(v371, 0LL) )
              {
                v17 = -1073741444;
                v138 = 6656;
                if ( (*(_BYTE *)(v371 + 48) & 1) != 0 )
                  v17 = -1073740763;
                Child = v17;
                goto LABEL_288;
              }
              if ( CmpIsKeyStackDeleted(*(__int64 *)v366, v193) )
              {
                v138 = 6912;
                v17 = -1073741772;
                Child = -1073741772;
                v139 = -1073741772;
                goto LABEL_289;
              }
              if ( !CmpIsKeyStackDeleted((__int64)v124, v193) )
              {
                v17 = -1073741790;
                v138 = 7168;
                Child = -1073741790;
LABEL_288:
                v139 = v17;
LABEL_289:
                v140 = v106;
LABEL_290:
                CmpRecordParseFailure(v140, v138, v139);
LABEL_291:
                v11 = Process;
                goto LABEL_292;
              }
              if ( *(_QWORD *)(*v162 + 24) != CmpMasterHive )
              {
                v17 = -1073741790;
                v138 = 7424;
                Child = -1073741790;
                goto LABEL_288;
              }
              if ( (*(_BYTE *)(*v162 + 178) & 2) != 0 )
              {
                v138 = 7680;
                v17 = -1073741772;
                Child = -1073741772;
                v139 = -1073741772;
                goto LABEL_289;
              }
              v198 = v364;
              v199 = (_DWORD *)(v106 + 40);
              v200 = (unsigned int)*v199;
              v201 = *(_QWORD *)(v364 + 48);
              if ( (_DWORD)v200 == -1 )
              {
                HiveRootCell = CmpCreateHiveRootCell(v201, (__int64)v199);
                Child = HiveRootCell;
                v17 = HiveRootCell;
                if ( HiveRootCell < 0 )
                {
                  v139 = HiveRootCell;
                  v138 = 7808;
                  v140 = v198;
                  goto LABEL_290;
                }
              }
              else
              {
                updated = CmpUpdateHiveRootCellFlags(v201, v200);
                Child = updated;
                v17 = updated;
                if ( updated < 0 )
                {
                  v139 = updated;
                  v138 = 7936;
                  v140 = v198;
                  goto LABEL_290;
                }
              }
              v204 = Process;
              v205 = Process;
              *(_DWORD *)AccessMode = 0;
              *(_WORD *)(Process + 178) |= 2u;
              LODWORD(GenericMapping) = ComponentHashAtIndex;
              v206 = v364;
              v207 = CmpCreateKeyControlBlock(
                       *(_QWORD *)(v364 + 48),
                       -1,
                       v205,
                       *(_QWORD *)(v364 + 80),
                       1,
                       &v195->Length,
                       GenericMapping,
                       *(_QWORD *)AccessMode,
                       &v392);
              Child = v207;
              *(_WORD *)(v204 + 178) &= ~2u;
              v17 = v207;
              if ( v207 < 0 )
              {
                v139 = v207;
                v138 = 0x2000;
                v140 = v206;
                goto LABEL_290;
              }
              v208 = v204;
              v209 = v392;
              Process = v392;
              BugCheckParameter4 = v392;
              CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v208);
              CmpUnlockHashEntryByKcb(v208);
              v357 = 0;
              started = CmpStartKcbStackForTopLayerKcb((__int64)v412, v209);
              Child = started;
              v17 = started;
              if ( started < 0 )
              {
                v140 = v364;
                v139 = started;
                v138 = 8448;
                goto LABEL_290;
              }
              *(_WORD *)(v208 + 178) |= 2u;
              CmpLockKcbStackTopExclusiveRestShared((__int64)v412);
              v211 = *(_DWORD *)v370;
              v212 = v364;
              *(_WORD *)(v208 + 178) &= ~2u;
              v368 = 1;
              KeyBody = CmpCreateKeyBody(v209, v356, v212, v211, 0, (__int64)&Object, (__int64)&v358 + 2);
              Child = KeyBody;
              v17 = KeyBody;
              if ( KeyBody < 0 )
              {
                CmpRecordParseFailure(v364, 8576, KeyBody);
                CmpUnlockKcbStack((__int64)v412);
                goto LABEL_291;
              }
              ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v208 + 24) + 2848LL), 1u);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v209 + 24) + 2848LL), 1u);
              v214 = *(_QWORD *)(v209 + 24);
              v215 = *(_DWORD *)(v214 + 88) == 0;
              if ( !HvpMarkCellDirty(v214, (unsigned int)*v199, 0) )
              {
                v17 = -1073741443;
                Child = -1073741443;
                CmpRecordParseFailure(v364, 8704, -1073741443);
LABEL_432:
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(Process + 24) + 2848LL));
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v208 + 24) + 2848LL));
                CmpUnlockKcbStack((__int64)v412);
                goto LABEL_291;
              }
              Child = CmpCreateChild(
                        *(__int64 *)v366,
                        (__int64)v124,
                        (__int64)AccessState,
                        v195,
                        v364,
                        10,
                        1,
                        *(__int64 *)v370);
              v17 = Child;
              if ( Child < 0 )
                goto LABEL_432;
              v216 = Process;
              v217 = Process;
              *(_DWORD *)(Process + 32) = *v199;
              KeyNodeForKcb = CmpGetKeyNodeForKcb(v217, (__int64)v393, 1);
              *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v208 + 32);
              CmpRebuildKcbCacheFromNode(v216, KeyNodeForKcb);
              (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v216 + 24) + 16LL))(*(_QWORD *)(v216 + 24), v393);
              if ( v215 )
                HvResetDirtyData(*(_QWORD *)(v216 + 24));
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v216 + 24) + 2848LL));
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v208 + 24) + 2848LL));
              *(_WORD *)(v208 + 4) |= 8u;
              CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v216);
              v106 = v364;
              *(_QWORD *)(v208 + 96) = v216;
              CmpUnlockHashEntry(*(_QWORD *)(v106 + 48), 0);
              v219 = *(_QWORD *)v370;
              *(_DWORD *)(v106 + 32) = 1;
LABEL_572:
              if ( *(_DWORD *)(v106 + 32) == 1 )
                goto LABEL_694;
              v256 = 0LL;
              v257 = (*(unsigned __int8 *)(v106 + 24) >> 2) & 1;
              for ( j = v257; v186 >= 0; --v186 )
              {
                if ( v186 < 2 )
                  v258 = *(_QWORD *)&v124[2 * v186 + 2];
                else
                  v258 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v186 - 2));
                v264 = *(_WORD *)(v258 + 58);
                if ( v264 && *(_BYTE *)(v258 + 57) == 1 )
                  break;
                if ( *(_DWORD *)(v258 + 32) != -1 )
                {
                  v256 = v258;
                  if ( v264 )
                  {
                    if ( *(_BYTE *)(v258 + 57) )
                      break;
                  }
                }
              }
              v265 = *(_QWORD *)(v256 + 80);
              if ( v219 )
              {
                v395 = 0LL;
                PrevElement = CmListGetPrevElement(v256 + 200, &v395);
                if ( PrevElement )
                {
                  while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), v219) || *(_DWORD *)(PrevElement + 68) != 9 )
                  {
                    PrevElement = CmListGetPrevElement(v256 + 200, &v395);
                    if ( !PrevElement )
                      goto LABEL_615;
                  }
                  v265 = *(_QWORD *)(PrevElement + 88);
                }
              }
LABEL_615:
              v267 = AccessState;
              if ( (_BYTE)v257 && (int)CmpSetAccessStateForBackupRestore(AccessState, v356, v265 + 32, 1) < 0 )
                goto LABEL_691;
              v268 = Object;
              OriginalDesiredAccess = v267->OriginalDesiredAccess;
              memset(v408, 0, sizeof(v408));
              v270 = *((_QWORD *)Object + 1);
              Privileges = 0LL;
              WORD1(v408[0]) = -1;
              v271 = *(_QWORD *)(v270 + 24);
              if ( (*(_DWORD *)(v271 + 144) & 0x100000) != 0 )
              {
                if ( (OriginalDesiredAccess & 0xD0026) != 0 )
                {
                  if ( (OriginalDesiredAccess & 0xD0002) != 0 )
                  {
                    v272 = -1073741790;
                  }
                  else if ( (*(_DWORD *)(v271 + 5360) & 0x2000) != 0 )
                  {
                    if ( *(_BYTE *)(v270 + 57) )
                    {
                      v272 = -1073741790;
                    }
                    else
                    {
                      v272 = CmpStartKcbStackForTopLayerKcb((__int64)v408, v270);
                      if ( v272 >= 0 )
                      {
                        v273 = *(_WORD *)(v270 + 58) - 1;
                        if ( v273 >= 0 )
                        {
                          while ( 1 )
                          {
                            KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v408, v273);
                            WORD1(v408[0]) = v273;
                            v275 = KcbAtLayerHeight;
                            if ( CmpIsKeyStackDeleted((__int64)v408, 0LL) )
                            {
LABEL_635:
                              v272 = -1073741790;
                              goto LABEL_637;
                            }
                            if ( (*(_DWORD *)(*(_QWORD *)(v275 + 24) + 144LL) & 0x100000) == 0 )
                              break;
                            if ( (*(_DWORD *)(*(_QWORD *)(v270 + 24) + 5360LL) & 0x2000) == 0 || *(_BYTE *)(v270 + 57) )
                              goto LABEL_635;
                            if ( --v273 < 0 )
                              goto LABEL_637;
                          }
                          v272 = 0;
LABEL_637:
                          LOBYTE(v257) = j;
                        }
                        v267 = AccessState;
                      }
                    }
                  }
                  else
                  {
                    v272 = -1073741790;
                  }
                }
                else
                {
                  v272 = 0;
                }
              }
              else
              {
                v272 = 0;
              }
              v276 = Privileges;
              if ( Privileges )
                MiDeleteSubsection(Privileges);
              if ( v272 < 0 )
              {
LABEL_691:
                v106 = v364;
LABEL_692:
                v17 = -1073741790;
                Child = -1073741790;
                CmpRecordParseFailure(v106, 15584, -1073741790);
LABEL_699:
                v360 = 0;
                if ( v368 )
                  CmpUnlockKcbStack((__int64)v412);
                goto LABEL_291;
              }
              if ( (_BYTE)v257 && !v267->RemainingDesiredAccess
                || !v267->OriginalDesiredAccess && (*(_DWORD *)v364 & 0x1000) != 0 )
              {
LABEL_693:
                v106 = v364;
                goto LABEL_694;
              }
              v277 = 0LL;
              v388 = 4294901760LL;
              v278 = Object;
              v389[0] = 0LL;
              v389[1] = 0LL;
              v390 = 0LL;
              if ( (*((_DWORD *)Object + 12) & 9) != 0 )
              {
                v279 = v356;
                LOBYTE(v280) = 0;
                AccessStatus = -1073741444;
                goto LABEL_680;
              }
              v281 = v268[1];
              v280 = 0LL;
              v282 = *(_WORD *)(v281 + 58);
              if ( v282 >= 2 && v282 != 1 )
              {
                v283 = 8LL * (unsigned int)(v282 - 1);
                v284 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag((__int64)v276, v283, 0x35364D43u);
                v280 = v284;
                if ( !v284 )
                {
                  v279 = v356;
                  AccessStatus = -1073741670;
LABEL_679:
                  LOBYTE(v257) = j;
LABEL_680:
                  if ( v277 )
                    MiDeleteSubsection(v277);
                  if ( !(_BYTE)v280 )
                  {
                    if ( !(_BYTE)v257 )
                    {
                      v301 = AccessState;
                      v106 = v364;
                      if ( (int)CmpVEPerformOpenAccessCheck(Object, v370[0], AccessState, v279, v364, AccessStatus) < 0 )
                      {
                        if ( KeGetCurrentThread()->PreviousMode == 1
                          && (SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process),
                              SessionId != RtlGetCurrentServiceSessionId())
                          && (v301->RemainingDesiredAccess & 0xD0026) != 0
                          && CmpCheckWrpKeyAccess((__int64)v124) )
                        {
                          Process = BugCheckParameter4;
                          CmpPublishEventForPcaResolver(BugCheckParameter4);
                        }
                        else
                        {
                          Process = BugCheckParameter4;
                        }
                        goto LABEL_692;
                      }
LABEL_694:
                      *v414 = Object;
                      Object = 0LL;
                      if ( !*(_DWORD *)(v106 + 32) )
                        *(_DWORD *)(v106 + 32) = 2;
                      if ( BYTE2(v358) )
                      {
                        v17 = 1073741846;
                        Child = 1073741846;
                      }
                      else
                      {
                        v17 = 0;
                        Child = 0;
                      }
                      goto LABEL_699;
                    }
                    goto LABEL_691;
                  }
                  goto LABEL_693;
                }
                memset(v284, 0, v283);
              }
              v285 = *(_WORD *)(v281 + 58);
              LOWORD(v388) = v282;
              v390 = v280;
              WORD1(v388) = v285;
              if ( v285 )
              {
                v286 = *(_QWORD *)(v281 + 184);
                if ( v286 )
                {
                  do
                  {
                    CmpSetKcbAtLayerHeight(&v388, (unsigned __int16)v285, *(_QWORD *)(v286 + 16));
                    v286 = *(_QWORD *)(v287 + 24);
                    v285 = v288 - 1;
                  }
                  while ( v286 );
                  v280 = v390;
                  v285 = WORD1(v388);
                }
              }
              else
              {
                v389[0] = v281;
              }
              AccessStatus = 0;
              for ( k = 0LL; v285 >= 0; --v285 )
              {
                if ( v285 < 2 )
                  v290 = v389[v285];
                else
                  v290 = *((_QWORD *)v280 + v285 - 2);
                v291 = *(_WORD *)(v290 + 58);
                if ( v291 && *(_BYTE *)(v290 + 57) == 1 )
                  break;
                if ( *(_DWORD *)(v290 + 32) != -1 )
                {
                  k = v290;
                  if ( v291 )
                  {
                    if ( *(_BYTE *)(v290 + 57) )
                      break;
                  }
                }
              }
              v292 = *(_QWORD *)(k + 80);
              v293 = KeGetCurrentThread();
              v294 = AccessState;
              --v293->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)v294->SubjectSecurityContext.PrimaryToken + 6), 1u);
              if ( v294->SubjectSecurityContext.ClientToken )
              {
                v295 = KeGetCurrentThread();
                --v295->KernelApcDisable;
                ExAcquireResourceSharedLite(*((PERESOURCE *)v294->SubjectSecurityContext.ClientToken + 6), 1u);
              }
              RemainingDesiredAccess = v294->RemainingDesiredAccess;
              HIDWORD(TokenInformation) = 0;
              v396 = 0LL;
              v297 = SeAccessCheck(
                       (PSECURITY_DESCRIPTOR)(v292 + 32),
                       &v294->SubjectSecurityContext,
                       1u,
                       RemainingDesiredAccess,
                       v294->PreviouslyGrantedAccess,
                       &v396,
                       (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                       v356,
                       (PACCESS_MASK)&TokenInformation + 1,
                       &AccessStatus);
              v298 = v396;
              LOBYTE(v280) = v297;
              if ( v396 )
              {
                SeAppendPrivileges(v294, v396);
                MiDeleteSubsection(v298);
              }
              if ( (_BYTE)v280 )
              {
                v299 = HIDWORD(TokenInformation);
                v294->PreviouslyGrantedAccess |= HIDWORD(TokenInformation);
                v294->RemainingDesiredAccess &= ~(v299 | 0x2000000);
              }
              v278[24] |= 2u;
              v279 = v356;
              if ( v356 )
                SeOpenObjectAuditAlarmWithTransaction(
                  (PUNICODE_STRING)CmKeyObjectType + 1,
                  Object,
                  0LL,
                  (PSECURITY_DESCRIPTOR)(v292 + 32),
                  v294,
                  0,
                  (BOOLEAN)v280,
                  v356,
                  0LL,
                  &v294->GenerateOnClose);
              v278[24] &= ~2u;
              ExReleaseResourceLite(*((PERESOURCE *)v294->SubjectSecurityContext.PrimaryToken + 6));
              KeLeaveCriticalRegion();
              ClientToken = (PERESOURCE *)v294->SubjectSecurityContext.ClientToken;
              if ( ClientToken )
              {
                ExReleaseResourceLite(ClientToken[6]);
                KeLeaveCriticalRegion();
              }
              v277 = v390;
              Process = BugCheckParameter4;
              goto LABEL_679;
            }
            if ( (*(_DWORD *)v364 & 0x20) != 0 )
            {
              CmpUnlockKcbStack((__int64)v124);
              CmpUnlockKcbStack(*(__int64 *)v366);
              CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v366);
              CmpLockKcbStackTopExclusiveRestShared((__int64)v124);
              if ( CmpIsKeyStackDeleted(*(__int64 *)v366, v193) )
              {
                Child = -1073741772;
                v17 = -1073741772;
                CmpRecordParseFailure(v106, 8960, -1073741772);
              }
              else if ( (*(_BYTE *)(*v162 + 178) & 2) != 0 )
              {
                Child = -1073741772;
                v17 = -1073741772;
                CmpRecordParseFailure(v106, 9216, -1073741772);
              }
              else
              {
                v220 = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v419, v191);
                v221 = v356;
                if ( CmpCheckCreateAccessOnKcbStack(
                       *(unsigned int *)(v106 + 24),
                       *(__int64 *)v366,
                       (__int64)AccessState,
                       v356,
                       16 * (*(_DWORD *)(v106 + 24) & 2),
                       (*(_DWORD *)(v106 + 24) & 4) != 0,
                       v193,
                       &Child) )
                {
                  CmpCleanUpKcbValueCache(v11);
                  *(_WORD *)(v11 + 178) |= 0x40u;
                  *(_DWORD *)(v11 + 88) = *(_DWORD *)(v106 + 56);
                  Child = CmpCreateKeyBody(v11, v221, v106, v193, 1, (__int64)&Object, (__int64)&v358 + 2);
                  v17 = Child;
                  if ( Child >= 0 )
                  {
                    v219 = *(_QWORD *)v370;
                    if ( !CmpIsKeyStackDeleted((__int64)v124, *(__int64 *)v370) )
                      goto LABEL_572;
                    Child = CmpCreateChild(
                              *(__int64 *)v366,
                              (__int64)v124,
                              (__int64)AccessState,
                              v220,
                              v106,
                              64,
                              0,
                              v219);
                    v17 = Child;
                    if ( Child >= 0 )
                    {
                      *(_DWORD *)(v106 + 32) = 1;
                      goto LABEL_572;
                    }
                  }
                }
                else
                {
                  v17 = Child;
                  CmpRecordParseFailure(v106, 9472, Child);
                }
              }
              goto LABEL_292;
            }
            v222 = v186;
            v394 = 0LL;
            if ( v186 < 0 )
              goto LABEL_456;
            while ( 1 )
            {
              if ( v222 < 2 )
                v223 = *(_QWORD *)&v124[2 * v222 + 2];
              else
                v223 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v222 - 2));
              if ( *(_WORD *)(v223 + 58) && *(_BYTE *)(v223 + 57) == 1 )
                goto LABEL_456;
              if ( *(_DWORD *)(v223 + 32) != -1 )
                break;
              if ( --v222 < 0 )
                goto LABEL_456;
            }
            if ( v193 )
            {
              v224 = CmListGetNextElement((_QWORD *)(*((_QWORD *)v124 + 1) + 200LL), &v394, 32);
              if ( v224 )
              {
                while ( 1 )
                {
                  v226 = *((_DWORD *)v224 + 17);
                  if ( v226 == 2 || v226 == 11 )
                    break;
                  v224 = CmListGetNextElement(v225, &v394, 32);
                  if ( !v224 )
                    goto LABEL_465;
                }
                if ( CmEqualTrans(*((_QWORD *)v224 + 7), v193) )
                {
LABEL_456:
                  if ( BYTE1(v365) )
                  {
                    Child = -1073741811;
                    v17 = -1073741811;
                    CmpRecordParseFailure(v106, 9728, -1073741811);
                    goto LABEL_292;
                  }
                  if ( CmpIsKeyStackDeleted(*(__int64 *)v366, v193) || !CmRmIsKCBVisible(*v162, v193) )
                  {
                    Child = -1073741772;
                    v17 = -1073741772;
                    CmpRecordParseFailure(v106, 9984, -1073741772);
                  }
                  else
                  {
                    if ( (*(_BYTE *)(*v162 + 178) & 2) != 0 )
                    {
                      Child = -1073741772;
                      v17 = -1073741772;
                      CmpRecordParseFailure(v106, 10240, -1073741772);
                      goto LABEL_292;
                    }
                    if ( (*(_DWORD *)v106 & 1) != 0 )
                    {
                      if ( *(_QWORD *)(v11 + 24) != CmpMasterHive || !CmpNoMasterCreates )
                      {
                        v245 = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v419, v191);
                        v246 = CmpDoWritethroughReparse(
                                 v11,
                                 (__int64)v124,
                                 *(__int64 *)v366,
                                 1,
                                 v245,
                                 v106,
                                 (UNICODE_STRING *)v375);
                        Child = v246;
                        v17 = v246;
                        if ( v246 != -1073741199 )
                        {
                          CmpRecordParseFailure(v106, 11392, v246);
                          goto LABEL_292;
                        }
                        if ( *(_DWORD *)(*v162 + 32) == -1 )
                        {
                          v247 = *(_QWORD *)v370;
                          if ( !CmpCheckCreateAccessOnKcbStack(
                                  16 * (*(_DWORD *)(v106 + 24) & 2u),
                                  *(__int64 *)v366,
                                  (__int64)AccessState,
                                  v356,
                                  16 * (*(_DWORD *)(v106 + 24) & 2),
                                  (*(_DWORD *)(v106 + 24) & 4) != 0,
                                  *(__int64 *)v370,
                                  &Child) )
                          {
                            if ( KeGetCurrentThread()->PreviousMode == 1 )
                            {
                              v248 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                              if ( v248 != RtlGetCurrentServiceSessionId() )
                              {
                                if ( CmpCheckWrpKeyAccess(*(__int64 *)v366) )
                                  CmpPublishEventForPcaResolver(*v162);
                              }
                            }
                            v17 = Child;
                            CmpRecordParseFailure(v106, 11520, Child);
                            v11 = BugCheckParameter4;
                            goto LABEL_292;
                          }
                          CmpUnlockKcbStack((__int64)v124);
                          CmpUnlockKcbStack(*(__int64 *)v366);
                          if ( (_BYTE)v358 )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v371 + 8));
                            LOBYTE(v358) = 0;
                          }
                          LOBYTE(v249) = 1;
                          v250 = CmpPromoteKey(*(_QWORD *)v366, 0LL, v249);
                          if ( v250 < 0 )
                          {
                            if ( v250 == -1073741444 )
                              v250 = -1073741772;
                            Child = v250;
                            v17 = v250;
                            CmpRecordParseFailure(v106, 11776, v250);
                            goto LABEL_713;
                          }
                          CmpLockKcbStackTopExclusiveRestShared((__int64)v124);
                        }
                        else
                        {
                          CmpUnlockKcbStack((__int64)v124);
                          CmpUnlockKcbStack(*(__int64 *)v366);
                          CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v366);
                          CmpLockKcbStackTopExclusiveRestShared((__int64)v124);
                          v247 = *(_QWORD *)v370;
                        }
                        if ( !CmRmIsKCBVisible(v11, v247) )
                        {
                          Child = -1073741772;
                          v17 = -1073741772;
                          CmpRecordParseFailure(v106, 12032, -1073741772);
                          v355 = 1;
                          goto LABEL_292;
                        }
                        if ( CmpIsKeyStackDeleted((__int64)v124, v247) )
                        {
                          if ( CmpIsKeyStackDeleted(*(__int64 *)v366, v247) || !CmRmIsKCBVisible(*v162, v247) )
                          {
                            Child = -1073741772;
                            v17 = -1073741772;
                            CmpRecordParseFailure(v106, 12288, -1073741772);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          if ( (*(_BYTE *)(*v162 + 178) & 2) != 0 )
                          {
                            Child = -1073741772;
                            v17 = -1073741772;
                            CmpRecordParseFailure(v106, 12544, -1073741772);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          Logic = CmpVEExecuteCreateLogic(
                                    *v162,
                                    v375,
                                    (__int64)v245,
                                    v356,
                                    16 * (*(_BYTE *)(v106 + 24) & 2u),
                                    v247,
                                    v106,
                                    (UNICODE_STRING *)v375);
                          Child = Logic;
                          v17 = Logic;
                          if ( Logic == -1073741739 )
                          {
                            *(_DWORD *)v106 |= 0x400u;
                            Child = -1073741267;
                            v17 = -1073741267;
                            CmpRecordParseFailure(v106, 12672, -1073741267);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          if ( Logic != -1073741199 )
                          {
                            CmpRecordParseFailure(v106, 12736, Logic);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v252 = *(_QWORD *)v366;
                          if ( !CmpCheckCreateAccessOnKcbStack(
                                  16 * (*(_DWORD *)(v106 + 24) & 2u),
                                  *(__int64 *)v366,
                                  (__int64)AccessState,
                                  v356,
                                  16 * (*(_DWORD *)(v106 + 24) & 2),
                                  (*(_DWORD *)(v106 + 24) & 4) != 0,
                                  *(__int64 *)v370,
                                  &Child) )
                          {
                            if ( KeGetCurrentThread()->PreviousMode == 1 )
                            {
                              v253 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                              if ( v253 != RtlGetCurrentServiceSessionId() )
                              {
                                if ( CmpCheckWrpKeyAccess(v252) )
                                  CmpPublishEventForPcaResolver(*v162);
                              }
                            }
                            v17 = Child;
                            CmpRecordParseFailure(v106, 12800, Child);
                            v11 = BugCheckParameter4;
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v219 = *(_QWORD *)v370;
                          v254 = CmpCreateKeyBody(
                                   v11,
                                   v356,
                                   v106,
                                   *(_DWORD *)v370,
                                   1,
                                   (__int64)&Object,
                                   (__int64)&v358 + 2);
                          Child = v254;
                          v17 = v254;
                          if ( v254 < 0 )
                          {
                            CmpRecordParseFailure(v106, 12928, v254);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v255 = CmpCreateChild(
                                   *(__int64 *)v366,
                                   (__int64)v124,
                                   (__int64)AccessState,
                                   v245,
                                   v106,
                                   8 * (*(_BYTE *)(v106 + 24) & 2u),
                                   0,
                                   v219);
                          Child = v255;
                          v17 = v255;
                          if ( v255 < 0 )
                          {
                            CmpRecordParseFailure(v106, 12992, v255);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          *(_DWORD *)(v106 + 32) = 1;
                        }
                        else
                        {
                          if ( CmpIsKeyStackSymlink((__int64)v124) && (*(_DWORD *)v106 & 0x200) == 0 )
                          {
                            if ( (*(_DWORD *)(v106 + 24) & 2) == 0 )
                            {
                              CmpUnlockKcbStack(*(__int64 *)v366);
                              if ( (_BYTE)v358 )
                              {
                                CmpUnlockKcb(*(_QWORD *)(v371 + 8));
                                LOBYTE(v358) = 0;
                              }
                              if ( v357 )
                              {
                                CmpUnlockHashEntryByKcb(v11);
                                v357 = 0;
                              }
                              v259 = CmpGetSymbolicLinkTarget(
                                       (__int64)v124,
                                       (__int64)v419,
                                       0,
                                       0,
                                       v247,
                                       v375,
                                       (ULONG_PTR *)(v106 + 88));
                              Child = v259;
                              v17 = v259;
                              if ( v259 >= 0 )
                              {
                                *(_DWORD *)v106 &= ~8u;
                                if ( !*(_QWORD *)(v106 + 64) )
                                {
                                  v260 = *(_QWORD *)(v11 + 24);
                                  if ( (*(_DWORD *)(v260 + 5360) & 1) != 0 )
                                    *(_QWORD *)(v106 + 64) = v260;
                                }
                                v17 = 260;
                                Child = 260;
                                CmpRecordParseFailure(v106, 13440, 260);
                              }
                              else
                              {
                                CmpRecordParseFailure(v106, 13312, v259);
                              }
                              goto LABEL_730;
                            }
                            v17 = -1073741771;
                            Child = -1073741771;
                            CmpRecordParseFailure(v106, 13056, -1073741771);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          if ( (*(_BYTE *)(v11 + 178) & 2) != 0 )
                          {
                            Child = -1073741772;
                            v17 = -1073741772;
                            CmpRecordParseFailure(v106, 13568, -1073741772);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          if ( (*(_DWORD *)(v106 + 24) & 2) != 0 )
                          {
                            v17 = -1073741771;
                            Child = -1073741771;
                            CmpRecordParseFailure(v106, 13824, -1073741771);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v261 = CmpDoWritethroughReparse(
                                   v11,
                                   (__int64)v124,
                                   *(__int64 *)v366,
                                   0,
                                   0LL,
                                   v106,
                                   (UNICODE_STRING *)v375);
                          Child = v261;
                          v17 = v261;
                          if ( v261 != -1073741199 )
                          {
                            CmpRecordParseFailure(v106, 13888, v261);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v262 = CmpVEExecuteOpenLogic((PVOID)v11);
                          Child = v262;
                          v17 = v262;
                          if ( v262 != -1073741199 )
                          {
                            CmpRecordParseFailure(v106, 13952, v262);
                            v355 = 1;
                            goto LABEL_292;
                          }
                          v219 = *(_QWORD *)v370;
                          v263 = CmpCreateKeyBody(
                                   v11,
                                   v356,
                                   v106,
                                   *(_DWORD *)v370,
                                   1,
                                   (__int64)&Object,
                                   (__int64)&v358 + 2);
                          Child = v263;
                          v17 = v263;
                          if ( v263 < 0 )
                          {
                            CmpRecordParseFailure(v106, 14016, v263);
                            v355 = 1;
                            goto LABEL_292;
                          }
                        }
                        v355 = 1;
                        goto LABEL_572;
                      }
                      if ( CmpLoadingSystemHivesActive
                        && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                        && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                        && (v242 = CmpGetComponentNameAtIndex((__int64)v419, v191),
                            (unsigned __int8)CmpWaitForHiveMount(v242, v243, v244, v106 + 136)) )
                      {
                        *(_DWORD *)v106 |= 0x100u;
                        v17 = 259;
                        Child = 259;
                        CmpRecordParseFailure(v106, 11008, 259);
                      }
                      else
                      {
                        Child = -1073741811;
                        v17 = -1073741811;
                        CmpRecordParseFailure(v106, 11264, -1073741811);
                      }
                    }
                    else if ( CmpLoadingSystemHivesActive
                           && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                           && *(_QWORD *)(BugCheckParameter4 + 24) == CmpMasterHive
                           && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                           && (v239 = CmpGetComponentNameAtIndex((__int64)v419, v191),
                               (unsigned __int8)CmpWaitForHiveMount(v239, v240, v241, v106 + 136)) )
                    {
                      *(_DWORD *)v106 |= 0x100u;
                      v17 = 259;
                      Child = 259;
                      CmpRecordParseFailure(v106, 10496, 259);
                    }
                    else
                    {
                      Child = -1073741772;
                      v17 = -1073741772;
                      CmpRecordParseFailure(v106, 10752, -1073741772);
                    }
                  }
LABEL_292:
                  v141 = *((_WORD *)v124 + 1);
                  v142 = 0;
                  if ( v141 >= 0 )
                  {
                    v143 = (unsigned __int64 *)(v124 + 2);
                    do
                    {
                      if ( v142 < 2 )
                        v144 = *v143;
                      else
                        v144 = *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v142 - 2));
                      v303 = (*(_DWORD *)(v144 + 4) & 0x80000) != 0;
                      if ( *(struct _KTHREAD **)(v144 + 48) == KeGetCurrentThread() )
                        *(_QWORD *)(v144 + 48) = 0LL;
                      else
                        _InterlockedDecrement((volatile signed __int32 *)(v144 + 48));
                      ExReleasePushLockEx(v144 + 40, 0LL);
                      if ( (*(_DWORD *)(v144 + 4) & 0x100000) != 0 )
                        CmpLockTableRemove(v144, *(_DWORD *)(v144 + 60));
                      if ( v303 && (*(_DWORD *)(v144 + 4) & 0x80000) != 0 )
                        CmpFreeKeyControlBlock(v144);
                      ++v142;
                      ++v143;
                    }
                    while ( v142 <= v141 );
                    v11 = BugCheckParameter4;
                    v17 = Child;
                  }
LABEL_713:
                  if ( v355 )
                  {
                    v304 = *(_QWORD *)v366;
                    v305 = 0;
                    v306 = *(_WORD *)(*(_QWORD *)v366 + 2LL);
                    if ( v306 >= 0 )
                    {
                      v307 = (unsigned __int64 *)(*(_QWORD *)v366 + 8LL);
                      do
                      {
                        if ( v305 < 2 )
                          v308 = *v307;
                        else
                          v308 = *(_QWORD *)(*(_QWORD *)(v304 + 24) + 8LL * (v305 - 2));
                        v309 = (*(_DWORD *)(v308 + 4) & 0x80000) != 0;
                        if ( *(struct _KTHREAD **)(v308 + 48) == KeGetCurrentThread() )
                          *(_QWORD *)(v308 + 48) = 0LL;
                        else
                          _InterlockedDecrement((volatile signed __int32 *)(v308 + 48));
                        ExReleasePushLockEx(v308 + 40, 0LL);
                        if ( (*(_DWORD *)(v308 + 4) & 0x100000) != 0 )
                          CmpLockTableRemove(v308, *(_DWORD *)(v308 + 60));
                        if ( v309 && (*(_DWORD *)(v308 + 4) & 0x80000) != 0 )
                          CmpFreeKeyControlBlock(v308);
                        v304 = *(_QWORD *)v366;
                        ++v305;
                        ++v307;
                      }
                      while ( v305 <= v306 );
                      v11 = BugCheckParameter4;
                      v17 = Child;
                    }
                  }
                  v106 = v364;
LABEL_730:
                  if ( (_BYTE)v358 )
                  {
                    v310 = *(_QWORD *)(v371 + 8);
                    v311 = (*(_DWORD *)(v310 + 4) & 0x80000) != 0;
                    if ( *(struct _KTHREAD **)(v310 + 48) == KeGetCurrentThread() )
                      *(_QWORD *)(v310 + 48) = 0LL;
                    else
                      _InterlockedDecrement((volatile signed __int32 *)(v310 + 48));
                    ExReleasePushLockEx(v310 + 40, 0LL);
                    if ( (*(_DWORD *)(v310 + 4) & 0x100000) != 0 )
                      CmpLockTableRemove(v310, *(_DWORD *)(v310 + 60));
                    if ( v311 && (*(_DWORD *)(v310 + 4) & 0x80000) != 0 )
                      CmpFreeKeyControlBlock(v310);
                    v17 = Child;
                    v11 = BugCheckParameter4;
                  }
                  if ( v360 )
                    CmpUnlockHashEntry(*(_QWORD *)(v106 + 48), 0);
                  goto LABEL_743;
                }
              }
            }
LABEL_465:
            v227 = v186;
            while ( 1 )
            {
              v228 = v227 < 2 ? *(_QWORD *)&v124[2 * v227 + 2] : *(_QWORD *)(*((_QWORD *)v124 + 3) + 8LL * (v227 - 2));
              if ( *(_DWORD *)(v228 + 32) != -1 )
                break;
              if ( --v227 < 0 )
                goto LABEL_471;
            }
            if ( (*(_BYTE *)(v228 + 178) & 0x10) != 0 && (*(_DWORD *)v106 & 0x200) == 0 )
            {
              if ( (*(_DWORD *)(v106 + 24) & 2) != 0 )
              {
                v17 = -1073741771;
                Child = -1073741771;
                CmpRecordParseFailure(v106, 14080, -1073741771);
                goto LABEL_292;
              }
              if ( v355 )
              {
                CmpUnlockKcbStack(*(__int64 *)v366);
                v355 = 0;
              }
              if ( (_BYTE)v358 )
              {
                CmpUnlockKcb(*(_QWORD *)(v371 + 8));
                LOBYTE(v358) = 0;
              }
              if ( v357 )
              {
                CmpUnlockHashEntryByKcb(v11);
                v357 = 0;
              }
              v229 = CmpGetSymbolicLinkTarget((__int64)v124, (__int64)v419, 0, 0, v193, v375, (ULONG_PTR *)(v106 + 88));
              Child = v229;
              v17 = v229;
              if ( v229 >= 0 )
              {
                *(_DWORD *)v106 &= ~8u;
                if ( !*(_QWORD *)(v106 + 64) )
                {
                  v230 = *(_QWORD *)(v11 + 24);
                  if ( (*(_DWORD *)(v230 + 5360) & 1) != 0 )
                    *(_QWORD *)(v106 + 64) = v230;
                }
                v17 = 260;
                Child = 260;
                CmpRecordParseFailure(v106, 14592, 260);
              }
              else
              {
                CmpRecordParseFailure(v106, 14336, v229);
              }
              goto LABEL_713;
            }
LABEL_471:
            if ( BYTE1(v365) )
            {
              Child = -1073741811;
              v17 = -1073741811;
              CmpRecordParseFailure(v106, 14848, -1073741811);
              goto LABEL_292;
            }
            if ( (*(_BYTE *)(v11 + 178) & 2) != 0 )
            {
              Child = -1073741772;
              v17 = -1073741772;
              CmpRecordParseFailure(v106, 15104, -1073741772);
              goto LABEL_292;
            }
            if ( (*(_DWORD *)(v106 + 24) & 2) != 0 )
            {
              v17 = -1073741771;
              Child = -1073741771;
              CmpRecordParseFailure(v106, 15360, -1073741771);
              goto LABEL_292;
            }
            RtlInitUnicodeString(&v387, 0LL);
            v32 = *(_DWORD *)(v11 + 32) == -1;
            v231 = 0LL;
            SourceString = 0LL;
            v415 = 0LL;
            v416 = 0LL;
            v417 = 0LL;
            v418 = 0LL;
            if ( v32 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 5360LL) & 0x2000) != 0 )
              {
                v232 = CmpGetKcbAtLayerHeight((__int64)v124, *(_WORD *)(v11 + 58) - 1);
                v233 = CmpKeyFullNameLength(v232);
                v235 = CmpConstructNameWithStatus(v234, &SourceString);
                v17 = v235;
                if ( v235 >= 0 )
                {
                  v387.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v233, 0x36364D43u);
                  if ( !v387.Buffer )
                  {
                    v17 = -1073741670;
                    CmpRecordParseFailure(v106, 66560, -1073741670);
                    v231 = (struct _PRIVILEGE_SET *)SourceString;
                    goto LABEL_504;
                  }
                  v387.MaximumLength = v233;
                  v231 = (struct _PRIVILEGE_SET *)SourceString;
                  v387.Length = 0;
                  RtlUnicodeStringCopy(&v387, SourceString);
                  v236 = (UNICODE_STRING *)v375;
                  ExFreePoolWithTag(*(PVOID *)(v375 + 8), 0);
                  *v236 = v387;
                  RtlInitUnicodeString(&v387, 0LL);
                  *(_DWORD *)(v106 + 24) |= 0x10u;
                  v17 = 872;
                  CmpRecordParseFailure(v106, 66816, 872);
                }
                else
                {
                  CmpRecordParseFailure(v106, 66304, v235);
                  v231 = (struct _PRIVILEGE_SET *)SourceString;
                }
              }
              else
              {
                v17 = -1073741199;
              }
            }
            else
            {
              v17 = -1073741199;
            }
            if ( v387.Buffer )
              ExFreePoolWithTag(v387.Buffer, 0);
LABEL_504:
            if ( v231 )
              MiDeleteSubsection(v231);
            Child = v17;
            if ( v17 != -1073741199 )
            {
              CmpRecordParseFailure(v106, 15424, v17);
              goto LABEL_292;
            }
            v237 = CmpVEExecuteOpenLogic((PVOID)v11);
            Child = v237;
            v17 = v237;
            if ( v237 != -1073741199 )
            {
              CmpRecordParseFailure(v106, 15488, v237);
              goto LABEL_292;
            }
            v219 = *(_QWORD *)v370;
            v238 = CmpCreateKeyBody(v11, v356, v106, *(_DWORD *)v370, 0, (__int64)&Object, (__int64)&v358 + 2);
            Child = v238;
            v17 = v238;
            if ( v238 < 0 )
            {
              CmpRecordParseFailure(v106, 15552, v238);
              goto LABEL_292;
            }
            goto LABEL_572;
          }
          *v92 = v105 | 2;
        }
        if ( v93 )
          goto LABEL_178;
        goto LABEL_200;
      }
    }
    CmpRecordParseFailure(v364, 1280, v62);
    v11 = Process;
    goto LABEL_745;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
  {
    CmpLockRegistryExclusive();
  }
  else if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v20 = *(_QWORD *)(v13 + 288);
  v21 = 0;
  BYTE1(v358) = 1;
  if ( (v20 & 1) != 0 )
  {
    v21 = 1;
    v20 &= ~1uLL;
  }
  if ( !v20 || v21 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v20, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v372);
    v372 = 0LL;
    CmpUnlockRegistry();
    v12 = v378;
    BYTE1(v358) = 0;
LABEL_67:
    Process = BugCheckParameter4;
    goto LABEL_68;
  }
  Buffer = String2->Buffer;
  v23 = String2->Length - *(_WORD *)v20;
  v24 = (unsigned __int64)*(unsigned __int16 *)v20 >> 1;
  v25 = String2->MaximumLength - *(_WORD *)v20;
  v26 = v25;
  v378.m128i_i16[1] = v25;
  v27 = (__int64)&Buffer[v24];
  v28 = v23;
  v378.m128i_i16[0] = v23;
  v29 = (_WORD *)v27;
  v378.m128i_i64[1] = v27;
  if ( v23 )
  {
    do
    {
      if ( *v29 != 92 )
        break;
      ++v29;
      v26 -= 2;
      v28 -= 2;
    }
    while ( v28 );
    v378.m128i_i16[0] = v28;
    v378.m128i_i64[1] = (__int64)v29;
    v378.m128i_i16[1] = v26;
  }
  v30 = ((*(_DWORD *)(v372 + 4) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v28 )
  {
    v31 = *(_QWORD *)(v372 + 72);
    v32 = (*(_DWORD *)v31 & 1) == 0;
    v33 = *(unsigned __int16 *)(v31 + 24);
    v34 = v33;
    if ( v32 )
      v34 = (unsigned __int64)v33 >> 1;
    else
      LOWORD(v33) = 2 * v33;
    v378.m128i_i16[0] = v33 + v23;
    v10 = 1;
    v378.m128i_i16[1] = v33 + v25;
    j = 1;
    --v30;
    v378.m128i_i64[1] = v27 - 2 * v34;
  }
  v35 = CmpComputeComponentHashes(&v378, &v361, (__int64)v419);
  Child = v35;
  v17 = v35;
  if ( v35 < 0 )
  {
    CmpRecordParseFailure(a7, 512, v35);
    v11 = BugCheckParameter4;
    goto LABEL_749;
  }
  v36 = v361;
  v377 = v361;
  if ( (unsigned int)(v361 + v30) > 0x20 )
  {
    Child = -1073741811;
    v17 = -1073741811;
    CmpRecordParseFailure(a7, 768, -1073741811);
    v11 = BugCheckParameter4;
    goto LABEL_749;
  }
  v37 = 0LL;
  v38 = 0;
  if ( !v361 )
  {
LABEL_42:
    v40 = v372;
    if ( v10 == v361 )
    {
      CmpLockHashEntrySharedByKcb(v372);
      BYTE3(v358) = 1;
    }
    if ( (*(_DWORD *)(v40 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v40 + 60) = CmpLockTableAdd(v40, 0);
    ExAcquirePushLockSharedEx(v40 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v40 + 48));
    v42 = *(_WORD *)(v40 + 58);
    v43 = 0LL;
    v398 = 4294901760LL;
    v399 = 0LL;
    v400 = 0LL;
    v401 = 0LL;
    if ( v42 >= 2 && v42 != 1 )
    {
      v44 = 8LL * (unsigned int)(v42 - 1);
      v45 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v41, v44, 0x35364D43u);
      v37 = v45;
      if ( !v45 )
      {
        v40 = v372;
LABEL_57:
        IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v398, 0LL);
        if ( v43 )
          MiDeleteSubsection(v43);
        CmpUnlockKcb(v40);
        if ( !IsKeyStackDeleted )
        {
          v51 = v40;
          Process = BugCheckParameter4;
          v379 = v40;
          goto LABEL_64;
        }
        if ( BYTE3(v358) )
        {
          CmpUnlockHashEntryByKcb(v40);
          BYTE3(v358) = 0;
        }
        CmpDereferenceKeyControlBlock(v40);
        v12 = *a6;
        v372 = 0LL;
        j = 0;
        v378 = v12;
        CmpCleanupPathInfo(v419);
        memset(v419, 0, 0xA8uLL);
        goto LABEL_67;
      }
      memset(v45, 0, v44);
      v40 = v372;
    }
    v46 = *(_WORD *)(v40 + 58);
    v43 = v37;
    LOWORD(v398) = v42;
    v401 = v37;
    WORD1(v398) = v46;
    if ( v46 )
    {
      v47 = *(_QWORD *)(v40 + 184);
      if ( v47 )
      {
        do
        {
          CmpSetKcbAtLayerHeight(&v398, v46, *(_QWORD *)(v47 + 16));
          v47 = *(_QWORD *)(v48 + 24);
          v46 = v49 - 1;
        }
        while ( v47 );
        v43 = v401;
      }
    }
    else
    {
      v399 = v40;
    }
    goto LABEL_57;
  }
  while ( 1 )
  {
    v39 = v38 >= 8 ? (int *)(*(_QWORD *)&v419[40] + 16 * (v38 - 8 + 6LL)) : &v419[4 * v38 + 8];
    if ( *(_WORD *)v39 > 0x200u )
      break;
    if ( ++v38 >= v361 )
      goto LABEL_42;
  }
  Child = -1073741811;
  v17 = -1073741811;
  CmpRecordParseFailure(a7, 1024, -1073741811);
  v11 = BugCheckParameter4;
LABEL_749:
  if ( v405 )
    MiDeleteSubsection(v405);
  if ( v407 )
    MiDeleteSubsection(v407);
  if ( v413 )
    MiDeleteSubsection(v413);
  v312 = v384;
  if ( v384 )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v11);
    CmpDereferenceKeyControlBlock(v312);
  }
  else if ( v11 )
  {
    v313 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 <= 1u )
    {
LABEL_761:
      v315 = BugCheckParameter4;
      v316 = *(_DWORD *)(BugCheckParameter4 + 8);
      v317 = *(_QWORD *)(BugCheckParameter4 + 24);
      v318 = *(_QWORD *)(v317 + 2800)
           + 24LL
           * ((((101027 * (v316 ^ (v316 >> 9))) >> 9) ^ (101027 * (v316 ^ (v316 >> 9)))) & (*(_DWORD *)(v317 + 2808) - 1));
      ExAcquirePushLockExclusiveEx(v318, 0LL);
      *(_QWORD *)(v318 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(v317) )
        KeBugCheckEx(0x51u, 0x17uLL, v317, 8uLL, BugCheckParameter4);
      v319 = BugCheckParameter4;
      if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v319 + 60) = CmpLockTableAdd(BugCheckParameter4, 1);
      ExAcquirePushLockExclusiveEx(v319 + 40, 0LL);
      v320 = BugCheckParameter4;
      v321 = 0LL;
      *(_QWORD *)(v319 + 48) = KeGetCurrentThread();
      v322 = *(_QWORD *)(v320 + 184);
      if ( v322 )
      {
        v323 = *(_QWORD *)(v322 + 24);
        if ( v323 )
        {
          v321 = *(_QWORD *)(v323 + 16);
          CmpUnlockKcb(v320);
          CmpLockKcbExclusive(v321);
          CmpLockKcbExclusive(v320);
        }
      }
      v324 = *(_DWORD *)v320 - 1;
      v326 = *(_DWORD *)v320;
      v325 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v324, *(_DWORD *)v320);
      if ( v326 != v325 )
      {
        do
        {
          v324 = v325 - 1;
          v327 = v325;
          v325 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v325 - 1, v325);
        }
        while ( v325 != v327 );
      }
      if ( !v324 )
      {
        if ( (*(_BYTE *)(BugCheckParameter4 + 178) & 4) != 0 )
        {
          v328 = *(_QWORD *)(v315 + 24);
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4, 0LL);
          v329 = KeGetCurrentThread();
          *(_DWORD *)(v328 + 144) |= 0x80u;
          *(_QWORD *)(v328 + 5424) = v329;
          *(_DWORD *)(v328 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v328 + 5500), 1u) & 0x7F) + 5504) = 31;
          if ( (*(_DWORD *)(v328 + 144) & 0x20) == 0
            && _InterlockedExchangeAdd((volatile signed __int32 *)(v328 + 5496), 0xFFFFFFFF) == 1 )
          {
            CmpDeleteHive(v328);
          }
        }
        else
        {
          v330 = *(_DWORD *)(v319 + 4);
          v32 = (v330 & 0x20) == 0;
          v331 = (v330 & 0x20000) == 0;
          if ( !v32 )
            v331 = 0;
          if ( (!CmpHoldLazyFlush
             || (*(_BYTE *)(BugCheckParameter4 + 178) & 0x10) != 0
             || (*(_DWORD *)(v319 + 4) & 8) != 0)
            && v331 )
          {
            v332 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
            v333 = v332;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
              ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, (__int64)v332);
            if ( v333 )
              BYTE2(v333[1].Left) |= 1u;
            v335 = CmpDelayedLRUListHead;
            v336 = BugCheckParameter4;
            *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
            *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
            v337 = (_QWORD *)(BugCheckParameter4 + 216);
            if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
              __fastfail(3u);
            *v337 = CmpDelayedLRUListHead;
            v337[1] = &CmpDelayedLRUListHead;
            *(_QWORD *)(v335 + 8) = v337;
            CmpDelayedLRUListHead = (__int64)v337;
            *(_BYTE *)(v336 + 56) |= 2u;
            ++qword_1407AD0C8;
            v338 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
            v339 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
            *(&CmpDelayedCloseTableLock + 1) = 0LL;
            v340 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
            if ( v340 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v340);
            __writecr8(v338);
            KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
            if ( v339 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
              ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
          }
          else
          {
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4, 0LL);
            if ( *(struct _KTHREAD **)(v319 + 48) != KeGetCurrentThread() && (*(_DWORD *)(v319 + 4) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(BugCheckParameter4);
          }
        }
      }
      v341 = (*(_DWORD *)(v319 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v319 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v319 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v319 + 48));
      ExReleasePushLockEx(v319 + 40, 0LL);
      v342 = BugCheckParameter4;
      if ( (*(_DWORD *)(v319 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 60));
      if ( v341 && (*(_DWORD *)(v319 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v342);
      if ( v321 )
        CmpUnlockKcb(v321);
      v343 = *(_QWORD *)(v317 + 2800)
           + 24LL
           * ((((101027 * (v316 ^ (v316 >> 9))) >> 9) ^ (101027 * (v316 ^ (v316 >> 9)))) & (*(_DWORD *)(v317 + 2808) - 1));
      *(_QWORD *)(v343 + 8) = 0LL;
      ExReleasePushLockEx(v343, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v317 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v317);
    }
    else
    {
      while ( 1 )
      {
        v314 = v313;
        v313 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v313 - 1, v313);
        if ( v313 == v314 )
          break;
        if ( v313 <= 1 )
          goto LABEL_761;
      }
    }
    v17 = Child;
  }
  if ( v372 )
    CmpDereferenceKeyControlBlock(v372);
  v344 = v364;
  v345 = *(_DWORD *)(v364 + 96);
  if ( v345 && (v345 & 2) != 0 )
  {
    LOBYTE(v18) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(v364 + 112), 0LL, v18);
    *(_DWORD *)(v344 + 96) &= ~2u;
  }
  if ( BYTE1(v358) && !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v346) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v346);
    v17 = Child;
  }
  v347 = *(_SLIST_ENTRY **)&v419[40];
  if ( *(_QWORD *)&v419[40] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[8].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v347);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v347);
    }
    return (unsigned int)Child;
  }
  return (unsigned int)v17;
}
