/*
 * XREFs of ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C007E43C
 * Callers:
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C007E408 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01311E4 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMouseProcessor::EventTime::Now(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  _QWORD *result; // rax

  v1 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v2 = v1 * gliQpcFreq.QuadPart;
  *a1 = v1;
  result = a1;
  a1[1] = v2 / 0x3E8;
  return result;
}
