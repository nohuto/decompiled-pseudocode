/*
 * XREFs of PopPdcInvocation @ 0x1405D1FEC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPdcInvocation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return PopPdcRegister(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( (_QWORD)xmmword_14036E6E0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))xmmword_14036E6E0)(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
