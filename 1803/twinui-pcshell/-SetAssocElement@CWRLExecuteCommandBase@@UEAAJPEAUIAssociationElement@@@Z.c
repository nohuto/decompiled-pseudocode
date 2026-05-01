/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x180224D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(IUnknown **this, IUnknown *a2)
{
  SafeRelease<IShellItemArray>(this + 13);
  IUnknown_Set(this + 12, a2);
  return 0LL;
}
