/*
 * XREFs of ?FlushInteresting@DragRecognizer@@UEAAXW4GestureType@@@Z @ 0x180045F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragRecognizer::FlushInteresting(__int64 a1, int a2)
{
  char v2; // r8
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 30);
  if ( (v2 & 8) != 0 )
    result = *(unsigned int *)(a1 + 72);
  else
    result = 0LL;
  if ( ((unsigned int)result & a2) != 0 )
  {
    result = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 30) = v2 & 0xF7;
  }
  return result;
}
