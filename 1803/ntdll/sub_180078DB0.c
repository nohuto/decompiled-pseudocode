/*
 * XREFs of sub_180078DB0 @ 0x180078DB0
 * Callers:
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x18009B0A0 (ZwOpenThreadTokenEx.c)
 */

__int64 __fastcall sub_180078DB0(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = ZwOpenThreadTokenEx(-2LL, a1, a3);
  if ( (int)result < 0 )
    return ZwOpenThreadTokenEx(-2LL, a1, 0LL);
  return result;
}
