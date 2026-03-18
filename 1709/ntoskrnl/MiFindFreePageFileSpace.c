/*
 * XREFs of MiFindFreePageFileSpace @ 0x14011A4C4
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x14000B0AC (MiGetKernelStackSwapSupport.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140226D60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140451804 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiPageFileLargestBitmapsRun @ 0x14011A3F8 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     MiCheckHintedPageFileSpace @ 0x14011AC2C (MiCheckHintedPageFileSpace.c)
 *     MiRescanPagefileBitmaps @ 0x14014FFF4 (MiRescanPagefileBitmaps.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiFindFreePageFileSpaceForward @ 0x14022553C (MiFindFreePageFileSpaceForward.c)
 *     MiSetPageFileAllocationBits @ 0x140226D20 (MiSetPageFileAllocationBits.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  ULONG PteTimeStamp; // ebp
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 *v14; // r14
  __int64 i; // r15
  __int16 v16; // cx
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int FreePageFileSpaceForward; // eax
  unsigned int v32; // r14d
  __int64 v33; // rax
  __int64 *v34; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  ULONG v37; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  PteTimeStamp = -1;
  if ( (a4 & 0x10) != 0
    || ((v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 5792), (a4 & 0x65) != 1)
     || (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                            + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                            + 5792)) >= a3
      ? (PteTimeStamp = MiGetPteTimeStamp(*a2))
      : (v4 |= 0x10u),
        (v4 & 0x10) != 0) )
  {
    v9 = *(_QWORD *)(a1 + 5792);
    v11 = MiPageFileLargestBitmapsRun(v9);
    v12 = *(_DWORD *)(a1 + 5784);
    v13 = v11;
    if ( v12 > 1 )
    {
      v14 = (__int64 *)(a1 + 5800);
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
        goto LABEL_78;
    }
    else if ( (v4 & 0x48) != 0 )
    {
      goto LABEL_26;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v37 = PteTimeStamp;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v37, (unsigned int)a3, v4);
    PteTimeStamp = v37;
    LODWORD(v21) = FreePageFileSpaceForward;
  }
  else
  {
    while ( 2 )
    {
      v22 = *(_QWORD *)(v9 + 144);
      v23 = *(_BYTE *)(v9 + 152) & 1;
      v19 = 0LL;
      while ( 1 )
      {
        if ( !v22 )
          goto LABEL_60;
        v24 = *(_DWORD *)(v22 + 52);
        if ( (unsigned int)a3 < v24 )
          goto LABEL_37;
        if ( (unsigned int)a3 <= v24 )
          break;
        v25 = *(_QWORD *)(v22 + 8);
LABEL_38:
        if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v25 )
          v22 ^= v25;
        else
          v22 = v25;
      }
      if ( *(_DWORD *)(v22 + 48) )
      {
LABEL_37:
        v25 = *(_QWORD *)v22;
        v19 = v22;
        goto LABEL_38;
      }
      v26 = *(_QWORD *)v22;
      v19 = v22;
      if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v26 )
        v26 ^= v22;
      v10 = 0LL;
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = *(_DWORD *)(v26 + 52);
          if ( (unsigned int)a3 < v27 )
            goto LABEL_51;
          if ( (unsigned int)a3 <= v27 )
            break;
          v28 = *(_QWORD *)(v26 + 8);
LABEL_52:
          if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v28 )
            v26 ^= v28;
          else
            v26 = v28;
          if ( !v26 )
          {
            if ( v10 )
              v19 = v10;
            goto LABEL_60;
          }
        }
        if ( !*(_DWORD *)(v26 + 48) )
          v10 = v26;
LABEL_51:
        v28 = *(_QWORD *)v26;
        goto LABEL_52;
      }
LABEL_60:
      LODWORD(v21) = a3;
      if ( *(_DWORD *)(v19 + 52) == -1 )
      {
        v29 = *(unsigned int *)(v9 + 140);
        if ( v29 >= a3 && (unsigned int)v29 >= 0x20 )
        {
LABEL_75:
          MiRescanPagefileBitmaps(v9, v23, v10);
          continue;
        }
        if ( (v4 & 0x80u) != 0 )
          goto LABEL_26;
        v30 = *(_QWORD *)v19;
        v23 = v19;
        if ( *(_QWORD *)v19 )
        {
          do
          {
            v19 = v30;
            v30 = *(_QWORD *)(v30 + 8);
          }
          while ( v30 );
        }
        else
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v19 || *(_QWORD *)(v19 + 8) == v23 )
              break;
            v23 = v19;
          }
        }
        if ( !v19 )
        {
          if ( (unsigned int)v29 >= 0x20 )
            goto LABEL_75;
          goto LABEL_26;
        }
        LODWORD(v21) = *(_DWORD *)(v19 + 52);
        if ( (unsigned int)v29 > (unsigned int)v21 && (unsigned int)v29 >= 0x20 )
          goto LABEL_75;
      }
      break;
    }
    PteTimeStamp = *(_DWORD *)(v19 + 48);
  }
LABEL_78:
  if ( !(_DWORD)v21 )
    goto LABEL_26;
  v32 = 0;
  if ( (v4 & 1) != 0 )
  {
    v32 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), PteTimeStamp, v21);
    *(_QWORD *)(v9 + 48) -= (unsigned int)v21;
  }
  if ( (v4 & 2) != 0 )
  {
    v32 |= 1u;
    MiSetPageFileAllocationBits(v9, PteTimeStamp, (unsigned int)v21);
  }
  if ( v32 )
    MiInvalidatePageFileBitmapsCache(v9, PteTimeStamp, (unsigned int)v21, v19);
  if ( (v4 & 4) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v33 = MiTransferSoftwarePte(*a2, v9, PteTimeStamp, v32);
  *v34 = v33;
  return (unsigned int)v21;
}
