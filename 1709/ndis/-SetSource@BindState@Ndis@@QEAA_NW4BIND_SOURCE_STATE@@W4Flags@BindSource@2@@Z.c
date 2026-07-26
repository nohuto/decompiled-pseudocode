/*
 * XREFs of ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00AB3AC
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

bool __fastcall Ndis::BindState::SetSource(
        Ndis::BindState *this,
        enum BIND_SOURCE_STATE a2,
        enum Ndis::BindSource::Flags a3)
{
  unsigned int m_bindSources; // r10d
  unsigned int v5; // r9d
  bool result; // al
  unsigned __int16 v7; // cx

  m_bindSources = this->m_bindSources;
  if ( a2 )
  {
    if ( a2 == RemoveBindSource )
      this->m_bindSources = m_bindSources & ~a3;
  }
  else
  {
    this->m_bindSources = a3 | m_bindSources;
  }
  v5 = this->m_bindSources;
  if ( (m_bindSources != 0) == (v5 != 0) )
    return 0;
  if ( (unsigned __int8)byte_1C0098763 >= 5u )
    WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, v5);
  if ( this->m_bindSources )
  {
    if ( Ndis::BindState::SetBinding(this, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, this->m_bindSources, 0LL, 0LL);
    }
    if ( !Ndis::BindState::SetBinding(
            this,
            BindingEnabled,
            Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      || (unsigned __int8)byte_1C0098763 < 4u )
    {
      goto LABEL_20;
    }
    v7 = 12;
  }
  else
  {
    if ( !Ndis::BindState::SetBinding(this, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
      || (unsigned __int8)byte_1C0098763 < 4u )
    {
      goto LABEL_20;
    }
    v7 = 13;
  }
  WPP_SF_Zq(v7, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_20:
  result = 1;
  this->Miniport->BindEngine.m_isDirty = 1;
  return result;
}
