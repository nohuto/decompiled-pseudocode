/*
 * XREFs of ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18001E798
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180151DC0 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::LoadRuntime(CMmcssTask *this)
{
  signed int v1; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  FARPROC v5; // rax
  FARPROC v6; // rax
  signed int v8; // eax
  unsigned int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  signed int LastError; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    SetLastError(0);
    LibraryW = LoadLibraryW(L"avrt.dll");
    *((_QWORD *)this + 6) = LibraryW;
    if ( LibraryW )
    {
      SetLastError(0);
      ProcAddress = GetProcAddress(*((HMODULE *)this + 6), "AvRevertMmThreadCharacteristics");
      *((_QWORD *)this + 8) = ProcAddress;
      if ( ProcAddress )
      {
        SetLastError(0);
        v5 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadCharacteristicsW");
        *((_QWORD *)this + 7) = v5;
        if ( v5 )
        {
          SetLastError(0);
          v6 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadPriority");
          *((_QWORD *)this + 9) = v6;
          if ( v6 )
            return (unsigned int)v1;
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          v9 = 344;
        }
        else
        {
          v11 = GetLastError();
          v1 = v11;
          if ( v11 > 0 )
            v1 = (unsigned __int16)v11 | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          v9 = 342;
        }
      }
      else
      {
        v10 = GetLastError();
        v1 = v10;
        if ( v10 > 0 )
          v1 = (unsigned __int16)v10 | 0x80070000;
        if ( v1 >= 0 )
          v1 = -2003304445;
        v9 = 340;
      }
    }
    else
    {
      v8 = GetLastError();
      v1 = v8;
      if ( v8 > 0 )
        v1 = (unsigned __int16)v8 | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      v9 = 337;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v9);
    CMmcssTask::UnloadRuntime(this);
  }
  return (unsigned int)v1;
}
