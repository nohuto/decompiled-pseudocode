/*
 * XREFs of ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x180025AC4
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180025D68 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002E598 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::UpdateMMCSSTask(CManipulationManager *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( hEvent )
  {
    SetLastError(0);
    if ( !SetEvent(hEvent) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v1 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x125u);
    }
  }
  return v1;
}
