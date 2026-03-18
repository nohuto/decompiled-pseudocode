/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x1405F0844
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1405EF3B0 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1405F17E0 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1407930F8 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     SepDeleteSessionLowboxEntries @ 0x1400C33BC (SepDeleteSessionLowboxEntries.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x14056FD8C (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14056FDF4 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x1405EE8C4 (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x1407928C8 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v3; // r8
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  struct _EX_RUNDOWN_REF *i; // rbx
  unsigned __int64 Count; // rcx
  void *Ptr; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v2 = 0LL;
  v3 = *a1 & 0xF;
  v6 = (struct _EX_RUNDOWN_REF **)(SepLogonSessions + 8 * v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( i[20].Count == PsGetCurrentServerSilo() && *a1 == LODWORD(i[1].Count) && a1[1] == HIDWORD(i[1].Ptr) )
      break;
    v6 = (struct _EX_RUNDOWN_REF **)i;
  }
  if ( a2 )
  {
    LODWORD(i[4].Count) |= 0x10u;
    ObRevokeHandles(&i[16]);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  Count = i[3].Count;
  if ( !Count || (i[4].Count & 8) == 0 && Count == 1 )
  {
    *v6 = (struct _EX_RUNDOWN_REF *)i->Count;
    Ptr = i[5].Ptr;
    if ( Ptr )
    {
      i[5].Count = 0LL;
      v2 = Ptr;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, i[20].Count);
      ObfDereferenceDeviceMap(v2);
    }
    v12 = i[20].Ptr;
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = i[8].Ptr;
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
