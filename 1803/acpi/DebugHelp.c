/*
 * XREFs of DebugHelp @ 0x1C00487A0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( a2 )
  {
    strncpy_s((char *)&v4, 8uLL, a2, 8uLL);
    PrintDebugMessage(0, v4, HIDWORD(v4), 0, 0LL);
  }
  else if ( !a3 )
  {
    PrintDebugMessage(0, -1, 0, 0, 0LL);
  }
  return 0LL;
}
