/*
 * XREFs of KiFlushCurrentTbWorker @ 0x140034D80
 * Callers:
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401ABF40 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *KiFlushCurrentTbWorker()
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h]

  if ( KiFlushPcid )
  {
    *(_QWORD *)&v3 = 2LL;
    _EAX = 1;
    __asm { invpcid eax, [rsp+48h+var_28] }
    result = KeGetCurrentThread();
    if ( !result->ApcState.Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending();
  }
  else
  {
    v2 = __readcr4();
    if ( (v2 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v2 ^ 0x80);
      __writecr4(v2 ^ 0x80);
      __writecr4(v2);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
