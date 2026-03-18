/*
 * XREFs of ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18000A170
 * Callers:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1801962CC (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x121u);
    }
  }
  return v1;
}
