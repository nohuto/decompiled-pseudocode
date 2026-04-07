/*
 * XREFs of ?SetAbsoluteBeginTime@CAnimationResource@@UEAAJT_LARGE_INTEGER@@@Z @ 0x180036D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetAbsoluteBeginTime(union _LARGE_INTEGER *this, union _LARGE_INTEGER a2)
{
  __int64 result; // rax

  this[9] = a2;
  result = 0LL;
  BYTE1(this[10].LowPart) = 1;
  return result;
}
