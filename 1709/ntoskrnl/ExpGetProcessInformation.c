/*
 * XREFs of ExpGetProcessInformation @ 0x1404AF9A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x140019A00 (RtlQueryPackageIdentity.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeQueryValuesThread @ 0x1400825E0 (KeQueryValuesThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SmIsCompressionProcess @ 0x140116B88 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExCheckFullProcessInformationAccess @ 0x14044C8B0 (ExCheckFullProcessInformationAccess.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     ExpCopyProcessInfo @ 0x140565210 (ExpCopyProcessInfo.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14057D8A8 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v5; // r14d
  int v6; // r8d
  unsigned __int8 v7; // bl
  PEPROCESS v8; // r15
  int SessionId; // edi
  unsigned int v10; // r8d
  _DWORD *v11; // r13
  unsigned int v12; // ebx
  int v13; // esi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  char *v20; // r12
  unsigned __int64 *p_Blink; // rdi
  struct _KTHREAD *v22; // r14
  PEPROCESS v23; // rsi
  unsigned __int64 *v24; // r15
  int v25; // r12d
  unsigned __int64 *i; // rbx
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  struct _KTHREAD *v29; // r14
  PEPROCESS v30; // rsi
  unsigned __int64 *v31; // r12
  int v32; // r15d
  unsigned __int64 *j; // rbx
  char *v34; // r14
  signed __int64 *v35; // rdi
  ULONG_PTR v36; // rbx
  ULONG_PTR v37; // r13
  char *v38; // rbx
  PEPROCESS v39; // rdi
  unsigned __int64 v40; // rax
  _OWORD *v41; // rax
  _OWORD *v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  char v45; // cl
  char *v46; // r13
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // r14
  char *PoolWithTag; // rax
  void *v51; // rsi
  const wchar_t *v52; // rcx
  unsigned int v53; // r8d
  char *v54; // r12
  _WORD *v55; // r9
  _WORD *v56; // rdx
  unsigned __int64 v57; // r15
  unsigned int v58; // r14d
  unsigned int v59; // eax
  int *v60; // rcx
  _QWORD *p_Lock; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v63; // rsi
  __int64 v64; // rcx
  bool v65; // zf
  _LIST_ENTRY *v66; // rdi
  unsigned int v67; // eax
  PACCESS_TOKEN v68; // rsi
  ULONG_PTR v69; // r12
  size_t v70; // rcx
  unsigned int v71; // r15d
  unsigned int v72; // eax
  char *v73; // r15
  _LIST_ENTRY *Flink; // rdi
  unsigned int v75; // eax
  unsigned int v76; // eax
  struct _KTHREAD *v77; // r14
  signed __int64 *v78; // rsi
  __int64 result; // rax
  signed __int32 v80[8]; // [rsp+0h] [rbp-618h] BYREF
  int v81; // [rsp+40h] [rbp-5D8h]
  NTSTATUS v82; // [rsp+44h] [rbp-5D4h]
  unsigned int v83; // [rsp+48h] [rbp-5D0h]
  char v84; // [rsp+4Ch] [rbp-5CCh]
  int v85; // [rsp+50h] [rbp-5C8h]
  PVOID v86; // [rsp+58h] [rbp-5C0h]
  PEPROCESS Process; // [rsp+60h] [rbp-5B8h]
  unsigned int v88; // [rsp+68h] [rbp-5B0h]
  PVOID Object; // [rsp+70h] [rbp-5A8h]
  int v90; // [rsp+78h] [rbp-5A0h]
  void *v91; // [rsp+80h] [rbp-598h]
  int *v92; // [rsp+88h] [rbp-590h]
  bool v93; // [rsp+90h] [rbp-588h]
  bool v94; // [rsp+93h] [rbp-585h]
  _DWORD *v95; // [rsp+A0h] [rbp-578h]
  int v96; // [rsp+A8h] [rbp-570h]
  unsigned int *v97; // [rsp+B0h] [rbp-568h]
  size_t Size; // [rsp+B8h] [rbp-560h]
  PVOID P; // [rsp+C0h] [rbp-558h] BYREF
  ULONG_PTR AppIdSize; // [rsp+C8h] [rbp-550h] BYREF
  void *v101; // [rsp+D0h] [rbp-548h]
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-540h] BYREF
  int v103; // [rsp+E0h] [rbp-538h]
  int v104; // [rsp+E8h] [rbp-530h] BYREF
  unsigned __int8 v105; // [rsp+ECh] [rbp-52Ch]
  unsigned __int8 v106; // [rsp+EDh] [rbp-52Bh]
  char v107; // [rsp+EEh] [rbp-52Ah]
  char v108; // [rsp+EFh] [rbp-529h]
  const wchar_t *v109; // [rsp+F0h] [rbp-528h]
  int v110; // [rsp+F8h] [rbp-520h]
  _WORD *v111; // [rsp+100h] [rbp-518h]
  char *v112; // [rsp+108h] [rbp-510h]
  __int64 *v113; // [rsp+110h] [rbp-508h]
  _DWORD *v114; // [rsp+118h] [rbp-500h]
  unsigned __int64 *v115; // [rsp+120h] [rbp-4F8h]
  unsigned __int64 v116; // [rsp+128h] [rbp-4F0h]
  unsigned __int64 *v117; // [rsp+130h] [rbp-4E8h]
  int v118; // [rsp+138h] [rbp-4E0h]
  int v119; // [rsp+15Ch] [rbp-4BCh]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4B0h]
  PEPROCESS v121; // [rsp+1B8h] [rbp-460h]
  HANDLE Handle[4]; // [rsp+1C0h] [rbp-458h] BYREF
  _QWORD v123[12]; // [rsp+1E0h] [rbp-438h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-3D8h] BYREF
  _OWORD v125[27]; // [rsp+290h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+440h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4D0h] [rbp-148h] BYREF

  v110 = a5;
  v114 = a1;
  v97 = a3;
  AppIdSize = 130LL;
  PackageSize = 254LL;
  v5 = 0;
  Process = 0LL;
  v81 = 0;
  Object = 0LL;
  v83 = 0;
  if ( a3 )
    *a3 = 0;
  v93 = a5 != 5;
  v6 = 136;
  if ( a5 == 5 )
    v6 = 80;
  v88 = v6;
  v90 = v6;
  v95 = v114;
  if ( a2 < 0x270 )
  {
    v81 = -1073741820;
    if ( !v97 )
      return 3221225476LL;
  }
  v84 = 0;
  v7 = KeGetCurrentThread()->gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v7), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v7) )
      v84 = 1;
    v82 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v8 = (PEPROCESS)PsIdleProcess;
    v86 = PsIdleProcess;
    while ( 1 )
    {
LABEL_10:
      Process = v8;
LABEL_11:
      if ( !v8 )
      {
        if ( v81 >= 0 && v95 && (*v95 = 0, v82 < 0) )
        {
          v81 = v82;
        }
        else if ( v97 )
        {
          *v97 = v83;
        }
        goto LABEL_205;
      }
      if ( (v8[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v8->Header.SignalState
        || (v67 = v8[1].ThreadSeed[0], v8 = Process, v86 = Process, v67)
        || Process->ThreadListHead.Flink != &Process->ThreadListHead )
      {
        if ( !a4 || v8 != PsIdleProcess )
        {
          SessionId = MmGetSessionId((__int64)v8);
          v118 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(v8, CurrentServerSilo) )
            break;
        }
      }
LABEL_150:
      if ( v8 == PsIdleProcess )
        v8 = 0LL;
      p_Lock = &v8->Header.Lock;
      v121 = v8;
      while ( 1 )
      {
        v8 = 0LL;
        v86 = 0LL;
        v113 = 0LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        if ( p_Lock )
          v63 = (__int64 *)p_Lock[93];
        else
          v63 = (__int64 *)PsActiveProcessHead;
        while ( v63 != &PsActiveProcessHead )
        {
          v8 = (PEPROCESS)(v63 - 93);
          v86 = v63 - 93;
          v113 = v63 - 93;
          if ( ObReferenceObjectSafeWithTag((__int64)(v63 - 93)) )
          {
            v5 = 1;
            break;
          }
          v63 = (__int64 *)*v63;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v65 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v65
          && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v64);
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
          v86 = 0LL;
          v113 = 0LL;
        }
        p_Lock = &v8->Header.Lock;
        v121 = v8;
        if ( !v8 )
        {
          v8 = 0LL;
          v86 = 0LL;
          Process = 0LL;
          goto LABEL_11;
        }
        if ( (v8[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v84 )
            goto LABEL_10;
          if ( ObOpenObjectByPointer(v8, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
            break;
        }
      }
      ObCloseHandle(Handle[0], 0);
    }
    v11 = (_DWORD *)((char *)v114 + v83);
    v92 = v11;
    v95 = v11;
    v85 = 624;
    v12 = v83 + 624;
    if ( v83 + 624 < v83 )
    {
      v12 = v10;
      v13 = -1073741675;
    }
    else
    {
      v13 = 0;
    }
    v83 = v12;
    v82 = v13;
    if ( v13 < 0 )
    {
      v81 = v13;
      goto LABEL_205;
    }
    memset(v123, 0, 0x58uLL);
    if ( v12 > a2 )
    {
      v81 = -1073741820;
      if ( v97 )
        goto LABEL_26;
      goto LABEL_205;
    }
    v18 = ExpCopyProcessInfo(v11, v8, v93, v123);
    v13 = v18;
    v82 = v18;
    if ( v18 < 0 )
    {
      v81 = v18;
      goto LABEL_205;
    }
    *(_QWORD *)v11 = 0LL;
    v11[25] = SessionId;
    *((_QWORD *)v11 + 8) = 0LL;
    v11[14] = 0;
    if ( v8 == PsIdleProcess )
      *((_QWORD *)v11 + 12) = 0LL;
    if ( v8 == (PEPROCESS)PsSecureSystemProcess )
    {
      v19 = qword_1403885F0 << 12;
      *((_QWORD *)v11 + 18) = qword_1403885F0 << 12;
      *((_QWORD *)v11 + 1) = v19;
    }
    if ( v13 < 0 )
    {
      v81 = v13;
      goto LABEL_205;
    }
LABEL_26:
    v20 = (char *)(v11 + 64);
    v91 = v11 + 64;
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
        KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
      }
    }
    else
    {
      p_Blink = 0LL;
      v115 = 0LL;
      v22 = KeGetCurrentThread();
      v23 = Process;
      v24 = &Process[1].ActiveProcessors.Bitmap[19];
      v25 = 0;
      --v22->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v23[1], 0LL);
      for ( i = (unsigned __int64 *)*v24; i != v24; i = (unsigned __int64 *)*i )
      {
        p_Blink = i - 213;
        v115 = i - 213;
        if ( ObReferenceObjectSafeWithTag((__int64)(i - 213)) )
        {
          v25 = 1;
          break;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v23[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v23[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&v23[1]);
      KeLeaveCriticalRegionThread((__int64)v22);
      if ( !v25 )
      {
        p_Blink = 0LL;
        v115 = 0LL;
      }
      v8 = Process;
      v86 = Process;
      v13 = v82;
      v12 = v83;
      v11 = v95;
      v92 = v95;
      v20 = (char *)v91;
    }
    Object = p_Blink;
    while ( p_Blink )
    {
      v119 = *((_DWORD *)p_Blink + 1);
      if ( !(_BYTE)v119 )
      {
        v15 = v88;
        v27 = v88 + v12;
        if ( v88 + v12 < v12 )
        {
          v27 = -1;
          v13 = -1073741675;
        }
        else
        {
          v13 = 0;
        }
        v83 = v27;
        v12 = v27;
        v82 = v13;
        if ( v13 < 0 )
        {
          v81 = v13;
          goto LABEL_269;
        }
        v85 += v88;
        if ( v27 > a2 )
        {
          v81 = -1073741820;
          if ( !v97 )
            goto LABEL_269;
        }
        else
        {
          KeQueryValuesThread((__int64)p_Blink, (__int64)&v104);
          v15 = v105;
          if ( v105 == 4 )
          {
            v16 = v88;
            v85 -= v88;
            v12 -= v88;
            v83 = v12;
          }
          else
          {
            *((_DWORD *)v20 + 6) = v104;
            *((_DWORD *)v20 + 17) = (unsigned __int8)v15;
            *((_DWORD *)v20 + 18) = v106;
            *((_DWORD *)v20 + 14) = v107;
            *((_DWORD *)v20 + 15) = v108;
            *(_QWORD *)v20 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
            *((_QWORD *)v20 + 1) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
            *((_QWORD *)v20 + 2) = p_Blink[190];
            *((_DWORD *)v20 + 16) = *((_DWORD *)p_Blink + 85);
            *(_OWORD *)(v20 + 40) = *(_OWORD *)(p_Blink + 199);
            if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
            {
              v15 = p_Blink[210];
            }
            else
            {
              if ( (p_Blink[219] & 8) != 0
                || (v15 = *((_QWORD *)Object + 194), _InterlockedOr(v80, 0), (p_Blink[219] & 8) != 0) )
              {
                v15 = 0LL;
              }
              v8 = Process;
              v86 = Process;
              v13 = v82;
              p_Blink = (unsigned __int64 *)Object;
              v12 = v83;
              v11 = v95;
              v92 = v95;
              v20 = (char *)v91;
            }
            v116 = v15;
            if ( v84 && v15 > 0x7FFFFFFEFFFFLL )
              *((_QWORD *)v20 + 4) = 0LL;
            else
              *((_QWORD *)v20 + 4) = v15;
            if ( v110 != 5 )
            {
              if ( v84 )
              {
                *((_QWORD *)v20 + 10) = 0LL;
                *((_QWORD *)v20 + 11) = 0LL;
              }
              else
              {
                *((_QWORD *)v20 + 10) = p_Blink[7];
                v20 = (char *)v91;
                *((_QWORD *)v91 + 11) = p_Blink[6];
                v8 = Process;
                v86 = Process;
                v13 = v82;
                p_Blink = (unsigned __int64 *)Object;
                v12 = v83;
                v11 = v95;
                v92 = v95;
              }
              v28 = p_Blink[210];
              v116 = v28;
              if ( v84 && (v15 = 0x7FFFFFFEFFFFLL, v28 > 0x7FFFFFFEFFFFLL) )
                *((_QWORD *)v20 + 12) = 0LL;
              else
                *((_QWORD *)v20 + 12) = v28;
              *((_QWORD *)v20 + 13) = p_Blink[30];
              *((_QWORD *)v20 + 14) = 0LL;
              *((_QWORD *)v20 + 15) = 0LL;
              *((_QWORD *)v20 + 16) = 0LL;
            }
            ++v11[1];
            v16 = v88;
            if ( v13 < 0 )
            {
              v81 = v13;
              goto LABEL_269;
            }
            v91 = &v20[v88];
          }
        }
      }
      if ( v8 == PsIdleProcess )
      {
        v66 = (_LIST_ENTRY *)p_Blink[95];
        if ( v66 == &v8->ThreadListHead )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = (unsigned __int64 *)&v66[-48].Blink;
          KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
        }
      }
      else
      {
        p_Blink = 0LL;
        v117 = 0LL;
        v29 = KeGetCurrentThread();
        v30 = Process;
        v31 = &Process[1].ActiveProcessors.Bitmap[19];
        v32 = 0;
        --v29->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v30[1], 0LL);
        for ( j = (unsigned __int64 *)*((_QWORD *)Object + 213); j != v31; j = (unsigned __int64 *)*j )
        {
          p_Blink = j - 213;
          v117 = j - 213;
          if ( ObReferenceObjectSafeWithTag((__int64)(j - 213)) )
          {
            v32 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v30[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v30[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v30[1]);
        KeLeaveCriticalRegionThread((__int64)v29);
        v15 = (unsigned __int64)Object;
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v32 )
        {
          p_Blink = 0LL;
          v117 = 0LL;
        }
        v8 = Process;
        v86 = Process;
        v13 = v82;
        v12 = v83;
        v11 = v95;
        v92 = v95;
      }
      Object = p_Blink;
      v20 = (char *)v91;
    }
    v34 = v20;
    v101 = v20;
    v91 = v20 + 368;
    if ( v81 >= 0 )
    {
      v35 = (signed __int64 *)&v8[1].Affinity.Bitmap[5];
      v36 = ObFastReferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5]);
      if ( v36 )
      {
        v37 = 0LL;
      }
      else
      {
        v77 = KeGetCurrentThread();
        --v77->KernelApcDisable;
        v78 = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v36 = ObFastReferenceObjectLocked(&v8[1].Affinity.Bitmap[5]);
        v37 = 0LL;
        if ( _InterlockedCompareExchange64(v78, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v78);
        KeAbPostRelease((ULONG_PTR)v78);
        KeLeaveCriticalRegionThread((__int64)v77);
        v8 = Process;
        v34 = (char *)v101;
      }
      v94 = SeSecurityAttributePresent(v36, (const UNICODE_STRING *)&PspSysAppIdClaim);
      ObFastDereferenceObject(v35, v36);
      *(_QWORD *)(v34 + 52) = 0LL;
      *((_DWORD *)v34 + 84) = 0;
      v38 = (char *)v101;
      *((_QWORD *)v101 + 43) = *(_QWORD *)&v8[2].ThreadSeed[4] << 12;
      *((_QWORD *)v38 + 5) = v123[4];
      *((_DWORD *)v38 + 12) = 0;
      if ( v94 )
        *((_DWORD *)v38 + 12) = 1;
      v39 = Process;
      v40 = Process[2].ActiveProcessors.Bitmap[8];
      if ( v40 )
      {
        *(_OWORD *)v38 = *(_OWORD *)v40;
        *((_OWORD *)v38 + 1) = *(_OWORD *)(v40 + 16);
        *((_QWORD *)v38 + 4) = *(_QWORD *)(v40 + 32);
      }
      else
      {
        memset(v38, 0, 0x28uLL);
      }
      if ( (v39[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 2;
      }
      else if ( v39 == (PEPROCESS)PsSecureSystemProcess )
      {
        *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v39) )
      {
        *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 6;
      }
      else
      {
        *((_DWORD *)v38 + 12) &= 0xFFFFFFE1;
      }
      *((_QWORD *)v38 + 45) = v39[2].ActiveProcessors.Bitmap[17];
      PsQueryProcessEnergyValues(v39, v125);
      v41 = v38 + 64;
      v42 = v125;
      v43 = 2LL;
      do
      {
        *v41 = *v42;
        v41[1] = v42[1];
        v41[2] = v42[2];
        v41[3] = v42[3];
        v41[4] = v42[4];
        v41[5] = v42[5];
        v41[6] = v42[6];
        v41 += 8;
        *(v41 - 1) = v42[7];
        v42 += 8;
        --v43;
      }
      while ( v43 );
      *v41 = *v42;
      v34 = (char *)v101;
      if ( v39[1].Affinity.Bitmap[16] )
        *((_DWORD *)v101 + 88) = *(_DWORD *)(v39[1].Affinity.Bitmap[16] + 1220);
      else
        *((_DWORD *)v101 + 88) = 0;
      v8 = Process;
      v86 = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem
        && ((v44 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 6) & 7], v44 != 3)
         || HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 1
          ? (v45 = 0)
          : (v45 = 1),
            PpmPerfQosEnabled && ((unsigned int)(v44 - 1) <= 1 || v45)) )
      {
        *((_DWORD *)v38 + 12) |= 0x20u;
      }
      v13 = v82;
      if ( v82 >= 0 )
      {
        p_Blink = (unsigned __int64 *)Object;
        v12 = v83;
        v92 = v95;
        goto LABEL_114;
      }
      v81 = v82;
LABEL_205:
      p_Blink = (unsigned __int64 *)Object;
      goto LABEL_269;
    }
    v37 = 0LL;
LABEL_114:
    if ( a5 == 148 )
    {
      v68 = PsReferencePrimaryToken(v8);
      Handle[2] = v68;
      SeQueryUserSidToken(v68, Src, 68LL);
      PackageSize = 254LL;
      AppIdSize = 130LL;
      v82 = RtlQueryPackageIdentity(v68, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
      if ( v82 >= 0 )
      {
        v37 = AppIdSize;
        v69 = PackageSize;
      }
      else
      {
        v69 = 0LL;
        PackageSize = 0LL;
        AppIdSize = 0LL;
      }
      ObFastDereferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5], (unsigned __int64)v68);
      v70 = (unsigned int)Size;
      v71 = (Size + 7) & 0xFFFFFFF8;
      v96 = v71;
      v72 = v71 + v12;
      if ( v71 + v12 < v12 )
      {
        v72 = -1;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      v83 = v72;
      v12 = v72;
      v82 = v13;
      if ( v13 < 0 )
      {
        v81 = v13;
        goto LABEL_269;
      }
      v85 += v71;
      if ( v72 > a2 )
      {
        v81 = -1073741820;
        if ( !v97 )
          goto LABEL_269;
        v73 = (char *)v91;
      }
      else
      {
        *((_DWORD *)v34 + 13) = 368;
        memmove(v91, Src, v70);
        v73 = (char *)v91 + v71;
        v91 = v73;
      }
      if ( v69 )
      {
        if ( v69 > 0xFFFFFFFF )
        {
          v81 = -1073741820;
          goto LABEL_269;
        }
        v96 = v69;
        v75 = v69 + v12;
        if ( (unsigned int)v69 + v12 < v12 )
        {
          v12 = -1;
          v83 = -1;
          v13 = -1073741675;
        }
        else
        {
          v12 += v69;
          v83 = v75;
          v13 = 0;
        }
        v82 = v13;
        if ( v13 < 0 )
        {
          v81 = v13;
          goto LABEL_269;
        }
        v85 += v69;
        if ( v12 > a2 )
        {
          v81 = -1073741820;
          if ( !v97 )
            goto LABEL_269;
        }
        else
        {
          *((_DWORD *)v34 + 14) = (_DWORD)v73 - (_DWORD)v34;
          memmove(v73, PackageFullName, (unsigned int)v69);
          v73 += (unsigned int)v69;
          v91 = v73;
        }
      }
      if ( v37 )
      {
        if ( v37 > 0xFFFFFFFF )
        {
          v81 = -1073741820;
          goto LABEL_269;
        }
        v96 = v37;
        v76 = v12 + v37;
        if ( v12 + (unsigned int)v37 < v12 )
        {
          v12 = -1;
          v83 = -1;
          v13 = -1073741675;
        }
        else
        {
          v12 += v37;
          v83 = v76;
          v13 = 0;
        }
        v82 = v13;
        if ( v13 < 0 )
        {
          v81 = v13;
          goto LABEL_269;
        }
        v85 += v37;
        if ( v12 <= a2 )
        {
          *((_DWORD *)v34 + 84) = (_DWORD)v73 - (_DWORD)v34;
          memmove(v73, AppId, (unsigned int)v37);
          v8 = (PEPROCESS)v86;
          v46 = (char *)v91 + (unsigned int)v37;
          v91 = v46;
LABEL_116:
          if ( v8 == PsIdleProcess )
            goto LABEL_174;
          if ( v8 == PsInitialSystemProcess )
          {
            v52 = (const wchar_t *)&ExpSystemProcessName;
          }
          else if ( v8 == (PEPROCESS)PsSecureSystemProcess )
          {
            v52 = (const wchar_t *)&ExpSecureSystemProcessName;
          }
          else
          {
            if ( !SmIsCompressionProcess(v8) )
            {
              v48 = -1073741275;
              v103 = -1073741275;
              if ( v8[2].ActiveProcessors.Bitmap[9] )
              {
                if ( !(_QWORD)xmmword_140362960 )
                {
LABEL_127:
                  v82 = v48;
                  if ( v48 < 0 )
                    v52 = (const wchar_t *)v8[1].ActiveProcessors.Bitmap[15];
                  else
                    v52 = (const wchar_t *)P;
                  goto LABEL_129;
                }
                v48 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140362960)(v47, &P);
              }
              else
              {
                v49 = v8[1].ActiveProcessors.Bitmap[15];
                if ( !v49 )
                  goto LABEL_127;
                PoolWithTag = (char *)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        (unsigned int)*(unsigned __int16 *)(v49 + 2) + 16,
                                        0x6E497350u);
                v51 = PoolWithTag;
                if ( PoolWithTag )
                {
                  *(_OWORD *)PoolWithTag = *(_OWORD *)v49;
                  if ( *((_QWORD *)PoolWithTag + 1) )
                  {
                    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                    memmove(PoolWithTag + 16, *(const void **)(v49 + 8), *(unsigned __int16 *)(v49 + 2));
                  }
                  P = v51;
                  v48 = 0;
                }
                else
                {
                  v48 = -1073741801;
                }
              }
              v103 = v48;
              goto LABEL_127;
            }
            v52 = L"$&";
          }
LABEL_129:
          v109 = v52;
          v53 = *v52;
          v96 = v53;
          v54 = v46;
          v112 = v46;
          LODWORD(Size) = v53;
          v55 = (_WORD *)*((_QWORD *)v52 + 1);
          v56 = v55;
          v111 = v55;
          if ( a5 != 148 && v53 )
          {
            v56 = &v55[(unsigned __int64)v53 >> 1];
            v111 = v56;
            while ( v56 != v55 )
            {
              v111 = --v56;
              if ( *v56 == 92 )
              {
                v111 = ++v56;
                break;
              }
            }
            v53 -= 2 * (v56 - v55);
            LODWORD(Size) = v53;
          }
          v57 = v53;
          v58 = (v53 + 9) & 0xFFFFFFF8;
          v96 = v58;
          v59 = v58 + v12;
          if ( v58 + v12 < v12 )
          {
            v59 = -1;
            v13 = -1073741675;
          }
          else
          {
            v13 = 0;
          }
          v83 = v59;
          v82 = v13;
          if ( v13 >= 0 )
          {
            v85 += v58;
            if ( v59 > a2 )
            {
              v81 = -1073741820;
              if ( !v97 )
                goto LABEL_269;
            }
            else
            {
              if ( v53 )
              {
                memmove(v46, v56, v53);
                v54 = &v46[2 * (v57 >> 1)];
                v112 = v54;
              }
              *(_WORD *)v54 = 0;
              v54 += 2;
              v112 = v54;
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            if ( v81 >= 0 )
            {
              v60 = v92;
              *((_WORD *)v92 + 28) = (_WORD)v54 - (_WORD)v46 - 2;
              *((_WORD *)v60 + 29) = v58;
              *((_QWORD *)v60 + 8) = v46;
              v8 = (PEPROCESS)v86;
              goto LABEL_147;
            }
            v8 = (PEPROCESS)v86;
LABEL_174:
            v60 = v92;
LABEL_147:
            if ( v81 < 0 || (*v60 = v85, v13 >= 0) )
            {
              v5 = 0;
              goto LABEL_150;
            }
            v81 = v13;
            goto LABEL_269;
          }
          v81 = v13;
LABEL_269:
          if ( v86 && v86 != PsIdleProcess )
            ObfDereferenceObjectWithTag(v86, 0x6E457350u);
          if ( p_Blink && (PVOID)p_Blink[68] != PsIdleProcess )
            ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v81;
        }
        v81 = -1073741820;
        if ( !v97 )
          goto LABEL_269;
        v8 = (PEPROCESS)v86;
      }
      else
      {
        v8 = (PEPROCESS)v86;
      }
    }
    v46 = (char *)v91;
    goto LABEL_116;
  }
  return result;
}
