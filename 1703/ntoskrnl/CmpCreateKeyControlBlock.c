/*
 * XREFs of CmpCreateKeyControlBlock @ 0x140502580
 * Callers:
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpEtwDumpKcb @ 0x140660E60 (CmpEtwDumpKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140665AFC (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpTryToLockKcbExclusive @ 0x14066A484 (CmpTryToLockKcbExclusive.c)
 *     CmpCreateLayerLink @ 0x14066D704 (CmpCreateLayerLink.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, __int64 a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  __int64 v6; // r12
  int v9; // ebx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // r8d
  __int64 i; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  PRTL_BALANCED_NODE v18; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // si
  signed __int32 v24; // eax
  int v25; // eax
  _DWORD *v26; // rsi
  __int64 NameControlBlock; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  bool v33; // zf
  _KLOCK_ENTRY *v34; // rax
  int v35; // ebx
  __int64 v36; // rsi
  int v37; // r10d
  __int64 v38; // rax
  __int16 v39; // bp
  unsigned int v40; // r8d
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  int v43; // eax
  int v44; // r11d
  bool v45; // sf
  __int64 v46; // rbx
  int v47; // eax
  int v48; // ecx
  char v49; // bl
  int v50; // ebx
  signed __int32 v51; // eax
  signed __int32 v52; // ecx
  signed __int32 v53; // ett
  unsigned __int64 v54; // rdx
  unsigned int LayerLink; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v58; // r9
  unsigned __int16 j; // r8
  __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  PVOID v63; // rax
  void *v64; // rcx
  void *v65; // rcx
  _BYTE v66[8]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v67[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v68; // [rsp+48h] [rbp-40h]
  __int64 v71; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v73; // [rsp+C8h] [rbp+40h]
  unsigned __int64 *v74; // [rsp+D0h] [rbp+48h]
  va_list va1; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v71 = va_arg(va1, _QWORD);
  v73 = va_arg(va1, _QWORD);
  v74 = va_arg(va1, unsigned __int64 *);
  v6 = a1;
  HvpGetCellContextReinitialize((__int64)v66);
  if ( (*(_DWORD *)(v6 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(v6 + 5416) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  v9 = v73;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 2800)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v6 + 2808) - 1) & ((101027
                                                                  * ((unsigned int)v73 ^ ((unsigned int)v73 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v73 ^ ((unsigned int)v73 >> 9))) >> 9)))
                  + 16);
  if ( v11 )
  {
    do
    {
      if ( *(_DWORD *)v11 == v9 )
      {
        v10 = v11 - 8;
        if ( *(_QWORD *)(v11 + 56) == a3 )
        {
          v62 = *(_QWORD *)(v10 + 72);
          if ( (*(_DWORD *)v62 & 1) != 0 )
          {
            if ( !(unsigned int)CmpCompareCompressedName(
                                  (__int64)a6,
                                  (unsigned __int8 *)(v62 + 26),
                                  *(_WORD *)(v62 + 24),
                                  2) )
              goto LABEL_3;
          }
          else
          {
            v68 = v62 + 26;
            v67[0] = *(_WORD *)(v62 + 24);
            v67[1] = v67[0];
            if ( !(unsigned int)CmpCompareUnicodeString((__int64)a6, (__int64)v67, 2) )
              goto LABEL_3;
          }
        }
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
    v10 = 0LL;
  }
LABEL_3:
  if ( v10 )
  {
    if ( CmpReferenceKeyControlBlockLockNotHeld((volatile signed __int32 *)v10) )
    {
      LayerLink = 0;
      *v74 = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return LayerLink;
  }
  v12 = 0;
  for ( i = a3; i; i = *(_QWORD *)(i + 64) )
  {
    if ( (*(_DWORD *)(i + 176) & 0x40000) == 0 || !*(_QWORD *)(i + 64) )
    {
      v14 = *(_QWORD *)(i + 72);
      v15 = *(unsigned __int16 *)(v14 + 24);
      if ( (*(_DWORD *)v14 & 1) != 0 )
        v15 *= 2;
      v12 += v15 + 2;
    }
  }
  v16 = v12 + (unsigned int)*a6 + 2;
  if ( (unsigned int)v16 > 0xFFFF )
  {
    LayerLink = -1073741811;
LABEL_104:
    if ( v10 )
    {
      v64 = *(void **)(v10 + 72);
      if ( v64 )
        CmpDereferenceNameControlBlockWithLock(v64);
      if ( *(_QWORD *)(v10 + 64) )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3);
      v65 = *(void **)(v10 + 184);
      if ( v65 )
        ExFreePoolWithTag(v65, 0);
      *(_DWORD *)(v10 + 4) |= 0x80000u;
      CmpFreeKeyControlBlock(v10);
    }
    return LayerLink;
  }
  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    v18 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, (__int64)v18);
    if ( v18 )
      BYTE2(v18[1].Left) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    while ( 1 )
    {
      v20 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag((__int64)v17, 0x1000uLL, 0x6C414D43u);
      v58 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_118;
      }
      _InterlockedIncrement64(&qword_1407AD0D0);
      *TransientPoolWithTag = 13;
      for ( j = 0; j < 0xDu; ++j )
      {
        v60 = 74LL * j;
        v61 = &v58[v60 + 30];
        v58[v60 + 3] |= 0x10000u;
        v17 = (_QWORD *)qword_14036B208;
        if ( *(__int64 **)qword_14036B208 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v61 = &CmpFreeKCBListHead;
        v61[1] = v17;
        *v17 = v61;
        qword_14036B208 = (__int64)&v58[v60 + 30];
        _InterlockedIncrement64(&qword_1407AD0D8);
      }
    }
    v21 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v21 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    v22 = v20 - 112;
    *(_QWORD *)(v21 + 8) = &CmpFreeKCBListHead;
    --*(_DWORD *)(v22 & 0xFFFFFFFFFFFFF000uLL);
    v23 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v24);
    __writecr8(v23);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
    _InterlockedIncrement64(qword_1407AD0E0);
    _InterlockedDecrement64(&qword_1407AD0D8);
    memset((void *)v22, 0, 0x128uLL);
    *(_DWORD *)(v22 + 4) |= 0x10000u;
  }
  else
  {
LABEL_118:
    v63 = CmpAllocateTransientPoolWithTag(v16, 0x128uLL, 0x626B4D43u);
    v22 = (unsigned __int64)v63;
    if ( v63 )
    {
      memset(v63, 0, 0x128uLL);
      *(_DWORD *)(v22 + 4) &= ~0x10000u;
    }
  }
  v10 = v22;
  if ( !v22 )
  {
    LayerLink = -1073741670;
    goto LABEL_104;
  }
  *(_QWORD *)(v22 + 120) = v22 + 112;
  *(_QWORD *)(v22 + 112) = v22 + 112;
  *(_QWORD *)(v22 + 128) = 0LL;
  *(_QWORD *)(v22 + 136) = 0LL;
  *(_QWORD *)(v22 + 144) = 0LL;
  *(_QWORD *)(v22 + 152) = 0LL;
  if ( a3 )
    v25 = (*(_DWORD *)(a3 + 4) >> 20) & 1;
  else
    v25 = (unsigned __int8)CmpLockTablePresent;
  *(_QWORD *)(v22 + 40) = 0LL;
  v26 = (_DWORD *)(v22 + 8);
  *(_DWORD *)v22 = 1;
  *(_QWORD *)(v22 + 24) = v6;
  *(_DWORD *)(v22 + 32) = a2;
  *(_DWORD *)(v22 + 8) = v9;
  *(_DWORD *)(v22 + 4) ^= (*(_DWORD *)(v22 + 4) ^ (v25 << 20)) & 0x100000;
  *(_QWORD *)(v22 + 208) = v22 + 200;
  *(_QWORD *)(v22 + 200) = v22 + 200;
  *(_QWORD *)(v22 + 224) = v22 + 216;
  *(_QWORD *)(v22 + 216) = v22 + 216;
  *(_QWORD *)(v22 + 232) = 0LL;
  *(_DWORD *)(v22 + 240) = 0;
  *(_QWORD *)(v22 + 248) = 0LL;
  *(_DWORD *)(v22 + 256) = 0;
  *(_QWORD *)(v22 + 264) = 0LL;
  *(_DWORD *)(v22 + 272) = 0;
  *(_QWORD *)(v22 + 280) = 0LL;
  *(_DWORD *)(v22 + 276) = -1;
  NameControlBlock = CmpGetNameControlBlock(a6, (__int64 *)va, 0LL);
  *(_QWORD *)(v22 + 72) = NameControlBlock;
  if ( !NameControlBlock )
    goto LABEL_108;
  v28 = *(unsigned int *)(v22 + 32);
  if ( (_DWORD)v28 == -1 )
  {
    if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
      *(_BYTE *)(v22 + 57) = 1;
    if ( (a5 & 1) != 0 )
      *(_WORD *)(v22 + 178) |= 4u;
  }
  else
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v22 + 24) + 8LL))(
            *(_QWORD *)(v22 + 24),
            v28,
            v66);
    v30 = *(_QWORD *)(v22 + 24);
    v31 = v29;
    if ( (*(_DWORD *)(v30 + 144) & 0x8001) == 0 && (*(_BYTE *)(v29 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(v30 + 16))(v30, v66);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v22 + 24) + 2848LL), 1u);
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v22 + 24) + 8LL))(
              *(_QWORD *)(v22 + 24),
              *(unsigned int *)(v22 + 32),
              v66);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v22 + 24), v31, *(_DWORD *)(v22 + 32));
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v22 + 24) + 2848LL));
    }
    *(_BYTE *)(v22 + 57) = *(_BYTE *)(v31 + 13) & 3;
    v32 = *(_DWORD *)(v31 + 36);
    *(_QWORD *)(v22 + 96) = *(unsigned int *)(v31 + 40);
    *(_DWORD *)(v22 + 88) = v32;
    *(_WORD *)(v22 + 178) = *(_WORD *)(v31 + 2);
    *(_DWORD *)(v22 + 104) = *(_DWORD *)(v31 + 20) + *(_DWORD *)(v31 + 24);
    *(_QWORD *)(v22 + 160) = *(_QWORD *)(v31 + 4);
    *(_WORD *)(v22 + 168) = *(_WORD *)(v31 + 52);
    *(_WORD *)(v22 + 170) = *(_WORD *)(v31 + 60);
    *(_DWORD *)(v22 + 172) = *(_DWORD *)(v31 + 64);
    *(_DWORD *)(v22 + 176) ^= (*(_DWORD *)(v22 + 176) ^ *(unsigned __int16 *)(v31 + 54)) & 0xF;
    v33 = (*(_DWORD *)(v22 + 4) & 0x100000) == 0;
    *(_DWORD *)(v22 + 176) ^= ((unsigned __int8)*(_DWORD *)(v22 + 176) ^ (unsigned __int8)*(_WORD *)(v31 + 54)) & 0xF0;
    *(_BYTE *)(v22 + 177) = *(_BYTE *)(v31 + 55);
    if ( !v33 )
      *(_DWORD *)(v22 + 60) = CmpLockTableAdd(v22, 1);
    v34 = (_KLOCK_ENTRY *)KeAbPreAcquire(v22 + 40, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 40), 0LL) )
    {
      if ( v34 )
        KeAbPostReleaseEx(v22 + 40, v34);
    }
    else
    {
      if ( v34 )
        v34->AcquiredByte |= 1u;
      *(_QWORD *)(v22 + 48) = KeGetCurrentThread();
    }
    v35 = *(_DWORD *)(v31 + 44);
    if ( v35 == -1 )
    {
      *(_QWORD *)(v22 + 80) = 0LL;
    }
    else
    {
      v36 = *(_QWORD *)(v22 + 24);
      ExAcquirePushLockSharedEx(v36 + 2952, 0LL);
      v37 = *(_DWORD *)(v36 + 3040);
      v38 = 0LL;
      v39 = 0;
      if ( v37 )
      {
        v40 = *(_DWORD *)(v36 + 3048);
        v41 = v37 - 1;
        v42 = 0;
        if ( (v40 & 0x80000000) != 0 || v40 > v41 )
          v40 = v41 >> 1;
        v43 = v35 & 0x7FFFFFFF;
        v44 = -(v35 & 0x7FFFFFFF);
        v45 = v35 < 0;
        v46 = *(_QWORD *)(v36 + 3056);
        if ( !v45 )
          v44 = v43;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v47 = -(*(_DWORD *)(v46 + 16LL * v40) & 0x7FFFFFFF);
              if ( *(int *)(v46 + 16LL * v40) >= 0 )
                v47 = *(_DWORD *)(v46 + 16LL * v40) & 0x7FFFFFFF;
              v48 = v44 - v47;
              if ( v44 == v47 )
              {
                *(_DWORD *)(v36 + 3048) = v40;
                v38 = *(_QWORD *)(v46 + 16LL * v40 + 8);
                v49 = 1;
                goto LABEL_55;
              }
              if ( v39 )
                break;
              if ( v48 >= 0 )
                v42 = v40;
              else
                v41 = v40;
              if ( v41 - v42 <= 1 )
              {
                v40 = v42;
                v39 = 1;
              }
              else
              {
                v40 = v42 + ((v41 - v42) >> 1);
              }
            }
            if ( v39 == 1 )
              break;
            if ( v39 == 2 )
              goto LABEL_125;
          }
          if ( v48 < 0 || v42 == v41 )
            break;
          v39 = 2;
          v40 = v41;
        }
LABEL_125:
        v38 = 0LL;
      }
      v49 = 0;
LABEL_55:
      *(_QWORD *)(v22 + 80) = v38;
      ExReleasePushLockEx(v36 + 2952, 0LL);
      if ( !v49 )
      {
        CmpUnlockKcb(v22);
        LayerLink = -1073741670;
        (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v66);
        goto LABEL_109;
      }
      v6 = a1;
      v26 = (_DWORD *)(v22 + 8);
    }
    v50 = *(_DWORD *)(v22 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v22 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v22 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v22 + 48));
    ExReleasePushLockEx(v22 + 40, 0LL);
    if ( (*(_DWORD *)(v22 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v22, *(_DWORD *)(v22 + 60));
    if ( v50 && (*(_DWORD *)(v22 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v22);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v22 + 24) + 16LL))(*(_QWORD *)(v22 + 24), v66);
  }
  if ( !a3 )
  {
    *(_DWORD *)(v22 + 4) = *(_DWORD *)(v22 + 4) & 0x801FFFFF | 0x200000;
    goto LABEL_69;
  }
  v51 = *(_DWORD *)a3;
  v52 = *(_DWORD *)a3 + 1;
  if ( *(_DWORD *)a3 == -1 )
  {
LABEL_108:
    LayerLink = -1073741670;
LABEL_109:
    v10 = v22;
    goto LABEL_104;
  }
  while ( 1 )
  {
    if ( v52 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v53 = v51;
    v51 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v52, v51);
    if ( v53 == v51 )
      break;
    v52 = v51 + 1;
    if ( v51 == -1 )
      goto LABEL_108;
  }
  v33 = (*(_DWORD *)(v22 + 176) & 0x40000) == 0;
  *(_QWORD *)(v22 + 64) = a3;
  if ( v33 )
    *(_DWORD *)(v22 + 4) ^= (*(_DWORD *)(v22 + 4) ^ ((*(_DWORD *)(a3 + 4) & 0xFFE00000) + 0x200000)) & 0x7FE00000;
  else
    *(_DWORD *)(v22 + 4) ^= (*(_DWORD *)(v22 + 4) ^ *(_DWORD *)(a3 + 4)) & 0x7FE00000;
LABEL_69:
  if ( a4 )
  {
    CmpLockKcbExclusive(a4);
    CmpTryToLockKcbExclusive(v22);
    LayerLink = CmpCreateLayerLink(a4);
    CmpUnlockKcb(v22);
    CmpUnlockKcb(a4);
    if ( (LayerLink & 0x80000000) != 0 )
      goto LABEL_109;
  }
  v54 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 2800LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v22 + 24) + 2808LL) - 1) & ((unsigned int)(101027 * (*v26 ^ (*v26 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v26 ^ (*v26 >> 9))) >> 9)));
  *(_QWORD *)(v22 + 16) = *(_QWORD *)(v54 + 16);
  *(_QWORD *)(v54 + 16) = v26;
  if ( *(_BYTE *)(v6 + 4112) == 1 )
    *(_WORD *)(v22 + 4) |= 0x20u;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v54) = 22;
    CmpEtwDumpKcb(v22, v54);
  }
  LayerLink = 0;
  *v74 = v22;
  return LayerLink;
}
