/*
 * XREFs of CleanInputMessage @ 0x1C0111FEC
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 */

__int64 __fastcall CleanInputMessage(int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - 576);
  if ( a1 == 576 )
    result = FreeTouchInputInfo(*(_QWORD *)(a2 + 40), 1LL);
  if ( a1 == 281 )
    return FreeGestureInfo(*(_QWORD *)(a2 + 40), 1LL);
  return result;
}
