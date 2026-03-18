/*
 * XREFs of FsRtlpOplockBreakToII @ 0x140064EE8
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x140715180 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC7A4 (FsRtlpOplockSendModernAppTermination.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 *a1,
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
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r15
  PIRP v16; // rax
  __int64 *v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE v21[32]; // [rsp+40h] [rbp-38h] BYREF

  v10 = a3;
  if ( (a1[18] & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], 0LL) )
      return v12;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v13 = *((_DWORD *)a1 + 36);
  if ( (v13 & 0x1F00F80) != 0 )
  {
    if ( (v13 & 0x80u) != 0 )
    {
      *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
      a1[1] = 0LL;
      return v12;
    }
    goto LABEL_18;
  }
  v14 = *a1;
  v15 = 7LL;
  *(_BYTE *)(v14 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
  if ( !*(_BYTE *)(v14 + 68) )
  {
    v18 = *((_DWORD *)a1 + 36);
    if ( (v18 & 6) != 0 )
    {
      v19 = v18 | 0x100;
    }
    else
    {
      v19 = v18 | 0x200;
      v15 = 8LL;
    }
    *((_DWORD *)a1 + 36) = v19;
    *(_QWORD *)(*a1 + 56) = v15;
    *(_DWORD *)(*a1 + 48) = 0;
    IofCompleteRequest((PIRP)*a1, 1);
    *a1 = 0LL;
LABEL_18:
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
      return (unsigned int)FsRtlpWaitOnIrp(a1, v10, a5, a6, a7, v21, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
  FsRtlpClearOwner(a1, 0LL);
  *((_BYTE *)a1 + 32) = 0;
  v16 = (PIRP)*a1;
  if ( *(__int64 **)(*a1 + 56) == a1 )
  {
    v16->IoStatus.Information = 0LL;
    v16 = (PIRP)*a1;
  }
  v16->IoStatus.Status = -1073741536;
  IofCompleteRequest((PIRP)*a1, 1);
  *a1 = 0LL;
  ObfDereferenceObjectWithTag((PVOID)a1[1], 0x746C6644u);
  a1[1] = 0LL;
  *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
  while ( 1 )
  {
    v17 = (__int64 *)a1[11];
    if ( v17 == a1 + 11 )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v17);
  }
  return v12;
}
