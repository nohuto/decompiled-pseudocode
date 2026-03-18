/*
 * XREFs of CmpDoFlushAll @ 0x14013D204
 * Callers:
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140668E3C (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140669760 (CmpForceFlushWorker.c)
 * Callees:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
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
