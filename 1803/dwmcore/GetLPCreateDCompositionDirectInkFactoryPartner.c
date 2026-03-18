/*
 * XREFs of GetLPCreateDCompositionDirectInkFactoryPartner @ 0x1801EC64C
 * Callers:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801EC5DC (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  signed int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = dword_1802DA4AC;
  if ( dword_1802DA4AC < 0 )
  {
    v7 = 18;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v7);
    goto LABEL_14;
  }
  ProcAddress = (FARPROC)qword_1802DA4B0;
  if ( qword_1802DA4B0 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( !LibraryW )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v7 = 23;
    if ( v1 >= 0 )
      v1 = -2003304445;
    goto LABEL_13;
  }
  ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
  qword_1802DA4B0 = (__int64)ProcAddress;
  if ( ProcAddress )
  {
LABEL_11:
    *a1 = ProcAddress;
  }
  else
  {
    v1 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467261, 0x1Cu);
  }
LABEL_14:
  dword_1802DA4AC = v1;
  return (unsigned int)v1;
}
