/*
 * XREFs of ?OnDisconnected@TabTipAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x18016ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnDisconnected(TabTipAdapter *this, struct IMessageProxy *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // rcx
  struct IMessageProxy *v5; // rcx
  __int64 v6; // rdx
  struct IMessageProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 4);
    v8 = 0LL;
    (**v4)(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v8);
    v5 = v8;
    if ( v8 == a2 )
    {
      v6 = *((_QWORD *)this + 4);
      if ( v6 )
      {
        *((_QWORD *)this + 4) = 0LL;
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
