/*
 * XREFs of sub_18007F8E0 @ 0x18007F8E0
 * Callers:
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x1800A58E0 (ZwOpenThreadTokenEx.c)
 */

__int64 __fastcall sub_18007F8E0(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = ZwOpenThreadTokenEx(-2LL, a1, a3);
  if ( (int)result < 0 )
    return ZwOpenThreadTokenEx(-2LL, a1, 0LL);
  return result;
}
