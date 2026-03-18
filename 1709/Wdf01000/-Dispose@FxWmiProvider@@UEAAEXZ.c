/*
 * XREFs of ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C0071530
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C007282C (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

unsigned __int8 __fastcall FxWmiProvider::Dispose(FxWmiProvider *this)
{
  FxWmiIrpHandler::RemoveProvider(this->m_Parent, this);
  return 1;
}
