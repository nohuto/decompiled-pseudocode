/*
 * XREFs of ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C0299E90
 * Callers:
 *     <none>
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C003C0B0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall vDeletePFE(struct PFE *a1, __int64 a2)
{
  struct PFE *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  PFEOBJ::vDelete((PFEOBJ *)&v2, a2);
}
