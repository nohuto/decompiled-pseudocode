/*
 * XREFs of AlpcViewDestroyProcedure @ 0x14047A980
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x14047A4EC (AlpcpRestoreWriteAccess.c)
 *     AlpcpRemoveResourcePort @ 0x14047AB44 (AlpcpRemoveResourcePort.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // rdi
  _KPROCESS *Process; // rbp
  int v5; // ecx
  int v6; // eax
  _KPROCESS *v7; // rcx
  void *v8; // rcx
  volatile signed __int64 *v9; // rdi
  $5BC46E0569261879018906DEC3127961 v11; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v2 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = --*(_DWORD *)(v2 + 52);
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v2 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v2 + 80) = 0LL;
        v1 = *(_QWORD *)(v2 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v2 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v2 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v2);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    v7 = *(_KPROCESS **)(a1 + 32);
    if ( Process != v7 )
      KiStackAttachProcess(v7, 0, (__int64)&v11);
    v8 = *(void **)(a1 + 56);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0LL);
    if ( Process != *(_KPROCESS **)(a1 + 32) )
      KiUnstackDetachProcess(&v11, 0LL);
    if ( v1 )
      AlpcpDereferenceBlobEx(v1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 1616LL, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 32) + 1616LL);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
