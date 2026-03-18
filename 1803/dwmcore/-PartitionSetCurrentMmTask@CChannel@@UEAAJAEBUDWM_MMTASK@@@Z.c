/*
 * XREFs of ?PartitionSetCurrentMmTask@CChannel@@UEAAJAEBUDWM_MMTASK@@@Z @ 0x180086DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionSetCurrentMmTask(CChannel *this, const struct DWM_MMTASK *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v12; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v13[10]; // [rsp+24h] [rbp-A4h] BYREF
  char *v14; // [rsp+D0h] [rbp+8h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v12 = 284;
  memset_0(v13, 0, 0x90uLL);
  v4 = *((_OWORD *)a2 + 1);
  v13[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v13[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v13[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v13[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v13[4] = v7;
  v9 = *((_OWORD *)a2 + 6);
  v13[5] = v8;
  v10 = *((_OWORD *)a2 + 8);
  v13[6] = v9;
  v13[7] = *((_OWORD *)a2 + 7);
  v13[8] = v10;
  LODWORD(a2) = CChannel::SendCommand(this, &v12, 0x94u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return (unsigned int)a2;
}
