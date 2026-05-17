/*
 * XREFs of TpWaitForWork @ 0x18000ABD0
 * Callers:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18000C5D0 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18000C9A8 (TppWorkpValidateWork.c)
 */

__int64 __fastcall TpWaitForWork(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
