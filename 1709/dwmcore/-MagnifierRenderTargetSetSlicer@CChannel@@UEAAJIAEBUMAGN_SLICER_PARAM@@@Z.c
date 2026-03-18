/*
 * XREFs of ?MagnifierRenderTargetSetSlicer@CChannel@@UEAAJIAEBUMAGN_SLICER_PARAM@@@Z @ 0x1801222E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetSetSlicer(CChannel *this, int a2, const struct MAGN_SLICER_PARAM *a3)
{
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+10h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = *(_OWORD *)a3;
  v7 = *((_QWORD *)a3 + 2);
  v10[0] = 223;
  v10[1] = a2;
  v11 = v6;
  v12 = v7;
  v8 = CChannel::SendCommand(this, v10, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
