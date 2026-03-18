/*
 * XREFs of AlpcViewDestroyProcedure @ 0x140540240
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 *     AlpcpRemoveResourcePort @ 0x1405404DC (AlpcpRemoveResourcePort.c)
 *     AlpcpRestoreWriteAccess @ 0x140540BA0 (AlpcpRestoreWriteAccess.c)
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
  $709EDFC2F9E0D4565D6AA3C4377BC643 v11; // [rsp+20h] [rbp-48h] BYREF

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
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MmUnmapViewInSystemSpace(*(PVOID *)(a1 + 40));
    }
    else
    {
      v7 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v7 )
        KiStackAttachProcess(v7, 0, (__int64)&v11);
      v8 = *(void **)(a1 + 56);
      if ( v8 )
        MmUnsecureVirtualMemory(v8);
      MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0);
      if ( Process != *(_KPROCESS **)(a1 + 32) )
        KiUnstackDetachProcess(&v11, 0LL);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
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
