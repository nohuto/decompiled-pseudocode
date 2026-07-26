/*
 * XREFs of ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00B1E3C
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00144AC (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@AEAA_N_K@Z @ 0x1C00B19EC (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00B36B8 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@AEAA_N_K@Z @ 0x1C00B5444 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 */

Ndis::BindStack *__fastcall Ndis::BindStack::BindStack(Ndis::BindStack *this)
{
  this->Protocols.m_bufferSize = 0;
  this->Protocols.m_numElements = 0;
  this->Protocols._p = 0LL;
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::grow(
    &this->Protocols.m_bufferSize,
    0LL);
  this->Filters.m_bufferSize = 0;
  this->Filters.m_numElements = 0;
  this->Filters._p = 0LL;
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::grow(
    &this->Filters,
    0LL);
  Ndis::BindState::BindState(&this->Miniport);
  this->ChangeEpoch = 0;
  return this;
}
