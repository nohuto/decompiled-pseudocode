/*
 * XREFs of ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C0077F74
 * Callers:
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0078600 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0078458 (WPP_IFR_SF_qqxd.c)
 */

__int64 __fastcall FxRequest::CompleteWithPriority(
        FxRequest *this,
        unsigned int Status,
        __int64 PriorityBoost,
        unsigned __int16 a4)
{
  char v4; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a4; // r10
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  v4 = PriorityBoost;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a4 = 0LL;
    WPP_IFR_SF_qqxd(
      m_Globals,
      0,
      PriorityBoost,
      0xCu,
      v10,
      _a4,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  this->m_PriorityBoost = v4;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, PriorityBoost, a4);
}
