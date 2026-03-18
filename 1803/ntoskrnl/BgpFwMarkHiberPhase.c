/*
 * XREFs of BgpFwMarkHiberPhase @ 0x140840360
 * Callers:
 *     BgMarkHiberPhase @ 0x14083F928 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_14039D8C0; (__int64 *)i != &qword_14039D8C0; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
