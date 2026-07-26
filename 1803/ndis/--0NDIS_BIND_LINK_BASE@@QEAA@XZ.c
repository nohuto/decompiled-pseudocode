/*
 * XREFs of ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00C2AB8
 * Callers:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C001DE40 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00BCEF4 (--0BindState@Ndis@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE *__fastcall NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  Ndis::BindState::BindState(&this->BindState);
  this->DriverLinkage.Blink = &this->DriverLinkage;
  this->DriverLinkage.Flink = &this->DriverLinkage;
  return this;
}
