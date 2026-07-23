/*
 * XREFs of MiObtainSessionVa @ 0x1400F85C0
 * Callers:
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400C25F0 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned int v1; // r12d
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rsi
  struct _KTHREAD *v21; // rbx
  unsigned int v22; // edx
  unsigned __int8 v23; // r12
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rdi
  __int64 v30; // rdx
  __int64 v32; // rdx
  unsigned __int64 *v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // r11d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // r11
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned __int64 *v44; // r9
  unsigned int v45; // r9d
  __int64 v46; // rcx
  bool v47; // sf
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rsi
  struct _KTHREAD *v54; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v56; // r14
  unsigned int v57; // r8d
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  _KLOCK_ENTRY *v61; // rdi
  __int64 v62; // rdx
  unsigned __int64 v63; // [rsp+30h] [rbp-39h]
  unsigned __int64 v64; // [rsp+38h] [rbp-31h]
  __int64 v65; // [rsp+58h] [rbp-11h]
  int v67; // [rsp+D8h] [rbp+6Fh] BYREF
  int v68; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v69; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = a1;
  LODWORD(v3) = a1;
  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v5 = *(_QWORD *)(v4 + 7896);
  v7 = *(_QWORD *)(v4 + 7904);
  v64 = *(_QWORD *)(v4 + 7912);
  v6 = v64;
  v63 = v5;
  v8 = v6 & -(__int64)(v6 < v5);
  v65 = v7;
  v9 = v5 - 1;
  if ( v1 )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < v2 )
      {
        v3 = v2;
        v15 = -1LL;
        goto LABEL_108;
      }
      v10 = v9 - v2 + 1;
      v11 = v7 + 8 * (v10 >> 6);
      v12 = (unsigned __int64 *)(v7 + 8 * (v8 >> 6));
      v13 = ((1LL << (v8 & 0x3F)) - 1) | *v12;
      if ( v2 > 0x7F )
      {
        v40 = v11 + 8;
        v3 = v2;
        if ( (v10 & 0x3F) == 0 )
          v40 = v7 + 8 * (v10 >> 6);
        if ( v13 )
        {
          if ( *++v12 )
            goto LABEL_66;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v41, v13);
          if ( v25 )
            v42 = 64;
          else
            v42 = 63 - v41;
          v69 = v42;
        }
        else
        {
          v42 = 0;
        }
LABEL_70:
        v15 = (((__int64)v12 - v7) >> 3 << 6) - v42;
        if ( v15 <= v10 )
        {
          v44 = &v12[(v2 - v42) >> 6];
          while ( ++v12 != v44 )
          {
            if ( *v12 )
              goto LABEL_66;
          }
          v45 = ((_BYTE)v2 - (_BYTE)v42) & 0x3F;
          if ( (((_BYTE)v2 - (_BYTE)v42) & 0x3F) == 0 )
            goto LABEL_10;
          v25 = !_BitScanForward64((unsigned __int64 *)&v46, *v12);
          if ( v25 )
            LODWORD(v46) = 64;
          if ( (unsigned int)v46 >= v45 )
            goto LABEL_10;
LABEL_66:
          while ( (unsigned __int64)v12 <= v40 )
          {
            if ( !*++v12 )
            {
              v25 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v12 - 1));
              if ( v25 )
                v42 = 64;
              else
                v42 = 63 - v43;
              goto LABEL_70;
            }
          }
          goto LABEL_57;
        }
      }
      else
      {
        if ( v2 >= 0x40 )
        {
          do
          {
LABEL_84:
            v47 = v13 < 0;
            do
            {
              if ( v47 )
              {
                if ( (unsigned __int64)++v12 > v11 )
                {
LABEL_56:
                  v3 = v2;
                  goto LABEL_57;
                }
                v13 = *v12;
                goto LABEL_84;
              }
              v25 = !_BitScanReverse64((unsigned __int64 *)&v48, v13);
              if ( v25 )
                v49 = 64;
              else
                v49 = 63 - v48;
              v15 = (((((__int64)v12 - v7) >> 3) + 1) << 6) - v49;
              if ( v15 > v10 )
                goto LABEL_56;
              v50 = v2 - v49;
              if ( v2 == v49 )
                goto LABEL_89;
              v13 = *++v12;
              if ( v50 < 0x40 )
                goto LABEL_94;
              v47 = v13 < 0;
            }
            while ( v13 );
            v50 -= 64LL;
            if ( !v50 )
              break;
            v13 = *++v12;
LABEL_94:
            v25 = !_BitScanForward64(&v51, v13);
            if ( v25 )
              v51 = 64LL;
          }
          while ( v51 < v50 );
LABEL_89:
          v3 = v2;
LABEL_10:
          if ( v15 != -1LL )
            goto LABEL_11;
          goto LABEL_107;
        }
        if ( v2 <= 1 )
        {
          while ( v13 == -1 )
          {
            if ( (unsigned __int64)++v12 > v11 )
              goto LABEL_56;
            v13 = *v12;
          }
          v3 = v2;
          _BitScanForward64(&v14, ~v13);
          v15 = v14 + (((__int64)v12 - v7) >> 3 << 6);
          if ( v15 <= v10 )
            goto LABEL_10;
LABEL_57:
          v15 = -1LL;
          goto LABEL_107;
        }
        v32 = 0LL;
        v33 = (unsigned __int64 *)(v7 + 8 * (v9 >> 6));
        while ( 1 )
        {
          if ( v13 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v12 > v11 )
                goto LABEL_56;
              v13 = *v12;
              if ( *v12 != -1LL )
              {
                v32 = 0LL;
                break;
              }
            }
          }
          v25 = !_BitScanForward64((unsigned __int64 *)&v34, v13);
          if ( v25 )
            LODWORD(v34) = 64;
          if ( (unsigned int)(v32 + v34) >= v2 )
            break;
          v35 = v3;
          v36 = ~v13;
          while ( 1 )
          {
            v36 &= v36 >> (v35 >> 1);
            if ( !v36 )
              break;
            v35 -= v35 >> 1;
            if ( v35 <= 1 )
            {
              _BitScanForward64(&v37, v36);
              v38 = (unsigned int)v37;
              goto LABEL_47;
            }
          }
          if ( v12 == v33 )
            goto LABEL_56;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v39, v13);
          if ( v25 )
            v32 = 64LL;
          else
            v32 = (unsigned int)(63 - v39);
          v13 = *++v12;
        }
        v38 = -v32;
LABEL_47:
        v3 = v2;
        v15 = (((__int64)v12 - v65) >> 3 << 6) + v38;
        if ( v15 <= v10 )
          goto LABEL_10;
      }
      v15 = -1LL;
LABEL_107:
      v6 = v64;
      v5 = v63;
LABEL_108:
      if ( !v8 )
      {
LABEL_11:
        v16 = v15;
        v1 = a1;
        goto LABEL_12;
      }
      v7 = v65;
      v52 = v3 + v6;
      if ( v3 + v6 > v5 )
        v52 = v5;
      v9 = v52 - 1;
      v8 = 0LL;
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_12:
  if ( v16 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(v4 + 7896), v1, v16);
  v19 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
  {
    v53 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v53);
    v67 = 0;
    v54 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v53) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v54->ApcState.Process);
    else
      SessionId = -1;
    --v54->SpecialApcDisable;
    v56 = ++v54->AbAllocationRegionCount;
    v57 = ((char)v54->AbEntrySummary | (char)v54->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v58, v57);
      if ( v25 )
        goto LABEL_121;
      v59 = 1 << v58;
      v60 = v58;
      v61 = &v54->LockEntries[v60];
      v57 &= ~v59;
      if ( (v61->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v61->LockState.0 & 1) == 0
        && (*(_QWORD *)&v61->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v53 & 0x7FFFFFFFFFFFFFFCLL)
        && v61->LockState.SessionId == SessionId )
      {
        v61->AcquiredByte &= ~1u;
        if ( v61->LockState.0 )
          break;
      }
    }
    if ( !v61 )
    {
LABEL_121:
      if ( (*((_DWORD *)&v54->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v54, v53, SessionId, 0LL);
      goto LABEL_133;
    }
    v61->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v61->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v54->LockEntries[v60].TreeNode);
    v67 = 0;
    v67 = v61->BoostBitmap.AllFields & 0x1FFFF;
    v61->BoostBitmap.AllFields &= 0xFFFE0000;
    v61->ThreadLocalFlags &= ~1u;
    v61->LockState.0 = 0LL;
    v62 = ((char *)v61 - (char *)v54 - 800) / 96;
    if ( v56 == 1 )
      v54->AbEntrySummary |= 1 << v62;
    else
      _InterlockedOr8((volatile signed __int8 *)&v54->AbOrphanedEntrySummary, 1 << v62);
LABEL_133:
    --v54->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v54, v53, (unsigned int *)&v67);
    v25 = v54->SpecialApcDisable++ == -1;
    if ( v25 && ($B476B70DB57F76B110DA5B9238C3E934 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  if ( v1 == 1 )
    *(_QWORD *)(v4 + 7912) = ClearBitsAndSet + 1;
  *(_DWORD *)(v4 + 8004) += v1;
  v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7888;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20);
  v68 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
    v22 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  else
    v22 = -1;
  --v21->SpecialApcDisable;
  v23 = ++v21->AbAllocationRegionCount;
  v24 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v25 = !_BitScanReverse((unsigned int *)&v26, v24);
    if ( v25 )
      break;
    v27 = 1 << v26;
    v28 = v26;
    v29 = &v21->LockEntries[v28];
    v24 &= ~v27;
    if ( (v29->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v29->LockState.0 & 1) == 0
      && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
      && v29->LockState.SessionId == v22 )
    {
      v29->AcquiredByte &= ~1u;
      if ( v29->LockState.0 )
      {
        if ( v29 )
        {
          v29->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v29->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v21->LockEntries[v28].TreeNode);
          v68 = 0;
          v68 = v29->BoostBitmap.AllFields & 0x1FFFF;
          v29->BoostBitmap.AllFields &= 0xFFFE0000;
          v29->ThreadLocalFlags &= ~1u;
          v29->LockState.0 = 0LL;
          v30 = ((char *)v29 - (char *)v21 - 800) / 96;
          if ( v23 == 1 )
            v21->AbEntrySummary |= 1 << v30;
          else
            _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v30);
          goto LABEL_32;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v21, v20, v22, 0LL);
LABEL_32:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, v20, (unsigned int *)&v68);
  v25 = v21->SpecialApcDisable++ == -1;
  if ( v25 && ($B476B70DB57F76B110DA5B9238C3E934 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return qword_140388478 + (v19 << 21);
}
