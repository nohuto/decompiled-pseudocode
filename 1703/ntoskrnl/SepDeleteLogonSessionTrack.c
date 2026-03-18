/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140579760
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140579730 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406F7524 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1406F7910 (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteSessionLowboxEntries @ 0x1401433DC (SepDeleteSessionLowboxEntries.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     ObRevokeHandles @ 0x140579840 (ObRevokeHandles.c)
 *     ObDestroyHandleRevocationBlock @ 0x14057DB94 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14057DBFC (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepDeleteLogonSessionSidValues @ 0x1406F6D08 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v3; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  void *v13; // rax
  void *v14; // rcx
  void *v15; // rcx

  v2 = 0LL;
  v3 = *a1 & 0xF;
  v6 = (_DWORD **)(SepLogonSessions + 8 * v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v12 = -1073741729;
      goto LABEL_26;
    }
    if ( *((_QWORD *)i + 20) == PsGetCurrentServerSilo() && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    ObRevokeHandles(i + 32);
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v11 = *((_QWORD *)i + 3);
  if ( !v11 || (i[8] & 8) == 0 && v11 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v13 = (void *)*((_QWORD *)i + 5);
    if ( v13 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v13;
    }
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((_QWORD *)i + 20));
      ObfDereferenceDeviceMap(v2);
    }
    v14 = (void *)*((_QWORD *)i + 20);
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x734C6553u);
    v15 = (void *)*((_QWORD *)i + 8);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 32);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v12 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
