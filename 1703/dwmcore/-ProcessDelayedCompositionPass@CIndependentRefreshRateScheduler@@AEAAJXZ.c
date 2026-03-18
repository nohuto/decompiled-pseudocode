/*
 * XREFs of ?ProcessDelayedCompositionPass@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D428
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::ProcessDelayedCompositionPass(HANDLE *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  signed int LastError; // eax
  unsigned int lpArgToCompletionRoutine; // [rsp+20h] [rbp-18h]
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 6369);
  v3 = 0;
  if ( !(_DWORD)v1 )
  {
    SetLastError(0);
    if ( !CancelWaitableTimer(this[10]) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      lpArgToCompletionRoutine = 2536;
      goto LABEL_6;
    }
LABEL_13:
    *((_DWORD *)this + 6369) = 0;
    return v3;
  }
  DueTime.QuadPart = -10000 * v1;
  SetLastError(0);
  if ( SetWaitableTimer(this[10], &DueTime, 0, 0LL, 0LL, 0) )
    goto LABEL_13;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  lpArgToCompletionRoutine = 2532;
LABEL_6:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, lpArgToCompletionRoutine);
  return v3;
}
