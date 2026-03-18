/*
 * XREFs of BgpFwMarkHiberPhase @ 0x1407D3970
 * Callers:
 *     BgMarkHiberPhase @ 0x1407D2F48 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_14035A270; (__int64 *)i != &qword_14035A270; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
