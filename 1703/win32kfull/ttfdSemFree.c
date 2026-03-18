/*
 * XREFs of ttfdSemFree @ 0x1C02254C0
 * Callers:
 *     <none>
 * Callees:
 *     ttfdFree @ 0x1C02313E8 (ttfdFree.c)
 */

void __fastcall ttfdSemFree(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  EngAcquireSemaphore(ghsemTTFD);
  ttfdFree(v3, a2);
  EngReleaseSemaphore(ghsemTTFD);
}
