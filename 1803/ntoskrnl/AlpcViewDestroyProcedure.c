/*
 * XREFs of AlpcViewDestroyProcedure @ 0x1404D6CD0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpRemoveResourcePort @ 0x1404D6EA4 (AlpcpRemoveResourcePort.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x1404D7A24 (AlpcpRestoreWriteAccess.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // rdi
  _KPROCESS *Process; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  _KPROCESS *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // rdi
  _BYTE v17[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v2 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v2 + 52) - 1;
    *(_DWORD *)(v2 + 52) = v8;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v9 = *(_DWORD *)(v2 + 48);
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)(v2 + 80) = 0LL;
        v1 = *(_QWORD *)(v2 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v2 + 72));
        }
        else if ( !v8 )
        {
          *(_DWORD *)(v2 + 48) = v9 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v2, v5, v6, v7);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MmUnmapViewInSystemSpace(*(PVOID *)(a1 + 40));
    }
    else
    {
      v10 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v10 )
        KiStackAttachProcess(v10, 0, (__int64)v17);
      v11 = *(void **)(a1 + 56);
      if ( v11 )
        MmUnsecureVirtualMemory(v11);
      MiUnmapViewOfSection(*(_QWORD *)(a1 + 32));
      if ( Process != *(_KPROCESS **)(a1 + 32) )
        KiUnstackDetachProcess((__int64)v17, 0LL);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 1616LL, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v15 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 32) + 1616LL);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15, v12, v13, v14);
    KeAbPostRelease((ULONG_PTR)v15);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
