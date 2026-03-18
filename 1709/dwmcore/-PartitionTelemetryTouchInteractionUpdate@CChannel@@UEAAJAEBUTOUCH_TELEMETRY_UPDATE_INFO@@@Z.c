/*
 * XREFs of ?PartitionTelemetryTouchInteractionUpdate@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180122C70
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionUpdate(
        CChannel *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v8; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v9[5]; // [rsp+24h] [rbp-54h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+80h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = 264;
  memset_0(v9, 0, 0x40uLL);
  v4 = *((_OWORD *)a2 + 1);
  v9[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v9[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v9[2] = v5;
  v9[3] = v6;
  LODWORD(a2) = CChannel::SendCommand(this, &v8, 0x44u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return (unsigned int)a2;
}
