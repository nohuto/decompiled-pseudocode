/*
 * XREFs of LdrDeleteEnclave @ 0x1800D0060
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800D0640 (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rbx
  int v3; // edi

  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = v1;
  if ( v1
    && (v3 = LdrpDeleteEnclave(v1), RtlLeaveCriticalSection((__int64)(v2 + 2)), LdrpDereferenceEnclave(v2), v3 < 0) )
  {
    return (unsigned int)v3;
  }
  else
  {
    return ZwFreeVirtualMemory();
  }
}
