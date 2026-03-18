/*
 * XREFs of ?VisualMoveChild@CChannel@@UEAAJIII@Z @ 0x18000DB20
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::VisualMoveChild(CChannel *this, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
