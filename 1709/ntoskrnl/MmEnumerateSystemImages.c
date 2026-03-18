/*
 * XREFs of MmEnumerateSystemImages @ 0x1406E2040
 * Callers:
 *     EtwpSysModuleRunDown @ 0x14074EC14 (EtwpSysModuleRunDown.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140760074 (ExpCovResetInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // ebp
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  _KPROCESS *v10; // rbx
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _BYTE v14[48]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].ActiveProcessors.Bitmap[2];
  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v10 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v14) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_15;
          MmDetachSession((__int64)v10, (__int64)v14);
        }
      }
      goto LABEL_18;
    }
LABEL_15:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v14);
      ObfDereferenceObject(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_18:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
