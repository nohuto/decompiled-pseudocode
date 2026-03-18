/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x14029F254
 * Callers:
 *     PdcTaskClientRequest @ 0x14078B714 (PdcTaskClientRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 40))(*(_QWORD *)(a1 + 24), a2, 792LL);
    ExReleaseRundownProtection(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
