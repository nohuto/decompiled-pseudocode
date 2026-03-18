/*
 * XREFs of ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1801316D8
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180131560 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180131634 (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::Initialize(CSurfaceManager *this, void **a2, void **a3)
{
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v8; // ebx
  DWORD v9; // r9d
  int v10; // ebx
  LPVOID v11; // rax
  signed int v12; // eax
  int TokenThread; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-38h]

  qword_18026EEC0 = this;
  qword_18026EF20 = this;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 52) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 105;
LABEL_5:
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_7;
  }
  v10 = NtTokenManagerOpenSectionAndEvents(
          (char *)this + 632,
          (char *)this + 648,
          (char *)this + 656,
          (char *)this + 664);
  if ( v10 < 0 )
  {
    v8 = v10 | 0x10000000;
    dwNumberOfBytesToMap = 115;
LABEL_7:
    v9 = v8;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, dwNumberOfBytesToMap);
    return (unsigned int)v8;
  }
  SetLastError(0);
  v11 = MapViewOfFile(*((HANDLE *)this + 79), 4u, 0, 0, *((_QWORD *)this + 81));
  if ( !v11 )
  {
    v12 = GetLastError();
    v8 = v12;
    if ( v12 > 0 )
      v8 = (unsigned __int16)v12 | 0x80070000;
    dwNumberOfBytesToMap = 121;
    goto LABEL_5;
  }
  *((_QWORD *)this + 80) = v11;
  TokenThread = CSurfaceManager::CreateTokenThread((HANDLE *)this);
  v8 = TokenThread;
  if ( TokenThread < 0 )
  {
    dwNumberOfBytesToMap = 128;
    v9 = TokenThread;
    goto LABEL_17;
  }
  *a2 = (void *)*((_QWORD *)this + 82);
  *a3 = (void *)*((_QWORD *)this + 83);
  return (unsigned int)v8;
}
