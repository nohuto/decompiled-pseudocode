/*
 * XREFs of ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x180120BFC
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1801207A8 (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::StartCompositionThread(CConnection *this, int nPriority)
{
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  int LastError; // eax
  HANDLE v7; // rax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  ThreadId = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 23) = EventW;
  if ( EventW )
  {
    v7 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CConnection::CompositionThreadEntryPoint, this, 0, &ThreadId);
    *((_QWORD *)this + 22) = v7;
    if ( !v7 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x27Bu);
      return v3;
    }
    SetLastError(0);
    if ( SetThreadPriority(*((HANDLE *)this + 22), nPriority) )
    {
      Handles[0] = *((HANDLE *)this + 22);
      Handles[1] = *((HANDLE *)this + 23);
      SetLastError(0);
      if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
        return v3;
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      dwCreationFlags = 641;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      dwCreationFlags = 637;
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    dwCreationFlags = 627;
  }
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastError, dwCreationFlags);
  return v3;
}
