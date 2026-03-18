/*
 * XREFs of PopPdcInvocation @ 0x1405E9C08
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopPdcRegister @ 0x140652944 (PopPdcRegister.c)
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
  if ( qword_1403D1420 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1403D1420)(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
