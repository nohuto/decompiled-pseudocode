/*
 * XREFs of ??0BindState@Ndis@@QEAA@XZ @ 0x1C00BBEB8
 * Callers:
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00BE634 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00DA0F0 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 * Callees:
 *     ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1C00B1F1C (-grow@-$KArray@PEAX$00@Rtl@@AEAA_N_K@Z.c)
 */

Ndis::BindState *__fastcall Ndis::BindState::BindState(Ndis::BindState *this)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rcx

  this->m_unbindReasons = 2;
  this->Miniport = 0LL;
  *(_WORD *)&this->AllowBindDespiteMandatory = 0;
  this->NeedsPauseAction = 0;
  this->m_AdditionalContext = 0LL;
  *(_QWORD *)&this->m_pauseReasons = 1LL;
  *(_QWORD *)&this->m_LastErrorCode = 0LL;
  p_m_bindContext = &this->m_bindContext;
  *(_QWORD *)&p_m_bindContext->m_bufferSize = 0LL;
  p_m_bindContext->_p = 0LL;
  Rtl::KArray<void *,1>::grow(&p_m_bindContext->m_bufferSize, 1uLL);
  return this;
}
