/*
 * XREFs of ObWaitForMultipleObjects @ 0x140527380
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x14043DAF4 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x140527250 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ExFastReplenishHandleTableEntry @ 0x140036060 (ExFastReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x140044638 (ObpIncrPointerCountEx.c)
 *     KeSetKernelStackSwapEnable @ 0x140051240 (KeSetKernelStackSwapEnable.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     ObpIsKernelHandle @ 0x14008BBC0 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400EE890 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
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
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // r15
  ULONG_PTR v19; // r13
  _OWORD *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rdi
  char v23; // al
  unsigned __int64 v24; // rax
  __int128 v25; // rt0
  unsigned __int8 v26; // tt
  int v27; // ecx
  unsigned __int64 v28; // rsi
  WAIT_TYPE v29; // r10d
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  ULONG v33; // r13d
  __int16 v34; // ax
  unsigned int v35; // edi
  struct _EX_RUNDOWN_REF *v36; // r13
  PVOID *v37; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v40; // rbx
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned int v43; // edx
  unsigned __int64 *v44; // r8
  unsigned int v45; // r11d
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rbx
  int v50; // ecx
  unsigned __int64 v51; // rax
  void *v52; // rsp
  unsigned int v53; // ebx
  unsigned __int64 *v54; // r8
  char v55; // r9
  __int64 v56; // r8
  signed __int32 v57[8]; // [rsp+0h] [rbp-40h] BYREF
  char v58; // [rsp+40h] [rbp+0h] BYREF
  char v59; // [rsp+41h] [rbp+1h]
  char v60; // [rsp+42h] [rbp+2h]
  BOOLEAN v61; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  WAIT_TYPE WaitType; // [rsp+50h] [rbp+10h]
  unsigned __int64 v64; // [rsp+58h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+60h] [rbp+20h]
  unsigned __int64 *v66; // [rsp+68h] [rbp+28h]
  struct _KTHREAD *v67; // [rsp+70h] [rbp+30h]
  __int128 v68; // [rsp+78h] [rbp+38h] BYREF
  ULONG Count; // [rsp+88h] [rbp+48h]
  unsigned int v70; // [rsp+8Ch] [rbp+4Ch]
  int v71; // [rsp+90h] [rbp+50h]
  unsigned __int64 v72; // [rsp+98h] [rbp+58h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+A8h] [rbp+68h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+B0h] [rbp+70h]
  __int64 v76; // [rsp+B8h] [rbp+78h]
  PVOID Object; // [rsp+D0h] [rbp+90h] BYREF
  _BYTE v78[1016]; // [rsp+D8h] [rbp+98h] BYREF

  WaitType = a4;
  v7 = a3;
  v58 = a3;
  v66 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v61 = 0;
  v60 = 0;
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
      v60 = 1;
    }
    else
    {
      v61 = KeSetKernelStackSwapEnable(0);
      v51 = 48 * v8 + 15;
      if ( v51 <= 48 * v8 )
        v51 = 0xFFFFFFFFFFFFFF0LL;
      v52 = alloca(v51 & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = (PKWAIT_BLOCK)&v58;
      WaitBlockArray = (PKWAIT_BLOCK)&v58;
    }
    a2 = v66;
  }
  v10 = 0;
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  v67 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v65 = Process;
  v75 = Process;
  v13 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v14 = Process[131].Count;
    v72 = v14;
    goto LABEL_4;
  }
  v14 = ObReferenceProcessHandleTable(Process);
  v72 = v14;
  if ( v14 )
  {
    v59 = 1;
    goto LABEL_100;
  }
  v53 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_99;
  v54 = v66;
  v55 = v58;
  while ( ObpIsKernelHandle(*v54, v55) )
  {
    ++v53;
    v54 = (unsigned __int64 *)(v56 + 8);
    if ( v53 >= (unsigned int)v8 )
    {
      v14 = v72;
LABEL_99:
      v7 = v58;
LABEL_100:
      a2 = v66;
LABEL_4:
      v15 = 0LL;
      v16 = 1;
      v17 = v64;
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
          v20 = (_OWORD *)ExpLookupHandleTableEntry(v19, v18);
          v21 = v20;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v68 = *v20;
LABEL_10:
            v22 = v68;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) != 0 )
                v23 = 0;
              else
                v23 = v16;
              if ( v23 )
              {
                ExpBlockOnLockedHandleEntry(v19, v21, v22);
                _m_prefetchw(v21);
                v68 = *(_OWORD *)v21;
                v16 = 1;
                goto LABEL_10;
              }
              v76 = v22 - 2;
              *(_QWORD *)&v25 = v22;
              *((_QWORD *)&v25 + 1) = *((_QWORD *)&v68 + 1);
              v26 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v25 + 1), v22 - 2, (signed __int64 *)&v25);
              v24 = v25;
              v22 = v25;
              v68 = v25;
              if ( v26 )
              {
                if ( (unsigned __int16)(v24 >> 1) != 16 )
                {
                  v17 = (v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v64 = v17;
LABEL_18:
                  v7 = v58;
                  goto LABEL_19;
                }
                *(_QWORD *)&v68 = ((unsigned int)v22 ^ (2 * (unsigned int)(v24 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v22;
                v17 = ((__int64)v68 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v64 = v17;
                ObpIncrPointerCountEx((volatile signed __int64 *)v17, 32752);
                v50 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v68, 32752);
                v16 = 1;
                if ( !v50 )
                  goto LABEL_18;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v17, -v50);
LABEL_59:
                v17 = v64;
                goto LABEL_18;
              }
            }
            if ( ExLockHandleTableEntry(v19, v21) )
            {
              v64 = ((__int64)*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v40 = (volatile signed __int64 *)v64;
              v68 = *(_OWORD *)v21;
              v41 = ExSlowReplenishHandleTableEntry(v21);
              ObpIncrPointerCountEx(v40, v41 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v57, 0);
              if ( *(_QWORD *)(v19 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_59;
            }
            v17 = v64;
            v7 = v58;
            v16 = 1;
          }
        }
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = v64;
          v16 = 1;
        }
        v21 = 0LL;
LABEL_19:
        if ( !v21 )
        {
LABEL_106:
          v35 = -1073741816;
LABEL_107:
          v13 = 1;
          CurrentThread = v67;
LABEL_108:
          v9 = WaitBlockArray;
          goto LABEL_109;
        }
        v27 = DWORD2(v68) & 0x1FFFFFF;
        v71 = ++v10;
        v28 = v17 + 48;
        *(_QWORD *)&v78[8 * v15 + 504] = v17 + 48;
        if ( v7 == 1 )
        {
          if ( (~v27 & 0x100000) != 0 )
          {
            v35 = -1073741790;
            goto LABEL_107;
          }
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v42 = v17 - ObpInfoMaskToOffset[*(_BYTE *)(v17 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v42 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v42 + 16LL) == 1LL )
              {
                v35 = -1073700858;
                goto LABEL_107;
              }
              v17 = v64;
            }
          }
        }
        v29 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17)] == IoCompletionObjectType )
        {
          goto LABEL_106;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v17, 1, v16, 1951883855);
          v29 = WaitType;
          v16 = 1;
        }
        v30 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17);
        v31 = ObTypeIndexTable[v30];
        v32 = *(_QWORD *)(v31 + 32);
        if ( (v32 & 1) != 0 )
        {
          if ( (v32 & 2) != 0 )
          {
            v43 = *(_DWORD *)(v31 + 176);
            v30 = v43 & *(_DWORD *)(*(unsigned __int16 *)(v31 + 180) + v28);
            if ( (_DWORD)v30 == v43 )
            {
              v32 = *(_QWORD *)(*(unsigned __int16 *)(v31 + 182) + v28);
            }
            else
            {
              v32 -= 3LL;
LABEL_28:
              v32 += v28;
            }
          }
          else
          {
            v32 = *(_QWORD *)(v32 + v28 - 1);
          }
        }
        else if ( v32 >= 0 )
        {
          goto LABEL_28;
        }
        *(_QWORD *)&v78[8 * v15 - 8] = v32;
        v15 = (unsigned int)(v15 + 1);
        v33 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          if ( v59 )
          {
            v59 = 0;
            ExReleaseRundownProtection(v65 + 95);
            v29 = WaitType;
          }
          CurrentThread = v67;
          v34 = v67->KernelApcDisable + 1;
          v67->KernelApcDisable = v34;
          if ( !v34
            && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v30);
            v29 = WaitType;
          }
          v13 = 0;
          v58 = 0;
          if ( v29 == WaitAll && v33 > 1 )
          {
            v44 = (unsigned __int64 *)v78;
            v45 = 1;
            while ( 2 )
            {
              v46 = v45;
              v47 = *v44;
              do
              {
                v48 = v46 - 1;
                v49 = *(_QWORD *)&v78[8 * v48 - 8];
                if ( v47 > v49 )
                  break;
                if ( v47 == v49 )
                {
                  v35 = -1073741776;
                  goto LABEL_108;
                }
                *(_QWORD *)&v78[8 * v46-- - 8] = v49;
              }
              while ( (_DWORD)v48 );
              *(_QWORD *)&v78[8 * v46 - 8] = v47;
              ++v45;
              ++v44;
              if ( v45 < v33 )
                continue;
              break;
            }
          }
          v9 = WaitBlockArray;
          v35 = KeWaitForMultipleObjects(v33, &Object, v29, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v70 = v35;
          v36 = v65;
          goto LABEL_37;
        }
        v7 = v58;
        v14 = v72;
        a2 = v66;
        continue;
      }
    }
  }
  v35 = -1073741558;
LABEL_109:
  v36 = v65;
LABEL_37:
  if ( v10 )
  {
    v37 = (PVOID *)&v78[8 * v10 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v37, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
  }
  if ( v13 )
  {
    if ( v59 )
      ExReleaseRundownProtection(v36 + 95);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  if ( v9 )
  {
    if ( v60 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v9);
      else
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v61);
    }
  }
  return v35;
}
