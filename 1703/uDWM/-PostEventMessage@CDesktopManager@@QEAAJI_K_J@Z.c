/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180078C94
 * Callers:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18001387C (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008B08C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  unsigned int v4; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  v4 = 0;
  if ( this[73] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[73]);
    if ( !PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      MilInstrumentationCheckHR(0x14u, &dword_1800B0E30, 1LL, LastError, 0x891u);
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_1800B0E30, 1LL, -2147467259, 0x88Eu);
  }
  return v4;
}
