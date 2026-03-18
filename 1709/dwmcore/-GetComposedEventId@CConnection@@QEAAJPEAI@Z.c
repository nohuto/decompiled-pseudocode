/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x180120ADC
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1801203B0 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1801C8174 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CConnection::GetComposedEventId(CConnection *this, unsigned int *a2)
{
  unsigned int v4; // edi
  unsigned int CompositionId; // esi
  unsigned int v6; // edx
  signed int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( *((_QWORD *)this + 19) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 19), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802191F4, 1u, v7, 0x259u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v4;
}
