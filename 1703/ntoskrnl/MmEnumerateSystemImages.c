/*
 * XREFs of MmEnumerateSystemImages @ 0x1404B0CF8
 * Callers:
 *     EtwpSysModuleRunDown @ 0x1404B0BC8 (EtwpSysModuleRunDown.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140720204 (ExpCovResetInformation.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v4; // r15d
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // rbp
  __int64 Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r14
  void *v10; // rbx
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  _BYTE v14[48]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PsIsSystemProcess(Process) )
    v6 = 0LL;
  else
    v6 = Process[1].ActiveProcessors.Bitmap[2];
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = MmGetNextSession(i);
        v10 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v14);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v4 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v14);
      ObfDereferenceObject(v10);
    }
    if ( v4 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  MmReleaseLoadLock(Lock);
  return (unsigned int)v4;
}
