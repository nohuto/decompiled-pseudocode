/*
 * XREFs of ttfdSemDestroyFont @ 0x1C02269E0
 * Callers:
 *     <none>
 * Callees:
 *     ttfdCloseFontContext @ 0x1C02328B4 (ttfdCloseFontContext.c)
 */

void __fastcall ttfdSemDestroyFont(__int64 a1)
{
  void *v2; // rcx

  EngAcquireSemaphore(ghsemTTFD);
  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    ttfdCloseFontContext(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  EngReleaseSemaphore(ghsemTTFD);
}
