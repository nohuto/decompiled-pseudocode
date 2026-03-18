/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1401278C4
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1401282DC (FsRtlpOplockSendModernAppTermination.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64),
        _BYTE *a8,
        _BYTE *a9)
{
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD **v16; // rcx
  int v17; // eax
  int v18; // eax
  char v20[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 144) & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
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
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a5, a6, a7, v20, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0);
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
    v16 = (_QWORD **)(a1 + 88);
    if ( *v16 == v16 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(*v16);
  }
  return v12;
}
