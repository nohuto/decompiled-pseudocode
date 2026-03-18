/*
 * XREFs of ?Initialize@CKernelTransport@@AEAAJXZ @ 0x180123E90
 * Callers:
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180123E10 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKernelTransport::Initialize(CKernelTransport *this)
{
  unsigned int v2; // ebx
  HANDLE EventW; // rax
  int LastError; // eax
  int Connection; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 1) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v7 = 79;
    if ( LastError >= 0 )
      LastError = -2003304445;
    goto LABEL_9;
  }
  Connection = NtDCompositionCreateConnection(EventW, this);
  if ( Connection < 0 )
  {
    LastError = Connection | 0x10000000;
    v7 = 84;
LABEL_9:
    v2 = LastError;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastError, v7);
  }
  return v2;
}
