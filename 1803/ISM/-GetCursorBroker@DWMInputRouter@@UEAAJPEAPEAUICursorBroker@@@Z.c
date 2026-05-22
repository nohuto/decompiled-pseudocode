/*
 * XREFs of ?GetCursorBroker@DWMInputRouter@@UEAAJPEAPEAUICursorBroker@@@Z @ 0x18007F690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetCursorBroker(DWMInputRouter *this, struct ICursorBroker **a2)
{
  unsigned int v2; // ebx
  struct ICursorBroker *v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    v3 = (struct ICursorBroker *)*((_QWORD *)this + 33);
    *a2 = v3;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
