/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x14013065C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401E7AE0 (FsRtlOplockBreakToNoneEx.c)
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
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
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
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // r14
  _QWORD **v16; // rcx
  unsigned int v17; // ecx
  _QWORD *i; // rsi
  int v19; // ecx
  int v20; // ecx
  char v22[32]; // [rsp+40h] [rbp-38h] BYREF

  v13 = 0;
  if ( !a1 )
    return v13;
  v14 = *(_DWORD *)(a1 + 144);
  if ( v14 == 1 || (v14 & 0x6000) != 0 )
    return v13;
  if ( (v14 & 0x1F00F90) == 0 )
  {
    v15 = *(_QWORD *)a1;
    if ( (v14 & 0x1000) != 0 )
      return v13;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
    if ( *(_BYTE *)(v15 + 68) )
    {
      *(_QWORD *)(v15 + 56) = 8LL;
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
      return v13;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_22;
  }
  if ( (((v14 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v17 = v14 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v17;
      *(_DWORD *)(a1 + 144) = v17 | 0x400;
      goto LABEL_22;
    }
    if ( (v14 & 0x80u) == 0 )
    {
LABEL_22:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v13;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a8 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a5, a6, a7, v22, 0, a9);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = v14 & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 0LL, 0LL);
      }
    }
    v19 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v20 = v19 | 0x1000;
    else
      v20 = v19 | 1;
    *(_DWORD *)(a1 + 144) = v20;
  }
  return v13;
}
