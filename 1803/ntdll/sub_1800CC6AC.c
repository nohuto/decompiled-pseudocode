/*
 * XREFs of sub_1800CC6AC @ 0x1800CC6AC
 * Callers:
 *     sub_180074FB0 @ 0x180074FB0 (sub_180074FB0.c)
 * Callees:
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 */

__int64 sub_1800CC6AC()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&dword_18015D490);
  if ( (_DWORD)result == 1 )
  {
    v1 = sub_18002B488();
    result = sub_18002B1E8(0, 0, &_security_cookie, v1 ^ (unsigned int)dword_18016F368, 0LL);
    _InterlockedOr(v2, 0);
    byte_18015D405 = 1;
  }
  else
  {
    while ( !byte_18015D405 )
      result = ZwDelayExecution();
  }
  return result;
}
