/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800D0AE0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A3EC0 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CFF60 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A3F30 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx

  v5 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v6 = (unsigned __int64)v5;
  v7 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2));
    LdrpDereferenceEnclave(v6);
    return (unsigned int)RtlCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
