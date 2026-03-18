/*
 * XREFs of ?PartitionTelemetryAnimationScenarioUnreference@CChannel@@UEAAJAEBU_GUID@@_K@Z @ 0x180081F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioUnreference(
        CChannel *this,
        const struct _GUID *a2,
        __int64 a3)
{
  __int128 v6; // xmm0
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]
  __int64 v10; // [rsp+34h] [rbp-14h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = (__int128)*a2;
  v8 = 15;
  v10 = a3;
  v9 = v6;
  LODWORD(a2) = CChannel::SendCommand(this, &v8, 0x1Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return (unsigned int)a2;
}
