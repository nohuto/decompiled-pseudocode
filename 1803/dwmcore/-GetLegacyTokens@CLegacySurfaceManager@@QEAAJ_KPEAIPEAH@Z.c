/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18001D024
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800200D8 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(
        CLegacySurfaceManager *this,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v5; // ebx
  int FrameLegacyTokens; // eax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v5 = 0;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v8, a3, a4);
  if ( FrameLegacyTokens < 0 )
  {
    v5 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x17u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      v5,
      *a3);
  return v5;
}
