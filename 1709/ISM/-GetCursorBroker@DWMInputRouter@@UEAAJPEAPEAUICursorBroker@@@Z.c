/*
 * XREFs of ?GetCursorBroker@DWMInputRouter@@UEAAJPEAPEAUICursorBroker@@@Z @ 0x18001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetCursorBroker(DWMInputRouter *this, struct ICursorBroker **a2)
{
  unsigned int v2; // ebx
  struct ICursorBroker *v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    v3 = (struct ICursorBroker *)*((_QWORD *)this + 29);
    *a2 = v3;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1606, 87);
  }
  return v2;
}
