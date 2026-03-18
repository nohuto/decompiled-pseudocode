/*
 * XREFs of VfIoFreeIrp @ 0x14076E8CC
 * Callers:
 *     IovFreeIrpPrivate @ 0x140763334 (IovFreeIrpPrivate.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViErrorReport1 @ 0x140251260 (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1402518F0 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140251938 (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140765038 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14077C09C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14077C21C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoFreeIrp(_BYTE *P, const void *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  KIRQL v11; // [rsp+40h] [rbp+8h] BYREF
  KIRQL v12; // [rsp+50h] [rbp+18h] BYREF

  if ( (P[71] & 0x21) == 0x21 )
    return 0LL;
  v5 = VfIrpDatabaseEntryFindAndLock(P);
  if ( !v5 )
    return 0LL;
  if ( *((_BYTE **)P + 4) != P + 32 )
  {
    ViErrorReport1(0x20Cu, a2, P);
    VfIrpDatabaseEntryReleaseLock(v5);
    return 1LL;
  }
  if ( *(_QWORD *)(v5 + 240) )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400000) == 0 )
      ViErrorReport1(0x20Bu, a2, P);
    v6 = 1;
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 56);
    if ( (v7 & 0x200000) != 0 )
    {
      if ( (v7 & 8) != 0 )
      {
        v6 = 1;
        *(_WORD *)P = 0;
        if ( (P[71] & 1) != 0 )
        {
          PsReturnProcessNonPagedPoolQuota(*(struct _KPROCESS **)(v5 + 88), *(unsigned int *)(v5 + 84));
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 88), 0x49667256u);
        }
        v8 = (*(_DWORD *)(v5 + 24))-- == 1;
        if ( v8 )
        {
          ViIrpDatabaseAcquireLockExclusive(&v12);
          v10 = *(_QWORD *)v5;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
          *(_QWORD *)v5 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
            v10);
          ViIrpDatabaseReleaseLockExclusive(v12);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
        VfIrpDatabaseEntryReleaseLock(v5);
        ExFreePoolWithTag(P, 0);
        return v6;
      }
      v8 = (*(_DWORD *)(v5 + 24))-- == 1;
      if ( v8 )
      {
        ViIrpDatabaseAcquireLockExclusive(&v11);
        v9 = *(_QWORD *)v5;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
        *(_QWORD *)v5 = 0LL;
        VfUtilAddressRangeRemoveCheckEmpty(
          (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
          v9);
        ViIrpDatabaseReleaseLockExclusive(v11);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    }
    v6 = 0;
  }
  VfIrpDatabaseEntryReleaseLock(v5);
  return v6;
}
