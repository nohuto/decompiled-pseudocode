/*
 * XREFs of ?MatrixTransformUpdate@CChannel@@UEAAJIAEBU_MilMatrix3x2D@@@Z @ 0x180084800
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::MatrixTransformUpdate(CChannel *this, int a2, const struct _MilMatrix3x2D *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+24h] [rbp-44h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-20h]
  char *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = 465;
  memset_0(&v12, 0, 0x34uLL);
  v6 = *(_OWORD *)&a3->S_11;
  v7 = *(_OWORD *)&a3->S_21;
  v12 = a2;
  v13 = v6;
  v8 = *(_OWORD *)&a3->DX;
  v14 = v7;
  v15 = v8;
  v9 = CChannel::SendCommand(this, &v11, 0x38u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v9;
}
