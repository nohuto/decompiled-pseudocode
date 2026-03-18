/*
 * XREFs of CitModerncoreShutdown @ 0x1C0156790
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00846B4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C018E8C8 )
    CitpLogoff(qword_1C018E8C8);
}
