/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x140246240
 * Callers:
 *     PdcTaskClientRequest @ 0x1406F0020 (PdcTaskClientRequest.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 40))(*(_QWORD *)(a1 + 24), a2, 768LL);
    ExReleaseRundownProtection(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
