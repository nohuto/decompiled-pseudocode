/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x1405A79E0
 * Callers:
 *     SepRmDeleteLogonSessionWrkr @ 0x1405A79B0 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14072F0F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14072F510 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     SepDeleteSessionLowboxEntries @ 0x140133A34 (SepDeleteSessionLowboxEntries.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1405A7B40 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1405A7BA8 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x1406EF760 (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x14072E828 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v3; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

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
      v15 = -1073741729;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v10 = *((_QWORD *)i + 3);
  if ( !v10 || (i[8] & 8) == 0 && v10 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v11 = (void *)*((_QWORD *)i + 5);
    if ( v11 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((_QWORD *)i + 20));
      ObfDereferenceDeviceMap(v2);
    }
    v12 = (void *)*((_QWORD *)i + 20);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = (void *)*((_QWORD *)i + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 32);
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
