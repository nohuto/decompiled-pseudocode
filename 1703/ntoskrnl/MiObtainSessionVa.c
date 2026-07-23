/*
 * XREFs of MiObtainSessionVa @ 0x140125850
 * Callers:
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400AE930 (RtlFindClearBitsAndSetEx.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r15
  struct _KTHREAD *v20; // rbx
  __int64 v21; // rdx
  unsigned __int8 v22; // r13
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int16 v29; // ax
  __int64 v31; // rdx
  unsigned __int64 *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // r10d
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r10
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  unsigned __int64 *v43; // r9
  unsigned int v44; // r9d
  __int64 v45; // rcx
  bool v46; // sf
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r14
  struct _KTHREAD *v53; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v55; // r15
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int16 v61; // ax
  unsigned __int64 v62; // [rsp+30h] [rbp-48h]
  unsigned __int64 v63; // [rsp+38h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp+50h] BYREF
  int v66; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v67; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = a1;
  v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = *(_QWORD *)(v3 + 7896);
  v6 = *(_QWORD *)(v3 + 7904);
  v63 = *(_QWORD *)(v3 + 7912);
  v5 = v63;
  v62 = v4;
  v7 = v5 & -(__int64)(v5 < v4);
  v8 = v4 - 1;
  if ( v1 )
  {
    while ( 1 )
    {
      if ( v8 - v7 + 1 < v2 )
      {
        v14 = -1LL;
        goto LABEL_109;
      }
      v9 = v8 - v2 + 1;
      v10 = v6 + 8 * (v9 >> 6);
      v11 = (unsigned __int64 *)(v6 + 8 * (v7 >> 6));
      v12 = ((1LL << (v7 & 0x3F)) - 1) | *v11;
      if ( v2 > 0x7F )
      {
        v39 = v10 + 8;
        if ( (v9 & 0x3F) == 0 )
          v39 = v6 + 8 * (v9 >> 6);
        if ( v12 )
        {
          if ( *++v11 )
            goto LABEL_67;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v40, v12);
          if ( v24 )
            v41 = 64;
          else
            v41 = 63 - v40;
          v67 = v41;
        }
        else
        {
          v41 = 0;
        }
LABEL_71:
        v14 = (((__int64)v11 - v6) >> 3 << 6) - v41;
        if ( v14 > v9 )
        {
          v14 = -1LL;
          goto LABEL_108;
        }
        v43 = &v11[(v2 - v41) >> 6];
        while ( ++v11 != v43 )
        {
          if ( *v11 )
            goto LABEL_67;
        }
        v44 = ((_BYTE)v2 - (_BYTE)v41) & 0x3F;
        if ( (((_BYTE)v2 - (_BYTE)v41) & 0x3F) == 0 )
          goto LABEL_10;
        v24 = !_BitScanForward64((unsigned __int64 *)&v45, *v11);
        if ( v24 )
          LODWORD(v45) = 64;
        if ( (unsigned int)v45 >= v44 )
          goto LABEL_10;
LABEL_67:
        while ( (unsigned __int64)v11 <= v39 )
        {
          if ( !*++v11 )
          {
            v24 = !_BitScanReverse64((unsigned __int64 *)&v42, *(v11 - 1));
            if ( v24 )
              v41 = 64;
            else
              v41 = 63 - v42;
            goto LABEL_71;
          }
        }
      }
      else
      {
        if ( v2 >= 0x40 )
        {
          do
          {
LABEL_86:
            v46 = v12 < 0;
            while ( 1 )
            {
              if ( v46 )
              {
                if ( (unsigned __int64)++v11 <= v10 )
                {
                  v12 = *v11;
                  goto LABEL_86;
                }
LABEL_90:
                v14 = -1LL;
                goto LABEL_108;
              }
              v24 = !_BitScanReverse64((unsigned __int64 *)&v47, v12);
              if ( v24 )
                v48 = 64;
              else
                v48 = 63 - v47;
              v14 = (((((__int64)v11 - v6) >> 3) + 1) << 6) - v48;
              if ( v14 > v9 )
                goto LABEL_90;
              v49 = v2 - v48;
              if ( v2 == v48 )
                goto LABEL_10;
              v12 = *++v11;
              if ( v49 < 0x40 )
                break;
              v46 = v12 < 0;
              if ( !v12 )
              {
                v49 -= 64LL;
                if ( !v49 )
                  goto LABEL_10;
                v12 = *++v11;
                break;
              }
            }
            v24 = !_BitScanForward64(&v50, v12);
            if ( v24 )
              v50 = 64LL;
          }
          while ( v50 < v49 );
LABEL_10:
          if ( v14 != -1LL )
            goto LABEL_11;
          goto LABEL_108;
        }
        if ( v2 > 1 )
        {
          v31 = 0LL;
          v32 = (unsigned __int64 *)(v6 + 8 * (v8 >> 6));
          while ( 1 )
          {
            if ( v12 == -1 )
            {
              while ( 1 )
              {
                if ( (unsigned __int64)++v11 > v10 )
                  goto LABEL_55;
                v12 = *v11;
                if ( *v11 != -1LL )
                {
                  v31 = 0LL;
                  break;
                }
              }
            }
            v24 = !_BitScanForward64((unsigned __int64 *)&v33, v12);
            if ( v24 )
              LODWORD(v33) = 64;
            if ( (unsigned int)(v31 + v33) >= v2 )
              break;
            v34 = v2;
            v35 = ~v12;
            while ( 1 )
            {
              v35 &= v35 >> (v34 >> 1);
              if ( !v35 )
                break;
              v34 -= v34 >> 1;
              if ( v34 <= 1 )
              {
                _BitScanForward64(&v37, v35);
                v38 = (unsigned int)v37;
                goto LABEL_50;
              }
            }
            if ( v11 == v32 )
              goto LABEL_55;
            v24 = !_BitScanReverse64((unsigned __int64 *)&v36, v12);
            if ( v24 )
              v31 = 64LL;
            else
              v31 = (unsigned int)(63 - v36);
            v12 = *++v11;
          }
          v38 = -v31;
LABEL_50:
          v14 = (((__int64)v11 - v6) >> 3 << 6) + v38;
          if ( v14 > v9 )
          {
            v14 = -1LL;
            goto LABEL_108;
          }
          goto LABEL_10;
        }
        while ( v12 == -1 )
        {
          if ( (unsigned __int64)++v11 > v10 )
            goto LABEL_55;
          v12 = *v11;
        }
        _BitScanForward64(&v13, ~v12);
        v14 = v13 + (((__int64)v11 - v6) >> 3 << 6);
        if ( v14 <= v9 )
          goto LABEL_10;
      }
LABEL_55:
      v14 = -1LL;
LABEL_108:
      v5 = v63;
      v4 = v62;
LABEL_109:
      if ( !v7 )
      {
LABEL_11:
        v15 = v14;
        v1 = a1;
        goto LABEL_12;
      }
      v51 = v2 + v5;
      v7 = 0LL;
      if ( v2 + v5 > v4 )
        v51 = v4;
      v8 = v51 - 1;
    }
  }
  v15 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_12:
  if ( v15 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(v3 + 7896), v1, v15);
  v18 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
  {
    v52 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v52);
    v65 = 0;
    v53 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v52) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v53->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v53->SpecialApcDisable;
    v55 = ++v53->AbAllocationRegionCount;
    v56 = ((char)v53->AbEntrySummary | (char)v53->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v57, v56);
      if ( v24 )
        goto LABEL_122;
      v58 = (__int64)&v53->LockEntries[v57];
      v56 &= ~(1 << v57);
      if ( (*(_BYTE *)(v58 + 26) & 1) != 0
        && (*(_DWORD *)(v58 + 32) & 1) == 0
        && (*(_QWORD *)(v58 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v58 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v58 + 26) &= ~1u;
        if ( *(_QWORD *)(v58 + 32) )
          break;
      }
    }
    if ( !v58 )
    {
LABEL_122:
      if ( (*((_DWORD *)&v53->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)SessionId, 0LL);
      goto LABEL_134;
    }
    *(_BYTE *)(v58 + 32) |= 2u;
    if ( *(__int64 *)(v58 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v58, SessionId);
    v65 = 0;
    v65 = *(_DWORD *)(v58 + 88) & 0x1FFFF;
    *(_DWORD *)(v58 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v58 + 25) &= ~1u;
    *(_QWORD *)(v58 + 32) = 0LL;
    v59 = (v58 - (__int64)v53 - 800) / 96;
    if ( v55 == 1 )
      v53->AbEntrySummary |= 1 << v59;
    else
      _InterlockedOr8((volatile signed __int8 *)&v53->AbOrphanedEntrySummary, 1 << v59);
LABEL_134:
    --v53->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v53->Header.Lock, v52, (unsigned int *)&v65);
    v61 = v53->SpecialApcDisable + 1;
    v53->SpecialApcDisable = v61;
    if ( !v61 && ($69CD3F157F9F39B6F7113F2231989901 *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
      KiCheckForKernelApcDelivery(v60);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  if ( v1 == 1 )
    *(_QWORD *)(v3 + 7912) = ClearBitsAndSet + 1;
  *(_DWORD *)(v3 + 8004) += v1;
  v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v19);
  v66 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    v21 = (unsigned int)MmGetSessionIdEx(v20->ApcState.Process);
  else
    v21 = 0xFFFFFFFFLL;
  --v20->SpecialApcDisable;
  v22 = ++v20->AbAllocationRegionCount;
  v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v24 )
      break;
    v26 = (__int64)&v20->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v26 + 26) & 1) != 0
      && (*(_DWORD *)(v26 + 32) & 1) == 0
      && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v26 + 40) == (_DWORD)v21 )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( v26 )
        {
          *(_BYTE *)(v26 + 32) |= 2u;
          if ( *(__int64 *)(v26 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26, v21);
          v66 = 0;
          v66 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
          *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v26 + 25) &= ~1u;
          *(_QWORD *)(v26 + 32) = 0LL;
          v27 = (v26 - (__int64)v20 - 800) / 96;
          if ( v22 == 1 )
            v20->AbEntrySummary |= 1 << v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
          goto LABEL_32;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, (unsigned int)v21, 0LL);
LABEL_32:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v20->Header.Lock, v19, (unsigned int *)&v66);
  v29 = v20->SpecialApcDisable + 1;
  v20->SpecialApcDisable = v29;
  if ( !v29 && ($69CD3F157F9F39B6F7113F2231989901 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v28);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return qword_14036C138 + (v18 << 21);
}
