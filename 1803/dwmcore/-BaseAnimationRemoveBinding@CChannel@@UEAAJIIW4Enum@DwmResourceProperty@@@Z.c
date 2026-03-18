/*
 * XREFs of ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180143C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x18001BAB0 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::BaseAnimationRemoveBinding(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, &si128.m128i_i32[3]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8AAu);
  }
  else
  {
    v10 = CChannel::SendCommand((CChannel *)a1, &si128, 0x10u);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8ABu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v9;
}
