/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1801415F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  __int64 v4; // rcx

  if ( *((struct ISnapAssistCallback **)this + 22) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ISnapAssistCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
