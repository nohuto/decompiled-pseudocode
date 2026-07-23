/*
 * XREFs of TpWaitForJobNotification @ 0x180014260
 * Callers:
 *     <none>
 * Callees:
 *     TppJobpRundownJob @ 0x180013F30 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180014200 (TppJobpValidateJob.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 128, 0LL, 1LL);
  }
  return result;
}
