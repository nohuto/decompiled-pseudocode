/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14070B9A0
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14000D2B0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = xmmword_14038D500;
  if ( xmmword_14038D500 )
    return (__int64 (*)(void))xmmword_14038D500();
  return result;
}
