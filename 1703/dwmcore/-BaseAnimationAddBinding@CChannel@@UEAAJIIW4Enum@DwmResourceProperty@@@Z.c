/*
 * XREFs of ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1800226B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x1800229D0 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::BaseAnimationAddBinding(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, (char *)&si128.m128i_u64[1] + 4);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x88Cu);
  }
  else
  {
    v10 = CChannel::SendCommand((CChannel *)a1, &si128, 0x10u);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x88Du);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v9;
}
