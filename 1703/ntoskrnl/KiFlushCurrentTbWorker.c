/*
 * XREFs of KiFlushCurrentTbWorker @ 0x140025F10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140182870 (KiSetUserTbFlushPending.c)
 */

unsigned __int64 __fastcall KiFlushCurrentTbWorker(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h]

  if ( KiFlushPcid )
  {
    v6 = 2uLL;
    _EAX = 1;
    __asm { invpcid eax, [rsp+48h+var_28] }
    result = PsGetCurrentProcess(a1, a2, a3);
    if ( !*(_BYTE *)(result + 640) )
      return KiSetUserTbFlushPending();
  }
  else
  {
    v5 = __readcr4();
    if ( (v5 & 0x20080) != 0 )
    {
      result = v5 ^ 0x80;
      __writecr4(v5 ^ 0x80);
      __writecr4(v5);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  return result;
}
