/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x18005E570
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800C9DD0 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800CEFEC (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CConnection::GetComposedEventId(CConnection *this, unsigned int *a2)
{
  unsigned int v4; // edi
  unsigned int CompositionId; // esi
  unsigned int v6; // edx
  int v7; // eax
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v9 = (char *)this + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( *((_QWORD *)this + 19) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 19), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18024FED0, 1u, v7, 0x259u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v4;
}
