/*
 * XREFs of ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionMute(CPerStreamVolumeAudioStream *this, char a2, char a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  *((_BYTE *)this + 664) = a2;
  if ( a3 )
  {
    v5 = CAudioStream::RecalculateVolume(this, 0, 0LL);
    v3 = v5;
    if ( v5 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::SetSessionMute", 0x97Au, v5);
  }
  return v3;
}
