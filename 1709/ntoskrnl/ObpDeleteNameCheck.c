/*
 * XREFs of ObpDeleteNameCheck @ 0x1404873F0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140019334 (ObpDereferenceNamedObject.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140579D2C (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1405874B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x140587728 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // rbp
  char v6; // al
  struct _KTHREAD *v7; // rax
  void *v9; // r14
  struct _OBJECT_TYPE *v10; // r15
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v15; // [rsp+4Eh] [rbp-2Ah]
  int v16; // [rsp+50h] [rbp-28h]

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
        v5 = *(PVOID *)v3;
        if ( !*(_QWORD *)v3 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v6 = 0) : (v6 = 1), !v6) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v3);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v15 = 0;
        v16 = -60876;
        *(_OWORD *)v14 = 0LL;
        ObpLockDirectoryExclusive((__int64)v14, v5);
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        if ( *(PVOID *)v3 == v5 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v14);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v5);
      }
      v9 = 0LL;
      if ( !*(_DWORD *)(v3 + 24) )
      {
        v10 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v10 == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        v11 = (void *)ObpLookupDirectoryEntryEx(*(PVOID *)v3, 0, (__int64)v14);
        v9 = v11;
        if ( v10 == ObpDirectoryObjectType )
          ObfReferenceObject(v11);
        else
          v9 = 0LL;
        ObpDeleteDirectoryEntry(v14, v12, v13);
      }
      ObpReleaseLookupContext((__int64)v14);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v5);
      if ( v9 )
      {
        ObpMarkDirectoryTreeTemporary(v9);
        PsDereferenceSiloContext(v9);
      }
    }
  }
}
