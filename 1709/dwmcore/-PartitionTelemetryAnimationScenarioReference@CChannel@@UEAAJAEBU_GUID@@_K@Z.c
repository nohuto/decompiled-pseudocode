/*
 * XREFs of ?PartitionTelemetryAnimationScenarioReference@CChannel@@UEAAJAEBU_GUID@@_K@Z @ 0x18000E640
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioReference(
        CChannel *this,
        const struct _GUID *a2,
        __int64 a3)
{
  __int128 v6; // xmm0
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]
  __int64 v10; // [rsp+34h] [rbp-14h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = (__int128)*a2;
  v8 = 258;
  v10 = a3;
  v9 = v6;
  LODWORD(a2) = CChannel::SendCommand(this, &v8, 0x1Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return (unsigned int)a2;
}
