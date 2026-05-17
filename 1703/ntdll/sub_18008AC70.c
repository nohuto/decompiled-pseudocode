/*
 * XREFs of sub_18008AC70 @ 0x18008AC70
 * Callers:
 *     sub_180079D20 @ 0x180079D20 (sub_180079D20.c)
 * Callees:
 *     sub_18003A4FC @ 0x18003A4FC (sub_18003A4FC.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 */

__int64 sub_18008AC70()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)_InterlockedIncrement(&dword_18015C05C);
  if ( (_DWORD)result == 1 )
  {
    v1 = sub_18003A4FC();
    result = sub_18003A528(0, 0, &_security_cookie, v1 ^ (unsigned int)dword_18016B358, 0LL);
    _InterlockedOr(v2, 0);
    byte_18015BF55 = 1;
  }
  else
  {
    v3 = -300000LL;
    while ( !byte_18015BF55 )
      result = ZwDelayExecution(0LL, &v3);
  }
  return result;
}
