/*
 * XREFs of MapServerToClientPfn @ 0x1C0115F9C
 * Callers:
 *     _GetClassInfoEx @ 0x1C0039584 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v4; // rax

  v2 = 666;
  while ( a1 != *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF3FFF) - 666) + 272) )
  {
    if ( ++v2 > 672 )
      return 0LL;
  }
  v4 = v2 - 666;
  if ( a2 )
    return *(_QWORD *)(gpsi + 8 * v4 + 392);
  else
    return *(_QWORD *)(gpsi + 8 * v4 + 576);
}
