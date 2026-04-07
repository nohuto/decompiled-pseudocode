/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x18006E9FC
 * Callers:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180082E14 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x180082EC4 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  unsigned int v4; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  v4 = 0;
  if ( this[79] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[79]);
    if ( !PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, LastError, 0x93Eu);
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, -2147467259, 0x93Bu);
  }
  return v4;
}
