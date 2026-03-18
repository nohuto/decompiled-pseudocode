/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1406D5C2C
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140130970 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = xmmword_14036E710;
  if ( xmmword_14036E710 )
    return (__int64 (*)(void))xmmword_14036E710();
  return result;
}
