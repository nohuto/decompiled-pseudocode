/*
 * XREFs of ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z @ 0x18013A370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RotateTransformUpdate(CChannel *this, int a2, double a3, double a4, double a5)
{
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  double v10; // [rsp+28h] [rbp-38h]
  _QWORD v11[2]; // [rsp+30h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+70h] [rbp+10h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9[0] = 374;
  v10 = a3;
  *(double *)v11 = a4;
  *(double *)&v11[1] = a5;
  v9[1] = a2;
  v7 = CChannel::SendCommand(this, v9, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v7;
}
