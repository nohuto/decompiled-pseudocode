/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x180065310
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800CBBC0 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800CAC68 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
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
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F64, 1u, v7, 0x259u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v4;
}
