/*
 * XREFs of ?IndirectSwapchainRenderTargetUpdateTargetBounds@CChannel@@UEAAJIIIII@Z @ 0x180121F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUpdateTargetBounds(
        CChannel *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  _DWORD v12[8]; // [rsp+20h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+20h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v12[0] = 173;
  v12[4] = a5;
  v12[5] = a6;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v10 = CChannel::SendCommand(this, v12, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
