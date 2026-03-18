/*
 * XREFs of CmpDoFlushAll @ 0x1401E3C7C
 * Callers:
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140693A8C (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140694580 (CmpForceFlushWorker.c)
 * Callees:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 */

void CmpDoFlushAll()
{
  ULONG_PTR i; // rcx
  ULONG_PTR NextActiveHive; // rax
  ULONG_PTR v2; // rbx

  if ( !CmpNoWrite )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 2) == 0 )
        CmpFlushHive(NextActiveHive);
    }
  }
}
