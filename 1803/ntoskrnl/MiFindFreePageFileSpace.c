/*
 * XREFs of MiFindFreePageFileSpace @ 0x14009CC84
 * Callers:
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x14009C5E8 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14025FE80 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14053B04C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x14009D2DC (MiPageFileLargestBitmapsRun.c)
 *     MiCheckHintedPageFileSpace @ 0x14009D3C8 (MiCheckHintedPageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14009D510 (MiSetPageFileAllocationBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRescanPagefileBitmaps @ 0x14017DE34 (MiRescanPagefileBitmaps.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiFindFreePageFileSpaceForward @ 0x14025F580 (MiFindFreePageFileSpaceForward.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  ULONG PteTimeStamp; // esi
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  _QWORD *v14; // r15
  __int64 i; // rbp
  __int16 v16; // cx
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v21; // rdi
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int FreePageFileSpaceForward; // eax
  unsigned int v33; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  ULONG v36; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  PteTimeStamp = -1;
  if ( (a4 & 0x10) != 0
    || ((v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 6880), (a4 & 0x65) != 1)
     || (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                            + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                            + 6880)) >= a3
      ? (PteTimeStamp = MiGetPteTimeStamp(*a2))
      : (v4 |= 0x10u),
        (v4 & 0x10) != 0) )
  {
    v9 = *(_QWORD *)(a1 + 6880);
    v11 = MiPageFileLargestBitmapsRun(v9);
    v12 = *(_DWORD *)(a1 + 6872);
    v13 = v11;
    if ( v12 > 1 )
    {
      v14 = (_QWORD *)(a1 + 6888);
      for ( i = v12 - 1; i; --i )
      {
        v16 = *(_WORD *)(v9 + 204);
        v17 = *v14;
        if ( (v16 & 0x10) != 0 && (*(_BYTE *)(v17 + 204) & 0x10) == 0
          || (v16 & 0x20) != 0 && (*(_BYTE *)(v17 + 204) & 0x20) == 0 )
        {
          v9 = *v14;
          v18 = MiPageFileLargestBitmapsRun(*v14);
        }
        else
        {
          if ( (*(_BYTE *)(v17 + 204) & 0x30) != 0 )
            goto LABEL_19;
          v18 = MiPageFileLargestBitmapsRun(*v14);
          if ( v18 <= v13 )
            goto LABEL_19;
          v9 = v17;
        }
        v13 = v18;
LABEL_19:
        ++v14;
      }
    }
  }
  v19 = 0LL;
  if ( (v4 & 4) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  if ( (*(_BYTE *)(v9 + 207) & 1) != 0 )
  {
LABEL_26:
    if ( (v4 & 4) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    return 0LL;
  }
  if ( PteTimeStamp != -1 )
  {
    if ( PteTimeStamp < *(_DWORD *)(*(_QWORD *)(v9 + 112) + 24LL) )
    {
      v21 = (unsigned int)MiCheckHintedPageFileSpace(v9, PteTimeStamp, (unsigned int)a3, v4);
      if ( v21 == a3 || (v4 & 0x40) != 0 )
        goto LABEL_82;
    }
    else if ( (v4 & 0x48) != 0 )
    {
      goto LABEL_26;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v36 = PteTimeStamp;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v36, (unsigned int)a3, v4);
    PteTimeStamp = v36;
    LODWORD(v21) = FreePageFileSpaceForward;
  }
  else
  {
    v22 = (unsigned __int64 *)(v9 + 144);
    while ( 2 )
    {
      v23 = *v22;
      if ( (*(_QWORD *)(v9 + 152) & 1) != 0 && v23 )
        v23 ^= (unsigned __int64)v22;
      v24 = *(_QWORD *)(v9 + 152) & 1LL;
      v19 = 0LL;
      while ( 1 )
      {
        if ( !v23 )
          goto LABEL_64;
        v25 = *(_DWORD *)(v23 + 52);
        if ( (unsigned int)a3 < v25 )
          goto LABEL_41;
        if ( (unsigned int)a3 <= v25 )
          break;
        v26 = *(_QWORD *)(v23 + 8);
LABEL_42:
        if ( (_DWORD)v24 && v26 )
          v23 ^= v26;
        else
          v23 = v26;
      }
      if ( *(_DWORD *)(v23 + 48) )
      {
LABEL_41:
        v26 = *(_QWORD *)v23;
        v19 = v23;
        goto LABEL_42;
      }
      v27 = *(_QWORD *)v23;
      v19 = v23;
      if ( (_DWORD)v24 && v27 )
        v27 ^= v23;
      v10 = 0LL;
      if ( v27 )
      {
        while ( 1 )
        {
          v28 = *(_DWORD *)(v27 + 52);
          if ( (unsigned int)a3 < v28 )
            goto LABEL_55;
          if ( (unsigned int)a3 <= v28 )
            break;
          v29 = *(_QWORD *)(v27 + 8);
LABEL_56:
          if ( (_DWORD)v24 && v29 )
            v27 ^= v29;
          else
            v27 = v29;
          if ( !v27 )
          {
            if ( v10 )
              v19 = v10;
            goto LABEL_64;
          }
        }
        if ( !*(_DWORD *)(v27 + 48) )
          v10 = v27;
LABEL_55:
        v29 = *(_QWORD *)v27;
        goto LABEL_56;
      }
LABEL_64:
      LODWORD(v21) = a3;
      if ( *(_DWORD *)(v19 + 52) == -1 )
      {
        v30 = *(unsigned int *)(v9 + 140);
        if ( v30 >= a3 && (unsigned int)v30 >= 0x20 )
        {
LABEL_79:
          MiRescanPagefileBitmaps(v9, v24, v10);
          continue;
        }
        if ( (v4 & 0x80u) != 0 )
          goto LABEL_26;
        v31 = *(_QWORD *)v19;
        v24 = v19;
        if ( *(_QWORD *)v19 )
        {
          do
          {
            v19 = v31;
            v31 = *(_QWORD *)(v31 + 8);
          }
          while ( v31 );
        }
        else
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v19 || *(_QWORD *)(v19 + 8) == v24 )
              break;
            v24 = v19;
          }
        }
        if ( !v19 )
        {
          if ( (unsigned int)v30 >= 0x20 )
            goto LABEL_79;
          goto LABEL_26;
        }
        LODWORD(v21) = *(_DWORD *)(v19 + 52);
        if ( (unsigned int)v30 > (unsigned int)v21 && (unsigned int)v30 >= 0x20 )
          goto LABEL_79;
      }
      break;
    }
    PteTimeStamp = *(_DWORD *)(v19 + 48);
  }
LABEL_82:
  if ( !(_DWORD)v21 )
    goto LABEL_26;
  v33 = 0;
  if ( (v4 & 1) != 0 )
  {
    v33 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), PteTimeStamp, v21);
    *(_QWORD *)(v9 + 48) -= (unsigned int)v21;
  }
  if ( (v4 & 2) != 0 )
  {
    v33 |= 1u;
    MiSetPageFileAllocationBits(v9, PteTimeStamp, (unsigned int)v21);
  }
  if ( v33 )
    MiInvalidatePageFileBitmapsCache(v9, PteTimeStamp, (unsigned int)v21, v19);
  if ( (v4 & 4) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  *a2 = MiTransferSoftwarePte(*a2, v9, PteTimeStamp, v33);
  return (unsigned int)v21;
}
