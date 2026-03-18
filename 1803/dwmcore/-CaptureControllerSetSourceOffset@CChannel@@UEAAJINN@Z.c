/*
 * XREFs of ?CaptureControllerSetSourceOffset@CChannel@@UEAAJINN@Z @ 0x180143E40
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetSourceOffset(CChannel *this, int a2, double a3, double a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
