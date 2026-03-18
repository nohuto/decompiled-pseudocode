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
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // si
  signed __int32 v25; // eax
  int v26; // eax
  _DWORD *v27; // rsi
  __int64 NameControlBlock; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // eax
  bool v34; // zf
  _KLOCK_ENTRY *v35; // rax
  int v36; // ebx
  __int64 v37; // rsi
  int v38; // r10d
  __int64 v39; // rax
  __int16 v40; // bp
  unsigned int v41; // r8d
  unsigned int v42; // r10d
  unsigned int v43; // r9d
  int v44; // eax
  int v45; // r11d
  bool v46; // sf
  __int64 v47; // rbx
  int v48; // eax
  int v49; // ecx
  char v50; // bl
  int v51; // ebx
  signed __int32 v52; // eax
  signed __int32 v53; // ecx
  signed __int32 v54; // ett
  unsigned __int64 v55; // rdx
  unsigned int LayerLink; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v59; // r9
  unsigned __int16 j; // r8
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rcx
  PVOID v64; // rax
  void *v65; // rcx
  void *v66; // rcx
  _BYTE v67[8]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v68[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v69; // [rsp+48h] [rbp-40h]
  __int64 v72; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v74; // [rsp+C8h] [rbp+40h]
  unsigned __int64 *v75; // [rsp+D0h] [rbp+48h]
  va_list va1; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v72 = va_arg(va1, _QWORD);
  v74 = va_arg(va1, _QWORD);
  v75 = va_arg(va1, unsigned __int64 *);
  v6 = a1;
  HvpGetCellContextReinitialize((__int64)v67);
  if ( (*(_DWORD *)(v6 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(v6 + 5416) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  v9 = v74;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 2800)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v6 + 2808) - 1) & ((101027
                                                                  * ((unsigned int)v74 ^ ((unsigned int)v74 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v74 ^ ((unsigned int)v74 >> 9))) >> 9)))
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
          v63 = *(_QWORD *)(v10 + 72);
          if ( (*(_DWORD *)v63 & 1) != 0 )
          {
            if ( !(unsigned int)CmpCompareCompressedName(
                                  (__int64)a6,
                                  (unsigned __int8 *)(v63 + 26),
                                  *(_WORD *)(v63 + 24),
                                  2) )
              goto LABEL_3;
          }
          else
          {
            v69 = v63 + 26;
            v68[0] = *(_WORD *)(v63 + 24);
            v68[1] = v68[0];
            if ( !(unsigned int)CmpCompareUnicodeString((__int64)a6, (__int64)v68, 2) )
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
      *v75 = v10;
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
      v65 = *(void **)(v10 + 72);
      if ( v65 )
        CmpDereferenceNameControlBlockWithLock(v65);
      if ( *(_QWORD *)(v10 + 64) )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3);
      v66 = *(void **)(v10 + 184);
      if ( v66 )
        ExFreePoolWithTag(v66, 0);
      *(_DWORD *)(v10 + 4) |= 0x80000u;
      CmpFreeKeyControlBlock(v10);
    }
    return LayerLink;
  }
  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    v18 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v18, v19);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    while ( 1 )
    {
      v21 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag((__int64)v17, 0x1000uLL, 0x6C414D43u);
      v59 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_118;
      }
      _InterlockedIncrement64(&qword_1407AD0D0);
      *TransientPoolWithTag = 13;
      for ( j = 0; j < 0xDu; ++j )
      {
        v61 = 74LL * j;
        v62 = &v59[v61 + 30];
        v59[v61 + 3] |= 0x10000u;
        v17 = (_QWORD *)qword_14036B208;
        if ( *(__int64 **)qword_14036B208 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v62 = &CmpFreeKCBListHead;
        v62[1] = v17;
        *v17 = v62;
        qword_14036B208 = (__int64)&v59[v61 + 30];
        _InterlockedIncrement64(&qword_1407AD0D8);
      }
    }
    v22 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v22 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    v23 = v21 - 112;
    *(_QWORD *)(v22 + 8) = &CmpFreeKCBListHead;
    --*(_DWORD *)(v23 & 0xFFFFFFFFFFFFF000uLL);
    v24 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v25);
    __writecr8(v24);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
    _InterlockedIncrement64(qword_1407AD0E0);
    _InterlockedDecrement64(&qword_1407AD0D8);
    memset((void *)v23, 0, 0x128uLL);
    *(_DWORD *)(v23 + 4) |= 0x10000u;
  }
  else
  {
LABEL_118:
    v64 = CmpAllocateTransientPoolWithTag(v16, 0x128uLL, 0x626B4D43u);
    v23 = (unsigned __int64)v64;
    if ( v64 )
    {
      memset(v64, 0, 0x128uLL);
      *(_DWORD *)(v23 + 4) &= ~0x10000u;
    }
  }
  v10 = v23;
  if ( !v23 )
  {
    LayerLink = -1073741670;
    goto LABEL_104;
  }
  *(_QWORD *)(v23 + 120) = v23 + 112;
  *(_QWORD *)(v23 + 112) = v23 + 112;
  *(_QWORD *)(v23 + 128) = 0LL;
  *(_QWORD *)(v23 + 136) = 0LL;
  *(_QWORD *)(v23 + 144) = 0LL;
  *(_QWORD *)(v23 + 152) = 0LL;
  if ( a3 )
    v26 = (*(_DWORD *)(a3 + 4) >> 20) & 1;
  else
    v26 = (unsigned __int8)CmpLockTablePresent;
  *(_QWORD *)(v23 + 40) = 0LL;
  v27 = (_DWORD *)(v23 + 8);
  *(_DWORD *)v23 = 1;
  *(_QWORD *)(v23 + 24) = v6;
  *(_DWORD *)(v23 + 32) = a2;
  *(_DWORD *)(v23 + 8) = v9;
  *(_DWORD *)(v23 + 4) ^= (*(_DWORD *)(v23 + 4) ^ (v26 << 20)) & 0x100000;
  *(_QWORD *)(v23 + 208) = v23 + 200;
  *(_QWORD *)(v23 + 200) = v23 + 200;
  *(_QWORD *)(v23 + 224) = v23 + 216;
  *(_QWORD *)(v23 + 216) = v23 + 216;
  *(_QWORD *)(v23 + 232) = 0LL;
  *(_DWORD *)(v23 + 240) = 0;
  *(_QWORD *)(v23 + 248) = 0LL;
  *(_DWORD *)(v23 + 256) = 0;
  *(_QWORD *)(v23 + 264) = 0LL;
  *(_DWORD *)(v23 + 272) = 0;
  *(_QWORD *)(v23 + 280) = 0LL;
  *(_DWORD *)(v23 + 276) = -1;
  NameControlBlock = CmpGetNameControlBlock(a6, (__int64 *)va, 0LL);
  *(_QWORD *)(v23 + 72) = NameControlBlock;
  if ( !NameControlBlock )
    goto LABEL_108;
  v29 = *(unsigned int *)(v23 + 32);
  if ( (_DWORD)v29 == -1 )
  {
    if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
      *(_BYTE *)(v23 + 57) = 1;
    if ( (a5 & 1) != 0 )
      *(_WORD *)(v23 + 178) |= 4u;
  }
  else
  {
    v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v23 + 24) + 8LL))(
            *(_QWORD *)(v23 + 24),
            v29,
            v67);
    v31 = *(_QWORD *)(v23 + 24);
    v32 = v30;
    if ( (*(_DWORD *)(v31 + 144) & 0x8001) == 0 && (*(_BYTE *)(v30 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(v31 + 16))(v31, v67);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v23 + 24) + 2848LL), 1u);
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v23 + 24) + 8LL))(
              *(_QWORD *)(v23 + 24),
              *(unsigned int *)(v23 + 32),
              v67);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v23 + 24), v32, *(_DWORD *)(v23 + 32));
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v23 + 24) + 2848LL));
    }
    *(_BYTE *)(v23 + 57) = *(_BYTE *)(v32 + 13) & 3;
    v33 = *(_DWORD *)(v32 + 36);
    *(_QWORD *)(v23 + 96) = *(unsigned int *)(v32 + 40);
    *(_DWORD *)(v23 + 88) = v33;
    *(_WORD *)(v23 + 178) = *(_WORD *)(v32 + 2);
    *(_DWORD *)(v23 + 104) = *(_DWORD *)(v32 + 20) + *(_DWORD *)(v32 + 24);
    *(_QWORD *)(v23 + 160) = *(_QWORD *)(v32 + 4);
    *(_WORD *)(v23 + 168) = *(_WORD *)(v32 + 52);
    *(_WORD *)(v23 + 170) = *(_WORD *)(v32 + 60);
    *(_DWORD *)(v23 + 172) = *(_DWORD *)(v32 + 64);
    *(_DWORD *)(v23 + 176) ^= (*(_DWORD *)(v23 + 176) ^ *(unsigned __int16 *)(v32 + 54)) & 0xF;
    v34 = (*(_DWORD *)(v23 + 4) & 0x100000) == 0;
    *(_DWORD *)(v23 + 176) ^= ((unsigned __int8)*(_DWORD *)(v23 + 176) ^ (unsigned __int8)*(_WORD *)(v32 + 54)) & 0xF0;
    *(_BYTE *)(v23 + 177) = *(_BYTE *)(v32 + 55);
    if ( !v34 )
      *(_DWORD *)(v23 + 60) = CmpLockTableAdd(v23, 1);
    v35 = (_KLOCK_ENTRY *)KeAbPreAcquire(v23 + 40, 0LL, 1LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 40), 0LL) )
    {
      if ( v35 )
        KeAbPostReleaseEx(v23 + 40, v35);
    }
    else
    {
      if ( v35 )
        v35->AcquiredByte |= 1u;
      *(_QWORD *)(v23 + 48) = KeGetCurrentThread();
    }
    v36 = *(_DWORD *)(v32 + 44);
    if ( v36 == -1 )
    {
      *(_QWORD *)(v23 + 80) = 0LL;
    }
    else
    {
      v37 = *(_QWORD *)(v23 + 24);
      ExAcquirePushLockSharedEx(v37 + 2952, 0LL);
      v38 = *(_DWORD *)(v37 + 3040);
      v39 = 0LL;
      v40 = 0;
      if ( v38 )
      {
        v41 = *(_DWORD *)(v37 + 3048);
        v42 = v38 - 1;
        v43 = 0;
        if ( (v41 & 0x80000000) != 0 || v41 > v42 )
          v41 = v42 >> 1;
        v44 = v36 & 0x7FFFFFFF;
        v45 = -(v36 & 0x7FFFFFFF);
        v46 = v36 < 0;
        v47 = *(_QWORD *)(v37 + 3056);
        if ( !v46 )
          v45 = v44;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v48 = -(*(_DWORD *)(v47 + 16LL * v41) & 0x7FFFFFFF);
              if ( *(int *)(v47 + 16LL * v41) >= 0 )
                v48 = *(_DWORD *)(v47 + 16LL * v41) & 0x7FFFFFFF;
              v49 = v45 - v48;
              if ( v45 == v48 )
              {
                *(_DWORD *)(v37 + 3048) = v41;
                v39 = *(_QWORD *)(v47 + 16LL * v41 + 8);
                v50 = 1;
                goto LABEL_55;
              }
              if ( v40 )
                break;
              if ( v49 >= 0 )
                v43 = v41;
              else
                v42 = v41;
              if ( v42 - v43 <= 1 )
              {
                v41 = v43;
                v40 = 1;
              }
              else
              {
                v41 = v43 + ((v42 - v43) >> 1);
              }
            }
            if ( v40 == 1 )
              break;
            if ( v40 == 2 )
              goto LABEL_125;
          }
          if ( v49 < 0 || v43 == v42 )
            break;
          v40 = 2;
          v41 = v42;
        }
LABEL_125:
        v39 = 0LL;
      }
      v50 = 0;
LABEL_55:
      *(_QWORD *)(v23 + 80) = v39;
      ExReleasePushLockEx(v37 + 2952, 0LL);
      if ( !v50 )
      {
        CmpUnlockKcb(v23);
        LayerLink = -1073741670;
        (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v67);
        goto LABEL_109;
      }
      v6 = a1;
      v27 = (_DWORD *)(v23 + 8);
    }
    v51 = *(_DWORD *)(v23 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v23 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v23 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 48));
    ExReleasePushLockEx(v23 + 40, 0LL);
    if ( (*(_DWORD *)(v23 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v23, *(_DWORD *)(v23 + 60));
    if ( v51 && (*(_DWORD *)(v23 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v23);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v23 + 24) + 16LL))(*(_QWORD *)(v23 + 24), v67);
  }
  if ( !a3 )
  {
    *(_DWORD *)(v23 + 4) = *(_DWORD *)(v23 + 4) & 0x801FFFFF | 0x200000;
    goto LABEL_69;
  }
  v52 = *(_DWORD *)a3;
  v53 = *(_DWORD *)a3 + 1;
  if ( *(_DWORD *)a3 == -1 )
  {
LABEL_108:
    LayerLink = -1073741670;
LABEL_109:
    v10 = v23;
    goto LABEL_104;
  }
  while ( 1 )
  {
    if ( v53 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v54 = v52;
    v52 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v53, v52);
    if ( v54 == v52 )
      break;
    v53 = v52 + 1;
    if ( v52 == -1 )
      goto LABEL_108;
  }
  v34 = (*(_DWORD *)(v23 + 176) & 0x40000) == 0;
  *(_QWORD *)(v23 + 64) = a3;
  if ( v34 )
    *(_DWORD *)(v23 + 4) ^= (*(_DWORD *)(v23 + 4) ^ ((*(_DWORD *)(a3 + 4) & 0xFFE00000) + 0x200000)) & 0x7FE00000;
  else
    *(_DWORD *)(v23 + 4) ^= (*(_DWORD *)(v23 + 4) ^ *(_DWORD *)(a3 + 4)) & 0x7FE00000;
LABEL_69:
  if ( a4 )
  {
    CmpLockKcbExclusive(a4);
    CmpTryToLockKcbExclusive(v23);
    LayerLink = CmpCreateLayerLink(a4);
    CmpUnlockKcb(v23);
    CmpUnlockKcb(a4);
    if ( (LayerLink & 0x80000000) != 0 )
      goto LABEL_109;
  }
  v55 = *(_QWORD *)(*(_QWORD *)(v23 + 24) + 2800LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v23 + 24) + 2808LL) - 1) & ((unsigned int)(101027 * (*v27 ^ (*v27 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v27 ^ (*v27 >> 9))) >> 9)));
  *(_QWORD *)(v23 + 16) = *(_QWORD *)(v55 + 16);
  *(_QWORD *)(v55 + 16) = v27;
  if ( *(_BYTE *)(v6 + 4112) == 1 )
    *(_WORD *)(v23 + 4) |= 0x20u;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v55) = 22;
    CmpEtwDumpKcb(v23, v55);
  }
  LayerLink = 0;
  *v75 = v23;
  return LayerLink;
}
