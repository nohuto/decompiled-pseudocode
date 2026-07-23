/*
 * XREFs of ExpGetProcessInformation @ 0x140531E70
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     SmIsCompressionProcess @ 0x14001E628 (SmIsCompressionProcess.c)
 *     KeQueryValuesThread @ 0x14003F770 (KeQueryValuesThread.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     RtlQueryPackageIdentity @ 0x140088580 (RtlQueryPackageIdentity.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     PsIsProcessInSilo @ 0x140094938 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140443AF4 (KeSynchronizeWithDynamicProcessors.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     ExpCheckFullProcessInformationAccess @ 0x14045A830 (ExpCheckFullProcessInformationAccess.c)
 *     ExpCopyProcessInfo @ 0x140479910 (ExpCopyProcessInfo.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall ExpGetProcessInformation(int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v5; // r14d
  int v6; // r8d
  char PreviousMode; // bl
  PEPROCESS v8; // r15
  int SessionId; // edi
  unsigned int v10; // r8d
  __int64 v11; // r13
  unsigned int v12; // ebx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  char *v16; // r12
  unsigned __int64 *p_Blink; // rdi
  struct _KTHREAD *v18; // r14
  PEPROCESS v19; // rsi
  unsigned __int64 *v20; // r15
  int v21; // r12d
  unsigned __int64 *i; // rbx
  unsigned int v23; // eax
  unsigned __int8 v24; // cl
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  struct _KTHREAD *v27; // r14
  PEPROCESS v28; // rsi
  unsigned __int64 *v29; // r12
  int v30; // r15d
  unsigned __int64 *j; // rbx
  char *v32; // r14
  signed __int64 *v33; // rdi
  unsigned __int64 v34; // rbx
  ULONG_PTR v35; // r13
  char *v36; // rdi
  PEPROCESS v37; // rbx
  unsigned __int64 v38; // rax
  _OWORD *v39; // rax
  _OWORD *v40; // rcx
  __int64 v41; // rdx
  char *v42; // r13
  __int64 v43; // rcx
  int v44; // eax
  unsigned __int64 v45; // r14
  char *PoolWithTag; // rax
  void *v47; // rsi
  const wchar_t *v48; // rcx
  size_t v49; // r8
  char *v50; // r15
  _WORD *v51; // rdx
  int v52; // r14d
  unsigned int v53; // eax
  unsigned __int64 v54; // rbx
  int *v55; // rcx
  _QWORD *p_Lock; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v58; // rsi
  __int64 v59; // rcx
  __int16 v60; // ax
  _LIST_ENTRY *v61; // rdi
  unsigned int v62; // eax
  PACCESS_TOKEN v63; // rsi
  ULONG_PTR v64; // r12
  size_t v65; // rcx
  unsigned int v66; // r15d
  unsigned int v67; // eax
  char *v68; // r15
  _LIST_ENTRY *Flink; // rdi
  unsigned int v70; // eax
  unsigned int v71; // eax
  struct _KTHREAD *v72; // r14
  signed __int64 *v73; // rsi
  __int64 result; // rax
  signed __int32 v75[8]; // [rsp+0h] [rbp-5C8h] BYREF
  int v76; // [rsp+40h] [rbp-588h]
  NTSTATUS v77; // [rsp+44h] [rbp-584h]
  unsigned int v78; // [rsp+48h] [rbp-580h]
  char v79; // [rsp+4Ch] [rbp-57Ch]
  int v80; // [rsp+50h] [rbp-578h]
  PVOID v81; // [rsp+58h] [rbp-570h]
  PEPROCESS Process; // [rsp+60h] [rbp-568h]
  unsigned int v83; // [rsp+68h] [rbp-560h]
  PVOID Object; // [rsp+70h] [rbp-558h]
  int v85; // [rsp+78h] [rbp-550h]
  void *v86; // [rsp+80h] [rbp-548h]
  int *v87; // [rsp+88h] [rbp-540h]
  char v88; // [rsp+90h] [rbp-538h]
  bool v89; // [rsp+93h] [rbp-535h]
  int *v90; // [rsp+A0h] [rbp-528h]
  int v91; // [rsp+A8h] [rbp-520h]
  unsigned int *v92; // [rsp+B0h] [rbp-518h]
  size_t Size; // [rsp+B8h] [rbp-510h] BYREF
  PVOID P; // [rsp+C0h] [rbp-508h] BYREF
  ULONG_PTR AppIdSize; // [rsp+C8h] [rbp-500h] BYREF
  void *v96; // [rsp+D0h] [rbp-4F8h]
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-4F0h] BYREF
  int v98; // [rsp+E0h] [rbp-4E8h]
  int v99; // [rsp+E8h] [rbp-4E0h] BYREF
  unsigned __int8 v100; // [rsp+ECh] [rbp-4DCh]
  unsigned __int8 v101; // [rsp+EDh] [rbp-4DBh]
  char v102; // [rsp+EEh] [rbp-4DAh]
  char v103; // [rsp+EFh] [rbp-4D9h]
  const wchar_t *v104; // [rsp+F0h] [rbp-4D8h]
  int v105; // [rsp+F8h] [rbp-4D0h]
  _WORD *v106; // [rsp+100h] [rbp-4C8h]
  char *v107; // [rsp+108h] [rbp-4C0h]
  __int64 *v108; // [rsp+110h] [rbp-4B8h]
  int *v109; // [rsp+118h] [rbp-4B0h]
  unsigned __int64 *v110; // [rsp+120h] [rbp-4A8h]
  unsigned __int64 v111; // [rsp+128h] [rbp-4A0h]
  unsigned __int64 *v112; // [rsp+130h] [rbp-498h]
  int v113; // [rsp+138h] [rbp-490h]
  int v114; // [rsp+15Ch] [rbp-46Ch]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-460h]
  PEPROCESS v116; // [rsp+1B8h] [rbp-410h]
  HANDLE Handle[4]; // [rsp+1C0h] [rbp-408h] BYREF
  _QWORD v118[12]; // [rsp+1E0h] [rbp-3E8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-388h] BYREF
  _BYTE v120[352]; // [rsp+290h] [rbp-338h] BYREF
  WCHAR AppId[72]; // [rsp+3F0h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+480h] [rbp-148h] BYREF

  v105 = a5;
  v109 = a1;
  v92 = a3;
  AppIdSize = 130LL;
  v5 = 0;
  v80 = 0;
  PackageSize = 254LL;
  Process = 0LL;
  v76 = 0;
  Object = 0LL;
  v78 = 0;
  if ( a3 )
    *a3 = 0;
  v88 = a5 != 5;
  v6 = 136;
  if ( a5 == 5 )
    v6 = 80;
  v83 = v6;
  v85 = v6;
  v90 = v109;
  if ( a2 < 0x270 )
  {
    v76 = -1073741820;
    if ( !v92 )
      return 3221225476LL;
  }
  v79 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExpCheckFullProcessInformationAccess(PreviousMode), (int)result >= 0) )
  {
    if ( ExIsRestrictedCaller(PreviousMode) )
      v79 = 1;
    v77 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v8 = (PEPROCESS)PsIdleProcess;
    v81 = PsIdleProcess;
    while ( 1 )
    {
LABEL_10:
      Process = v8;
LABEL_11:
      if ( !v8 )
      {
        if ( v76 >= 0 && v90 && (*v90 = 0, v77 < 0) )
        {
          v76 = v77;
        }
        else if ( v92 )
        {
          *v92 = v78;
        }
        goto LABEL_196;
      }
      if ( (v8[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v8->Header.SignalState
        || (v62 = v8[1].ThreadSeed[0], v8 = Process, v81 = Process, v62)
        || Process->ThreadListHead.Flink != &Process->ThreadListHead )
      {
        if ( !a4 || v8 != PsIdleProcess )
        {
          SessionId = MmGetSessionId(v8);
          v113 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(v8, CurrentServerSilo) )
            break;
        }
      }
LABEL_145:
      if ( v8 == PsIdleProcess )
        v8 = 0LL;
      p_Lock = &v8->Header.Lock;
      v116 = v8;
      while ( 1 )
      {
        v8 = 0LL;
        v81 = 0LL;
        v108 = 0LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        if ( p_Lock )
          v58 = (__int64 *)p_Lock[93];
        else
          v58 = (__int64 *)PsActiveProcessHead;
        while ( v58 != &PsActiveProcessHead )
        {
          v8 = (PEPROCESS)(v58 - 93);
          v81 = v58 - 93;
          v108 = v58 - 93;
          if ( ObReferenceObjectSafeWithTag((__int64)(v58 - 93)) )
          {
            v5 = 1;
            break;
          }
          v58 = (__int64 *)*v58;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v60 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v60;
        if ( !v60
          && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v59);
        }
        if ( p_Lock )
          ObfDereferenceObjectWithTag(p_Lock, 0x6E457350u);
        if ( v5 )
        {
          v5 = 0;
        }
        else
        {
          v5 = 0;
          v8 = 0LL;
          v81 = 0LL;
          v108 = 0LL;
        }
        p_Lock = &v8->Header.Lock;
        v116 = v8;
        if ( !v8 )
        {
          v8 = 0LL;
          v81 = 0LL;
          Process = 0LL;
          goto LABEL_11;
        }
        if ( (v8[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v79 )
            goto LABEL_10;
          if ( ObOpenObjectByPointer(v8, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
            break;
        }
      }
      ObCloseHandle(Handle[0], 0);
    }
    v11 = (__int64)v109 + v78;
    v87 = (int *)v11;
    v90 = (int *)v11;
    v80 = 624;
    v12 = v78 + 624;
    if ( v78 + 624 < v78 )
    {
      v12 = v10;
      v13 = -1073741675;
    }
    else
    {
      v13 = 0;
    }
    v78 = v12;
    v77 = v13;
    if ( v13 < 0 )
    {
      v76 = v13;
      goto LABEL_196;
    }
    memset(v118, 0, 0x58uLL);
    if ( v12 > a2 )
    {
      v76 = -1073741820;
      if ( v92 )
        goto LABEL_26;
      goto LABEL_196;
    }
    v14 = ExpCopyProcessInfo(v11, (__int64)v8, v88, v118);
    v13 = v14;
    v77 = v14;
    if ( v14 < 0 )
    {
      v76 = v14;
      goto LABEL_196;
    }
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 100) = SessionId;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_DWORD *)(v11 + 56) = 0;
    if ( v8 == PsIdleProcess )
      *(_QWORD *)(v11 + 96) = 0LL;
    if ( v8 == (PEPROCESS)PsSecureSystemProcess )
    {
      v15 = qword_14036C2A0 << 12;
      *(_QWORD *)(v11 + 144) = qword_14036C2A0 << 12;
      *(_QWORD *)(v11 + 8) = v15;
    }
    if ( v13 < 0 )
    {
      v76 = v13;
      goto LABEL_196;
    }
LABEL_26:
    v16 = (char *)(v11 + 256);
    v86 = (void *)(v11 + 256);
    if ( v8 == PsIdleProcess )
    {
      Flink = v8->ThreadListHead.Flink;
      if ( Flink == &v8->ThreadListHead )
      {
        p_Blink = 0LL;
      }
      else
      {
        p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
      }
    }
    else
    {
      p_Blink = 0LL;
      v110 = 0LL;
      v18 = KeGetCurrentThread();
      v19 = Process;
      v20 = &Process[1].ActiveProcessors.Bitmap[19];
      v21 = 0;
      --v18->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1], 0LL);
      for ( i = (unsigned __int64 *)*v20; i != v20; i = (unsigned __int64 *)*i )
      {
        p_Blink = i - 212;
        v110 = i - 212;
        if ( ObReferenceObjectSafeWithTag((__int64)(i - 212)) )
        {
          v21 = 1;
          break;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v19[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v19[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&v19[1]);
      KeLeaveCriticalRegionThread((__int64)v18);
      if ( !v21 )
      {
        p_Blink = 0LL;
        v110 = 0LL;
      }
      v8 = Process;
      v81 = Process;
      v13 = v77;
      v12 = v78;
      v11 = (__int64)v90;
      v87 = v90;
      v16 = (char *)v86;
    }
    Object = p_Blink;
    while ( p_Blink )
    {
      v114 = *((_DWORD *)p_Blink + 1);
      if ( !(_BYTE)v114 )
      {
        v23 = v83 + v12;
        if ( v83 + v12 < v12 )
        {
          v23 = -1;
          v13 = -1073741675;
        }
        else
        {
          v13 = 0;
        }
        v78 = v23;
        v12 = v23;
        v77 = v13;
        if ( v13 < 0 )
        {
          v76 = v13;
          goto LABEL_264;
        }
        v80 += v83;
        if ( v23 > a2 )
        {
          v76 = -1073741820;
          if ( !v92 )
            goto LABEL_264;
        }
        else
        {
          KeQueryValuesThread((__int64)p_Blink, (__int64)&v99);
          v24 = v100;
          if ( v100 == 4 )
          {
            v80 -= v83;
            v12 -= v83;
            v78 = v12;
          }
          else
          {
            *((_DWORD *)v16 + 6) = v99;
            *((_DWORD *)v16 + 17) = v24;
            *((_DWORD *)v16 + 18) = v101;
            *((_DWORD *)v16 + 14) = v102;
            *((_DWORD *)v16 + 15) = v103;
            *(_QWORD *)v16 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
            *((_QWORD *)v16 + 1) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
            *((_QWORD *)v16 + 2) = p_Blink[189];
            *((_DWORD *)v16 + 16) = *((_DWORD *)p_Blink + 85);
            *(_OWORD *)(v16 + 40) = *(_OWORD *)(p_Blink + 199);
            if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
            {
              v25 = p_Blink[210];
            }
            else
            {
              if ( (p_Blink[218] & 8) != 0
                || (v25 = *((_QWORD *)Object + 194), _InterlockedOr(v75, 0), (p_Blink[218] & 8) != 0) )
              {
                v25 = 0LL;
              }
              v8 = Process;
              v81 = Process;
              v13 = v77;
              p_Blink = (unsigned __int64 *)Object;
              v12 = v78;
              v11 = (__int64)v90;
              v87 = v90;
              v16 = (char *)v86;
            }
            v111 = v25;
            if ( v79 && v25 > 0x7FFFFFFEFFFFLL )
              *((_QWORD *)v16 + 4) = 0LL;
            else
              *((_QWORD *)v16 + 4) = v25;
            if ( v105 != 5 )
            {
              if ( v79 )
              {
                *((_QWORD *)v16 + 10) = 0LL;
                *((_QWORD *)v16 + 11) = 0LL;
              }
              else
              {
                *((_QWORD *)v16 + 10) = p_Blink[7];
                v16 = (char *)v86;
                *((_QWORD *)v86 + 11) = p_Blink[6];
                v8 = Process;
                v81 = Process;
                v13 = v77;
                p_Blink = (unsigned __int64 *)Object;
                v12 = v78;
                v11 = (__int64)v90;
                v87 = v90;
              }
              v26 = p_Blink[210];
              v111 = v26;
              if ( v79 && v26 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v16 + 12) = 0LL;
              else
                *((_QWORD *)v16 + 12) = v26;
              *((_QWORD *)v16 + 13) = p_Blink[30];
              *((_QWORD *)v16 + 14) = 0LL;
              *((_QWORD *)v16 + 15) = 0LL;
              *((_QWORD *)v16 + 16) = 0LL;
            }
            ++*(_DWORD *)(v11 + 4);
            if ( v13 < 0 )
            {
              v76 = v13;
              goto LABEL_264;
            }
            v86 = &v16[v83];
          }
        }
      }
      if ( v8 == PsIdleProcess )
      {
        v61 = (_LIST_ENTRY *)p_Blink[95];
        if ( v61 == &v8->ThreadListHead )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = (unsigned __int64 *)&v61[-48].Blink;
          KeSynchronizeWithDynamicProcessors();
        }
      }
      else
      {
        p_Blink = 0LL;
        v112 = 0LL;
        v27 = KeGetCurrentThread();
        v28 = Process;
        v29 = &Process[1].ActiveProcessors.Bitmap[19];
        v30 = 0;
        --v27->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v28[1], 0LL);
        for ( j = (unsigned __int64 *)*((_QWORD *)Object + 212); j != v29; j = (unsigned __int64 *)*j )
        {
          p_Blink = j - 212;
          v112 = j - 212;
          if ( ObReferenceObjectSafeWithTag((__int64)(j - 212)) )
          {
            v30 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v28[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v28[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v28[1]);
        KeLeaveCriticalRegionThread((__int64)v27);
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v30 )
        {
          p_Blink = 0LL;
          v112 = 0LL;
        }
        v8 = Process;
        v81 = Process;
        v13 = v77;
        v12 = v78;
        v11 = (__int64)v90;
        v87 = v90;
      }
      Object = p_Blink;
      v16 = (char *)v86;
    }
    v32 = v16;
    v96 = v16;
    v86 = v16 + 368;
    if ( v76 >= 0 )
    {
      v33 = (signed __int64 *)&v8[1].Affinity.Bitmap[5];
      v34 = ObFastReferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5]);
      if ( v34 )
      {
        v35 = 0LL;
      }
      else
      {
        v72 = KeGetCurrentThread();
        --v72->KernelApcDisable;
        v73 = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v34 = ObFastReferenceObjectLocked(&v8[1].Affinity.Bitmap[5]);
        v35 = 0LL;
        if ( _InterlockedCompareExchange64(v73, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v73);
        KeAbPostRelease((ULONG_PTR)v73);
        KeLeaveCriticalRegionThread((__int64)v72);
        v8 = Process;
        v32 = (char *)v96;
      }
      v89 = SeSecurityAttributePresent(v34, (struct _KTHREAD *)&PspSysAppIdClaim);
      ObFastDereferenceObject(v33, v34);
      *(_QWORD *)(v32 + 52) = 0LL;
      *((_DWORD *)v32 + 84) = 0;
      v36 = (char *)v96;
      *((_QWORD *)v96 + 43) = *(_QWORD *)&v8[2].0 << 12;
      *((_QWORD *)v36 + 5) = v118[4];
      *((_DWORD *)v36 + 12) = 0;
      if ( v89 )
        *((_DWORD *)v36 + 12) = 1;
      v37 = Process;
      v38 = Process[2].ActiveProcessors.Bitmap[8];
      if ( v38 )
      {
        *(_OWORD *)v36 = *(_OWORD *)v38;
        *((_OWORD *)v36 + 1) = *(_OWORD *)(v38 + 16);
        *((_QWORD *)v36 + 4) = *(_QWORD *)(v38 + 32);
      }
      else
      {
        memset(v36, 0, 0x28uLL);
      }
      if ( v37 == PsInitialSystemProcess )
      {
        *((_DWORD *)v36 + 12) = *((_DWORD *)v36 + 12) & 0xFFFFFFE1 | 2;
      }
      else if ( v37 == (PEPROCESS)PsSecureSystemProcess )
      {
        *((_DWORD *)v36 + 12) = *((_DWORD *)v36 + 12) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v37) )
      {
        *((_DWORD *)v36 + 12) = *((_DWORD *)v36 + 12) & 0xFFFFFFE1 | 6;
      }
      else
      {
        *((_DWORD *)v36 + 12) &= 0xFFFFFFE1;
      }
      *((_QWORD *)v36 + 45) = v37[2].ActiveProcessors.Bitmap[14];
      PsQueryProcessEnergyValues(v37, v120);
      v39 = v36 + 64;
      v40 = v120;
      v41 = 2LL;
      do
      {
        *v39 = *v40;
        v39[1] = v40[1];
        v39[2] = v40[2];
        v39[3] = v40[3];
        v39[4] = v40[4];
        v39[5] = v40[5];
        v39[6] = v40[6];
        v39 += 8;
        *(v39 - 1) = v40[7];
        v40 += 8;
        --v41;
      }
      while ( v41 );
      *v39 = *v40;
      v32 = (char *)v96;
      if ( v37[1].Affinity.Bitmap[16] )
        *((_DWORD *)v96 + 88) = *(_DWORD *)(v37[1].Affinity.Bitmap[16] + 1220);
      else
        *((_DWORD *)v96 + 88) = 0;
      v8 = Process;
      v81 = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem == 2
        && ((*(_DWORD *)&Process->0 & 0xC0) == 0x40 || HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) == 1) )
      {
        *((_DWORD *)v36 + 12) |= 0x20u;
      }
      v13 = v77;
      if ( v77 >= 0 )
      {
        p_Blink = (unsigned __int64 *)Object;
        v12 = v78;
        v87 = v90;
        goto LABEL_109;
      }
      v76 = v77;
LABEL_196:
      p_Blink = (unsigned __int64 *)Object;
      goto LABEL_264;
    }
    v35 = 0LL;
LABEL_109:
    if ( a5 == 148 )
    {
      v63 = PsReferencePrimaryToken(v8);
      Handle[2] = v63;
      SeQueryUserSidToken((__int64)v63, Src, 0x44u, (ULONG *)&Size);
      PackageSize = 254LL;
      AppIdSize = 130LL;
      v77 = RtlQueryPackageIdentity(v63, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
      if ( v77 >= 0 )
      {
        v35 = AppIdSize;
        v64 = PackageSize;
      }
      else
      {
        v64 = 0LL;
        PackageSize = 0LL;
        AppIdSize = 0LL;
      }
      ObFastDereferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5], (unsigned __int64)v63);
      v65 = (unsigned int)Size;
      v66 = (Size + 7) & 0xFFFFFFF8;
      v91 = v66;
      v67 = v66 + v12;
      if ( v66 + v12 < v12 )
      {
        v67 = -1;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      v78 = v67;
      v12 = v67;
      v77 = v13;
      if ( v13 < 0 )
      {
        v76 = v13;
        goto LABEL_264;
      }
      v80 += v66;
      if ( v67 > a2 )
      {
        v76 = -1073741820;
        if ( !v92 )
          goto LABEL_264;
        v68 = (char *)v86;
      }
      else
      {
        *((_DWORD *)v32 + 13) = 368;
        memmove(v86, Src, v65);
        v68 = (char *)v86 + v66;
        v86 = v68;
      }
      if ( v64 )
      {
        if ( v64 > 0xFFFFFFFF )
        {
          v76 = -1073741820;
          goto LABEL_264;
        }
        v91 = v64;
        v70 = v64 + v12;
        if ( (unsigned int)v64 + v12 < v12 )
        {
          v12 = -1;
          v78 = -1;
          v13 = -1073741675;
        }
        else
        {
          v12 += v64;
          v78 = v70;
          v13 = 0;
        }
        v77 = v13;
        if ( v13 < 0 )
        {
          v76 = v13;
          goto LABEL_264;
        }
        v80 += v64;
        if ( v12 > a2 )
        {
          v76 = -1073741820;
          if ( !v92 )
            goto LABEL_264;
        }
        else
        {
          *((_DWORD *)v32 + 14) = (_DWORD)v68 - (_DWORD)v32;
          memmove(v68, PackageFullName, (unsigned int)v64);
          v68 += (unsigned int)v64;
          v86 = v68;
        }
      }
      if ( v35 )
      {
        if ( v35 > 0xFFFFFFFF )
        {
          v76 = -1073741820;
          goto LABEL_264;
        }
        v91 = v35;
        v71 = v12 + v35;
        if ( v12 + (unsigned int)v35 < v12 )
        {
          v12 = -1;
          v78 = -1;
          v13 = -1073741675;
        }
        else
        {
          v12 += v35;
          v78 = v71;
          v13 = 0;
        }
        v77 = v13;
        if ( v13 < 0 )
        {
          v76 = v13;
          goto LABEL_264;
        }
        v80 += v35;
        if ( v12 <= a2 )
        {
          *((_DWORD *)v32 + 84) = (_DWORD)v68 - (_DWORD)v32;
          memmove(v68, AppId, (unsigned int)v35);
          v8 = (PEPROCESS)v81;
          v42 = (char *)v86 + (unsigned int)v35;
          v86 = v42;
LABEL_111:
          if ( v8 == PsIdleProcess )
            goto LABEL_168;
          if ( v8 == PsInitialSystemProcess )
          {
            v48 = (const wchar_t *)&ExpSystemProcessName;
          }
          else if ( v8 == (PEPROCESS)PsSecureSystemProcess )
          {
            v48 = (const wchar_t *)&ExpSecureSystemProcessName;
          }
          else
          {
            if ( !SmIsCompressionProcess(v8) )
            {
              v44 = -1073741275;
              v98 = -1073741275;
              if ( v8[2].ActiveProcessors.Bitmap[9] )
              {
                if ( !(_QWORD)xmmword_140348E60 )
                {
LABEL_122:
                  v77 = v44;
                  if ( v44 < 0 )
                    v48 = (const wchar_t *)v8[1].ActiveProcessors.Bitmap[15];
                  else
                    v48 = (const wchar_t *)P;
                  goto LABEL_124;
                }
                v44 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140348E60)(v43, &P);
              }
              else
              {
                v45 = v8[1].ActiveProcessors.Bitmap[15];
                if ( !v45 )
                  goto LABEL_122;
                PoolWithTag = (char *)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        *(unsigned __int16 *)(v45 + 2) + 16LL,
                                        0x6E497350u);
                v47 = PoolWithTag;
                if ( PoolWithTag )
                {
                  *(_OWORD *)PoolWithTag = *(_OWORD *)v45;
                  if ( *((_QWORD *)PoolWithTag + 1) )
                  {
                    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                    memmove(PoolWithTag + 16, *(const void **)(v45 + 8), *(unsigned __int16 *)(v45 + 2));
                  }
                  P = v47;
                  v44 = 0;
                }
                else
                {
                  v44 = -1073741801;
                }
              }
              v98 = v44;
              goto LABEL_122;
            }
            v48 = L"$&";
          }
LABEL_124:
          v104 = v48;
          v49 = *v48;
          v91 = v49;
          v50 = v42;
          v107 = v42;
          LODWORD(Size) = v49;
          v51 = (_WORD *)*((_QWORD *)v48 + 1);
          v106 = v51;
          if ( a5 != 148 && (_DWORD)v49 )
          {
            v51 += (unsigned __int64)(unsigned int)v49 >> 1;
            v106 = v51;
            while ( v51 != *((_WORD **)v48 + 1) )
            {
              v106 = --v51;
              if ( *v51 == 92 )
              {
                v106 = ++v51;
                break;
              }
            }
            v49 = (unsigned int)v49 - 2 * (unsigned int)(((__int64)v51 - *((_QWORD *)v48 + 1)) >> 1);
            LODWORD(Size) = v49;
          }
          v52 = (v49 + 9) & 0xFFFFFFF8;
          v91 = v52;
          v53 = v52 + v12;
          if ( v52 + v12 < v12 )
          {
            v53 = -1;
            v13 = -1073741675;
          }
          else
          {
            v13 = 0;
          }
          v78 = v53;
          v77 = v13;
          if ( v13 >= 0 )
          {
            v80 += v52;
            if ( v53 > a2 )
            {
              v76 = -1073741820;
              if ( !v92 )
                goto LABEL_264;
            }
            else
            {
              if ( (_DWORD)v49 )
              {
                v54 = (unsigned int)v49;
                memmove(v42, v51, v49);
                v50 = &v42[2 * (v54 >> 1)];
                v107 = v50;
              }
              *(_WORD *)v50 = 0;
              v50 += 2;
              v107 = v50;
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            if ( v76 >= 0 )
            {
              v55 = v87;
              *((_WORD *)v87 + 28) = (_WORD)v50 - (_WORD)v42 - 2;
              *((_WORD *)v55 + 29) = v52;
              *((_QWORD *)v55 + 8) = v42;
              v8 = (PEPROCESS)v81;
              goto LABEL_142;
            }
            v8 = (PEPROCESS)v81;
LABEL_168:
            v55 = v87;
LABEL_142:
            if ( v76 < 0 || (*v55 = v80, v13 >= 0) )
            {
              v5 = 0;
              goto LABEL_145;
            }
            v76 = v13;
            goto LABEL_264;
          }
          v76 = v13;
LABEL_264:
          if ( v81 && v81 != PsIdleProcess )
            ObfDereferenceObjectWithTag(v81, 0x6E457350u);
          if ( p_Blink && (PVOID)p_Blink[68] != PsIdleProcess )
            ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v76;
        }
        v76 = -1073741820;
        if ( !v92 )
          goto LABEL_264;
        v8 = (PEPROCESS)v81;
      }
      else
      {
        v8 = (PEPROCESS)v81;
      }
    }
    v42 = (char *)v86;
    goto LABEL_111;
  }
  return result;
}
