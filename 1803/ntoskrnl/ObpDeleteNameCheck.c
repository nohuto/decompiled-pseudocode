/*
 * XREFs of ObpDeleteNameCheck @ 0x140519A30
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1400734F4 (ObpDereferenceNamedObject.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x140551288 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405514F0 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140567F78 (ObpDeleteDirectoryEntry.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID v7; // rbp
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rax
  PVOID v12; // r10
  void *v14; // r14
  struct _OBJECT_TYPE *v15; // r15
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v24; // [rsp+4Eh] [rbp-2Ah]
  int v25; // [rsp+50h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v7 = *(PVOID *)v3;
        if ( !*(_QWORD *)v3 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v8 = 0) : (v8 = 1), !v8) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL, v5, v6);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v3);
        ExReleasePushLockEx(a1 + 16, 0LL, v9, v10);
        KeLeaveCriticalRegion();
        v24 = 0;
        v25 = -60876;
        *(_OWORD *)v23 = 0LL;
        ObpLockDirectoryExclusive((__int64)v23, v7);
        v11 = KeGetCurrentThread();
        --v11->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v12 = *(PVOID *)v3;
        if ( *(PVOID *)v3 == v7 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v23);
        ExReleasePushLockEx(a1 + 16, 0LL, v21, v22);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v7);
      }
      v14 = 0LL;
      if ( !*(_DWORD *)(v3 + 24) )
      {
        v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v15 == ObpSymbolicLinkObjectType )
        {
          ObpDeleteSymbolicLinkName(a1 + 48);
          v12 = *(PVOID *)v3;
        }
        v16 = (void *)ObpLookupDirectoryEntryEx(v12, 0, (__int64)v23);
        v14 = v16;
        if ( v15 == ObpDirectoryObjectType )
          ObfReferenceObject(v16);
        else
          v14 = 0LL;
        ObpDeleteDirectoryEntry(v23, v17, v18);
      }
      ObpReleaseLookupContext((__int64)v23);
      ExReleasePushLockEx(a1 + 16, 0LL, v19, v20);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v7);
      if ( v14 )
      {
        ObpMarkDirectoryTreeTemporary(v14);
        PsDereferenceSiloContext(v14);
      }
    }
  }
}
