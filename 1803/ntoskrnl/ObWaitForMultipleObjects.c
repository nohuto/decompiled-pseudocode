/*
 * XREFs of ObWaitForMultipleObjects @ 0x1405A40F0
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x140553030 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x1405A2810 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400CAFEC (ExFastReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400EB080 (ObpIncrPointerCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400FE940 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x1402B8000 (ExHandleLogBadReference.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        unsigned __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // r9
  unsigned __int64 *v8; // r15
  PKWAIT_BLOCK v10; // r13
  int v11; // esi
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // r10
  char v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // r13
  unsigned __int16 v17; // r10
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // r15
  _OWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rax
  __int128 v25; // rt0
  unsigned __int8 v26; // tt
  unsigned __int64 v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  WAIT_TYPE v31; // r15d
  __int64 v32; // r9
  __int64 v33; // r8
  ULONG v34; // edi
  bool v35; // zf
  unsigned int v36; // edi
  struct _EX_RUNDOWN_REF *v37; // r15
  PVOID *v38; // rbx
  unsigned __int64 v40; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v42; // rbx
  int v43; // eax
  unsigned __int64 *v44; // r8
  unsigned int v45; // r10d
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rax
  void *v53; // rsp
  ULONG v54; // ebx
  unsigned __int64 *v55; // r8
  __int64 v56; // r8
  signed __int32 v57[8]; // [rsp+0h] [rbp-40h] BYREF
  char v58; // [rsp+40h] [rbp+0h] BYREF
  char v59; // [rsp+41h] [rbp+1h]
  char v60; // [rsp+42h] [rbp+2h]
  BOOLEAN v61; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v63; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v65; // [rsp+60h] [rbp+20h]
  __int128 v66; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v69; // [rsp+80h] [rbp+40h]
  int v70; // [rsp+84h] [rbp+44h]
  unsigned __int64 v71; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  unsigned __int64 *v73; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+A8h] [rbp+68h]
  PVOID Object; // [rsp+B0h] [rbp+70h] BYREF
  _BYTE v77[1016]; // [rsp+B8h] [rbp+78h] BYREF

  WaitType = a4;
  v7 = a3;
  v58 = a3;
  v8 = a2;
  v73 = a2;
  Count = a1;
  Timeout = a7;
  v61 = 0;
  v60 = 0;
  v10 = 0LL;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    v40 = 48LL * a1;
    if ( a1 > 0xA )
    {
      Lookaside = (PNPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside + 128 * (unsigned __int64)((a1 - 11) / 0xE));
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    v10 = PoolWithTag;
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v60 = 1;
    }
    else
    {
      v61 = KeSetKernelStackSwapEnable(0);
      v52 = v40 + 15;
      if ( v40 + 15 < v40 )
        v52 = 0xFFFFFFFFFFFFFF0LL;
      v53 = alloca(v52 & 0xFFFFFFFFFFFFFFF0uLL);
      v10 = (PKWAIT_BLOCK)&v58;
      WaitBlockArray = (PKWAIT_BLOCK)&v58;
    }
    v7 = v58;
  }
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  v65 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v64 = Process;
  v75 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v15 = Process[131].Count;
    v71 = v15;
    goto LABEL_4;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v71 = v15;
  if ( v15 )
  {
    v59 = 1;
LABEL_89:
    v7 = v58;
    goto LABEL_4;
  }
  v54 = 0;
  if ( !a1 )
    goto LABEL_89;
  v55 = v8;
  v7 = v58;
  while ( ObpIsKernelHandle(*v55, v7) )
  {
    ++v54;
    v55 = (unsigned __int64 *)(v56 + 8);
    if ( v54 >= a1 )
    {
      v15 = v71;
LABEL_4:
      v16 = 0LL;
      v17 = 1;
      v18 = v63;
      while ( 2 )
      {
        v19 = v8[v16];
        if ( v7 || (v19 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v19 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v20 = v15;
        }
        else
        {
          v19 ^= 0xFFFFFFFF80000000uLL;
          v20 = ObpKernelHandleTable;
        }
        if ( (v19 & 0x3FC) != 0 )
        {
          v21 = (_OWORD *)ExpLookupHandleTableEntry(v20, v19);
          v22 = v21;
          if ( v21 )
          {
            _m_prefetchw(v21);
            v66 = *v21;
LABEL_10:
            v23 = v66;
            while ( (v23 & 0x1FFFE) != 0 )
            {
              if ( (v23 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v20, v22, v23);
                _m_prefetchw(v22);
                v66 = *(_OWORD *)v22;
                goto LABEL_10;
              }
              *(_QWORD *)&v25 = v23;
              *((_QWORD *)&v25 + 1) = *((_QWORD *)&v66 + 1);
              v26 = _InterlockedCompareExchange128(v22, *((signed __int64 *)&v25 + 1), v23 - 2, (signed __int64 *)&v25);
              v24 = v25;
              v23 = v25;
              v66 = v25;
              if ( v26 )
              {
                if ( (unsigned __int16)((unsigned __int64)v24 >> 1) != 16 )
                {
                  v18 = (v24 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v63 = v18;
                  v17 = 1;
LABEL_16:
                  v7 = v58;
                  goto LABEL_17;
                }
                *(_QWORD *)&v66 = v24 ^ ((unsigned int)v24 ^ (2 * (unsigned int)((unsigned __int64)v24 >> 1) - 2)) & 0x1FFFE;
                v18 = ((__int64)v66 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v63 = v18;
                ObpIncrPointerCountEx((volatile signed __int64 *)v18, 32752);
                v51 = ExFastReplenishHandleTableEntry(v22, (unsigned __int64 *)&v66, 32752);
                v17 = 1;
                if ( !v51 )
                  goto LABEL_16;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -v51);
LABEL_58:
                v18 = v63;
                goto LABEL_16;
              }
            }
            if ( ExLockHandleTableEntry(v20, v22) )
            {
              v63 = ((__int64)*v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v42 = (volatile signed __int64 *)v63;
              v66 = *(_OWORD *)v22;
              v43 = ExSlowReplenishHandleTableEntry(v22);
              ObpIncrPointerCountEx(v42, v43 + 1);
              v17 = 1;
              _InterlockedExchangeAdd64(v22, 1uLL);
              _InterlockedOr(v57, 0);
              if ( *(_QWORD *)(v20 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v20 + 48), 0LL);
                v17 = 1;
              }
              goto LABEL_58;
            }
            v18 = v63;
            v7 = v58;
            v17 = 1;
          }
        }
        if ( v19 )
        {
          ExHandleLogBadReference(v20, v19, KeGetCurrentThread()->PreviousMode);
          v18 = v63;
          v7 = v58;
          v17 = 1;
        }
        v22 = 0LL;
LABEL_17:
        v27 = v18;
        if ( !v22 )
        {
LABEL_101:
          v36 = -1073741816;
LABEL_102:
          v14 = 1;
          CurrentThread = v65;
LABEL_103:
          v10 = WaitBlockArray;
          goto LABEL_104;
        }
        v28 = DWORD2(v66) & 0x1FFFFFF;
        v70 = ++v11;
        v29 = v18 + 48;
        *(_QWORD *)&v77[8 * v16 + 504] = v18 + 48;
        if ( v7 == 1 )
        {
          if ( (~v28 & 0x100000) != 0 )
          {
            v36 = -1073741790;
            goto LABEL_102;
          }
          if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
          {
            v50 = v18 - ObpInfoMaskToOffset[*(_BYTE *)(v18 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v50 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v50 + 16LL) == 1LL )
              {
                v36 = -1073700858;
                goto LABEL_102;
              }
              v18 = v63;
            }
          }
        }
        v30 = v27 >> 8;
        v31 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v30 ^ (unsigned __int64)*(unsigned __int8 *)(v18 + 24)] == IoCompletionObjectType )
        {
          goto LABEL_101;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v18, 1, v17, 1951883855);
          v17 = 1;
        }
        v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18)];
        v33 = *(_QWORD *)(v32 + 32);
        if ( (v33 & 1) != 0 )
        {
          if ( (v33 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v32 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v32 + 180) + v29)) == *(_DWORD *)(v32 + 176) )
            {
              v33 = *(_QWORD *)(*(unsigned __int16 *)(v32 + 182) + v29);
            }
            else
            {
              v33 -= 3LL;
LABEL_26:
              v33 += v29;
            }
          }
          else
          {
            v33 = *(_QWORD *)(v33 + v29 - 1);
          }
        }
        else if ( v33 >= 0 )
        {
          goto LABEL_26;
        }
        *(_QWORD *)&v77[8 * v16 - 8] = v33;
        v16 = (unsigned int)(v16 + 1);
        v34 = Count;
        if ( (unsigned int)v16 >= Count )
        {
          if ( v59 )
          {
            v59 = 0;
            ExReleaseRundownProtection(v64 + 95);
          }
          CurrentThread = v65;
          v35 = v65->KernelApcDisable++ == -1;
          if ( v35
            && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v14 = 0;
          v58 = 0;
          if ( v31 == WaitAll && v34 > 1 )
          {
            v44 = (unsigned __int64 *)v77;
            v45 = 1;
            while ( 2 )
            {
              v46 = v45;
              v47 = *v44;
              do
              {
                v48 = v46 - 1;
                v49 = *(_QWORD *)&v77[8 * v48 - 8];
                if ( v47 > v49 )
                  break;
                if ( v47 == v49 )
                {
                  v36 = -1073741776;
                  goto LABEL_103;
                }
                *(_QWORD *)&v77[8 * v46-- - 8] = v49;
              }
              while ( (_DWORD)v48 );
              *(_QWORD *)&v77[8 * v46 - 8] = v47;
              ++v45;
              ++v44;
              if ( v45 < v34 )
                continue;
              break;
            }
          }
          v10 = WaitBlockArray;
          v36 = KeWaitForMultipleObjects(v34, &Object, v31, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v69 = v36;
          v37 = v64;
          goto LABEL_34;
        }
        v7 = v58;
        v15 = v71;
        v8 = v73;
        continue;
      }
    }
  }
  v36 = -1073741558;
LABEL_104:
  v37 = v64;
LABEL_34:
  if ( v11 )
  {
    v38 = (PVOID *)&v77[8 * v11 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v38, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v14 )
  {
    if ( v59 )
      ExReleaseRundownProtection(v37 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v10 )
  {
    if ( v60 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v10);
      else
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v61);
    }
  }
  return v36;
}
