/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x180146E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(CWRLExecuteCommandBase *this, IUnknown *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  IUnknown_Set((IUnknown **)this + 10, a2);
  return 0LL;
}
