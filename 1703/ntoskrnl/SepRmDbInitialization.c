/*
 * XREFs of SepRmDbInitialization @ 0x14082189C
 * Callers:
 *     SepInitializationPhase0 @ 0x14081A294 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     SepBuildDefaultCap @ 0x1405CFDC8 (SepBuildDefaultCap.c)
 */

char SepRmDbInitialization()
{
  struct _ERESOURCE *v0; // rbx
  __int64 v1; // rdi
  PVOID PoolWithTag; // rax

  v0 = &SepRmDbLock;
  v1 = 4LL;
  do
  {
    ExInitializeResourceLite(v0++);
    --v1;
  }
  while ( v1 );
  ExInitializeResourceLite(&SepRmGlobalSaclLock);
  SepRmNotifyMutex.Count = 1;
  SepRmNotifyMutex.Owner = 0LL;
  SepRmNotifyMutex.Contention = 0;
  LOWORD(SepRmNotifyMutex.Event.Header.Lock) = 1;
  SepRmNotifyMutex.Event.Header.Size = 6;
  SepRmNotifyMutex.Event.Header.SignalState = 0;
  SepRmNotifyMutex.Event.Header.WaitListHead.Blink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  SepRmNotifyMutex.Event.Header.WaitListHead.Flink = &SepRmNotifyMutex.Event.Header.WaitListHead;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x734C6553u);
  SepLogonSessions = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x80uLL);
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId) < 0 )
    return 0;
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId) < 0 )
    return 0;
  SepRmAuditingEnabled = 0;
  memset(SeAuditingState, 0, 0x76uLL);
  byte_140348662 = 1;
  SepRmCapTableLock = 0LL;
  SepRmEnforceCap = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  dword_1407ACFCC = 1;
  return 1;
}
