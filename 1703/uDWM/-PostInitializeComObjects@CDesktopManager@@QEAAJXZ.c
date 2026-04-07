/*
 * XREFs of ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ @ 0x180078D5C
 * Callers:
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x180079190 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::PostInitializeComObjects(CDesktopManager *this)
{
  unsigned int v2; // edi
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 144), 0x409u, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x506u);
  }
  return v2;
}
