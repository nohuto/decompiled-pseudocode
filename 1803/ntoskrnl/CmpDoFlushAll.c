/*
 * XREFs of CmpDoFlushAll @ 0x1401551E0
 * Callers:
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x1406F6D7C (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1406FBC70 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmpGetLastHive @ 0x14049BD04 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1405EE0B4 (CmpDereferenceHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !CmpNoWrite )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v3 = (ULONG_PTR)NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection(NextHive + 204) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 + 1632));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpDereferenceHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
