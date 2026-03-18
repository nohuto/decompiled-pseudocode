/*
 * XREFs of ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x18001FB78
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093DCC (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::SetInformation(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  int v8; // r9d
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( a2 == 1 )
  {
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(a1 + 24), 0LL, qword_1802D9EE8, *a4) )
      return v4;
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 308;
    goto LABEL_19;
  }
  if ( a2 != 4 )
  {
    if ( (unsigned int)(a2 - 5) > 1 )
    {
      v4 = -2147024809;
      v10 = 341;
    }
    else
    {
      v4 = -2003292412;
      v10 = 336;
    }
    v8 = v4;
    goto LABEL_22;
  }
  if ( a3 < 0x20 )
  {
    v4 = -2147024872;
    v10 = 319;
    v8 = -2147024872;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D64, 1u, v8, v10);
    return v4;
  }
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(a1 + 24), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 2), a4[2]) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 325;
LABEL_19:
    if ( LastError >= 0 )
      LastError = -2003304445;
    v8 = LastError;
    v4 = LastError;
    goto LABEL_22;
  }
  return v4;
}
