/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14076EE78
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140144040 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1403D1450;
  if ( qword_1403D1450 )
    return (__int64 (*)(void))qword_1403D1450();
  return result;
}
