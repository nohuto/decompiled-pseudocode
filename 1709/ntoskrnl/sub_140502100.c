/*
 * XREFs of sub_140502100 @ 0x140502100
 * Callers:
 *     sub_140502058 @ 0x140502058 (sub_140502058.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 *     sub_14059E290 @ 0x14059E290 (sub_14059E290.c)
 * Callees:
 *     sub_14059E238 @ 0x14059E238 (sub_14059E238.c)
 */

signed __int64 __fastcall sub_140502100(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_14059E238(a1, a2);
  }
  return v2;
}
