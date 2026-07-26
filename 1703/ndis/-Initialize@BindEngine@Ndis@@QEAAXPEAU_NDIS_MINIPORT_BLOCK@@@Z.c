/*
 * XREFs of ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A64A4
 * Callers:
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::Initialize(Ndis::BindEngine *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  this->m_miniport = a2;
  a2->Bindings.Miniport.Miniport = a2;
}
