/*
 * XREFs of ?ScaleTransformUpdate@CChannel@@UEAAJINNNN@Z @ 0x1800848A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::ScaleTransformUpdate(CChannel *this, int a2, double a3, double a4, double a5, double a6)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+24h] [rbp-54h] BYREF
  double v12; // [rsp+28h] [rbp-50h]
  double v13; // [rsp+30h] [rbp-48h]
  double v14; // [rsp+38h] [rbp-40h]
  double v15; // [rsp+40h] [rbp-38h]
  char *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10 = 472;
  memset_0(&v11, 0, 0x24uLL);
  v14 = a5;
  v15 = a6;
  v12 = a3;
  v13 = a4;
  v11 = a2;
  v8 = CChannel::SendCommand(this, &v10, 0x28u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v8;
}
