/*
 * XREFs of CmpInitializeRollbackPacket @ 0x14054E0E0
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeRollbackPacket(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
