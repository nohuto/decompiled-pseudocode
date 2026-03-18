/*
 * XREFs of BgpFwMarkHiberPhase @ 0x1407553B8
 * Callers:
 *     BgMarkHiberPhase @ 0x140755380 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_140341AF0; (__int64 *)i != &qword_140341AF0; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
