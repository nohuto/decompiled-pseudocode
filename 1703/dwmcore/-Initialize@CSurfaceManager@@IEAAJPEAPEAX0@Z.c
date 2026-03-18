/*
 * XREFs of ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800B62E0
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800CB5BC (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x1800B626C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::Initialize(CSurfaceManager *this, void **a2, void **a3)
{
  HANDLE EventW; // rax
  int v7; // ebx
  LPVOID v8; // rax
  int TokenThread; // eax
  int v10; // ebx
  signed int LastError; // eax
  int v13; // r9d
  signed int v14; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-38h]

  qword_18023E540 = this;
  qword_18023E850 = this;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 52) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 105;
    goto LABEL_11;
  }
  v7 = NtTokenManagerOpenSectionAndEvents(
         (char *)this + 632,
         (char *)this + 648,
         (char *)this + 656,
         (char *)this + 664);
  if ( v7 < 0 )
  {
    v10 = v7 | 0x10000000;
    dwNumberOfBytesToMap = 115;
LABEL_15:
    v13 = v10;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, dwNumberOfBytesToMap);
    return (unsigned int)v10;
  }
  SetLastError(0);
  v8 = MapViewOfFile(*((HANDLE *)this + 79), 4u, 0, 0, *((_QWORD *)this + 81));
  if ( !v8 )
  {
    v14 = GetLastError();
    v10 = v14;
    if ( v14 > 0 )
      v10 = (unsigned __int16)v14 | 0x80070000;
    dwNumberOfBytesToMap = 121;
LABEL_11:
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_15;
  }
  *((_QWORD *)this + 80) = v8;
  TokenThread = CSurfaceManager::CreateTokenThread(this);
  v10 = TokenThread;
  if ( TokenThread < 0 )
  {
    dwNumberOfBytesToMap = 128;
    v13 = TokenThread;
    goto LABEL_19;
  }
  *a2 = (void *)*((_QWORD *)this + 82);
  *a3 = (void *)*((_QWORD *)this + 83);
  return (unsigned int)v10;
}
