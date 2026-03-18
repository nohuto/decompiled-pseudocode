/*
 * XREFs of ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x1800871F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x18008868C (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::DuplicateHandleOnSource(
        CChannel *this,
        unsigned int a2,
        struct IDwmChannel *a3,
        unsigned int *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( *((_QWORD *)a3 + 6) == *((_QWORD *)this + 6) )
  {
    v8 = CHandleTable::DuplicateHandle((CChannel *)((char *)this + 16), this, a2, a3, a4);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2E0u);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2DAu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v9;
}
