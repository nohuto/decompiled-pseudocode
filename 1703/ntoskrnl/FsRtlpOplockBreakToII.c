/*
 * XREFs of FsRtlpOplockBreakToII @ 0x14002FB30
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x140585C60 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 v10; // r12
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  _BYTE v20[32]; // [rsp+40h] [rbp-38h] BYREF

  v10 = a3;
  if ( (*(_DWORD *)(a1 + 144) & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0LL) )
      return v12;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v13 = *(_DWORD *)(a1 + 144);
  if ( (v13 & 0x1F00F80) != 0 )
  {
    if ( (v13 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v12;
    }
    goto LABEL_20;
  }
  v14 = *(_QWORD *)a1;
  v15 = 7LL;
  *(_BYTE *)(v14 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
  if ( !*(_BYTE *)(v14 + 68) )
  {
    v17 = *(_DWORD *)(a1 + 144);
    if ( (v17 & 6) != 0 )
    {
      v18 = v17 | 0x100;
    }
    else
    {
      v18 = v17 | 0x200;
      v15 = 8LL;
    }
    *(_DWORD *)(a1 + 144) = v18;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v15;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      LOBYTE(a3) = 1;
      FsRtlpModifyThreadPriorities(a1, 0LL, a3);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, v10, a5, a6, a7, v20, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
  FsRtlpClearOwner(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
  IofCompleteRequest(*(PIRP *)a1, 1);
  *(_QWORD *)a1 = 0LL;
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  while ( 1 )
  {
    v16 = (_QWORD *)(a1 + 88);
    if ( (_QWORD *)*v16 == v16 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(*v16);
  }
  return v12;
}
