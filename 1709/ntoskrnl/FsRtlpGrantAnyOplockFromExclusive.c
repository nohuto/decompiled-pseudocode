/*
 * XREFs of FsRtlpGrantAnyOplockFromExclusive @ 0x1401E818C
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 * Callees:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 */

__int64 __fastcall FsRtlpGrantAnyOplockFromExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        _QWORD **a7,
        _BYTE *a8,
        _BYTE *a9,
        unsigned int a10)
{
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // eax
  char v17; // bp
  _QWORD **v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  unsigned int v22; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v24; // al
  bool v25; // zf
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v26 = a1;
  v13 = a1;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v15 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(v14 + 12) |= 1u;
    *(_DWORD *)(v14 + 8) = (a4 >> 12) & 5;
    *(_DWORD *)(v14 + 4) = (v15 >> 12) & 7;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_DWORD *)(a2 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a2, 1);
    return 2147483694LL;
  }
  v17 = a6;
  if ( a6 )
  {
    v18 = a7;
    (*a7)[2] = *(_QWORD *)(a1 + 8);
    v19 = (_QWORD *)(a1 + 104);
    v20 = *(_QWORD *)(v13 + 104);
    v21 = *v18;
    if ( *(_QWORD *)(v20 + 8) != v13 + 104 )
      __fastfail(3u);
    *v21 = v20;
    v21[1] = v19;
    *(_QWORD *)(v20 + 8) = v21;
    *v19 = v21;
    *v18 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
  }
  else
  {
    *a8 = 1;
    if ( !a4 )
    {
      *a9 = 1;
      goto LABEL_14;
    }
    if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
      *(_QWORD *)(a1 + 8) = 0LL;
  }
  if ( a4 )
  {
    if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
    {
      v22 = FsRtlpRequestShareableOplock(&v26, a3, a2, a4, a5, v17, 1, a10);
    }
    else
    {
      *(_QWORD *)v13 = a2;
      v22 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      *(_QWORD *)(a2 + 56) = v13;
      *(_QWORD *)(v26 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v13 = v26;
      *(_QWORD *)(v26 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v13 + 32) = 0;
      if ( v17 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 48);
      }
      *(_DWORD *)(v13 + 144) = a4 | *(_DWORD *)(v13 + 144) & 0x20 | 0x40;
      v24 = KeAcquireQueuedSpinLock(7uLL);
      v25 = *(_BYTE *)(a2 + 68) == 0;
      *(_BYTE *)(a2 + 69) = v24;
      if ( !v25 )
      {
        FsRtlpCancelExclusiveIrp(a2, 1, v17 == 0);
        goto LABEL_23;
      }
      _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    }
    v13 = v26;
    goto LABEL_23;
  }
LABEL_14:
  v22 = 0;
  *(_DWORD *)(v13 + 144) = *(_DWORD *)(v13 + 144) & 0x20 | 1;
  *(_DWORD *)(a2 + 48) = 0;
  IofCompleteRequest((PIRP)a2, 1);
LABEL_23:
  if ( v17 )
    *(_DWORD *)(v13 + 144) |= 0x1000000u;
  return v22;
}
