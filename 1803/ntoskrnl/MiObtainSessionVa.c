/*
 * XREFs of MiObtainSessionVa @ 0x1400CB090
 * Callers:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned int v1; // r14d
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v19; // rdx
  __int64 ClearBitsAndSet; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // r14
  struct _KTHREAD *v24; // rbx
  unsigned int v25; // edx
  unsigned __int8 v26; // r12
  unsigned int v27; // r8d
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rdi
  __int64 v33; // rdx
  unsigned int v35; // r11d
  unsigned __int64 *v36; // rsi
  __int64 v37; // rax
  unsigned int v38; // r11d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r11
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rdx
  unsigned __int64 *v50; // r9
  unsigned int v51; // r9d
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  ULONG_PTR v55; // rsi
  struct _KTHREAD *v56; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v58; // r14
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  _KLOCK_ENTRY *v63; // rdi
  __int64 v64; // rdx
  unsigned __int64 v65; // [rsp+30h] [rbp-48h]
  unsigned __int64 v66; // [rsp+38h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp+50h] BYREF
  int v69; // [rsp+D0h] [rbp+58h] BYREF
  int v70; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = a1;
  LODWORD(v3) = a1;
  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v6 = v4 + 8024;
  v7 = *(_QWORD *)(v4 + 8024);
  v8 = *(_QWORD *)(v4 + 8032);
  v66 = *(_QWORD *)(v4 + 8040);
  v5 = v66;
  v65 = v7;
  v9 = v5 & -(__int64)(v5 < v7);
  v10 = v7 - 1;
  if ( v1 )
  {
    while ( v10 - v9 + 1 < v2 )
    {
      v16 = -1LL;
      v3 = v2;
LABEL_100:
      if ( !v9 )
        goto LABEL_12;
      v54 = v3 + v5;
      if ( v3 + v5 > v7 )
        v54 = v7;
      v10 = v54 - 1;
      v9 = 0LL;
    }
    v11 = v10 - v2 + 1;
    v12 = v8 + 8 * (v11 >> 6);
    v13 = (unsigned __int64 *)(v8 + 8 * (v9 >> 6));
    v14 = *v13 | ((1LL << (v9 & 0x3F)) - 1);
    if ( v2 > 0x7F )
    {
      v46 = v12 + 8;
      v3 = v2;
      if ( (v11 & 0x3F) == 0 )
        v46 = v8 + 8 * ((v10 - v2 + 1) >> 6);
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_72;
        v28 = !_BitScanReverse64((unsigned __int64 *)&v47, v14);
        if ( v28 )
          v48 = 64;
        else
          v48 = 63 - v47;
      }
      else
      {
        v48 = 0;
      }
      while ( 1 )
      {
        v16 = (((__int64)v13 - v8) >> 3 << 6) - v48;
        if ( v16 > v11 )
          goto LABEL_84;
        v50 = &v13[(v2 - v48) >> 6];
        while ( ++v13 != v50 )
        {
          if ( *v13 )
            goto LABEL_72;
        }
        v51 = ((_BYTE)v2 - (_BYTE)v48) & 0x3F;
        if ( (((_BYTE)v2 - (_BYTE)v48) & 0x3F) == 0 )
          goto LABEL_11;
        v28 = !_BitScanForward64((unsigned __int64 *)&v52, *v13);
        if ( v28 )
          LODWORD(v52) = 64;
        if ( (unsigned int)v52 >= v51 )
          goto LABEL_11;
        do
        {
LABEL_72:
          if ( (unsigned __int64)v13 > v46 )
            goto LABEL_84;
          ++v13;
        }
        while ( *v13 );
        v28 = !_BitScanReverse64((unsigned __int64 *)&v49, *(v13 - 1));
        if ( v28 )
          v48 = 64;
        else
          v48 = 63 - v49;
      }
    }
    if ( v2 < 0x40 )
    {
      if ( v2 > 1 )
      {
        v35 = 0;
        v36 = (unsigned __int64 *)(v8 + 8 * (v10 >> 6));
        while ( v14 != -1 )
        {
LABEL_40:
          v28 = !_BitScanForward64((unsigned __int64 *)&v37, v14);
          if ( v28 )
            LODWORD(v37) = 64;
          if ( v35 + (unsigned int)v37 >= v2 )
          {
            v41 = -(__int64)v35;
LABEL_47:
            v16 = (((__int64)v13 - v8) >> 3 << 6) + v41;
            goto LABEL_10;
          }
          v38 = v3;
          v39 = ~v14;
          while ( 1 )
          {
            v39 &= v39 >> (v38 >> 1);
            if ( !v39 )
              break;
            v38 -= v38 >> 1;
            if ( v38 <= 1 )
            {
              _BitScanForward64(&v40, v39);
              v70 = v40;
              v41 = (unsigned int)v40;
              goto LABEL_47;
            }
          }
          if ( v13 == v36 )
            goto LABEL_55;
          v28 = !_BitScanReverse64((unsigned __int64 *)&v42, v14);
          if ( v28 )
            v35 = 64;
          else
            v35 = 63 - v42;
          v14 = *++v13;
        }
        while ( (unsigned __int64)++v13 <= v12 )
        {
          v14 = *v13;
          if ( *v13 != -1LL )
          {
            v35 = 0;
            goto LABEL_40;
          }
        }
LABEL_55:
        v16 = -1LL;
        v3 = v2;
        goto LABEL_56;
      }
      while ( v14 == -1 )
      {
        if ( (unsigned __int64)++v13 > v12 )
          goto LABEL_55;
        v14 = *v13;
      }
      _BitScanForward64(&v15, ~v14);
      v70 = v15;
      v16 = v15 + (((__int64)v13 - v8) >> 3 << 6);
LABEL_10:
      v3 = v2;
      if ( v16 <= v11 )
      {
LABEL_11:
        if ( v16 != -1LL )
        {
LABEL_12:
          v17 = v16;
          v1 = a1;
          v6 = v4 + 8024;
          goto LABEL_13;
        }
        goto LABEL_56;
      }
LABEL_84:
      v16 = -1LL;
LABEL_56:
      v5 = v66;
      v7 = v65;
      goto LABEL_100;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_55;
          v14 = *v13;
        }
        v28 = !_BitScanReverse64((unsigned __int64 *)&v43, v14);
        if ( v28 )
          v44 = 64;
        else
          v44 = 63 - v43;
        v16 = (((((__int64)v13 - v8) >> 3) + 1) << 6) - v44;
        if ( v16 > v11 )
          goto LABEL_55;
        v45 = v2 - v44;
        if ( v2 == v44 )
          goto LABEL_64;
        v14 = *++v13;
        if ( v45 >= 0x40 )
          break;
LABEL_89:
        v28 = !_BitScanForward64(&v53, v14);
        if ( v28 )
          v53 = 64LL;
        if ( v53 >= v45 )
        {
LABEL_64:
          v3 = v2;
          goto LABEL_11;
        }
      }
      if ( !*v13 )
      {
        v45 -= 64LL;
        if ( !v45 )
          goto LABEL_64;
        v14 = *++v13;
        goto LABEL_89;
      }
    }
  }
  v17 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v17 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v6, v2, v17);
  if ( ClearBitsAndSet == -1 )
  {
    v55 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v55, v19, v21, v22);
    v68 = 0;
    v56 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v55) == 1 )
      SessionId = MmGetSessionIdEx(v56->ApcState.Process);
    else
      SessionId = -1;
    --v56->SpecialApcDisable;
    v58 = ++v56->AbAllocationRegionCount;
    v59 = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v28 = !_BitScanReverse((unsigned int *)&v60, v59);
      if ( v28 )
        goto LABEL_116;
      v61 = 1 << v60;
      v62 = v60;
      v63 = &v56->LockEntries[v62];
      v59 &= ~v61;
      if ( (v63->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v63->LockState.0 & 1) == 0
        && (*(_QWORD *)&v63->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v55 & 0x7FFFFFFFFFFFFFFCLL)
        && v63->LockState.SessionId == SessionId )
      {
        v63->AcquiredByte &= ~1u;
        if ( v63->LockState.0 )
          break;
      }
    }
    if ( !v63 )
    {
LABEL_116:
      if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v56, v55, SessionId, 0LL);
      goto LABEL_128;
    }
    v63->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v63->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v56->LockEntries[v62].TreeNode);
    v68 = 0;
    v68 = v63->BoostBitmap.AllFields & 0x1FFFF;
    v63->BoostBitmap.AllFields &= 0xFFFE0000;
    v63->ThreadLocalFlags &= ~1u;
    v63->LockState.0 = 0LL;
    v64 = ((char *)v63 - (char *)v56 - 800) / 96;
    if ( v58 == 1 )
      v56->AbEntrySummary |= 1 << v64;
    else
      _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v64);
LABEL_128:
    --v56->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v56, v55, &v68);
    v28 = v56->SpecialApcDisable++ == -1;
    if ( v28 && ($005F0E83B22994B61E86C72E0CE43C71 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  if ( v1 == 1 )
    *(_QWORD *)(v4 + 8040) = ClearBitsAndSet + 1;
  *(_DWORD *)(v4 + 8132) += v1;
  v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v23, v19, v21, v22);
  v69 = 0;
  v24 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
    v25 = MmGetSessionIdEx(v24->ApcState.Process);
  else
    v25 = -1;
  --v24->SpecialApcDisable;
  v26 = ++v24->AbAllocationRegionCount;
  v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v28 = !_BitScanReverse((unsigned int *)&v29, v27);
    if ( v28 )
      break;
    v30 = 1 << v29;
    v31 = v29;
    v32 = &v24->LockEntries[v31];
    v27 &= ~v30;
    if ( (v32->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v32->LockState.0 & 1) == 0
      && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
      && v32->LockState.SessionId == v25 )
    {
      v32->AcquiredByte &= ~1u;
      if ( v32->LockState.0 )
      {
        if ( v32 )
        {
          v32->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v32->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v24->LockEntries[v31].TreeNode);
          v69 = 0;
          v69 = v32->BoostBitmap.AllFields & 0x1FFFF;
          v32->BoostBitmap.AllFields &= 0xFFFE0000;
          v32->ThreadLocalFlags &= ~1u;
          v32->LockState.0 = 0LL;
          v33 = ((char *)v32 - (char *)v24 - 800) / 96;
          if ( v26 == 1 )
            v24->AbEntrySummary |= 1 << v33;
          else
            _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v33);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
LABEL_33:
  --v24->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v24, v23, &v69);
  v28 = v24->SpecialApcDisable++ == -1;
  if ( v28 && ($005F0E83B22994B61E86C72E0CE43C71 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return qword_1403CB600 + (ClearBitsAndSet << 21);
}
