/*
 * XREFs of ObWaitForMultipleObjects @ 0x1404A32F0
 * Callers:
 *     NtWaitForMultipleObjects @ 0x1404A2E70 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x140581DF0 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140082980 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpIncrPointerCountEx @ 0x14008AB18 (ObpIncrPointerCountEx.c)
 *     ObpIsKernelHandle @ 0x1400A5DF0 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B3EC (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
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
  char v7; // bl
  __int64 v8; // r13
  PKWAIT_BLOCK v9; // r15
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *Process; // r9
  char v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // r15
  ULONG_PTR v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  int v26; // ecx
  unsigned __int64 v27; // rsi
  WAIT_TYPE v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  ULONG v32; // r13d
  bool v33; // zf
  unsigned int v34; // edi
  struct _EX_RUNDOWN_REF *v35; // r13
  PVOID *v36; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v39; // rbx
  int v40; // eax
  unsigned __int64 *v41; // r9
  unsigned int v42; // r11d
  unsigned int v43; // ecx
  unsigned __int64 v44; // r8
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned int v48; // edx
  int v49; // ecx
  unsigned __int64 v50; // rax
  void *v51; // rsp
  unsigned int v52; // ebx
  unsigned __int64 *v53; // r8
  char v54; // r9
  __int64 v55; // r8
  signed __int32 v56[8]; // [rsp+0h] [rbp-40h] BYREF
  char v57; // [rsp+40h] [rbp+0h] BYREF
  char v58; // [rsp+41h] [rbp+1h]
  char v59; // [rsp+42h] [rbp+2h]
  BOOLEAN v60; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  WAIT_TYPE WaitType; // [rsp+50h] [rbp+10h]
  unsigned __int64 v63; // [rsp+58h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+60h] [rbp+20h]
  unsigned __int64 *v65; // [rsp+68h] [rbp+28h]
  struct _KTHREAD *v66; // [rsp+70h] [rbp+30h]
  __int128 v67; // [rsp+78h] [rbp+38h] BYREF
  ULONG Count; // [rsp+88h] [rbp+48h]
  unsigned int v69; // [rsp+8Ch] [rbp+4Ch]
  int v70; // [rsp+90h] [rbp+50h]
  __int64 v71; // [rsp+98h] [rbp+58h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+A8h] [rbp+68h]
  struct _EX_RUNDOWN_REF *v74; // [rsp+B0h] [rbp+70h]
  PVOID Object; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v76[1016]; // [rsp+C8h] [rbp+88h] BYREF

  WaitType = a4;
  v7 = a3;
  v57 = a3;
  v65 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v60 = 0;
  v59 = 0;
  v9 = 0LL;
  WaitBlockArray = 0LL;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    if ( a1 > 0xA )
    {
      Lookaside = (PNPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside + 128 * (unsigned __int64)((a1 - 11) / 0xE));
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    v9 = PoolWithTag;
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v59 = 1;
    }
    else
    {
      v60 = KeSetKernelStackSwapEnable(0);
      v50 = 48 * v8 + 15;
      if ( v50 <= 48 * v8 )
        v50 = 0xFFFFFFFFFFFFFF0LL;
      v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = (PKWAIT_BLOCK)&v57;
      WaitBlockArray = (PKWAIT_BLOCK)&v57;
    }
    a2 = v65;
  }
  v10 = 0;
  v58 = 0;
  CurrentThread = KeGetCurrentThread();
  v66 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v64 = Process;
  v74 = Process;
  v13 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v14 = Process[131].Count;
    v71 = v14;
    goto LABEL_4;
  }
  v14 = ObReferenceProcessHandleTable(Process);
  v71 = v14;
  if ( v14 )
  {
    v58 = 1;
    goto LABEL_97;
  }
  v52 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_96;
  v53 = v65;
  v54 = v57;
  while ( ObpIsKernelHandle(*v53, v54) )
  {
    ++v52;
    v53 = (unsigned __int64 *)(v55 + 8);
    if ( v52 >= (unsigned int)v8 )
    {
      v14 = v71;
LABEL_96:
      v7 = v57;
LABEL_97:
      a2 = v65;
LABEL_4:
      v15 = 0LL;
      v16 = 1;
      v17 = v63;
      while ( 2 )
      {
        v18 = a2[v15];
        if ( v7 || (v18 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v18 >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v19 = v14;
        }
        else
        {
          v18 ^= 0xFFFFFFFF80000000uLL;
          v19 = ObpKernelHandleTable;
        }
        if ( (v18 & 0x3FC) != 0 )
        {
          v20 = (__int64 *)ExpLookupHandleTableEntry(v19, v18);
          v21 = v20;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v67 = *(_OWORD *)v20;
LABEL_10:
            v22 = v67;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v19, v21, v22);
                _m_prefetchw(v21);
                v67 = *(_OWORD *)v21;
                goto LABEL_10;
              }
              *(_QWORD *)&v24 = v22;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v67 + 1);
              v25 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v24 + 1), v22 - 2, (signed __int64 *)&v24);
              v23 = v24;
              v22 = v24;
              v67 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)(v23 >> 1) != 16 )
                {
                  v17 = (v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v63 = v17;
                  v16 = 1;
LABEL_16:
                  v7 = v57;
                  goto LABEL_17;
                }
                *(_QWORD *)&v67 = ((unsigned int)v22 ^ (2 * (unsigned int)(v23 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v22;
                v17 = ((__int64)v67 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v63 = v17;
                ObpIncrPointerCountEx((volatile signed __int64 *)v17, 32752);
                v49 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v67, 32752);
                v16 = 1;
                if ( !v49 )
                  goto LABEL_16;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v17, -v49);
LABEL_55:
                v17 = v63;
                goto LABEL_16;
              }
            }
            if ( ExLockHandleTableEntry(v19, v21) )
            {
              v63 = (*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v39 = (volatile signed __int64 *)v63;
              v67 = *(_OWORD *)v21;
              v40 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21);
              ObpIncrPointerCountEx(v39, v40 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v56, 0);
              if ( *(_QWORD *)(v19 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_55;
            }
            v17 = v63;
            v7 = v57;
            v16 = 1;
          }
        }
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = v63;
          v16 = 1;
        }
        v21 = 0LL;
LABEL_17:
        if ( !v21 )
        {
LABEL_103:
          v34 = -1073741816;
LABEL_104:
          v13 = 1;
          CurrentThread = v66;
LABEL_105:
          v9 = WaitBlockArray;
          goto LABEL_106;
        }
        v26 = DWORD2(v67) & 0x1FFFFFF;
        v70 = ++v10;
        v27 = v17 + 48;
        *(_QWORD *)&v76[8 * v15 + 504] = v17 + 48;
        if ( v7 == 1 )
        {
          if ( (~v26 & 0x100000) != 0 )
          {
            v34 = -1073741790;
            goto LABEL_104;
          }
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v47 = v17 - ObpInfoMaskToOffset[*(_BYTE *)(v17 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v47 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v47 + 16LL) == 1LL )
              {
                v34 = -1073700858;
                goto LABEL_104;
              }
              v17 = v63;
            }
          }
        }
        v28 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17)] == IoCompletionObjectType )
        {
          goto LABEL_103;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v17, 1, v16, 1951883855);
          v28 = WaitType;
          v16 = 1;
        }
        v29 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17);
        v30 = ObTypeIndexTable[v29];
        v31 = *(_QWORD *)(v30 + 32);
        if ( (v31 & 1) != 0 )
        {
          if ( (v31 & 2) != 0 )
          {
            v48 = *(_DWORD *)(v30 + 176);
            v29 = v48 & *(_DWORD *)(*(unsigned __int16 *)(v30 + 180) + v27);
            if ( (_DWORD)v29 == v48 )
            {
              v31 = *(_QWORD *)(*(unsigned __int16 *)(v30 + 182) + v27);
            }
            else
            {
              v31 -= 3LL;
LABEL_26:
              v31 += v27;
            }
          }
          else
          {
            v31 = *(_QWORD *)(v31 + v27 - 1);
          }
        }
        else if ( v31 >= 0 )
        {
          goto LABEL_26;
        }
        *(_QWORD *)&v76[8 * v15 - 8] = v31;
        v15 = (unsigned int)(v15 + 1);
        v32 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          if ( v58 )
          {
            v58 = 0;
            ExReleaseRundownProtection_0(v64 + 95);
            v28 = WaitType;
          }
          CurrentThread = v66;
          v33 = v66->KernelApcDisable++ == -1;
          if ( v33
            && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v29);
            v28 = WaitType;
          }
          v13 = 0;
          v57 = 0;
          if ( v28 == WaitAll && v32 > 1 )
          {
            v41 = (unsigned __int64 *)v76;
            v42 = 1;
            while ( 2 )
            {
              v43 = v42;
              v44 = *v41;
              do
              {
                v45 = v43 - 1;
                v46 = *(_QWORD *)&v76[8 * v45 - 8];
                if ( v44 > v46 )
                  break;
                if ( v44 == v46 )
                {
                  v34 = -1073741776;
                  goto LABEL_105;
                }
                *(_QWORD *)&v76[8 * v43-- - 8] = v46;
              }
              while ( (_DWORD)v45 );
              *(_QWORD *)&v76[8 * v43 - 8] = v44;
              ++v42;
              ++v41;
              if ( v42 < v32 )
                continue;
              break;
            }
          }
          v9 = WaitBlockArray;
          v34 = KeWaitForMultipleObjects(v32, &Object, v28, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v69 = v34;
          v35 = v64;
          goto LABEL_35;
        }
        v7 = v57;
        v14 = v71;
        a2 = v65;
        continue;
      }
    }
  }
  v34 = -1073741558;
LABEL_106:
  v35 = v64;
LABEL_35:
  if ( v10 )
  {
    v36 = (PVOID *)&v76[8 * v10 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v36, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
  }
  if ( v13 )
  {
    if ( v58 )
      ExReleaseRundownProtection_0(v35 + 95);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v9 )
  {
    if ( v59 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v9);
      else
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v60);
    }
  }
  return v34;
}
