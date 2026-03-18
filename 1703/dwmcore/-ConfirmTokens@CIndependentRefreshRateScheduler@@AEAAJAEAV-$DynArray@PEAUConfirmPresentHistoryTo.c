/*
 * XREFs of ?ConfirmTokens@CIndependentRefreshRateScheduler@@AEAAJAEAV?$DynArray@PEAUConfirmPresentHistoryToken@@$0A@@@K_K@Z @ 0x18013CB30
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::ConfirmTokens(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  _QWORD *v5; // rcx
  signed int LastError; // eax

  v2 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      SetLastError(0);
      v5 = *(_QWORD **)(*(_QWORD *)a2 + 8LL * v4);
      if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v5, v5 + 1) )
        break;
      if ( ++v4 >= *(_DWORD *)(a2 + 24) )
        return v2;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x6EDu);
  }
  return v2;
}
