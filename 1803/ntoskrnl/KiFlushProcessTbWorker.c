/*
 * XREFs of KiFlushProcessTbWorker @ 0x140039470
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

unsigned __int64 KiFlushProcessTbWorker()
{
  unsigned __int64 result; // rax
  __int128 v1; // [rsp+0h] [rbp-28h]

  if ( KiFlushPcid )
  {
    *(_QWORD *)&v1 = 2LL;
    result = 1LL;
    __asm { invpcid eax, [rsp+28h+var_28] }
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
