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

__int64 __fastcall LdrpIssueEnclaveCall(LPVOID (__cdecl *a1)(LPVOID), ULONG a2, PVOID *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // r14
  unsigned int v8; // ebx

  v6 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    LdrpDereferenceEnclave(v7);
    return (unsigned int)RtlCallEnclave(a1, 0LL, a2, a3);
  }
  else
  {
    *a3 = (PVOID)((__int64 (__fastcall *)(PVOID))a1)(*a3);
  }
  return v8;
}
