/*
 * XREFs of ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x18000EB00
 * Callers:
 *     <none>
 * Callees:
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x18000FFEC (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2E1u);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2DBu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v9;
}
