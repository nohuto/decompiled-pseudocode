/*
 * XREFs of ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18004E95C
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x18004E478 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18005CCA8 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::UpdateMMCSSTask(CManipulationManager *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( qword_180241258 )
  {
    SetLastError(0);
    if ( !SetEvent(qword_180241258) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v1 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x125u);
    }
  }
  return v1;
}
