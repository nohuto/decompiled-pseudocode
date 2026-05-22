/*
 * XREFs of ?GetDisplayBinding@HitTestRequest@@UEAAJPEAPEAUIDisplayBinding@@@Z @ 0x180022D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HitTestRequest::GetDisplayBinding(HitTestRequest *this, struct IDisplayBinding **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IDisplayBinding *)*((_QWORD *)this + 2);
  return 0LL;
}
