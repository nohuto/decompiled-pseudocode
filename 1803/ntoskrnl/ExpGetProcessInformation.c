/*
 * XREFs of ExpGetProcessInformation @ 0x1405A2940
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     RtlQueryPackageIdentity @ 0x14006E7F0 (RtlQueryPackageIdentity.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     SmIsCompressionProcess @ 0x1400B72A4 (SmIsCompressionProcess.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsIsProcessInSilo @ 0x1400F0EC0 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     KeQueryValuesThread @ 0x1400FE540 (KeQueryValuesThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExIsRestrictedCaller @ 0x14048C09C (ExIsRestrictedCaller.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     ExpCopyProcessInfo @ 0x140551690 (ExpCopyProcessInfo.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1405709B4 (KeSynchronizeWithDynamicProcessors.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall ExpGetProcessInformation(int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v5; // r15d
  int v6; // r8d
  bool v7; // cf
  unsigned int v8; // ebx
  char PreviousMode; // di
  PEPROCESS v10; // r13
  int SessionId; // esi
  unsigned int v12; // r8d
  __int64 v13; // r14
  unsigned int v14; // ebx
  int v15; // edi
  int v16; // eax
  signed __int64 v17; // rax
  _QWORD *v18; // r12
  char *p_Blink; // rsi
  struct _KTHREAD *v20; // r15
  signed __int64 *v21; // rdi
  _QWORD **v22; // r14
  int v23; // r12d
  _QWORD *j; // rbx
  unsigned int v25; // eax
  unsigned __int8 v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  struct _KTHREAD *v29; // r14
  char *v30; // rdi
  char *v31; // r12
  char *k; // rbx
  signed __int64 *v33; // rbx
  char *v34; // r14
  _QWORD *v35; // r15
  signed __int64 *v36; // rdi
  ULONG_PTR v37; // rbx
  ULONG_PTR v38; // r12
  char *v39; // rdi
  _QWORD *v40; // rbx
  __int64 v41; // rax
  bool v42; // cl
  int v43; // eax
  unsigned int v44; // eax
  _OWORD *v45; // rax
  _OWORD *v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  char v49; // cl
  __int64 v50; // rcx
  int v51; // eax
  unsigned __int64 v52; // r14
  char *PoolWithTag; // rax
  void *v54; // rdi
  const wchar_t *v55; // rcx
  unsigned int v56; // r8d
  _WORD *v57; // r12
  _WORD *v58; // r9
  _WORD *v59; // rdx
  unsigned __int64 v60; // r15
  unsigned int v61; // r14d
  unsigned int v62; // eax
  void *v63; // rax
  int *v64; // rcx
  _QWORD *p_Lock; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  int v67; // r14d
  __int64 *i; // rsi
  bool v69; // zf
  _LIST_ENTRY *v70; // rsi
  unsigned int v71; // eax
  PACCESS_TOKEN v72; // rdi
  ULONG_PTR v73; // r13
  size_t v74; // rcx
  unsigned int v75; // r15d
  unsigned int v76; // eax
  char *v77; // rcx
  _LIST_ENTRY *Flink; // rsi
  unsigned int v79; // eax
  unsigned int v80; // eax
  char *v81; // rcx
  struct _KTHREAD *v82; // r14
  signed __int64 *v83; // rsi
  __int64 result; // rax
  signed __int32 v85[8]; // [rsp+0h] [rbp-618h] BYREF
  int v86; // [rsp+40h] [rbp-5D8h]
  unsigned int v87; // [rsp+44h] [rbp-5D4h]
  NTSTATUS v88; // [rsp+48h] [rbp-5D0h]
  char v89; // [rsp+4Ch] [rbp-5CCh]
  __int64 *v90; // [rsp+50h] [rbp-5C8h]
  int v91; // [rsp+58h] [rbp-5C0h]
  PVOID v92; // [rsp+60h] [rbp-5B8h]
  unsigned int v93; // [rsp+68h] [rbp-5B0h]
  bool v94; // [rsp+6Ch] [rbp-5ACh]
  PVOID Object; // [rsp+70h] [rbp-5A8h]
  int v96; // [rsp+78h] [rbp-5A0h]
  void *v97; // [rsp+80h] [rbp-598h]
  char v98; // [rsp+88h] [rbp-590h]
  bool v99; // [rsp+8Bh] [rbp-58Dh]
  char *v100; // [rsp+98h] [rbp-580h]
  int *v101; // [rsp+A0h] [rbp-578h]
  int *v102; // [rsp+A8h] [rbp-570h]
  int v103; // [rsp+B0h] [rbp-568h]
  unsigned int *v104; // [rsp+B8h] [rbp-560h]
  size_t Size; // [rsp+C0h] [rbp-558h] BYREF
  PVOID P; // [rsp+C8h] [rbp-550h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-548h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-540h] BYREF
  void *v109; // [rsp+E0h] [rbp-538h]
  int v110; // [rsp+E8h] [rbp-530h] BYREF
  unsigned __int8 v111; // [rsp+ECh] [rbp-52Ch]
  unsigned __int8 v112; // [rsp+EDh] [rbp-52Bh]
  char v113; // [rsp+EEh] [rbp-52Ah]
  char v114; // [rsp+EFh] [rbp-529h]
  const wchar_t *v115; // [rsp+F0h] [rbp-528h]
  int v116; // [rsp+F8h] [rbp-520h]
  _WORD *v117; // [rsp+100h] [rbp-518h]
  void *v118; // [rsp+108h] [rbp-510h]
  __int64 *v119; // [rsp+110h] [rbp-508h]
  int *v120; // [rsp+118h] [rbp-500h]
  _QWORD *v121; // [rsp+120h] [rbp-4F8h]
  unsigned __int64 v122; // [rsp+128h] [rbp-4F0h]
  char *v123; // [rsp+130h] [rbp-4E8h]
  int v124; // [rsp+138h] [rbp-4E0h]
  int v125; // [rsp+140h] [rbp-4D8h]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4B0h]
  PEPROCESS v127; // [rsp+1B8h] [rbp-460h]
  HANDLE Handle[4]; // [rsp+1C0h] [rbp-458h] BYREF
  _QWORD v129[12]; // [rsp+1E0h] [rbp-438h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-3D8h] BYREF
  _OWORD v131[27]; // [rsp+290h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+440h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4D0h] [rbp-148h] BYREF

  v116 = a5;
  v120 = a1;
  v104 = a3;
  AppIdSize = 130LL;
  PackageSize = 254LL;
  v5 = 0;
  v92 = 0LL;
  Object = 0LL;
  v87 = 0;
  if ( a3 )
    *a3 = 0;
  v98 = a5 != 5;
  v6 = 136;
  if ( a5 == 5 )
    v6 = 80;
  v93 = v6;
  v96 = v6;
  v102 = v120;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !v104 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v89 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), (int)result >= 0) )
  {
    if ( ExIsRestrictedCaller(PreviousMode) )
      v89 = 1;
    v88 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (PEPROCESS)PsIdleProcess;
    v90 = (__int64 *)PsIdleProcess;
    v92 = PsIdleProcess;
    v86 = v8;
    while ( 1 )
    {
LABEL_10:
      if ( !v10 )
      {
        if ( v86 >= 0 && v102 && (*v102 = 0, v88 < 0) )
        {
          v86 = v88;
        }
        else if ( v104 )
        {
          *v104 = v87;
        }
        goto LABEL_202;
      }
      if ( (v10[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v10->Header.SignalState
        || (v71 = v10[1].ThreadSeed[0], v10 = (PEPROCESS)v92, v90 = (__int64 *)v92, v71)
        || *((PVOID *)v92 + 6) != (char *)v92 + 48 )
      {
        if ( !a4 || v10 != PsIdleProcess )
        {
          SessionId = MmGetSessionId((__int64)v10);
          v124 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(v10, CurrentServerSilo) )
            break;
        }
      }
LABEL_150:
      if ( v10 == PsIdleProcess )
        v10 = 0LL;
      p_Lock = &v10->Header.Lock;
      v127 = v10;
      while ( 1 )
      {
        v10 = 0LL;
        v90 = 0LL;
        v119 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v67 = 0;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( i = (__int64 *)(p_Lock ? p_Lock[93] : PsActiveProcessHead); i != &PsActiveProcessHead; i = (__int64 *)*i )
        {
          v10 = (PEPROCESS)(i - 93);
          v90 = i - 93;
          v119 = i - 93;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 93)) )
          {
            v67 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v69 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v69
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( p_Lock )
          ObfDereferenceObjectWithTag(p_Lock, 0x6E457350u);
        if ( !v67 )
        {
          v10 = 0LL;
          v90 = 0LL;
          v119 = 0LL;
        }
        p_Lock = &v10->Header.Lock;
        v127 = v10;
        if ( !v10 )
          break;
        if ( (v10[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v89 )
            goto LABEL_170;
          if ( ObOpenObjectByPointer(v10, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
          {
            ObCloseHandle(Handle[0], 0);
LABEL_170:
            v92 = v10;
            goto LABEL_10;
          }
        }
      }
      v10 = 0LL;
      v90 = 0LL;
      v92 = 0LL;
    }
    v13 = (__int64)v120 + v87;
    v101 = (int *)v13;
    v102 = (int *)v13;
    v91 = 624;
    v14 = v87 + 624;
    if ( v87 + 624 < v87 )
    {
      v14 = v12;
      v15 = -1073741675;
    }
    else
    {
      v15 = 0;
    }
    v87 = v14;
    v88 = v15;
    if ( v15 < 0 )
    {
      v86 = v15;
      goto LABEL_202;
    }
    memset(v129, 0, 0x58uLL);
    if ( v14 > a2 )
    {
      v86 = -1073741820;
      if ( !v104 )
      {
        p_Blink = (char *)Object;
        goto LABEL_269;
      }
    }
    else
    {
      v16 = ExpCopyProcessInfo(v13, (__int64)v10, v98, v129);
      v15 = v16;
      v88 = v16;
      if ( v16 < 0 )
      {
        v86 = v16;
        goto LABEL_202;
      }
      *(_QWORD *)v13 = 0LL;
      *(_DWORD *)(v13 + 100) = SessionId;
      *(_QWORD *)(v13 + 64) = 0LL;
      *(_DWORD *)(v13 + 56) = 0;
      if ( v10 == PsIdleProcess )
        *(_QWORD *)(v13 + 96) = 0LL;
      if ( v10 == (PEPROCESS)PsSecureSystemProcess )
      {
        v17 = qword_1403CB7B0[0] << 12;
        *(_QWORD *)(v13 + 144) = qword_1403CB7B0[0] << 12;
        *(_QWORD *)(v13 + 8) = v17;
      }
      if ( v15 < 0 )
      {
        v86 = v15;
        goto LABEL_202;
      }
    }
    v18 = (_QWORD *)(v13 + 256);
    v100 = (char *)(v13 + 256);
    if ( v10 == PsIdleProcess )
    {
      Flink = v10->ThreadListHead.Flink;
      if ( Flink == &v10->ThreadListHead )
      {
        p_Blink = 0LL;
      }
      else
      {
        p_Blink = (char *)&Flink[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
      }
      goto LABEL_35;
    }
    p_Blink = 0LL;
    v121 = 0LL;
    v20 = KeGetCurrentThread();
    v21 = (signed __int64 *)v92;
    v22 = (_QWORD **)((char *)v92 + 1160);
    v23 = 0;
    --v20->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v21 + 91), 0LL);
    for ( j = *v22; ; j = (_QWORD *)*j )
    {
      if ( j == v22 )
        goto LABEL_30;
      p_Blink = (char *)(j - 213);
      v121 = j - 213;
      if ( ObReferenceObjectSafeWithTag((__int64)(j - 213)) )
        break;
    }
    v23 = 1;
LABEL_30:
    if ( _InterlockedCompareExchange64(v21 + 91, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21 + 91);
    KeAbPostRelease((ULONG_PTR)(v21 + 91));
    KeLeaveCriticalRegionThread((__int64)v20);
    v5 = 0;
    if ( !v23 )
    {
      p_Blink = 0LL;
      v121 = 0LL;
    }
    v10 = (PEPROCESS)v92;
    v90 = (__int64 *)v92;
    v15 = v88;
    v14 = v87;
    v13 = (__int64)v102;
    v101 = v102;
    v18 = v100;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_35:
        Object = p_Blink;
        if ( !p_Blink )
        {
          v34 = (char *)v18;
          v109 = v18;
          v35 = v18;
          v97 = v18 + 46;
          v100 = (char *)(v18 + 46);
          if ( v86 >= 0 )
          {
            v36 = (signed __int64 *)&v10[1].Affinity.Bitmap[5];
            v37 = ObFastReferenceObject((signed __int64 *)&v10[1].Affinity.Bitmap[5]);
            if ( v37 )
            {
              v38 = 0LL;
            }
            else
            {
              v82 = KeGetCurrentThread();
              --v82->KernelApcDisable;
              v83 = (signed __int64 *)((char *)v92 + 728);
              ExAcquirePushLockSharedEx((ULONG_PTR)v92 + 728, 0LL);
              v37 = ObFastReferenceObjectLocked(&v10[1].Affinity.Bitmap[5]);
              v38 = 0LL;
              if ( _InterlockedCompareExchange64(v83, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v83);
              KeAbPostRelease((ULONG_PTR)v83);
              KeLeaveCriticalRegionThread((__int64)v82);
              v10 = (PEPROCESS)v92;
              v34 = (char *)v109;
            }
            v99 = SeSecurityAttributePresent(v37, (struct _KTHREAD *)&PspSysAppIdClaim);
            ObFastDereferenceObject(v36, v37);
            *(_QWORD *)(v34 + 52) = 0LL;
            *((_DWORD *)v34 + 84) = 0;
            v39 = (char *)v109;
            *((_QWORD *)v109 + 43) = *(_QWORD *)&v10[2].ThreadSeed[4] << 12;
            *((_QWORD *)v39 + 5) = v129[4];
            *((_DWORD *)v39 + 12) = 0;
            if ( v99 )
              *((_DWORD *)v39 + 12) = 1;
            v40 = v92;
            v41 = *((_QWORD *)v92 + 225);
            if ( v41 )
            {
              *(_OWORD *)v39 = *(_OWORD *)v41;
              *((_OWORD *)v39 + 1) = *(_OWORD *)(v41 + 16);
              *((_QWORD *)v39 + 4) = *(_QWORD *)(v41 + 32);
            }
            else
            {
              memset(v39, 0, 0x28uLL);
            }
            if ( (*((_DWORD *)v40 + 435) & 0x1000) != 0 )
            {
              v44 = *((_DWORD *)v39 + 12) & 0xFFFFFFE1 | 2;
            }
            else if ( v40 == (_QWORD *)PsSecureSystemProcess )
            {
              v44 = *((_DWORD *)v39 + 12) & 0xFFFFFFE1 | 4;
            }
            else if ( SmIsCompressionProcess(v40) )
            {
              v44 = *((_DWORD *)v39 + 12) & 0xFFFFFFE1 | 6;
            }
            else
            {
              v42 = qword_1403CA2E8 && v40 == (_QWORD *)qword_1403CA2E8;
              v94 = v42;
              v43 = *((_DWORD *)v39 + 12);
              if ( v42 )
                v44 = v43 & 0xFFFFFFE1 | 8;
              else
                v44 = v43 & 0xFFFFFFE1;
            }
            *((_DWORD *)v39 + 12) = v44;
            *((_QWORD *)v39 + 45) = v40[234];
            PsQueryProcessEnergyValues(v40, v131);
            v45 = v39 + 64;
            v46 = v131;
            v47 = 2LL;
            do
            {
              *v45 = *v46;
              v45[1] = v46[1];
              v45[2] = v46[2];
              v45[3] = v46[3];
              v45[4] = v46[4];
              v45[5] = v46[5];
              v45[6] = v46[6];
              v45 += 8;
              *(v45 - 1) = v46[7];
              v46 += 8;
              --v47;
            }
            while ( v47 );
            *v45 = *v46;
            if ( v40[118] )
              *((_DWORD *)v35 + 88) = *(_DWORD *)(v40[118] + 1220LL);
            else
              *((_DWORD *)v35 + 88) = 0;
            v10 = (PEPROCESS)v92;
            v90 = (__int64 *)v92;
            if ( *((_DWORD *)v92 + 17)
              || KeHeteroSystem
              && ((v48 = KiProcessPolicyToQosMappingTable[(*((_DWORD *)v92 + 110) >> 7) & 7], v48 != 4)
               || *((_BYTE *)v92 + 1119) != 1
                ? (v49 = 0)
                : (v49 = 1),
                  PpmPerfQosEnabled && ((unsigned int)(v48 - 1) <= 1 || v49)) )
            {
              *((_DWORD *)v39 + 12) |= 0x20u;
            }
            v15 = v88;
            if ( v88 >= 0 )
            {
              p_Blink = (char *)Object;
              v14 = v87;
              v101 = v102;
              v97 = v100;
              v34 = (char *)v109;
              goto LABEL_116;
            }
            v86 = v88;
LABEL_202:
            p_Blink = (char *)Object;
LABEL_269:
            if ( v10 && v10 != PsIdleProcess )
              ObfDereferenceObjectWithTag(v10, 0x6E457350u);
            if ( p_Blink && *((PVOID *)p_Blink + 68) != PsIdleProcess )
              ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)v86;
          }
          v38 = 0LL;
LABEL_116:
          if ( a5 != 148 )
          {
LABEL_117:
            if ( v10 == PsIdleProcess )
              goto LABEL_172;
            if ( v10 == PsInitialSystemProcess )
            {
              v55 = (const wchar_t *)&ExpSystemProcessName;
            }
            else if ( v10 == (PEPROCESS)PsSecureSystemProcess )
            {
              v55 = (const wchar_t *)&ExpSecureSystemProcessName;
            }
            else if ( SmIsCompressionProcess(v10) )
            {
              v55 = L"$&";
            }
            else
            {
              v51 = -1073741275;
              if ( v10[2].ActiveProcessors.Bitmap[9] && (_QWORD)xmmword_1403A6120 )
              {
                v51 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_1403A6120)(v50, &P);
              }
              else
              {
                v52 = v10[1].ActiveProcessors.Bitmap[15];
                if ( v52 )
                {
                  PoolWithTag = (char *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned int)*(unsigned __int16 *)(v52 + 2) + 16,
                                          0x6E497350u);
                  v54 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    *(_OWORD *)PoolWithTag = *(_OWORD *)v52;
                    if ( *((_QWORD *)PoolWithTag + 1) )
                    {
                      *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                      memmove(PoolWithTag + 16, *(const void **)(v52 + 8), *(unsigned __int16 *)(v52 + 2));
                    }
                    P = v54;
                    v51 = 0;
                  }
                  else
                  {
                    v51 = -1073741801;
                  }
                }
              }
              v88 = v51;
              if ( v51 < 0 )
                v55 = (const wchar_t *)v10[1].ActiveProcessors.Bitmap[15];
              else
                v55 = (const wchar_t *)P;
            }
            v115 = v55;
            v56 = *v55;
            v103 = v56;
            v57 = v97;
            v118 = v97;
            LODWORD(Size) = v56;
            v58 = (_WORD *)*((_QWORD *)v55 + 1);
            v59 = v58;
            v117 = v58;
            if ( a5 != 148 && v56 )
            {
              v59 = &v58[(unsigned __int64)v56 >> 1];
              v117 = v59;
              while ( v59 != v58 )
              {
                v117 = --v59;
                if ( *v59 == 92 )
                {
                  v117 = ++v59;
                  break;
                }
              }
              v56 -= 2 * (v59 - v58);
              LODWORD(Size) = v56;
            }
            v60 = v56;
            v61 = (v56 + 9) & 0xFFFFFFF8;
            v103 = v61;
            v62 = v61 + v14;
            if ( v61 + v14 < v14 )
            {
              v62 = -1;
              v15 = -1073741675;
            }
            else
            {
              v15 = 0;
            }
            v87 = v62;
            v88 = v15;
            if ( v15 < 0 )
            {
              v86 = v15;
              goto LABEL_269;
            }
            v91 += v61;
            if ( v62 > a2 )
            {
              v86 = -1073741820;
              if ( !v104 )
                goto LABEL_269;
            }
            else
            {
              if ( v56 )
              {
                memmove(v97, v59, v56);
                v57 += v60 >> 1;
                v118 = v57;
              }
              *v57++ = 0;
              v118 = v57;
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            if ( v86 < 0 )
            {
LABEL_172:
              v64 = v101;
            }
            else
            {
              v63 = v97;
              v64 = v101;
              *((_WORD *)v101 + 28) = (_WORD)v57 - (_WORD)v97 - 2;
              *((_WORD *)v64 + 29) = v61;
              *((_QWORD *)v64 + 8) = v63;
            }
            if ( v86 < 0 || (*v64 = v91, v15 >= 0) )
            {
              v5 = 0;
              goto LABEL_150;
            }
            v86 = v15;
            goto LABEL_269;
          }
          v72 = PsReferencePrimaryToken(v10);
          Handle[2] = v72;
          SeQueryUserSidToken((__int64)v72, Src, 0x44u, (ULONG *)&Size);
          PackageSize = 254LL;
          AppIdSize = 130LL;
          v88 = RtlQueryPackageIdentity(v72, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
          if ( v88 >= 0 )
          {
            v73 = AppIdSize;
            v38 = PackageSize;
          }
          else
          {
            PackageSize = 0LL;
            v73 = 0LL;
            AppIdSize = 0LL;
          }
          ObFastDereferenceObject(v90 + 107, (unsigned __int64)v72);
          v74 = (unsigned int)Size;
          v75 = (Size + 7) & 0xFFFFFFF8;
          v103 = v75;
          v76 = v75 + v14;
          if ( v75 + v14 < v14 )
          {
            v76 = -1;
            v15 = -1073741675;
          }
          else
          {
            v15 = 0;
          }
          v87 = v76;
          v14 = v76;
          v88 = v15;
          if ( v15 < 0 )
          {
            v86 = v15;
            v10 = (PEPROCESS)v90;
            goto LABEL_269;
          }
          v91 += v75;
          if ( v76 <= a2 )
          {
            *((_DWORD *)v34 + 13) = 368;
            memmove(v97, Src, v74);
            v77 = (char *)v97 + v75;
            v97 = v77;
            v100 = v77;
            goto LABEL_191;
          }
          v86 = -1073741820;
          if ( v104 )
          {
            v77 = (char *)v97;
LABEL_191:
            if ( v38 )
            {
              if ( v38 > 0xFFFFFFFF )
              {
                v86 = -1073741820;
                v10 = (PEPROCESS)v90;
                goto LABEL_269;
              }
              v103 = v38;
              v79 = v38 + v14;
              if ( (unsigned int)v38 + v14 < v14 )
              {
                v14 = -1;
                v87 = -1;
                v15 = -1073741675;
              }
              else
              {
                v14 += v38;
                v87 = v79;
                v15 = 0;
              }
              v88 = v15;
              if ( v15 < 0 )
              {
                v86 = v15;
                v10 = (PEPROCESS)v90;
                goto LABEL_269;
              }
              v91 += v38;
              if ( v14 > a2 )
              {
                v86 = -1073741820;
                if ( !v104 )
                {
                  v10 = (PEPROCESS)v90;
                  goto LABEL_269;
                }
              }
              else
              {
                *((_DWORD *)v34 + 14) = (_DWORD)v77 - (_DWORD)v34;
                memmove(v77, PackageFullName, (unsigned int)v38);
                v77 = (char *)v97 + (unsigned int)v38;
                v97 = v77;
                v100 = v77;
              }
            }
            if ( !v73 )
            {
              v10 = (PEPROCESS)v90;
              goto LABEL_117;
            }
            if ( v73 > 0xFFFFFFFF )
            {
              v86 = -1073741820;
              v10 = (PEPROCESS)v90;
              goto LABEL_269;
            }
            v103 = v73;
            v80 = v14 + v73;
            if ( v14 + (unsigned int)v73 < v14 )
            {
              v14 = -1;
              v87 = -1;
              v15 = -1073741675;
            }
            else
            {
              v14 += v73;
              v87 = v80;
              v15 = 0;
            }
            v88 = v15;
            if ( v15 < 0 )
            {
              v86 = v15;
              v10 = (PEPROCESS)v90;
              goto LABEL_269;
            }
            v91 += v73;
            if ( v14 <= a2 )
            {
              *((_DWORD *)v34 + 84) = (_DWORD)v77 - (_DWORD)v34;
              memmove(v77, AppId, (unsigned int)v73);
              v81 = (char *)v97;
              v97 = (char *)v97 + (unsigned int)v73;
              v100 = &v81[(unsigned int)v73];
LABEL_223:
              v10 = (PEPROCESS)v90;
              goto LABEL_117;
            }
            v86 = -1073741820;
            if ( v104 )
              goto LABEL_223;
          }
LABEL_225:
          v10 = (PEPROCESS)v90;
          goto LABEL_269;
        }
        v125 = *((_DWORD *)p_Blink + 1);
        if ( !(_BYTE)v125 )
        {
          v25 = v93 + v14;
          if ( v93 + v14 < v14 )
          {
            v25 = -1;
            v15 = -1073741675;
          }
          else
          {
            v15 = 0;
          }
          v87 = v25;
          v14 = v25;
          v88 = v15;
          if ( v15 < 0 )
          {
            v86 = v15;
            goto LABEL_269;
          }
          v91 += v93;
          if ( v25 > a2 )
          {
            v86 = -1073741820;
            if ( !v104 )
              goto LABEL_225;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, (__int64)&v110);
            v26 = v111;
            if ( v111 == 4 )
            {
              v91 -= v93;
              v14 -= v93;
              v87 = v14;
            }
            else
            {
              *((_DWORD *)v18 + 6) = v110;
              *((_DWORD *)v18 + 17) = v26;
              *((_DWORD *)v18 + 18) = v112;
              *((_DWORD *)v18 + 14) = v113;
              *((_DWORD *)v18 + 15) = v114;
              *v18 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              v18[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              v18[2] = *((_QWORD *)p_Blink + 190);
              *((_DWORD *)v18 + 16) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v18 + 5) = *(_OWORD *)(p_Blink + 1592);
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v27 = *((_QWORD *)p_Blink + 210);
              }
              else
              {
                if ( (*((_DWORD *)p_Blink + 438) & 8) != 0
                  || (v27 = *((_QWORD *)Object + 194), _InterlockedOr(v85, 0), (*((_DWORD *)p_Blink + 438) & 8) != 0) )
                {
                  v27 = 0LL;
                }
                v10 = (PEPROCESS)v92;
                v90 = (__int64 *)v92;
                v15 = v88;
                p_Blink = (char *)Object;
                v14 = v87;
                v13 = (__int64)v102;
                v101 = v102;
                v18 = v100;
              }
              v122 = v27;
              if ( v89 && v27 > 0x7FFFFFFEFFFFLL )
                v18[4] = 0LL;
              else
                v18[4] = v27;
              if ( v116 != 5 )
              {
                if ( v89 )
                {
                  v18[10] = 0LL;
                  v18[11] = 0LL;
                }
                else
                {
                  v18[10] = *((_QWORD *)p_Blink + 7);
                  v18[11] = *((_QWORD *)p_Blink + 6);
                  v10 = (PEPROCESS)v92;
                  v90 = (__int64 *)v92;
                  v15 = v88;
                  p_Blink = (char *)Object;
                  v14 = v87;
                  v13 = (__int64)v102;
                  v101 = v102;
                  v18 = v100;
                }
                v28 = *((_QWORD *)p_Blink + 210);
                v122 = v28;
                if ( v89 && v28 > 0x7FFFFFFEFFFFLL )
                  v18[12] = 0LL;
                else
                  v18[12] = v28;
                v18[13] = *((_QWORD *)p_Blink + 30);
                v18[14] = 0LL;
                v18[15] = 0LL;
                v18[16] = 0LL;
              }
              ++*(_DWORD *)(v13 + 4);
              if ( v15 < 0 )
              {
                v86 = v15;
                goto LABEL_269;
              }
              v18 = (_QWORD *)((char *)v18 + v93);
              v100 = (char *)v18;
            }
          }
        }
        if ( v10 == PsIdleProcess )
          break;
        p_Blink = 0LL;
        v123 = 0LL;
        v29 = KeGetCurrentThread();
        v30 = (char *)v92;
        v31 = (char *)v92 + 1160;
        --v29->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v30 + 728), 0LL);
        for ( k = (char *)*((_QWORD *)Object + 213); k != v31; k = *(char **)k )
        {
          p_Blink = k - 1704;
          v123 = k - 1704;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 1704)) )
          {
            v5 = 1;
            break;
          }
        }
        v33 = (signed __int64 *)(v30 + 728);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30 + 91, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        KeLeaveCriticalRegionThread((__int64)v29);
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v5 )
        {
          p_Blink = 0LL;
          v123 = 0LL;
        }
        v10 = (PEPROCESS)v92;
        v90 = (__int64 *)v92;
        v15 = v88;
        v14 = v87;
        v13 = (__int64)v102;
        v101 = v102;
        v18 = v100;
LABEL_75:
        v5 = 0;
      }
      v70 = (_LIST_ENTRY *)*((_QWORD *)p_Blink + 95);
      if ( v70 != &v10->ThreadListHead )
      {
        p_Blink = (char *)&v70[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
        goto LABEL_75;
      }
      p_Blink = 0LL;
      v5 = 0;
    }
  }
  return result;
}
