/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C00E4C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( (int)IsFreeDdeXactSupported() >= 0 )
    FreeDdeXact(a1);
}
