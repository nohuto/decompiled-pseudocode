/*
 * XREFs of PdcPortSendMessage @ 0x14078B634
 * Callers:
 *     PdcNotificationClientAcknowledge @ 0x14078B828 (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x14078BC80 (PdcpNotificationClientCallback.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessage(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 32))(*(_QWORD *)(a1 + 24), a2, 792LL);
    ExReleaseRundownProtection(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
