/*
 * XREFs of ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009FC6C
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0028A80 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C009FCEC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FD74 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FE00 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009FE94 (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxCxPnpPowerCallbackContext::IsCallbackPresent(
        FxCxPnpPowerCallbackContext *this,
        FxCxCallbackSubType SubType)
{
  unsigned int m_CallbackType; // r9d
  char v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  bool v7; // zf
  unsigned int v8; // r9d
  unsigned int v9; // r9d

  m_CallbackType = (unsigned __int8)this->m_CallbackType;
  v3 = 0;
  if ( m_CallbackType > 5 )
  {
    v8 = m_CallbackType - 6;
    if ( !v8 )
      goto LABEL_8;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_8;
    v6 = v9 - 1;
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    if ( m_CallbackType == 5 )
      goto LABEL_8;
    if ( this->m_CallbackType == FxCxCallbackPrepareHardware
      || (v4 = m_CallbackType - 1) == 0
      || (v5 = v4 - 1) == 0
      || (v6 = v5 - 1) == 0 )
    {
      if ( SubType )
      {
        if ( SubType == FxCxPostCallback )
          goto LABEL_10;
        if ( SubType == FxCxCleanupCallback )
        {
          v7 = this->u.PrepareHardware.CleanupCallback == 0LL;
          return !v7;
        }
        return v3;
      }
LABEL_19:
      v7 = this->u.PrepareHardware.PreCallback == 0LL;
      return !v7;
    }
  }
  if ( v6 != 1 )
    return v3;
LABEL_8:
  if ( SubType == FxCxPreCallback )
    goto LABEL_19;
  if ( SubType == FxCxPostCallback )
  {
LABEL_10:
    v7 = this->u.PrepareHardware.PostCallback == 0LL;
    return !v7;
  }
  return v3;
}
