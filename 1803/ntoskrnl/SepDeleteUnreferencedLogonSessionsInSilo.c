/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x1407930F8
 * Callers:
 *     SeShutdownServerSilo @ 0x14078C5A8 (SeShutdownServerSilo.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     SepDeleteLogonSessionTrack @ 0x1405F0844 (SepDeleteLogonSessionTrack.c)
 */

struct _KTHREAD *__fastcall SepDeleteUnreferencedLogonSessionsInSilo(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = &SepRmDbLock + (v2 & 3);
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 160) == a1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( !v10 || (*(_DWORD *)(i + 32) & 8) == 0 && v10 == 1 )
        {
          v13 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SepDeleteLogonSessionTrack(&v13, 0);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
