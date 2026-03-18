/*
 * XREFs of ObpDeleteNameCheck @ 0x1404F5F80
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140088144 (ObpDereferenceNamedObject.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     ObpReleaseLookupContext @ 0x140087EE4 (ObpReleaseLookupContext.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140441E08 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14044E6F4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // rbp
  struct _KTHREAD *v6; // rax
  void *v7; // r14
  struct _OBJECT_TYPE *v8; // r15
  void *v9; // rax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int16 v11; // [rsp+4Eh] [rbp-2Ah]
  int v12; // [rsp+50h] [rbp-28h]

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
        if ( !*(_QWORD *)v3 || (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v3);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v11 = 0;
        v12 = -60876;
        v10 = 0LL;
        ObpLockDirectoryExclusive((__int64)&v10, (__int64)v5);
        v6 = KeGetCurrentThread();
        --v6->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        if ( *(PVOID *)v3 == v5 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)&v10);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext(v5);
      }
      v7 = 0LL;
      if ( !*(_DWORD *)(v3 + 24) )
      {
        v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v8 == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        v9 = (void *)ObpLookupDirectoryEntryEx(*(_QWORD *)v3, (int)v3 + 8, 0, 0, 0, (__int64)&v10);
        v7 = v9;
        if ( v8 == ObpDirectoryObjectType )
          ObfReferenceObject(v9);
        else
          v7 = 0LL;
        ObpDeleteDirectoryEntry((__int64)&v10);
      }
      ObpReleaseLookupContext((__int64)&v10);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      PsDereferenceSiloContext(v5);
      if ( v7 )
      {
        ObpMarkDirectoryTreeTemporary(v7);
        PsDereferenceSiloContext(v7);
      }
    }
  }
}
