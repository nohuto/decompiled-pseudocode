/*
 * XREFs of CmpDereferenceHive @ 0x1405EE0B4
 * Callers:
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpDereferenceHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
