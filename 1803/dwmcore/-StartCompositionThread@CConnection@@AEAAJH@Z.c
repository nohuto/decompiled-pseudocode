/*
 * XREFs of ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x18005E7B0
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800C9A50 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::StartCompositionThread(CConnection *this, int nPriority)
{
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  signed int LastError; // eax
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
    v6 = CreateThread(0LL, 0LL, CConnection::CompositionThreadEntryPoint, this, 4u, &ThreadId);
    *((_QWORD *)this + 22) = v6;
    if ( !v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Bu);
      return v3;
    }
    SetThreadDescription(v6, L"DWM Compositor Thread");
    SetLastError(0);
    if ( SetThreadPriority(*((HANDLE *)this + 22), nPriority) )
    {
      SetLastError(0);
      if ( ResumeThread(*((HANDLE *)this + 22)) == -1 )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        dwCreationFlags = 643;
      }
      else
      {
        Handles[0] = *((HANDLE *)this + 22);
        Handles[1] = *((HANDLE *)this + 23);
        SetLastError(0);
        if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
          return v3;
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        dwCreationFlags = 647;
      }
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      dwCreationFlags = 640;
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, dwCreationFlags);
  return v3;
}
