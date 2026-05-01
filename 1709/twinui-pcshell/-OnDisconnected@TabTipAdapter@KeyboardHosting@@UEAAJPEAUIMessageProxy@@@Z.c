/*
 * XREFs of ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A4420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisconnected(
        KeyboardHosting::TabTipAdapter *this,
        struct IMessageProxy *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // rcx
  struct IMessageProxy *v5; // rcx
  __int64 v6; // rdx
  struct IMessageProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 5);
    v8 = 0LL;
    (**v4)(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v8);
    v5 = v8;
    if ( v8 == a2 )
    {
      v6 = *((_QWORD *)this + 5);
      if ( v6 )
      {
        *((_QWORD *)this + 5) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v5 = v8;
      }
    }
    if ( v5 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return 0LL;
}
