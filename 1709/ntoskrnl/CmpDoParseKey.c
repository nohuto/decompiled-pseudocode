/*
 * XREFs of CmpDoParseKey @ 0x1404B47B0
 * Callers:
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpTransSilentIgnore @ 0x140085130 (CmpTransSilentIgnore.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     RtlGetCurrentServiceSessionId @ 0x140101FB0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     HvResetDirtyData @ 0x140471CD4 (HvResetDirtyData.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpIsKeyStackSymlink @ 0x14047B64C (CmpIsKeyStackSymlink.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x140481360 (CmpKeyFullNameLength.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140564870 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x140564BA0 (CmpExpandPathInfo.c)
 *     CmRmIsKCBVisible @ 0x140568874 (CmRmIsKCBVisible.c)
 *     CmpTransSearchAddTransFromHive @ 0x140568D24 (CmpTransSearchAddTransFromHive.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140569CE0 (CmpVEPerformOpenAccessCheck.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmListGetPrevElement @ 0x14056A340 (CmListGetPrevElement.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405704E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpCheckWrpKeyAccess @ 0x140576EB0 (CmpCheckWrpKeyAccess.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140580494 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmpGetComponentNameAtIndex @ 0x14058397C (CmpGetComponentNameAtIndex.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140595330 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1405958F4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpGetComponentHashAtIndex @ 0x14059C43C (CmpGetComponentHashAtIndex.c)
 *     CmpWaitForHiveMount @ 0x1405DE638 (CmpWaitForHiveMount.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1405E0370 (CmpSetAccessStateForBackupRestore.c)
 *     CmpPublishEventForPcaResolver @ 0x14068A228 (CmpPublishEventForPcaResolver.c)
 *     CmpCleanupPathInfo @ 0x14068AA30 (CmpCleanupPathInfo.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpSetKcbAtLayerHeight @ 0x140698264 (CmpSetKcbAtLayerHeight.c)
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
  ULONG_PTR v11; // r14
  __m128i v12; // xmm6
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // r9
  ULONG_PTR v18; // r14
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v21; // rdi
  char v22; // al
  wchar_t *Buffer; // rax
  __int16 v24; // r8
  unsigned __int64 v25; // rcx
  __int16 v26; // r9
  __int16 v27; // dx
  wchar_t *v28; // r10
  __int16 v29; // cx
  wchar_t *v30; // rax
  int v31; // esi
  __int64 v32; // rcx
  bool v33; // zf
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  struct _PRIVILEGE_SET *v36; // rsi
  unsigned int v37; // edx
  int *v38; // rcx
  ULONG_PTR v39; // r12
  __int64 v40; // rcx
  __int16 v41; // r15
  struct _PRIVILEGE_SET *v42; // rdi
  SIZE_T v43; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  unsigned __int16 v45; // r11
  __int64 v46; // r10
  __int64 v47; // r10
  __int16 v48; // r11
  char IsKeyStackDeleted; // si
  int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // rcx
  ULONG_PTR v53; // r13
  int v54; // esi
  unsigned int v55; // r10d
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
  ULONG_PTR v76; // r14
  __int64 v77; // r12
  struct _KTHREAD *v78; // rax
  int v79; // eax
  int v80; // eax
  char v81; // al
  __int64 v82; // rdi
  ULONG_PTR v83; // r15
  __int64 v84; // rax
  int *v85; // rcx
  ULONG_PTR v86; // rsi
  _DWORD *v87; // r8
  __int16 v88; // dx
  __int64 v89; // rcx
  int *v90; // r14
  bool v91; // r12
  struct _KTHREAD *v92; // rdi
  __int64 v93; // r15
  struct _KTHREAD *v94; // r13
  signed __int64 *p_WaitBlockList; // rsi
  void *v96; // rdi
  ULONG_PTR v97; // rdi
  _QWORD *v98; // r13
  void *v99; // rsi
  signed __int64 *v100; // rdi
  int v101; // eax
  int v102; // edi
  int v103; // r14d
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rcx
  __int64 v110; // r9
  __int16 v111; // si
  struct _PRIVILEGE_SET *v112; // rbx
  SIZE_T v113; // rdi
  struct _PRIVILEGE_SET *v114; // rax
  __int16 v115; // si
  struct _PRIVILEGE_SET *v116; // rdi
  SIZE_T v117; // rbx
  struct _PRIVILEGE_SET *v118; // rax
  unsigned __int16 v119; // r11
  int *v120; // rax
  int *v121; // r13
  __int64 v122; // r10
  __int64 v123; // r10
  __int16 v124; // r11
  int v125; // esi
  __int16 v126; // r15
  __int16 v127; // di
  int *v128; // rsi
  int *v129; // rbx
  __int64 v130; // rbx
  __int16 v131; // r8
  __int64 v132; // rdx
  __int64 ComponentNameAtIndex; // rax
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // rdx
  __int16 v137; // r15
  __int16 v138; // si
  ULONG_PTR *v139; // r14
  ULONG_PTR *v140; // rbx
  __int64 v141; // rbx
  __int64 NextElement; // rax
  __int64 v143; // r9
  int v144; // ecx
  __int16 v145; // dx
  __int64 v146; // r8
  __int16 v147; // di
  ULONG_PTR *v148; // r14
  ULONG_PTR *v149; // rbx
  ULONG_PTR v150; // rbx
  int v151; // esi
  __int64 v152; // r8
  __m128i *v153; // r9
  int v154; // eax
  char v155; // dl
  int *v156; // rbx
  ULONG_PTR v157; // rax
  __int64 v158; // r10
  _QWORD *v159; // r15
  int *v160; // rsi
  unsigned __int16 v161; // r11
  __int64 v162; // rcx
  __int64 v163; // rcx
  unsigned __int8 v164; // al
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rcx
  unsigned __int8 v172; // al
  __int64 i; // r10
  __int64 v174; // r10
  __int16 v175; // r11
  __int64 v176; // rbx
  __int16 v177; // r14
  __int16 v178; // di
  __int64 v179; // r12
  __int64 v180; // rsi
  __int64 *v181; // rbx
  __int64 v182; // rbx
  __int16 v183; // si
  __int16 v184; // di
  int *v185; // r14
  int *v186; // rbx
  __int64 v187; // rbx
  int v188; // eax
  __int64 v189; // rdx
  __int64 v190; // rdi
  __int64 v191; // rdi
  char v192; // r15
  __int64 v193; // rbx
  __int64 v194; // rbx
  unsigned __int16 *v195; // r15
  int ComponentHashAtIndex; // eax
  __int64 v197; // rdi
  int v198; // ebx
  __int64 v199; // rdi
  ULONG_PTR v200; // rdx
  unsigned int *v201; // r14
  ULONG_PTR v202; // rcx
  ULONG_PTR v203; // r8
  ULONG_PTR v204; // rcx
  __int64 v205; // rdi
  __int64 v206; // rbx
  int v207; // r9d
  int v208; // edx
  ULONG_PTR v209; // rdi
  ULONG_PTR v210; // rcx
  int v211; // r12d
  int v212; // eax
  ULONG_PTR v213; // r14
  ULONG_PTR v214; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v216; // r8
  __int64 v217; // r15
  __int64 v218; // rbx
  unsigned __int16 *v219; // rbx
  unsigned __int8 v220; // di
  int v221; // ecx
  __int16 v222; // r8
  __int64 v223; // rdx
  __int64 v224; // rax
  __int64 v225; // r9
  int v226; // ecx
  __int16 v227; // dx
  __int64 v228; // r8
  __int64 v229; // rcx
  struct _PRIVILEGE_SET *v230; // rbx
  __int64 v231; // rax
  unsigned __int16 v232; // bx
  __int64 v233; // r9
  UNICODE_STRING *v234; // rdi
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // r8
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // r8
  UNICODE_STRING *v241; // rbx
  int v242; // r9d
  __int64 v243; // rdi
  int v244; // ebx
  __int64 v245; // r8
  int v246; // eax
  int Logic; // eax
  __int64 v248; // rdi
  int v249; // ebx
  __int64 v250; // rdi
  int v251; // r14d
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int16 v254; // ax
  __int64 v255; // rsi
  __int64 PrevElement; // rbx
  __int64 v257; // r8
  PACCESS_STATE v258; // rbx
  _QWORD *v259; // r15
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v261; // rdi
  __int64 v262; // rdx
  int started; // esi
  __int16 v264; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v266; // r14
  PPRIVILEGE_SET v267; // rcx
  _WORD *v268; // r12
  struct _PRIVILEGE_SET *v269; // rbx
  int v270; // eax
  PACCESS_STATE v271; // r15
  struct _PRIVILEGE_SET *v272; // rdi
  __int64 v273; // rsi
  __int16 v274; // r15
  SIZE_T v275; // r14
  struct _PRIVILEGE_SET *v276; // rax
  __int16 v277; // r10
  __int64 v278; // r11
  __int64 v279; // r11
  __int16 v280; // r10
  __int64 j; // rdx
  __int64 v282; // rcx
  __int16 v283; // ax
  __int64 v284; // r14
  struct _KTHREAD *v285; // rax
  struct _KTHREAD *v286; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v288; // al
  struct _PRIVILEGE_SET *v289; // rsi
  int v290; // eax
  PERESOURCE *ClientToken; // rcx
  int SessionId; // ebx
  ULONG_PTR v293; // rbx
  int v294; // edi
  __int16 v295; // si
  __int16 v296; // r15
  __int64 v297; // r12
  __int64 v298; // r14
  ULONG_PTR *v299; // rbx
  ULONG_PTR v300; // rbx
  int v301; // edi
  ULONG_PTR v302; // rbx
  int v303; // edi
  ULONG_PTR v304; // rbx
  unsigned __int32 v305; // eax
  unsigned __int32 v306; // r8d
  ULONG_PTR v307; // rdi
  unsigned int v308; // r12d
  ULONG_PTR v309; // rbx
  ULONG_PTR v310; // rbx
  ULONG_PTR v311; // r14
  ULONG_PTR v312; // rsi
  __int64 v313; // rax
  __int64 v314; // rax
  int v315; // r15d
  ULONG_PTR v316; // rcx
  __int64 v317; // rbx
  int v318; // eax
  __int64 v319; // rdx
  _SLIST_ENTRY *v320; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-D0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  PACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-C0h]
  int SymbolicLinkTarget; // [rsp+60h] [rbp-A0h] BYREF
  char v328; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v329; // [rsp+65h] [rbp-9Bh]
  _WORD v330[5]; // [rsp+66h] [rbp-9Ah] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-90h] BYREF
  __int16 v332; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h]
  char v334; // [rsp+88h] [rbp-78h] BYREF
  __int16 v335; // [rsp+89h] [rbp-77h]
  int v336[2]; // [rsp+90h] [rbp-70h]
  unsigned __int8 v337; // [rsp+98h] [rbp-68h]
  char v338; // [rsp+99h] [rbp-67h]
  __int64 v339; // [rsp+A0h] [rbp-60h]
  PACCESS_STATE AccessState; // [rsp+A8h] [rbp-58h]
  __int64 v341; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v342; // [rsp+B8h] [rbp-48h]
  __int64 v343; // [rsp+C0h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v346; // [rsp+D8h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v348; // [rsp+E8h] [rbp-18h]
  int v349[2]; // [rsp+F0h] [rbp-10h]
  __m128i v350; // [rsp+100h] [rbp+0h] BYREF
  __int64 v351; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR v352; // [rsp+118h] [rbp+18h]
  __m128i v353; // [rsp+120h] [rbp+20h]
  PVOID TokenInformation; // [rsp+130h] [rbp+30h] BYREF
  int v355[2]; // [rsp+138h] [rbp+38h] BYREF
  __m128i v356; // [rsp+140h] [rbp+40h]
  PCUNICODE_STRING SourceString; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v358; // [rsp+158h] [rbp+58h] BYREF
  __int64 v359; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v360[2]; // [rsp+170h] [rbp+70h]
  struct _PRIVILEGE_SET *v361; // [rsp+180h] [rbp+80h]
  __int64 v362; // [rsp+188h] [rbp+88h] BYREF
  ULONG_PTR v363; // [rsp+190h] [rbp+90h] BYREF
  char v364[8]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v365; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v366; // [rsp+1A8h] [rbp+A8h] BYREF
  PPRIVILEGE_SET v367; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v369; // [rsp+1C8h] [rbp+C8h] BYREF
  ULONG_PTR v370; // [rsp+1D0h] [rbp+D0h]
  __int64 v371; // [rsp+1D8h] [rbp+D8h]
  struct _PRIVILEGE_SET *v372; // [rsp+1E0h] [rbp+E0h]
  int v373[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  ULONG_PTR v374; // [rsp+1F8h] [rbp+F8h]
  __int64 v375; // [rsp+200h] [rbp+100h]
  PPRIVILEGE_SET v376; // [rsp+208h] [rbp+108h]
  _QWORD v377[3]; // [rsp+210h] [rbp+110h] BYREF
  PPRIVILEGE_SET v378; // [rsp+228h] [rbp+128h]
  PPRIVILEGE_SET v379[3]; // [rsp+230h] [rbp+130h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+248h] [rbp+148h]
  __int64 v381; // [rsp+250h] [rbp+150h]
  _QWORD v382[3]; // [rsp+258h] [rbp+158h]
  _QWORD v383[3]; // [rsp+270h] [rbp+170h] BYREF
  PPRIVILEGE_SET v384; // [rsp+288h] [rbp+188h]
  PVOID *v385; // [rsp+290h] [rbp+190h]
  __int64 v386; // [rsp+298h] [rbp+198h]
  __int64 v387; // [rsp+2A0h] [rbp+1A0h]
  __int64 v388; // [rsp+2A8h] [rbp+1A8h]
  __int64 v389; // [rsp+2B0h] [rbp+1B0h]
  int v390[44]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v385 = a9;
  v10 = 0;
  v343 = a1;
  *(_DWORD *)&v330[3] = 0;
  v329 = a3;
  v11 = 0LL;
  AccessState = a2;
  v346 = (__int64)String2;
  v339 = a7;
  Object = 0LL;
  BugCheckParameter3 = 0LL;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)v355 = 0LL;
  v334 = 0;
  *(_QWORD *)v336 = 0LL;
  v328 = 0;
  v338 = 0;
  v335 = 0;
  *(_DWORD *)((char *)v330 + 1) = 0;
  v332 = 0;
  v363 = 0LL;
  HvpGetCellContextReinitialize((__int64)v364);
  v12 = *a6;
  LOBYTE(v330[0]) = 0;
  v350 = v12;
  memset(v390, 0, 0xA8uLL);
  v377[0] = 4294901760LL;
  *(_QWORD *)v373 = 4294901760LL;
  v383[0] = 4294901760LL;
  v374 = 0LL;
  v375 = 0LL;
  v376 = 0LL;
  v377[1] = 0LL;
  v377[2] = 0LL;
  v378 = 0LL;
  v383[1] = 0LL;
  v383[2] = 0LL;
  v384 = 0LL;
  v352 = a7 + 160;
  memset((void *)(a7 + 160), 0, 0x50uLL);
  *(_QWORD *)(a7 + 160) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v13 = *(_QWORD *)(a7 + 72);
  v14 = v343;
  BugCheckParameter2 = *(_QWORD *)(a7 + 88);
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v13 )
  {
    v15 = *(_QWORD *)(v14 + 56);
    if ( v15 && v13 != v15 )
    {
      v16 = -1072103422;
      SymbolicLinkTarget = -1072103422;
      CmpRecordParseFailure(a7, 256LL);
      goto LABEL_733;
    }
    *(_QWORD *)v349 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v14 + 56);
    *(_QWORD *)v349 = *(_QWORD *)(v14 + 64);
  }
  v18 = BugCheckParameter2;
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v14 + 50);
  v19 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v343 + 8) != v19 )
  {
    if ( !v18 )
      goto LABEL_70;
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v18);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
    goto LABEL_69;
  }
  if ( !v18 )
    goto LABEL_70;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
  {
    CmpLockRegistryExclusive(v19, 65534LL);
  }
  else if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v21 = *(_QWORD *)(v18 + 288);
  v22 = 0;
  LOBYTE(v330[1]) = 1;
  if ( (v21 & 1) != 0 )
  {
    v22 = 1;
    v21 &= ~1uLL;
  }
  if ( !v21 || v22 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v21, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v18);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
    v12 = v350;
    BugCheckParameter3 = BugCheckParameter4;
LABEL_69:
    LOBYTE(v330[1]) = 0;
    goto LABEL_70;
  }
  Buffer = String2->Buffer;
  v24 = String2->Length - *(_WORD *)v21;
  v25 = (unsigned __int64)*(unsigned __int16 *)v21 >> 1;
  v26 = String2->MaximumLength - *(_WORD *)v21;
  v27 = v26;
  v350.m128i_i16[1] = v26;
  v28 = &Buffer[v25];
  v29 = v24;
  v350.m128i_i16[0] = v24;
  v30 = v28;
  v350.m128i_i64[1] = (__int64)v28;
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
    v350.m128i_i16[0] = v29;
    v350.m128i_i64[1] = (__int64)v30;
    v350.m128i_i16[1] = v27;
  }
  v31 = ((*(_DWORD *)(v18 + 4) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v29 )
  {
    v32 = *(_QWORD *)(v18 + 72);
    v33 = (*(_DWORD *)v32 & 1) == 0;
    v34 = *(unsigned __int16 *)(v32 + 24);
    v35 = v34;
    if ( v33 )
      v35 = (unsigned __int64)v34 >> 1;
    else
      LOWORD(v34) = 2 * v34;
    v350.m128i_i16[0] = v34 + v24;
    v10 = 1;
    v350.m128i_i16[1] = v34 + v26;
    *(_DWORD *)&v330[3] = 1;
    --v31;
    v350.m128i_i64[1] = (__int64)&v28[-v35];
  }
  SymbolicLinkTarget = CmpComputeComponentHashes(&v350, &v332, v390);
  v16 = SymbolicLinkTarget;
  if ( SymbolicLinkTarget < 0 )
  {
    CmpRecordParseFailure(a7, 512LL);
    v11 = BugCheckParameter4;
    goto LABEL_733;
  }
  v342 = v332;
  if ( (unsigned int)(v332 + v31) > 0x20 )
  {
    SymbolicLinkTarget = -1073741811;
    v16 = -1073741811;
    CmpRecordParseFailure(a7, 768LL);
    v11 = BugCheckParameter4;
    goto LABEL_733;
  }
  v36 = 0LL;
  v37 = 0;
  if ( !v332 )
  {
LABEL_42:
    if ( v10 == v332 )
    {
      CmpLockHashEntrySharedByKcb(v18);
      LOBYTE(v330[2]) = 1;
    }
    v39 = v18 + 40;
    ExAcquirePushLockSharedEx(v18 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
    v41 = *(_WORD *)(v18 + 58);
    v42 = 0LL;
    v369 = 4294901760LL;
    v370 = 0LL;
    v371 = 0LL;
    v372 = 0LL;
    if ( v41 >= 2 && v41 != 1 )
    {
      v43 = 8LL * (unsigned int)(v41 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v40, v43, 0x35364D43u);
      v36 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        v18 = BugCheckParameter2;
LABEL_55:
        IsKeyStackDeleted = CmpIsKeyStackDeleted(&v369, 0LL);
        if ( v42 )
          MiDeleteSubsection(v42);
        if ( !IsKeyStackDeleted )
        {
          v50 = *(_DWORD *)(v18 + 4) & 0x80000;
          if ( *(struct _KTHREAD **)(v18 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v18 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v18 + 48));
          ExReleasePushLockEx(v39, 0LL);
          if ( v50 && (*(_DWORD *)(v18 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v18);
          v53 = v18;
          v54 = *(_DWORD *)&v330[3];
          v55 = v342;
          BugCheckParameter3 = BugCheckParameter4;
          v348 = v18;
          goto LABEL_129;
        }
        CmpUnlockKcb(v18);
        if ( LOBYTE(v330[2]) )
        {
          CmpUnlockHashEntryByKcb(v18);
          LOBYTE(v330[2]) = 0;
        }
        CmpDereferenceKeyControlBlock(v18);
        v12 = *a6;
        BugCheckParameter2 = 0LL;
        v350 = v12;
        CmpCleanupPathInfo(v390);
        memset(v390, 0, 0xA8uLL);
        BugCheckParameter3 = BugCheckParameter4;
LABEL_70:
        v52 = v343;
        v356 = v12;
        v353 = v12;
        v53 = *(_QWORD *)(v343 + 8);
        LOBYTE(v52) = 0;
        v348 = v53;
        v337 = 0;
        v350.m128i_i16[0] = _mm_cvtsi128_si32(v12);
        if ( !v350.m128i_i16[0] )
        {
          v332 = 0;
LABEL_72:
          v55 = v332;
          v51 = 0LL;
          v342 = v332;
          if ( v332 )
          {
            while ( 1 )
            {
              v52 = (unsigned int)v51 >= 8
                  ? *(_QWORD *)&v390[40] + 16 * ((unsigned int)(v51 - 8) + 6LL)
                  : (__int64)&v390[4 * (unsigned int)v51 + 8];
              if ( *(_WORD *)v52 > 0x200u )
                break;
              v51 = (unsigned int)(v51 + 1);
              if ( (unsigned int)v51 >= v332 )
                goto LABEL_128;
            }
            SymbolicLinkTarget = -1073741811;
            v16 = -1073741811;
            CmpRecordParseFailure(v339, 1536LL);
            v11 = BugCheckParameter3;
            goto LABEL_729;
          }
LABEL_128:
          v54 = 0;
          *(_DWORD *)&v330[3] = 0;
LABEL_129:
          v76 = v352;
          *(_QWORD *)(v352 + 8) = v53;
          *(_QWORD *)(v76 + 32) = v53;
          if ( v55 + ((*(_DWORD *)(v53 + 4) >> 21) & 0x3FF) - (unsigned __int16)v54 > 0x200 )
          {
            SymbolicLinkTarget = -1073741811;
            v16 = -1073741811;
            CmpRecordParseFailure(v339, 1792LL);
            v11 = BugCheckParameter3;
            goto LABEL_729;
          }
          v77 = v339;
          if ( LOBYTE(v330[1]) )
          {
LABEL_139:
            v79 = *(_DWORD *)(v343 + 48);
            if ( (v79 & 9) != 0 )
            {
              v16 = -1073741444;
              if ( (v79 & 1) != 0 )
                v16 = -1073740763;
              SymbolicLinkTarget = v16;
              CmpRecordParseFailure(v77, 2048LL);
              v11 = BugCheckParameter3;
              goto LABEL_729;
            }
            if ( (_WORD)v54 == v332 )
            {
              if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v53) )
              {
                v16 = -1073741670;
                SymbolicLinkTarget = -1073741670;
                CmpRecordParseFailure(v77, 2304LL);
                v11 = BugCheckParameter3;
                goto LABEL_729;
              }
              BugCheckParameter4 = v53;
              if ( v53 == BugCheckParameter2 )
              {
                LOBYTE(v330[0]) = v330[2];
                LOBYTE(v330[2]) = 0;
              }
              else
              {
                CmpLockHashEntrySharedByKcb(v53);
                LOBYTE(v330[0]) = 1;
              }
            }
            else
            {
              v80 = CmpPerformCompleteKcbCacheLookup(
                      v53,
                      (unsigned __int16)v54,
                      v55,
                      (__int64)v390,
                      (_DWORD *)v77,
                      &BugCheckParameter4,
                      (char *)v330,
                      &v351);
              SymbolicLinkTarget = v80;
              v16 = v80;
              if ( v80 < 0 || v80 == 259 )
              {
                CmpRecordParseFailure(v77, 2432LL);
                v11 = BugCheckParameter4;
LABEL_727:
                if ( LOBYTE(v330[0]) )
                  CmpUnlockHashEntryByKcb(v11);
                goto LABEL_729;
              }
              v53 = BugCheckParameter4;
              v81 = v351;
              LOWORD(v54) = v351 + v54;
              v348 = BugCheckParameter4;
              *(_DWORD *)&v330[3] = v54;
              *(_QWORD *)(v76 + 16) = BugCheckParameter4;
              *(_BYTE *)(v76 + 40) = v81;
              *(_QWORD *)(v76 + 32) = v53;
            }
            if ( (_WORD)v54 == v332 && (*(_DWORD *)v77 & 1) == 0 )
            {
              v82 = *(_QWORD *)(v53 + 24);
              *(_QWORD *)(*(_QWORD *)(v82 + 2800)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(v82 + 2808) - 1) & ((unsigned int)(101027
                                                                                       * (*(_DWORD *)(v53 + 8) ^ (*(_DWORD *)(v53 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v53 + 8) ^ (*(_DWORD *)(v53 + 8) >> 9))) >> 9)))
                        + 8) = 0LL;
              ExReleasePushLockEx(
                *(_QWORD *)(*(_QWORD *)(v53 + 24) + 2800LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v53 + 24) + 2808LL) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v53 + 8) ^ (*(_DWORD *)(v53 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v53 + 8) ^ (*(_DWORD *)(v53 + 8) >> 9))) >> 9))),
                0LL);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 5496), 0xFFFFFFFF) == 1 )
                CmpDeleteHive((PERESOURCE *)v82);
              v53 = BugCheckParameter4;
              v348 = BugCheckParameter4;
              LOBYTE(v330[0]) = 0;
            }
            v83 = v53 + 40;
            v352 = v53 + 40;
            ExAcquirePushLockSharedEx(v53 + 40, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v53 + 48));
            if ( (__int16)v54 >= v332 )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            else
            {
              v84 = (unsigned int)(__int16)v54;
              if ( (unsigned int)v84 >= 8 )
                v85 = (int *)(*(_QWORD *)&v390[40] + 16 * ((unsigned int)(v84 - 8) + 6LL));
              else
                v85 = &v390[4 * v84 + 8];
              DestinationString.Buffer = (wchar_t *)*((_QWORD *)v85 + 1);
              DestinationString.Length = v350.m128i_i16[0]
                                       - 2 * (((__int64)DestinationString.Buffer - v350.m128i_i64[1]) >> 1);
              DestinationString.MaximumLength = DestinationString.Length;
            }
            v86 = BugCheckParameter4;
            if ( !CmpVEEnabled )
              goto LABEL_203;
            if ( (*(_DWORD *)(v77 + 24) & 0x10) != 0 )
              goto LABEL_203;
            if ( *(_WORD *)(BugCheckParameter4 + 58) )
              goto LABEL_203;
            v87 = *(_DWORD **)(BugCheckParameter4 + 24);
            if ( v87 == CmpMasterHive )
              goto LABEL_203;
            v382[0] = BugCheckParameter4;
            v381 = 0LL;
            v88 = 0;
            v382[2] = 0LL;
            v382[1] = 0LL;
            do
            {
              if ( v88 < 2 )
                v89 = v382[v88];
              else
                v89 = *(_QWORD *)(8LL * (v88 - 2));
              if ( *(_WORD *)(v89 + 58) && *(_BYTE *)(v89 + 57) == 1 )
                goto LABEL_178;
              if ( *(_DWORD *)(v89 + 32) != -1 )
                break;
              --v88;
            }
            while ( v88 >= 0 );
            if ( (v87[1340] & 0x10) == 0 && (*(_DWORD *)(BugCheckParameter4 + 176) & 0x2000000) == 0 )
              goto LABEL_203;
LABEL_178:
            v90 = (int *)(v77 + 16);
            v91 = 1;
            if ( v90 && (*v90 & 1) != 0 )
            {
              if ( (*v90 & 2) == 0 )
              {
LABEL_208:
                v77 = v339;
                if ( (*(_DWORD *)v339 & 8) == 0 )
                {
                  if ( (*(_DWORD *)(v86 + 176) & 0x2000000) != 0 )
                    v102 = CmpVEExecuteVirtualStoreParseLogic(v86, &DestinationString, v339, v346);
                  else
                    v102 = CmpVEExecuteRealStoreParseLogic(v86, &DestinationString, v339, v346);
                  goto LABEL_204;
                }
LABEL_203:
                v102 = -1073741199;
LABEL_204:
                v103 = *(_DWORD *)(v86 + 4) & 0x80000;
                SymbolicLinkTarget = v102;
                if ( *(struct _KTHREAD **)(v53 + 48) == KeGetCurrentThread() )
                  *(_QWORD *)(v53 + 48) = 0LL;
                else
                  _InterlockedDecrement((volatile signed __int32 *)(v53 + 48));
                ExReleasePushLockEx(v83, 0LL);
                v33 = v103 == 0;
                BugCheckParameter3 = BugCheckParameter4;
                v11 = BugCheckParameter4;
                if ( !v33 && (*(_DWORD *)(v86 + 4) & 0x80000) != 0 )
                  CmpFreeKeyControlBlock(BugCheckParameter4);
                if ( v102 != -1073741199 )
                {
                  CmpRecordParseFailure(v77, 2496LL);
                  v16 = SymbolicLinkTarget;
                  goto LABEL_727;
                }
                v104 = *(_QWORD *)(v11 + 24);
                v105 = *(_QWORD *)(v77 + 64);
                if ( !PsIsCurrentThreadInServerSilo() && v105 && v105 != v104 )
                {
                  if ( (*(_DWORD *)(v104 + 5360) & 1) != 0 )
                  {
                    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                    v106 = *(_QWORD *)(v104 + 5368);
                    if ( v106 != v104 + 5368 )
                    {
                      while ( 1 )
                      {
                        v107 = v106 - 5368;
                        if ( v107 == v105 )
                          break;
                        v106 = *(_QWORD *)(v107 + 5368);
                        if ( v106 == v104 + 5368 )
                          goto LABEL_225;
                      }
                      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                      goto LABEL_228;
                    }
LABEL_225:
                    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                  }
                  v16 = -1073741790;
                  SymbolicLinkTarget = -1073741790;
                  CmpRecordParseFailure(v77, 2560LL);
                  goto LABEL_727;
                }
LABEL_228:
                if ( v13 || *(_QWORD *)v349 )
                {
                  if ( *(PVOID *)(v11 + 24) == CmpMasterHive )
                  {
                    LOBYTE(v335) = 1;
                    v13 = 0LL;
                    v108 = 0LL;
                  }
                  else if ( (v13 || *(_QWORD *)v349) && *(_WORD *)(v11 + 58) )
                  {
                    CmpLogUnsupportedOperation(8LL);
                    if ( !PsIsCurrentThreadInServerSilo() )
                    {
                      v16 = -1072103419;
                      SymbolicLinkTarget = -1072103419;
                      CmpRecordParseFailure(v77, 2816LL);
                      goto LABEL_727;
                    }
                    v13 = 0LL;
                    v108 = 0LL;
                  }
                  else
                  {
                    v108 = *(_QWORD *)v349;
                  }
                }
                else
                {
                  v108 = 0LL;
                }
                if ( !CmpTransSilentIgnore() && (v13 || v108) )
                {
                  if ( (int)CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 24), v13, v108, 0, (__int64)&v341) < 0 )
                  {
                    if ( LOBYTE(v330[0]) )
                    {
                      CmpUnlockHashEntryByKcb(v11);
                      LOBYTE(v330[0]) = 0;
                    }
                    CmpUnlockRegistry();
                    v16 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 24), v13, v108, 1, (__int64)&v341);
                    CmpLockRegistry();
                    LOBYTE(v330[1]) = 1;
                    if ( v16 >= 0 )
                      v16 = -1073741267;
                    SymbolicLinkTarget = v16;
                    CmpRecordParseFailure(v77, 3072LL);
                    goto LABEL_727;
                  }
                  v110 = 0LL;
                }
                else
                {
                  v341 = v110;
                }
                v111 = *(_WORD *)(v11 + 58);
                v112 = (struct _PRIVILEGE_SET *)v110;
                if ( v111 >= 2 && v111 != 1 )
                {
                  v113 = 8LL * (unsigned int)(v111 - 1);
                  v114 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v109, v113, 0x35364D43u);
                  v112 = v114;
                  if ( !v114 )
                  {
                    v16 = -1073741670;
                    SymbolicLinkTarget = -1073741670;
                    CmpRecordParseFailure(v77, 3328LL);
                    goto LABEL_727;
                  }
                  memset(v114, 0, v113);
                  v110 = 0LL;
                }
                LOWORD(v373[0]) = v111;
                HIWORD(v373[0]) = -1;
                v376 = v112;
                v115 = *(_WORD *)(v11 + 58);
                v116 = (struct _PRIVILEGE_SET *)v110;
                if ( v115 >= 2 && v115 != 1 )
                {
                  v117 = 8LL * (unsigned int)(v115 - 1);
                  v118 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v109, v117, 0x35364D43u);
                  v116 = v118;
                  if ( !v118 )
                  {
                    v16 = -1073741670;
                    SymbolicLinkTarget = -1073741670;
                    CmpRecordParseFailure(v77, 3584LL);
                    goto LABEL_727;
                  }
                  memset(v118, 0, v117);
                  v110 = 0LL;
                }
                WORD1(v377[0]) = -1;
                LOWORD(v377[0]) = v115;
                v378 = v116;
                v119 = *(_WORD *)(v11 + 58);
                v120 = (int *)v377;
                SymbolicLinkTarget = v110;
                v121 = v373;
                *(_QWORD *)v349 = v377;
                HIWORD(v373[0]) = v119;
                if ( v119 )
                {
                  v122 = *(_QWORD *)(v11 + 184);
                  if ( v122 )
                  {
                    do
                    {
                      CmpSetKcbAtLayerHeight(v373, v119, *(_QWORD *)(v122 + 16));
                      v122 = *(_QWORD *)(v123 + 24);
                      v119 = v124 - 1;
                    }
                    while ( v122 );
                    v120 = (int *)v377;
                    v110 = 0LL;
                  }
                }
                else
                {
                  v374 = v11;
                }
                v125 = *(_DWORD *)&v330[3];
                if ( v330[3] < v332 )
                {
                  while ( 1 )
                  {
                    v126 = *((_WORD *)v121 + 1);
                    v127 = v110;
                    if ( (__int16)v110 <= v126 )
                    {
                      v128 = v121 + 2;
                      do
                      {
                        if ( v127 < 2 )
                          v129 = v128;
                        else
                          v129 = (int *)(*((_QWORD *)v121 + 3) + 8LL * (v127 - 2));
                        v130 = *(_QWORD *)v129;
                        ExAcquirePushLockSharedEx(v130 + 40, 0LL);
                        _InterlockedIncrement((volatile signed __int32 *)(v130 + 48));
                        ++v127;
                        v128 += 2;
                      }
                      while ( v127 <= v126 );
                      v11 = BugCheckParameter4;
                      v110 = 0LL;
                      v125 = *(_DWORD *)&v330[3];
                      BugCheckParameter3 = BugCheckParameter4;
                    }
                    v362 = v110;
                    v131 = v126;
                    if ( v126 < 0 )
                    {
LABEL_282:
                      if ( CmpLoadingSystemHivesActive )
                      {
                        if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() )
                        {
                          BugCheckParameter3 = BugCheckParameter4;
                        }
                        else
                        {
                          BugCheckParameter3 = BugCheckParameter4;
                          if ( *(PVOID *)(BugCheckParameter4 + 24) == CmpMasterHive
                            && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                            && (__int16)v125 > 0 )
                          {
                            ComponentNameAtIndex = CmpGetComponentNameAtIndex(v390, (unsigned int)((__int16)v125 - 1));
                            if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v134, v135, v77 + 136) )
                            {
                              *(_DWORD *)v77 |= 0x100u;
                              v16 = 259;
                              SymbolicLinkTarget = 259;
                              v136 = 3840LL;
                              goto LABEL_289;
                            }
                          }
                        }
                      }
                      v136 = 4096LL;
                      v16 = -1073741772;
                      SymbolicLinkTarget = -1073741772;
                      goto LABEL_289;
                    }
                    while ( 1 )
                    {
                      if ( v131 < 2 )
                        v132 = *(_QWORD *)&v121[2 * v131 + 2];
                      else
                        v132 = *(_QWORD *)(*((_QWORD *)v121 + 3) + 8LL * (v131 - 2));
                      if ( *(_WORD *)(v132 + 58) && *(_BYTE *)(v132 + 57) == 1 )
                        goto LABEL_282;
                      if ( *(_DWORD *)(v132 + 32) != -1 )
                        break;
                      if ( --v131 < 0 )
                        goto LABEL_282;
                    }
                    v141 = v341;
                    if ( v341 )
                    {
                      NextElement = CmListGetNextElement(*((_QWORD *)v121 + 1) + 200LL, &v362, 32LL);
                      if ( NextElement )
                      {
                        while ( 1 )
                        {
                          v144 = *(_DWORD *)(NextElement + 68);
                          if ( v144 == 2 || v144 == 11 )
                            break;
                          NextElement = CmListGetNextElement(v143 + 200, &v362, 32LL);
                          if ( !NextElement )
                            goto LABEL_302;
                        }
                        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
                          goto LABEL_282;
                      }
LABEL_302:
                      LOWORD(v110) = 0;
                    }
                    v145 = v126;
                    while ( 1 )
                    {
                      v146 = v145 < 2
                           ? *(_QWORD *)&v121[2 * v145 + 2]
                           : *(_QWORD *)(*((_QWORD *)v121 + 3) + 8LL * (v145 - 2));
                      if ( *(_DWORD *)(v146 + 32) != -1 )
                        break;
                      if ( --v145 < 0 )
                        goto LABEL_311;
                    }
                    if ( (*(_DWORD *)(v146 + 176) & 0x100000) != 0 )
                    {
                      SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                             (__int64)v121,
                                             (__int64)v390,
                                             v125,
                                             v332,
                                             v141,
                                             v346,
                                             (ULONG_PTR *)(v77 + 88));
                      v16 = SymbolicLinkTarget;
                      if ( SymbolicLinkTarget >= 0 )
                      {
                        *(_DWORD *)v77 &= ~8u;
                        if ( !*(_QWORD *)(v77 + 64) )
                        {
                          v162 = *(_QWORD *)(v11 + 24);
                          if ( (*(_DWORD *)(v162 + 5360) & 1) != 0 )
                            *(_QWORD *)(v77 + 64) = v162;
                        }
                        v163 = v77 + 160;
                        v16 = 260;
                        v164 = *(_BYTE *)(v77 + 202);
                        SymbolicLinkTarget = 260;
                        if ( v164 < 4u )
                        {
                          *(_DWORD *)(v163 + 4LL * v164 + 44) = 4864;
                          *(_DWORD *)(v163 + 4LL * (unsigned __int8)(*(_BYTE *)(v77 + 202))++ + 60) = 260;
                        }
                      }
                      else
                      {
                        CmpRecordParseFailure(v77, 4608LL);
                      }
                      goto LABEL_727;
                    }
LABEL_311:
                    v147 = v110;
                    if ( (__int16)v110 <= v126 )
                    {
                      v148 = (ULONG_PTR *)(v121 + 2);
                      do
                      {
                        if ( v147 < 2 )
                          v149 = v148;
                        else
                          v149 = (ULONG_PTR *)(*((_QWORD *)v121 + 3) + 8LL * (v147 - 2));
                        v150 = *v149;
                        v151 = *(_DWORD *)(v150 + 4) & 0x80000;
                        if ( *(struct _KTHREAD **)(v150 + 48) == KeGetCurrentThread() )
                          *(_QWORD *)(v150 + 48) = 0LL;
                        else
                          _InterlockedDecrement((volatile signed __int32 *)(v150 + 48));
                        ExReleasePushLockEx(v150 + 40, 0LL);
                        if ( v151 && (*(_DWORD *)(v150 + 4) & 0x80000) != 0 )
                          CmpFreeKeyControlBlock(v150);
                        ++v147;
                        ++v148;
                      }
                      while ( v147 <= v126 );
                      v77 = v339;
                      v11 = BugCheckParameter4;
                      v141 = v341;
                      v125 = *(_DWORD *)&v330[3];
                    }
                    v152 = (unsigned int)(__int16)v125;
                    v153 = (unsigned int)v152 >= 8
                         ? (__m128i *)(*(_QWORD *)&v390[40] + 16 * ((unsigned int)(v152 - 8) + 6LL))
                         : (__m128i *)&v390[4 * (unsigned int)v152 + 8];
                    v154 = (unsigned int)v152 >= 8
                         ? *(_DWORD *)(*(_QWORD *)&v390[40] + 4LL * (unsigned int)(v152 - 8))
                         : v390[v152];
                    v155 = (*(_DWORD *)v77 & 1) != 0 && (_DWORD)v152 == v342 - 1;
                    GrantedAccess = (PACCESS_MASK)v141;
                    v156 = *(int **)v349;
                    *(_DWORD *)AccessMode = v154 + 37 * *(_DWORD *)(v11 + 8);
                    v16 = CmpWalkOneLevel(
                            v11,
                            (__int64)v121,
                            (__int64 *)v355,
                            *(__int64 *)v349,
                            &v334,
                            v153,
                            v154,
                            *(ULONG_PTR *)AccessMode,
                            (__int64)GrantedAccess,
                            v155,
                            v77);
                    SymbolicLinkTarget = v16;
                    if ( v16 == -1073741772 )
                      break;
                    if ( v16 < 0 )
                      goto LABEL_359;
                    v157 = *(_QWORD *)v355;
                    ++*(_BYTE *)(v77 + 201);
                    *(_QWORD *)(v77 + 184) = v157;
                    *(_QWORD *)(v77 + 192) = v157;
                    v110 = 0LL;
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
                      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                    LOWORD(v125) = v125 + 1;
                    v11 = *(_QWORD *)v355;
                    LOBYTE(v330[0]) = v334;
                    v120 = v121;
                    v121 = v156;
                    *(_QWORD *)v349 = v120;
                    BugCheckParameter3 = *(_QWORD *)v355;
                    BugCheckParameter4 = *(_QWORD *)v355;
                    *(_QWORD *)v355 = 0LL;
                    v334 = 0;
                    *(_DWORD *)&v330[3] = v125;
                    if ( (__int16)v125 >= v332 )
                      goto LABEL_338;
                  }
                  if ( CmpLoadingSystemHivesActive )
                  {
                    v11 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                      && *(PVOID *)(BugCheckParameter4 + 24) == CmpMasterHive )
                    {
                      if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000 && (__int16)v125 > 0 )
                      {
                        v165 = CmpGetComponentNameAtIndex(v390, (unsigned int)((__int16)v125 - 1));
                        if ( (unsigned __int8)CmpWaitForHiveMount(v165, v166, v167, v77 + 136) )
                        {
                          *(_DWORD *)v77 |= 0x100u;
                          v16 = 259;
                          SymbolicLinkTarget = 259;
                          CmpRecordParseFailure(v77, 5120LL);
                          goto LABEL_727;
                        }
                      }
                      if ( (*(_DWORD *)(v11 + 4) & 0x7FE00000) == 0x400000 )
                      {
                        v168 = CmpGetComponentNameAtIndex(v390, (unsigned int)(__int16)v125);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v168, v169, v170, v77 + 136) )
                        {
                          *(_DWORD *)v77 |= 0x100u;
                          v16 = 259;
                          SymbolicLinkTarget = 259;
                          CmpRecordParseFailure(v77, 5376LL);
                          goto LABEL_727;
                        }
                      }
                    }
                    v16 = SymbolicLinkTarget;
                  }
LABEL_359:
                  v171 = v77 + 160;
                  v172 = *(_BYTE *)(v77 + 202);
                  if ( v172 < 4u )
                  {
                    *(_DWORD *)(v171 + 4LL * v172 + 44) = 5504;
                    *(_DWORD *)(v171 + 4LL * (unsigned __int8)(*(_BYTE *)(v77 + 202))++ + 60) = v16;
                  }
                  goto LABEL_727;
                }
LABEL_338:
                v158 = *(_QWORD *)(v11 + 64);
                v159 = (_QWORD *)(v11 + 64);
                *(_QWORD *)v336 = v120;
                v160 = v120;
                v348 = v11 + 64;
                if ( v158 )
                {
                  v161 = *(_WORD *)(v158 + 58);
                  *((_WORD *)v120 + 1) = v161;
                  if ( v161 )
                  {
                    for ( i = *(_QWORD *)(v158 + 184); i; v120 = *(int **)v349 )
                    {
                      CmpSetKcbAtLayerHeight(v120, v161, *(_QWORD *)(i + 16));
                      i = *(_QWORD *)(v174 + 24);
                      v161 = v175 - 1;
                    }
                  }
                  else
                  {
                    *((_QWORD *)v120 + 1) = v158;
                  }
                }
                else
                {
                  v160 = (int *)v110;
                  *(_QWORD *)v336 = v110;
                }
                v176 = *(_QWORD *)(v343 + 8);
                if ( *v159 != v176 && v11 != v176 )
                {
                  ExAcquirePushLockSharedEx(v176 + 40, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v176 + 48));
                  BugCheckParameter3 = BugCheckParameter4;
                  HIBYTE(v330[0]) = 1;
                }
                if ( v160 )
                {
                  v177 = *((_WORD *)v160 + 1);
                  v178 = 0;
                  if ( v177 >= 0 )
                  {
                    v179 = *(_QWORD *)v336;
                    v180 = *(_QWORD *)v336 + 8LL;
                    do
                    {
                      if ( v178 < 2 )
                        v181 = (__int64 *)v180;
                      else
                        v181 = (__int64 *)(*(_QWORD *)(v179 + 24) + 8LL * (v178 - 2));
                      v182 = *v181;
                      ExAcquirePushLockSharedEx(v182 + 40, 0LL);
                      _InterlockedIncrement((volatile signed __int32 *)(v182 + 48));
                      ++v178;
                      v180 += 8LL;
                    }
                    while ( v178 <= v177 );
                    v77 = v339;
                    BugCheckParameter3 = BugCheckParameter4;
                  }
                  v328 = 1;
                }
                v183 = *((_WORD *)v121 + 1);
                v184 = 0;
                if ( v183 < 0 )
                {
                  v11 = BugCheckParameter3;
                }
                else
                {
                  v185 = v121 + 2;
                  do
                  {
                    if ( v184 < 2 )
                      v186 = v185;
                    else
                      v186 = (int *)(*((_QWORD *)v121 + 3) + 8LL * (v184 - 2));
                    v187 = *(_QWORD *)v186;
                    ExAcquirePushLockSharedEx(v187 + 40, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v187 + 48));
                    ++v184;
                    v185 += 2;
                  }
                  while ( v184 <= v183 );
                  v11 = BugCheckParameter4;
                  BugCheckParameter3 = BugCheckParameter4;
                }
                v188 = *(_DWORD *)(v343 + 48);
                if ( (v188 & 9) != 0 )
                {
                  v16 = -1073741444;
                  v189 = 5888LL;
                  if ( (v188 & 1) != 0 )
                    v16 = -1073740763;
LABEL_390:
                  SymbolicLinkTarget = v16;
                  CmpRecordParseFailure(v77, v189);
                  goto LABEL_291;
                }
                --v330[3];
                v33 = (*(_DWORD *)(v11 + 176) & 0x20000) == 0;
                v352 = v11 + 176;
                if ( !v33 )
                {
                  SymbolicLinkTarget = -1073741772;
                  v16 = -1073741772;
                  CmpRecordParseFailure(v77, 6144LL);
                  goto LABEL_291;
                }
                v190 = v341;
                if ( *(_QWORD *)(v11 + 232) && !(unsigned __int8)CmEqualTrans(v341) )
                {
                  SymbolicLinkTarget = -1073741772;
                  v16 = -1073741772;
                  CmpRecordParseFailure(v77, 6400LL);
                  goto LABEL_291;
                }
                if ( (*(_DWORD *)v77 & 2) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v121);
                  v191 = *(_QWORD *)v336;
                  CmpUnlockKcbStack(*(__int64 *)v336);
                  v192 = HIBYTE(v330[0]);
                  v193 = v343;
                  if ( HIBYTE(v330[0]) )
                    CmpUnlockKcb(*(_QWORD *)(v343 + 8));
                  HIBYTE(v335) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v77 + 48), 0LL);
                  if ( v192 )
                  {
                    v194 = *(_QWORD *)(v193 + 8);
                    ExAcquirePushLockSharedEx(v194 + 40, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v194 + 48));
                    v11 = BugCheckParameter4;
                    BugCheckParameter3 = BugCheckParameter4;
                  }
                  CmpLockKcbStackTopExclusiveRestShared(v191);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v121);
                  v195 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v390, v330[3]);
                  ComponentHashAtIndex = CmpGetComponentHashAtIndex(v390);
                  v197 = v343;
                  v198 = ComponentHashAtIndex;
                  if ( CmpIsKeyDeletedForKeyBody(v343, 0LL) )
                  {
                    v33 = (*(_BYTE *)(v197 + 48) & 1) == 0;
                    v16 = -1073741444;
                    v189 = 6656LL;
                    if ( !v33 )
                      v16 = -1073740763;
                    goto LABEL_390;
                  }
                  v199 = v341;
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v336, v341) )
                  {
                    SymbolicLinkTarget = -1073741772;
                    v16 = -1073741772;
                    CmpRecordParseFailure(v77, 6912LL);
                    goto LABEL_291;
                  }
                  if ( !(unsigned __int8)CmpIsKeyStackDeleted(v121, v199) )
                  {
                    v16 = -1073741790;
                    SymbolicLinkTarget = -1073741790;
                    CmpRecordParseFailure(v77, 7168LL);
                    goto LABEL_291;
                  }
                  if ( *(PVOID *)(*(_QWORD *)v348 + 24LL) != CmpMasterHive )
                  {
                    v16 = -1073741790;
                    SymbolicLinkTarget = -1073741790;
                    CmpRecordParseFailure(v77, 7424LL);
                    goto LABEL_291;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)v348 + 176LL) & 0x20000) != 0 )
                  {
                    SymbolicLinkTarget = -1073741772;
                    v16 = -1073741772;
                    CmpRecordParseFailure(v77, 7680LL);
                    goto LABEL_291;
                  }
                  v200 = *(unsigned int *)(v77 + 40);
                  v201 = (unsigned int *)(v77 + 40);
                  v202 = *(_QWORD *)(v77 + 48);
                  if ( (_DWORD)v200 == -1 )
                  {
                    SymbolicLinkTarget = CmpCreateHiveRootCell(
                                           v202,
                                           (struct _SECURITY_SUBJECT_CONTEXT *)AccessState,
                                           v195,
                                           v77,
                                           (unsigned int *)(v77 + 40));
                    v16 = SymbolicLinkTarget;
                    if ( SymbolicLinkTarget < 0 )
                    {
                      v136 = 7808LL;
LABEL_289:
                      CmpRecordParseFailure(v77, v136);
LABEL_290:
                      v11 = BugCheckParameter3;
                      goto LABEL_291;
                    }
                  }
                  else
                  {
                    SymbolicLinkTarget = CmpUpdateHiveRootCellFlags(v202, v200);
                    v16 = SymbolicLinkTarget;
                    if ( SymbolicLinkTarget < 0 )
                    {
                      v136 = 7936LL;
                      goto LABEL_289;
                    }
                  }
                  v203 = BugCheckParameter3;
                  *(_DWORD *)AccessMode = 0;
                  *(_WORD *)(BugCheckParameter3 + 178) |= 2u;
                  LODWORD(GenericMapping) = v198;
                  v16 = CmpCreateKeyControlBlock(
                          *(_QWORD *)(v77 + 48),
                          -1,
                          v203,
                          *(_QWORD *)(v77 + 80),
                          1,
                          v195,
                          GenericMapping,
                          *(_QWORD *)AccessMode,
                          &v363);
                  SymbolicLinkTarget = v16;
                  v204 = BugCheckParameter3;
                  *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v352 + 2) & 0xFFFD;
                  if ( v16 < 0 )
                  {
                    v136 = 0x2000LL;
                    goto LABEL_289;
                  }
                  v205 = v363;
                  v206 = v204;
                  BugCheckParameter3 = v363;
                  BugCheckParameter4 = v363;
                  CmpDereferenceKeyControlBlockUnsafe(v204);
                  CmpUnlockHashEntryByKcb(v206);
                  LOBYTE(v330[0]) = 0;
                  SymbolicLinkTarget = CmpStartKcbStackForTopLayerKcb((__int64)v383, v205);
                  v16 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget < 0 )
                  {
                    v136 = 8448LL;
                    goto LABEL_289;
                  }
                  *(_WORD *)(v206 + 178) |= 2u;
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v383);
                  v207 = v341;
                  v208 = v329;
                  *(_WORD *)(v206 + 178) &= ~2u;
                  v338 = 1;
                  SymbolicLinkTarget = CmpCreateKeyBody(
                                         BugCheckParameter3,
                                         v208,
                                         v77,
                                         v207,
                                         0,
                                         (__int64)&Object,
                                         (__int64)&v330[1] + 1);
                  v16 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget < 0 )
                  {
                    CmpRecordParseFailure(v77, 8576LL);
                    CmpUnlockKcbStack((__int64)v383);
                    goto LABEL_290;
                  }
                  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v206 + 24) + 2848LL), 1u);
                  v209 = BugCheckParameter3;
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(BugCheckParameter3 + 24) + 2848LL), 1u);
                  v210 = *(_QWORD *)(v209 + 24);
                  v211 = *(_DWORD *)(v210 + 88);
                  if ( !HvpMarkCellDirty(v210, *v201, 0) )
                  {
                    v77 = v339;
                    v16 = -1073741443;
                    SymbolicLinkTarget = -1073741443;
                    CmpRecordParseFailure(v339, 8704LL);
LABEL_431:
                    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(BugCheckParameter3 + 24) + 2848LL));
                    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v206 + 24) + 2848LL));
                    CmpUnlockKcbStack((__int64)v383);
                    goto LABEL_290;
                  }
                  SymbolicLinkTarget = CmpCreateChild(
                                         *(__int64 *)v336,
                                         (__int64)v121,
                                         (__int64)AccessState,
                                         v195,
                                         v339,
                                         10,
                                         1,
                                         v341);
                  v16 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget < 0 )
                  {
                    v77 = v339;
                    goto LABEL_431;
                  }
                  v212 = *v201;
                  v213 = BugCheckParameter3;
                  v214 = BugCheckParameter3;
                  *(_DWORD *)(BugCheckParameter3 + 32) = v212;
                  KeyNodeForKcb = CmpGetKeyNodeForKcb(v214, (__int64)v364, 1);
                  *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v206 + 32);
                  ++*(_QWORD *)(v213 + 296);
                  CmpRebuildKcbCacheFromNode(v213, KeyNodeForKcb);
                  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v213 + 24) + 16LL))(*(_QWORD *)(v213 + 24), v364);
                  if ( !v211 )
                    HvResetDirtyData(*(_QWORD *)(v213 + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v213 + 24) + 2848LL));
                  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v206 + 24) + 2848LL));
                  *(_WORD *)(v206 + 4) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v213);
                  v77 = v339;
                  *(_QWORD *)(v206 + 96) = v213;
                  CmpUnlockHashEntry(*(PVOID *)(v77 + 48), 0);
                  v217 = v341;
                  *(_DWORD *)(v77 + 32) = 1;
                  goto LABEL_567;
                }
                if ( (*(_DWORD *)v77 & 0x20) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v121);
                  v218 = *(_QWORD *)v336;
                  CmpUnlockKcbStack(*(__int64 *)v336);
                  CmpLockKcbStackTopExclusiveRestShared(v218);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v121);
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(v218, v190) )
                  {
                    SymbolicLinkTarget = -1073741772;
                    v16 = -1073741772;
                    CmpRecordParseFailure(v77, 8960LL);
                    goto LABEL_291;
                  }
                  if ( (*(_DWORD *)(*v159 + 176LL) & 0x20000) != 0 )
                  {
                    SymbolicLinkTarget = -1073741772;
                    v16 = -1073741772;
                    CmpRecordParseFailure(v77, 9216LL);
                    goto LABEL_291;
                  }
                  v219 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v390, v330[3]);
                  v217 = v341;
                  v220 = v329;
                  v221 = *(_DWORD *)(v77 + 24) >> 2;
                  LOBYTE(v221) = (*(_DWORD *)(v77 + 24) & 4) != 0;
                  if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                           v221,
                                           v336[0],
                                           (_DWORD)AccessState,
                                           v329,
                                           16 * (*(_DWORD *)(v77 + 24) & 2u),
                                           v221,
                                           v341,
                                           (__int64)&SymbolicLinkTarget) )
                  {
                    v16 = SymbolicLinkTarget;
                    CmpRecordParseFailure(v77, 9472LL);
                    goto LABEL_291;
                  }
                  CmpCleanUpKcbValueCache(v11);
                  *(_WORD *)(v11 + 178) |= 0x40u;
                  *(_DWORD *)(v11 + 88) = *(_DWORD *)(v77 + 56);
                  SymbolicLinkTarget = CmpCreateKeyBody(
                                         v11,
                                         v220,
                                         v77,
                                         v217,
                                         1,
                                         (__int64)&Object,
                                         (__int64)&v330[1] + 1);
                  v16 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget >= 0 )
                  {
                    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v121, v217) )
                    {
LABEL_567:
                      if ( *(_DWORD *)(v77 + 32) == 1 )
                        goto LABEL_687;
                      v250 = 0LL;
                      v251 = (*(unsigned __int8 *)(v77 + 24) >> 2) & 1;
                      for ( *(_DWORD *)&v330[3] = v251; v183 >= 0; --v183 )
                      {
                        if ( v183 < 2 )
                          v252 = *(_QWORD *)&v121[2 * v183 + 2];
                        else
                          v252 = *(_QWORD *)(*((_QWORD *)v121 + 3) + 8LL * (v183 - 2));
                        v254 = *(_WORD *)(v252 + 58);
                        if ( v254 && *(_BYTE *)(v252 + 57) == 1 )
                          break;
                        if ( *(_DWORD *)(v252 + 32) != -1 )
                        {
                          v250 = v252;
                          if ( v254 )
                          {
                            if ( *(_BYTE *)(v252 + 57) )
                              break;
                          }
                        }
                      }
                      v255 = *(_QWORD *)(v250 + 80);
                      if ( v217 )
                      {
                        v366 = 0LL;
                        PrevElement = CmListGetPrevElement(v250 + 200, &v366, v216, v17);
                        if ( PrevElement )
                        {
                          while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56))
                               || *(_DWORD *)(PrevElement + 68) != 9 )
                          {
                            PrevElement = CmListGetPrevElement(v250 + 200, &v366, v257, v17);
                            if ( !PrevElement )
                              goto LABEL_610;
                          }
                          v255 = *(_QWORD *)(PrevElement + 88);
                        }
                      }
LABEL_610:
                      v258 = AccessState;
                      if ( (_BYTE)v251 )
                      {
                        LOBYTE(v17) = 1;
                        if ( (int)CmpSetAccessStateForBackupRestore(AccessState, v329, v255 + 32, v17) < 0 )
                          goto LABEL_686;
                      }
                      v259 = Object;
                      OriginalDesiredAccess = v258->OriginalDesiredAccess;
                      memset(v379, 0, sizeof(v379));
                      v261 = *((_QWORD *)Object + 1);
                      Privileges = 0LL;
                      WORD1(v379[0]) = -1;
                      v262 = *(_QWORD *)(v261 + 24);
                      if ( (*(_DWORD *)(v262 + 144) & 0x100000) != 0 )
                      {
                        if ( (OriginalDesiredAccess & 0xD0026) != 0 )
                        {
                          if ( (OriginalDesiredAccess & 0xD0002) != 0 )
                          {
                            started = -1073741790;
                          }
                          else if ( (*(_DWORD *)(v262 + 5360) & 0x2000) != 0 )
                          {
                            if ( *(_BYTE *)(v261 + 57) )
                            {
                              started = -1073741790;
                            }
                            else
                            {
                              started = CmpStartKcbStackForTopLayerKcb((__int64)v379, v261);
                              if ( started >= 0 )
                              {
                                v264 = *(_WORD *)(v261 + 58) - 1;
                                if ( v264 >= 0 )
                                {
                                  while ( 1 )
                                  {
                                    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v379, v264);
                                    WORD1(v379[0]) = v264;
                                    v266 = KcbAtLayerHeight;
                                    if ( (unsigned __int8)CmpIsKeyStackDeleted(v379, 0LL) )
                                    {
LABEL_630:
                                      started = -1073741790;
                                      goto LABEL_632;
                                    }
                                    if ( (*(_DWORD *)(*(_QWORD *)(v266 + 24) + 144LL) & 0x100000) == 0 )
                                      break;
                                    if ( (*(_DWORD *)(*(_QWORD *)(v261 + 24) + 5360LL) & 0x2000) == 0
                                      || *(_BYTE *)(v261 + 57) )
                                    {
                                      goto LABEL_630;
                                    }
                                    if ( --v264 < 0 )
                                      goto LABEL_632;
                                  }
                                  started = 0;
LABEL_632:
                                  LOBYTE(v251) = v330[3];
                                }
                                v258 = AccessState;
                              }
                            }
                          }
                          else
                          {
                            started = -1073741790;
                          }
                        }
                        else
                        {
                          started = 0;
                        }
                      }
                      else
                      {
                        started = 0;
                      }
                      v267 = Privileges;
                      if ( Privileges )
                        MiDeleteSubsection(Privileges);
                      if ( started < 0 )
                        goto LABEL_686;
                      if ( (_BYTE)v251 && !v258->RemainingDesiredAccess
                        || !v258->OriginalDesiredAccess && (*(_DWORD *)v77 & 0x1000) != 0 )
                      {
                        goto LABEL_687;
                      }
                      v268 = Object;
                      v269 = 0LL;
                      v359 = 4294901760LL;
                      v360[0] = 0LL;
                      v270 = *((_DWORD *)Object + 12);
                      v360[1] = 0LL;
                      v361 = 0LL;
                      if ( (v270 & 9) != 0 )
                      {
                        v271 = AccessState;
                        LOBYTE(v272) = 0;
                        AccessStatus = -1073741444;
                        goto LABEL_675;
                      }
                      v273 = v259[1];
                      v272 = 0LL;
                      v274 = *(_WORD *)(v273 + 58);
                      if ( v274 >= 2 && v274 != 1 )
                      {
                        v275 = 8LL * (unsigned int)(v274 - 1);
                        v276 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                          (__int64)v267,
                                                          v275,
                                                          0x35364D43u);
                        v272 = v276;
                        if ( !v276 )
                        {
                          v271 = AccessState;
                          AccessStatus = -1073741670;
LABEL_674:
                          LOBYTE(v251) = v330[3];
LABEL_675:
                          if ( v269 )
                            MiDeleteSubsection(v269);
                          v77 = v339;
                          if ( !(_BYTE)v272 )
                          {
                            if ( (_BYTE)v251 )
                            {
LABEL_686:
                              v16 = -1073741790;
                              SymbolicLinkTarget = -1073741790;
                              CmpRecordParseFailure(v77, 15584LL);
LABEL_690:
                              HIBYTE(v335) = 0;
                              if ( v338 )
                                CmpUnlockKcbStack((__int64)v383);
                              goto LABEL_290;
                            }
                            if ( (int)CmpVEPerformOpenAccessCheck(Object, v339, AccessStatus) < 0 )
                            {
                              if ( KeGetCurrentThread()->PreviousMode == 1
                                && (SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process),
                                    SessionId != RtlGetCurrentServiceSessionId())
                                && (v271->RemainingDesiredAccess & 0xD0026) != 0
                                && (unsigned __int8)CmpCheckWrpKeyAccess(v121) )
                              {
                                BugCheckParameter3 = BugCheckParameter4;
                                CmpPublishEventForPcaResolver(BugCheckParameter4);
                              }
                              else
                              {
                                BugCheckParameter3 = BugCheckParameter4;
                              }
                              goto LABEL_686;
                            }
                          }
LABEL_687:
                          *v385 = Object;
                          Object = 0LL;
                          if ( !*(_DWORD *)(v77 + 32) )
                            *(_DWORD *)(v77 + 32) = 2;
                          v16 = HIBYTE(v330[1]) != 0 ? 0x40000016 : 0;
                          SymbolicLinkTarget = v16;
                          goto LABEL_690;
                        }
                        memset(v276, 0, v275);
                      }
                      v277 = *(_WORD *)(v273 + 58);
                      LOWORD(v359) = v274;
                      v361 = v272;
                      WORD1(v359) = v277;
                      if ( v277 )
                      {
                        v278 = *(_QWORD *)(v273 + 184);
                        if ( v278 )
                        {
                          do
                          {
                            CmpSetKcbAtLayerHeight(&v359, (unsigned __int16)v277, *(_QWORD *)(v278 + 16));
                            v278 = *(_QWORD *)(v279 + 24);
                            v277 = v280 - 1;
                          }
                          while ( v278 );
                          v272 = v361;
                          v277 = WORD1(v359);
                        }
                      }
                      else
                      {
                        v360[0] = v273;
                      }
                      AccessStatus = 0;
                      for ( j = 0LL; v277 >= 0; --v277 )
                      {
                        if ( v277 < 2 )
                          v282 = v360[v277];
                        else
                          v282 = *((_QWORD *)v272 + v277 - 2);
                        v283 = *(_WORD *)(v282 + 58);
                        if ( v283 && *(_BYTE *)(v282 + 57) == 1 )
                          break;
                        if ( *(_DWORD *)(v282 + 32) != -1 )
                        {
                          j = v282;
                          if ( v283 )
                          {
                            if ( *(_BYTE *)(v282 + 57) )
                              break;
                          }
                        }
                      }
                      v284 = *(_QWORD *)(j + 80);
                      v285 = KeGetCurrentThread();
                      v271 = AccessState;
                      --v285->KernelApcDisable;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)v271->SubjectSecurityContext.PrimaryToken + 6), 1u);
                      if ( v271->SubjectSecurityContext.ClientToken )
                      {
                        v286 = KeGetCurrentThread();
                        --v286->KernelApcDisable;
                        ExAcquireResourceSharedLite(*((PERESOURCE *)v271->SubjectSecurityContext.ClientToken + 6), 1u);
                      }
                      RemainingDesiredAccess = v271->RemainingDesiredAccess;
                      HIDWORD(TokenInformation) = 0;
                      v367 = 0LL;
                      v288 = SeAccessCheck(
                               (PSECURITY_DESCRIPTOR)(v284 + 32),
                               &v271->SubjectSecurityContext,
                               1u,
                               RemainingDesiredAccess,
                               v271->PreviouslyGrantedAccess,
                               &v367,
                               (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                               v329,
                               (PACCESS_MASK)&TokenInformation + 1,
                               &AccessStatus);
                      v289 = v367;
                      LOBYTE(v272) = v288;
                      if ( v367 )
                      {
                        SeAppendPrivileges(v271, v367);
                        MiDeleteSubsection(v289);
                      }
                      if ( (_BYTE)v272 )
                      {
                        v290 = HIDWORD(TokenInformation);
                        v271->PreviouslyGrantedAccess |= HIDWORD(TokenInformation);
                        v271->RemainingDesiredAccess &= ~(v290 | 0x2000000);
                      }
                      v268[24] |= 2u;
                      if ( v329 )
                        SeOpenObjectAuditAlarmWithTransaction(
                          (PUNICODE_STRING)CmKeyObjectType + 1,
                          Object,
                          0LL,
                          (PSECURITY_DESCRIPTOR)(v284 + 32),
                          v271,
                          0,
                          (BOOLEAN)v272,
                          v329,
                          0LL,
                          &v271->GenerateOnClose);
                      v268[24] &= ~2u;
                      ExReleaseResourceLite(*((PERESOURCE *)v271->SubjectSecurityContext.PrimaryToken + 6));
                      KeLeaveCriticalRegion();
                      ClientToken = (PERESOURCE *)v271->SubjectSecurityContext.ClientToken;
                      if ( ClientToken )
                      {
                        ExReleaseResourceLite(ClientToken[6]);
                        KeLeaveCriticalRegion();
                      }
                      v269 = v361;
                      BugCheckParameter3 = BugCheckParameter4;
                      goto LABEL_674;
                    }
                    SymbolicLinkTarget = CmpCreateChild(
                                           *(__int64 *)v336,
                                           (__int64)v121,
                                           (__int64)AccessState,
                                           v219,
                                           v77,
                                           64,
                                           0,
                                           v217);
                    v16 = SymbolicLinkTarget;
                    if ( SymbolicLinkTarget >= 0 )
                    {
                      *(_DWORD *)(v77 + 32) = 1;
                      goto LABEL_567;
                    }
                  }
                  goto LABEL_291;
                }
                v222 = v183;
                v365 = 0LL;
                if ( v183 < 0 )
                  goto LABEL_451;
                while ( 1 )
                {
                  if ( v222 < 2 )
                    v223 = *(_QWORD *)&v121[2 * v222 + 2];
                  else
                    v223 = *(_QWORD *)(*((_QWORD *)v121 + 3) + 8LL * (v222 - 2));
                  if ( *(_WORD *)(v223 + 58) && *(_BYTE *)(v223 + 57) == 1 )
                    goto LABEL_451;
                  if ( *(_DWORD *)(v223 + 32) != -1 )
                    break;
                  if ( --v222 < 0 )
                    goto LABEL_451;
                }
                if ( v190 )
                {
                  v224 = CmListGetNextElement(*((_QWORD *)v121 + 1) + 200LL, &v365, 32LL);
                  if ( v224 )
                  {
                    while ( 1 )
                    {
                      v226 = *(_DWORD *)(v224 + 68);
                      if ( v226 == 2 || v226 == 11 )
                        break;
                      v224 = CmListGetNextElement(v225 + 200, &v365, 32LL);
                      if ( !v224 )
                        goto LABEL_460;
                    }
                    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v224 + 56)) )
                    {
LABEL_451:
                      if ( (_BYTE)v335 )
                      {
                        SymbolicLinkTarget = -1073741811;
                        v16 = -1073741811;
                        CmpRecordParseFailure(v77, 9728LL);
                        goto LABEL_291;
                      }
                      if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v336, v190)
                        || !(unsigned __int8)CmRmIsKCBVisible(*v159, v190) )
                      {
                        SymbolicLinkTarget = -1073741772;
                        v16 = -1073741772;
                        CmpRecordParseFailure(v77, 9984LL);
                      }
                      else
                      {
                        if ( (*(_DWORD *)(*v159 + 176LL) & 0x20000) != 0 )
                        {
                          SymbolicLinkTarget = -1073741772;
                          v16 = -1073741772;
                          CmpRecordParseFailure(v77, 10240LL);
                          goto LABEL_291;
                        }
                        if ( (*(_DWORD *)v77 & 1) != 0 )
                        {
                          if ( *(PVOID *)(v11 + 24) != CmpMasterHive || !CmpNoMasterCreates )
                          {
                            v241 = (UNICODE_STRING *)CmpGetComponentNameAtIndex(v390, v330[3]);
                            LOBYTE(v242) = 1;
                            SymbolicLinkTarget = CmpDoWritethroughReparse(
                                                   v11,
                                                   (int)v121,
                                                   v336[0],
                                                   v242,
                                                   v241,
                                                   v77,
                                                   v346);
                            v16 = SymbolicLinkTarget;
                            if ( SymbolicLinkTarget != -1073741199 )
                            {
                              CmpRecordParseFailure(v77, 11392LL);
                              goto LABEL_291;
                            }
                            if ( *(_DWORD *)(*v159 + 32LL) == -1 )
                            {
                              v243 = v341;
                              if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                                       16 * (*(_DWORD *)(v77 + 24) & 2u),
                                                       v336[0],
                                                       (_DWORD)AccessState,
                                                       v329,
                                                       16 * (*(_DWORD *)(v77 + 24) & 2u),
                                                       (*(_DWORD *)(v77 + 24) & 4) != 0,
                                                       v341,
                                                       (__int64)&SymbolicLinkTarget) )
                              {
                                if ( KeGetCurrentThread()->PreviousMode == 1 )
                                {
                                  v244 = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                                  if ( v244 != RtlGetCurrentServiceSessionId() )
                                  {
                                    if ( (unsigned __int8)CmpCheckWrpKeyAccess(*(_QWORD *)v336) )
                                      CmpPublishEventForPcaResolver(*v159);
                                  }
                                }
                                v16 = SymbolicLinkTarget;
                                CmpRecordParseFailure(v77, 11520LL);
                                v11 = BugCheckParameter4;
                                goto LABEL_291;
                              }
                              CmpUnlockKcbStack((__int64)v121);
                              CmpUnlockKcbStack(*(__int64 *)v336);
                              if ( HIBYTE(v330[0]) )
                              {
                                CmpUnlockKcb(*(_QWORD *)(v343 + 8));
                                HIBYTE(v330[0]) = 0;
                              }
                              LOBYTE(v245) = 1;
                              v246 = CmpPromoteKey(*(_QWORD *)v336, 0LL, v245);
                              if ( v246 < 0 )
                              {
                                if ( v246 == -1073741444 )
                                  v246 = -1073741772;
                                SymbolicLinkTarget = v246;
                                v16 = v246;
                                CmpRecordParseFailure(v77, 11776LL);
                                goto LABEL_702;
                              }
                              CmpLockKcbStackTopExclusiveRestShared((__int64)v121);
                            }
                            else
                            {
                              CmpUnlockKcbStack((__int64)v121);
                              CmpUnlockKcbStack(*(__int64 *)v336);
                              CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v336);
                              CmpLockKcbStackTopExclusiveRestShared((__int64)v121);
                              v243 = v341;
                            }
                            if ( !(unsigned __int8)CmRmIsKCBVisible(v11, v243) )
                            {
                              SymbolicLinkTarget = -1073741772;
                              v16 = -1073741772;
                              CmpRecordParseFailure(v77, 12032LL);
                              v328 = 1;
                              goto LABEL_291;
                            }
                            if ( (unsigned __int8)CmpIsKeyStackDeleted(v121, v243) )
                            {
                              if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v336, v243)
                                || !(unsigned __int8)CmRmIsKCBVisible(*v159, v243) )
                              {
                                SymbolicLinkTarget = -1073741772;
                                v16 = -1073741772;
                                CmpRecordParseFailure(v77, 12288LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              if ( (*(_DWORD *)(*v159 + 176LL) & 0x20000) != 0 )
                              {
                                SymbolicLinkTarget = -1073741772;
                                v16 = -1073741772;
                                CmpRecordParseFailure(v77, 12544LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              Logic = CmpVEExecuteCreateLogic(
                                        *v159,
                                        v346,
                                        (_DWORD)v241,
                                        v329,
                                        16 * (*(_DWORD *)(v77 + 24) & 2u),
                                        v243,
                                        v77,
                                        v346);
                              SymbolicLinkTarget = Logic;
                              v16 = Logic;
                              if ( Logic == -1073741739 )
                              {
                                *(_DWORD *)v77 |= 0x400u;
                                SymbolicLinkTarget = -1073741267;
                                v16 = -1073741267;
                                CmpRecordParseFailure(v77, 12672LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              if ( Logic != -1073741199 )
                              {
                                CmpRecordParseFailure(v77, 12736LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              v248 = *(_QWORD *)v336;
                              if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                                       16 * (*(_DWORD *)(v77 + 24) & 2u),
                                                       v336[0],
                                                       (_DWORD)AccessState,
                                                       v329,
                                                       16 * (*(_DWORD *)(v77 + 24) & 2u),
                                                       (*(_DWORD *)(v77 + 24) & 4) != 0,
                                                       v341,
                                                       (__int64)&SymbolicLinkTarget) )
                              {
                                if ( KeGetCurrentThread()->PreviousMode == 1 )
                                {
                                  v249 = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                                  if ( v249 != RtlGetCurrentServiceSessionId() )
                                  {
                                    if ( (unsigned __int8)CmpCheckWrpKeyAccess(v248) )
                                      CmpPublishEventForPcaResolver(*v159);
                                  }
                                }
                                v16 = SymbolicLinkTarget;
                                CmpRecordParseFailure(v77, 12800LL);
                                v11 = BugCheckParameter4;
                                v328 = 1;
                                goto LABEL_291;
                              }
                              v217 = v341;
                              SymbolicLinkTarget = CmpCreateKeyBody(
                                                     v11,
                                                     v329,
                                                     v77,
                                                     v341,
                                                     1,
                                                     (__int64)&Object,
                                                     (__int64)&v330[1] + 1);
                              v16 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                              {
                                CmpRecordParseFailure(v77, 12928LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              SymbolicLinkTarget = CmpCreateChild(
                                                     *(__int64 *)v336,
                                                     (__int64)v121,
                                                     (__int64)AccessState,
                                                     &v241->Length,
                                                     v77,
                                                     8 * (*(_WORD *)(v77 + 24) & 2u),
                                                     0,
                                                     v217);
                              v16 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                              {
                                CmpRecordParseFailure(v77, 12992LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              *(_DWORD *)(v77 + 32) = 1;
                            }
                            else
                            {
                              if ( CmpIsKeyStackSymlink((__int64)v121) && (*(_DWORD *)v77 & 0x200) == 0 )
                              {
                                if ( (*(_DWORD *)(v77 + 24) & 2) == 0 )
                                {
                                  CmpUnlockKcbStack(*(__int64 *)v336);
                                  if ( HIBYTE(v330[0]) )
                                  {
                                    CmpUnlockKcb(*(_QWORD *)(v343 + 8));
                                    HIBYTE(v330[0]) = 0;
                                  }
                                  if ( LOBYTE(v330[0]) )
                                  {
                                    CmpUnlockHashEntryByKcb(v11);
                                    LOBYTE(v330[0]) = 0;
                                  }
                                  SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                         (__int64)v121,
                                                         (__int64)v390,
                                                         0,
                                                         0,
                                                         v243,
                                                         v346,
                                                         (ULONG_PTR *)(v77 + 88));
                                  v16 = SymbolicLinkTarget;
                                  if ( SymbolicLinkTarget >= 0 )
                                  {
                                    *(_DWORD *)v77 &= ~8u;
                                    if ( !*(_QWORD *)(v77 + 64) )
                                    {
                                      v253 = *(_QWORD *)(v11 + 24);
                                      if ( (*(_DWORD *)(v253 + 5360) & 1) != 0 )
                                        *(_QWORD *)(v77 + 64) = v253;
                                    }
                                    v16 = 260;
                                    SymbolicLinkTarget = 260;
                                    CmpRecordParseFailure(v77, 13440LL);
                                  }
                                  else
                                  {
                                    CmpRecordParseFailure(v77, 13312LL);
                                  }
                                  goto LABEL_716;
                                }
                                v16 = -1073741771;
                                SymbolicLinkTarget = -1073741771;
                                CmpRecordParseFailure(v77, 13056LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              if ( (*(_DWORD *)v352 & 0x20000) != 0 )
                              {
                                SymbolicLinkTarget = -1073741772;
                                v16 = -1073741772;
                                CmpRecordParseFailure(v77, 13568LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              if ( (*(_DWORD *)(v77 + 24) & 2) != 0 )
                              {
                                v16 = -1073741771;
                                SymbolicLinkTarget = -1073741771;
                                CmpRecordParseFailure(v77, 13824LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              SymbolicLinkTarget = CmpDoWritethroughReparse(v11, (int)v121, v336[0], 0, 0LL, v77, v346);
                              v16 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget != -1073741199 )
                              {
                                CmpRecordParseFailure(v77, 13888LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              SymbolicLinkTarget = CmpVEExecuteOpenLogic(v11);
                              v16 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget != -1073741199 )
                              {
                                CmpRecordParseFailure(v77, 13952LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                              v217 = v341;
                              SymbolicLinkTarget = CmpCreateKeyBody(
                                                     v11,
                                                     v329,
                                                     v77,
                                                     v341,
                                                     1,
                                                     (__int64)&Object,
                                                     (__int64)&v330[1] + 1);
                              v16 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                              {
                                CmpRecordParseFailure(v77, 14016LL);
                                v328 = 1;
                                goto LABEL_291;
                              }
                            }
                            v328 = 1;
                            goto LABEL_567;
                          }
                          if ( CmpLoadingSystemHivesActive
                            && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                            && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                            && (v238 = CmpGetComponentNameAtIndex(v390, v330[3]),
                                (unsigned __int8)CmpWaitForHiveMount(v238, v239, v240, v77 + 136)) )
                          {
                            *(_DWORD *)v77 |= 0x100u;
                            v16 = 259;
                            SymbolicLinkTarget = 259;
                            CmpRecordParseFailure(v77, 11008LL);
                          }
                          else
                          {
                            SymbolicLinkTarget = -1073741811;
                            v16 = -1073741811;
                            CmpRecordParseFailure(v77, 11264LL);
                          }
                        }
                        else if ( CmpLoadingSystemHivesActive
                               && (v11 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                               && *(PVOID *)(BugCheckParameter4 + 24) == CmpMasterHive
                               && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x7FE00000) == 0x600000
                               && (v235 = CmpGetComponentNameAtIndex(v390, v330[3]),
                                   (unsigned __int8)CmpWaitForHiveMount(v235, v236, v237, v77 + 136)) )
                        {
                          *(_DWORD *)v77 |= 0x100u;
                          v16 = 259;
                          SymbolicLinkTarget = 259;
                          CmpRecordParseFailure(v77, 10496LL);
                        }
                        else
                        {
                          SymbolicLinkTarget = -1073741772;
                          v16 = -1073741772;
                          CmpRecordParseFailure(v77, 10752LL);
                        }
                      }
LABEL_291:
                      v137 = *((_WORD *)v121 + 1);
                      v138 = 0;
                      if ( v137 >= 0 )
                      {
                        v139 = (ULONG_PTR *)(v121 + 2);
                        do
                        {
                          if ( v138 < 2 )
                            v140 = v139;
                          else
                            v140 = (ULONG_PTR *)(*((_QWORD *)v121 + 3) + 8LL * (v138 - 2));
                          v293 = *v140;
                          v294 = *(_DWORD *)(v293 + 4) & 0x80000;
                          if ( *(struct _KTHREAD **)(v293 + 48) == KeGetCurrentThread() )
                            *(_QWORD *)(v293 + 48) = 0LL;
                          else
                            _InterlockedDecrement((volatile signed __int32 *)(v293 + 48));
                          ExReleasePushLockEx(v293 + 40, 0LL);
                          if ( v294 && (*(_DWORD *)(v293 + 4) & 0x80000) != 0 )
                            CmpFreeKeyControlBlock(v293);
                          ++v138;
                          ++v139;
                        }
                        while ( v138 <= v137 );
                        v11 = BugCheckParameter4;
                        v16 = SymbolicLinkTarget;
                        v77 = v339;
                      }
LABEL_702:
                      if ( v328 )
                      {
                        v295 = 0;
                        v296 = *(_WORD *)(*(_QWORD *)v336 + 2LL);
                        if ( v296 >= 0 )
                        {
                          v297 = *(_QWORD *)v336;
                          v298 = *(_QWORD *)v336 + 8LL;
                          do
                          {
                            if ( v295 < 2 )
                              v299 = (ULONG_PTR *)v298;
                            else
                              v299 = (ULONG_PTR *)(*(_QWORD *)(v297 + 24) + 8LL * (v295 - 2));
                            v300 = *v299;
                            v301 = *(_DWORD *)(v300 + 4) & 0x80000;
                            if ( *(struct _KTHREAD **)(v300 + 48) == KeGetCurrentThread() )
                              *(_QWORD *)(v300 + 48) = 0LL;
                            else
                              _InterlockedDecrement((volatile signed __int32 *)(v300 + 48));
                            ExReleasePushLockEx(v300 + 40, 0LL);
                            if ( v301 && (*(_DWORD *)(v300 + 4) & 0x80000) != 0 )
                              CmpFreeKeyControlBlock(v300);
                            ++v295;
                            v298 += 8LL;
                          }
                          while ( v295 <= v296 );
                          v11 = BugCheckParameter4;
                          v16 = SymbolicLinkTarget;
                          v77 = v339;
                        }
                      }
LABEL_716:
                      if ( HIBYTE(v330[0]) )
                      {
                        v302 = *(_QWORD *)(v343 + 8);
                        v303 = *(_DWORD *)(v302 + 4) & 0x80000;
                        if ( *(struct _KTHREAD **)(v302 + 48) == KeGetCurrentThread() )
                          *(_QWORD *)(v302 + 48) = 0LL;
                        else
                          _InterlockedDecrement((volatile signed __int32 *)(v302 + 48));
                        ExReleasePushLockEx(v302 + 40, 0LL);
                        if ( v303 && (*(_DWORD *)(v302 + 4) & 0x80000) != 0 )
                          CmpFreeKeyControlBlock(v302);
                        v16 = SymbolicLinkTarget;
                        v11 = BugCheckParameter4;
                      }
                      if ( HIBYTE(v335) )
                        CmpUnlockHashEntry(*(PVOID *)(v77 + 48), 0);
                      goto LABEL_727;
                    }
                  }
                }
LABEL_460:
                v227 = v183;
                while ( 1 )
                {
                  v228 = v227 < 2
                       ? *(_QWORD *)&v121[2 * v227 + 2]
                       : *(_QWORD *)(*((_QWORD *)v121 + 3) + 8LL * (v227 - 2));
                  if ( *(_DWORD *)(v228 + 32) != -1 )
                    break;
                  if ( --v227 < 0 )
                    goto LABEL_466;
                }
                if ( (*(_DWORD *)(v228 + 176) & 0x100000) != 0 && (*(_DWORD *)v77 & 0x200) == 0 )
                {
                  if ( (*(_DWORD *)(v77 + 24) & 2) != 0 )
                  {
                    v16 = -1073741771;
                    SymbolicLinkTarget = -1073741771;
                    CmpRecordParseFailure(v77, 14080LL);
                    goto LABEL_291;
                  }
                  if ( v328 )
                  {
                    CmpUnlockKcbStack(*(__int64 *)v336);
                    v328 = 0;
                  }
                  if ( HIBYTE(v330[0]) )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v343 + 8));
                    HIBYTE(v330[0]) = 0;
                  }
                  if ( LOBYTE(v330[0]) )
                  {
                    CmpUnlockHashEntryByKcb(v11);
                    LOBYTE(v330[0]) = 0;
                  }
                  SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                         (__int64)v121,
                                         (__int64)v390,
                                         0,
                                         0,
                                         v190,
                                         v346,
                                         (ULONG_PTR *)(v77 + 88));
                  v16 = SymbolicLinkTarget;
                  if ( SymbolicLinkTarget >= 0 )
                  {
                    *(_DWORD *)v77 &= ~8u;
                    if ( !*(_QWORD *)(v77 + 64) )
                    {
                      v229 = *(_QWORD *)(v11 + 24);
                      if ( (*(_DWORD *)(v229 + 5360) & 1) != 0 )
                        *(_QWORD *)(v77 + 64) = v229;
                    }
                    v16 = 260;
                    SymbolicLinkTarget = 260;
                    CmpRecordParseFailure(v77, 14592LL);
                  }
                  else
                  {
                    CmpRecordParseFailure(v77, 14336LL);
                  }
                  goto LABEL_702;
                }
LABEL_466:
                if ( (_BYTE)v335 )
                {
                  SymbolicLinkTarget = -1073741811;
                  v16 = -1073741811;
                  CmpRecordParseFailure(v77, 14848LL);
                  goto LABEL_291;
                }
                if ( (*(_DWORD *)(v11 + 176) & 0x20000) != 0 )
                {
                  SymbolicLinkTarget = -1073741772;
                  v16 = -1073741772;
                  CmpRecordParseFailure(v77, 15104LL);
                  goto LABEL_291;
                }
                if ( (*(_DWORD *)(v77 + 24) & 2) != 0 )
                {
                  v16 = -1073741771;
                  SymbolicLinkTarget = -1073741771;
                  CmpRecordParseFailure(v77, 15360LL);
                  goto LABEL_291;
                }
                RtlInitUnicodeString(&v358, 0LL);
                v33 = *(_DWORD *)(v11 + 32) == -1;
                v230 = 0LL;
                SourceString = 0LL;
                v386 = 0LL;
                v387 = 0LL;
                v388 = 0LL;
                v389 = 0LL;
                if ( v33 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 5360LL) & 0x2000) != 0 )
                  {
                    v231 = CmpGetKcbAtLayerHeight((__int64)v121, *(_WORD *)(v11 + 58) - 1);
                    v232 = CmpKeyFullNameLength(v231);
                    v16 = CmpConstructNameWithStatus(v233, &SourceString);
                    if ( v16 >= 0 )
                    {
                      v358.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v232, 0x36364D43u);
                      if ( !v358.Buffer )
                      {
                        v16 = -1073741670;
                        CmpRecordParseFailure(v77, 66560LL);
                        v230 = (struct _PRIVILEGE_SET *)SourceString;
                        goto LABEL_499;
                      }
                      v358.MaximumLength = v232;
                      v230 = (struct _PRIVILEGE_SET *)SourceString;
                      v358.Length = 0;
                      RtlUnicodeStringCopy(&v358, SourceString);
                      v234 = (UNICODE_STRING *)v346;
                      ExFreePoolWithTag(*(PVOID *)(v346 + 8), 0);
                      *v234 = v358;
                      RtlInitUnicodeString(&v358, 0LL);
                      *(_DWORD *)(v77 + 24) |= 0x10u;
                      v16 = 872;
                      CmpRecordParseFailure(v77, 66816LL);
                    }
                    else
                    {
                      CmpRecordParseFailure(v77, 66304LL);
                      v230 = (struct _PRIVILEGE_SET *)SourceString;
                    }
                  }
                  else
                  {
                    v16 = -1073741199;
                  }
                }
                else
                {
                  v16 = -1073741199;
                }
                if ( v358.Buffer )
                  ExFreePoolWithTag(v358.Buffer, 0);
LABEL_499:
                if ( v230 )
                  MiDeleteSubsection(v230);
                SymbolicLinkTarget = v16;
                if ( v16 != -1073741199 )
                {
                  CmpRecordParseFailure(v77, 15424LL);
                  goto LABEL_291;
                }
                SymbolicLinkTarget = CmpVEExecuteOpenLogic(v11);
                v16 = SymbolicLinkTarget;
                if ( SymbolicLinkTarget != -1073741199 )
                {
                  CmpRecordParseFailure(v77, 15488LL);
                  goto LABEL_291;
                }
                v217 = v341;
                SymbolicLinkTarget = CmpCreateKeyBody(v11, v329, v77, v341, 0, (__int64)&Object, (__int64)&v330[1] + 1);
                v16 = SymbolicLinkTarget;
                if ( SymbolicLinkTarget < 0 )
                {
                  CmpRecordParseFailure(v77, 15552LL);
                  goto LABEL_291;
                }
                goto LABEL_567;
              }
LABEL_202:
              v77 = v339;
              goto LABEL_203;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              v92 = KeGetCurrentThread();
              v93 = (__int64)v92;
              LODWORD(TokenInformation) = 0;
              BugCheckParameter3 = (ULONG_PTR)v92->ApcState.Process;
              if ( (*(_DWORD *)(&v92[1].SwapListEntry + 1) & 8) == 0 )
                goto LABEL_191;
              v94 = KeGetCurrentThread();
              --v94->KernelApcDisable;
              p_WaitBlockList = (signed __int64 *)&v92[1].WaitBlockList;
              ExAcquirePushLockSharedEx((ULONG_PTR)&v92[1].WaitBlockList, 0LL);
              if ( (*(_DWORD *)(&v92[1].SwapListEntry + 1) & 8) != 0 )
              {
                v96 = (void *)(*(_QWORD *)((char *)&v92[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
                ObfReferenceObject(v96);
              }
              else
              {
                v96 = 0LL;
              }
              if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(p_WaitBlockList);
              KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
              KeLeaveCriticalRegionThread((__int64)v94);
              if ( v96 )
              {
                ObfDereferenceObject(v96);
              }
              else
              {
LABEL_191:
                v97 = BugCheckParameter3;
                v98 = (_QWORD *)(BugCheckParameter3 + 856);
                v99 = (void *)ObFastReferenceObject((signed __int64 *)(BugCheckParameter3 + 856));
                if ( !v99 )
                {
                  --*(_WORD *)(v93 + 484);
                  v100 = (signed __int64 *)(v97 + 728);
                  ExAcquirePushLockSharedEx((ULONG_PTR)v100, 0LL);
                  v99 = (void *)ObFastReferenceObjectLocked(v98);
                  if ( _InterlockedCompareExchange64(v100, 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared(v100);
                  KeAbPostRelease((ULONG_PTR)v100);
                  KeLeaveCriticalRegionThread(v93);
                }
                SeQueryInformationToken(v99, TokenVirtualizationEnabled, &TokenInformation);
                ObFastDereferenceObject(
                  (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
                  (unsigned __int64)v99);
                v91 = (_BYTE)TokenInformation == 0;
              }
              v53 = v348;
              v83 = v352;
            }
            if ( v90 )
            {
              v101 = *v90 | 1;
              *v90 = v101;
              if ( !v91 )
              {
                *v90 = v101 | 4;
                goto LABEL_207;
              }
              *v90 = v101 | 2;
            }
            if ( v91 )
            {
              v86 = BugCheckParameter4;
              goto LABEL_202;
            }
LABEL_207:
            v86 = BugCheckParameter4;
            goto LABEL_208;
          }
          if ( (*(_DWORD *)v339 & 0x400) != 0 )
          {
            CmpLockRegistryExclusive(v52, v51);
          }
          else
          {
            if ( CmpPuntBoot )
            {
LABEL_138:
              LOBYTE(v330[1]) = 1;
              goto LABEL_139;
            }
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            v78 = KeGetCurrentThread();
            --v78->KernelApcDisable;
            ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
            BugCheckParameter3 = BugCheckParameter4;
          }
          v55 = v342;
          goto LABEL_138;
        }
        v56 = v353.m128i_i16[0];
        v57 = 0;
        v58 = (_WORD *)v353.m128i_i64[1];
        v59 = v353.m128i_i16[1];
        while ( v57 < 32 )
        {
          if ( *v58 == 92 )
          {
            v60 = v57 + 1;
            v61 = v356.m128i_i16[0] - v56;
            LOWORD(SymbolicLinkTarget) = v60;
            v356.m128i_i16[0] = v61;
            v356.m128i_i16[1] = v61;
            if ( v60 > 8 && !(_BYTE)v52 )
            {
              v62 = CmpExpandPathInfo(v390, 65534LL);
              if ( v62 < 0 )
              {
                v53 = v348;
                goto LABEL_123;
              }
              v337 = 1;
            }
            v63 = v356;
            v64 = v60 - 1;
            v342 = v64;
            if ( v64 >= 8 )
              *(__m128i *)(16 * ((unsigned int)(v60 - 9) + 6LL) + *(_QWORD *)&v390[40]) = v356;
            else
              *(__m128i *)&v390[4 * v64 + 8] = v356;
            v356 = v63;
            v65 = 0;
            if ( v61 )
            {
              v66 = (unsigned __int16)(((unsigned __int16)(v61 - 1) >> 1) + 1);
              v67 = (WCHAR *)v356.m128i_i64[1];
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
              v64 = v342;
            }
            if ( v64 >= 8 )
              *(_DWORD *)(*(_QWORD *)&v390[40] + 4LL * (v64 - 8)) = v65;
            else
              v390[v64] = v65;
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
              v353.m128i_i16[0] = v56;
              v353.m128i_i64[1] = (__int64)v58;
              v353.m128i_i16[1] = v59;
            }
            v12 = v353;
            v57 = SymbolicLinkTarget;
            v52 = v337;
            v356 = v353;
          }
          else
          {
            ++v58;
            v56 -= 2;
            v59 -= 2;
            v353.m128i_i64[1] = (__int64)v58;
            v353.m128i_i16[1] = v59;
            v353.m128i_i16[0] = v56;
          }
          if ( !v56 )
            break;
        }
        v53 = v348;
        if ( v56 )
        {
          v16 = -1073741811;
          SymbolicLinkTarget = -1073741811;
        }
        else
        {
          v69 = v57 + 1;
          LOWORD(SymbolicLinkTarget) = v69;
          if ( v69 <= 8 || (_BYTE)v52 || (v62 = CmpExpandPathInfo(v390, 65534LL), v62 >= 0) )
          {
            v70 = (unsigned int)(v69 - 1);
            if ( (unsigned int)v70 >= 8 )
            {
              v52 = 2 * ((unsigned int)(v69 - 9) + 6LL);
              *(__m128i *)(*(_QWORD *)&v390[40] + 16 * ((unsigned int)(v69 - 9) + 6LL)) = v12;
            }
            else
            {
              *(__m128i *)&v390[4 * (unsigned int)v70 + 8] = v12;
            }
            v71 = _mm_cvtsi128_si32(v12);
            v356 = v12;
            v72 = 0;
            if ( v71 )
            {
              v73 = (WCHAR *)v356.m128i_i64[1];
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
              v69 = SymbolicLinkTarget;
            }
            if ( (unsigned int)v70 >= 8 )
            {
              v52 = (unsigned int)(v70 - 8);
              v332 = v69;
              *(_DWORD *)(*(_QWORD *)&v390[40] + 4 * v52) = v72;
              v62 = 0;
            }
            else
            {
              v390[v70] = v72;
              v62 = 0;
              v332 = v69;
            }
          }
LABEL_123:
          SymbolicLinkTarget = v62;
          v16 = v62;
          if ( v62 >= 0 )
            goto LABEL_72;
        }
        CmpRecordParseFailure(v339, 1280LL);
        v11 = BugCheckParameter3;
LABEL_729:
        if ( LOBYTE(v330[2]) )
          CmpUnlockHashEntryByKcb(BugCheckParameter2);
        if ( Object )
          ObDereferenceObjectDeferDelete(Object);
        goto LABEL_733;
      }
      memset(TransientPoolWithTag, 0, v43);
      v18 = BugCheckParameter2;
    }
    v45 = *(_WORD *)(v18 + 58);
    v42 = v36;
    LOWORD(v369) = v41;
    v372 = v36;
    WORD1(v369) = v45;
    if ( v45 )
    {
      v46 = *(_QWORD *)(v18 + 184);
      if ( v46 )
      {
        do
        {
          CmpSetKcbAtLayerHeight(&v369, v45, *(_QWORD *)(v46 + 16));
          v46 = *(_QWORD *)(v47 + 24);
          v45 = v48 - 1;
        }
        while ( v46 );
        v42 = v372;
      }
    }
    else
    {
      v370 = v18;
    }
    goto LABEL_55;
  }
  while ( 1 )
  {
    v38 = v37 >= 8 ? (int *)(*(_QWORD *)&v390[40] + 16 * (v37 - 8 + 6LL)) : &v390[4 * v37 + 8];
    if ( *(_WORD *)v38 > 0x200u )
      break;
    if ( ++v37 >= v332 )
      goto LABEL_42;
  }
  SymbolicLinkTarget = -1073741811;
  v16 = -1073741811;
  CmpRecordParseFailure(a7, 1024LL);
  v11 = BugCheckParameter4;
LABEL_733:
  if ( v376 )
    MiDeleteSubsection(v376);
  if ( v378 )
    MiDeleteSubsection(v378);
  if ( v384 )
    MiDeleteSubsection(v384);
  v304 = *(_QWORD *)v355;
  if ( *(_QWORD *)v355 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v11);
    CmpDereferenceKeyControlBlock(v304);
  }
  else if ( v11 )
  {
    v305 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 <= 1u )
    {
LABEL_745:
      v307 = *(_QWORD *)(BugCheckParameter4 + 24);
      v308 = *(_DWORD *)(BugCheckParameter4 + 8);
      v309 = *(_QWORD *)(v307 + 2800)
           + 24
           * ((unsigned int)(*(_DWORD *)(v307 + 2808) - 1) & ((101027 * (v308 ^ (v308 >> 9))) ^ ((unsigned __int64)(101027 * (v308 ^ (v308 >> 9))) >> 9)));
      ExAcquirePushLockExclusiveEx(v309, 0LL);
      *(_QWORD *)(v309 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(v307) )
        KeBugCheckEx(0x51u, 0x17uLL, v307, 8uLL, BugCheckParameter4);
      v310 = BugCheckParameter4;
      ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 40, 0LL);
      v311 = 0LL;
      v312 = BugCheckParameter4;
      *(_QWORD *)(v310 + 48) = KeGetCurrentThread();
      v313 = *(_QWORD *)(v312 + 184);
      if ( v313 )
      {
        v314 = *(_QWORD *)(v313 + 24);
        if ( v314 )
        {
          v311 = *(_QWORD *)(v314 + 16);
          CmpUnlockKcb(v312);
          CmpLockKcbExclusive(v311);
          CmpLockKcbExclusive(v312);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v312);
      v315 = *(_DWORD *)(v312 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v310 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v310 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v310 + 48));
      ExReleasePushLockEx(v310 + 40, 0LL);
      if ( v315 && (*(_DWORD *)(v312 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(BugCheckParameter4);
      if ( v311 )
        CmpUnlockKcb(v311);
      v316 = *(_QWORD *)(v307 + 2800)
           + 24
           * ((unsigned int)(*(_DWORD *)(v307 + 2808) - 1) & ((101027 * (v308 ^ (v308 >> 9))) ^ ((unsigned __int64)(101027 * (v308 ^ (v308 >> 9))) >> 9)));
      *(_QWORD *)(v316 + 8) = 0LL;
      ExReleasePushLockEx(v316, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v307 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PERESOURCE *)v307);
    }
    else
    {
      while ( 1 )
      {
        v306 = v305;
        v305 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v305 - 1, v305);
        if ( v305 == v306 )
          break;
        if ( v305 <= 1 )
          goto LABEL_745;
      }
    }
    v16 = SymbolicLinkTarget;
  }
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  v317 = v339;
  v318 = *(_DWORD *)(v339 + 96);
  if ( v318 && (v318 & 2) != 0 )
  {
    LOBYTE(v17) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(v339 + 112), 0LL, v17);
    *(_DWORD *)(v317 + 96) &= ~2u;
  }
  if ( LOBYTE(v330[1]) && !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v319) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v319);
    v16 = SymbolicLinkTarget;
  }
  v320 = *(_SLIST_ENTRY **)&v390[40];
  if ( *(_QWORD *)&v390[40] )
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
      RtlpInterlockedPushEntrySList(&P->ListHead, v320);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v320);
    }
    return (unsigned int)SymbolicLinkTarget;
  }
  return (unsigned int)v16;
}
