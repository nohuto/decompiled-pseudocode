/*
 * XREFs of DebugStep @ 0x1C005E5C0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 */

__int64 __fastcall DebugStep(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    PrintDebugMessage(227, 0LL, 0LL, 0LL, 0LL);
    return 4294967294LL;
  }
  else
  {
    _InterlockedOr(&gDebugger, 0x80u);
    return 0xFFFFFFFFLL;
  }
}
