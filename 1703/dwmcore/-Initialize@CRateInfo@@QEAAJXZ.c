/*
 * XREFs of ?Initialize@CRateInfo@@QEAAJXZ @ 0x1800B8370
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B6A88 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 */

__int64 __fastcall CRateInfo::Initialize(CRateInfo *this)
{
  int PrimaryVBlankRateAndPeriod; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // r9

  PrimaryVBlankRateAndPeriod = GetPrimaryVBlankRateAndPeriod(
                                 (struct _UNSIGNED_RATIO *)this,
                                 (unsigned __int64 *)this + 2);
  v3 = PrimaryVBlankRateAndPeriod;
  if ( PrimaryVBlankRateAndPeriod < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryVBlankRateAndPeriod, 0x2Fu);
  }
  else
  {
    v4 = *((_QWORD *)this + 2);
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)this;
    *((_QWORD *)this + 1) = v4;
    *((_QWORD *)this + 7) = v4;
    *((_QWORD *)this + 6) = v4;
    *((_DWORD *)this + 8) = 1;
    *((_QWORD *)this + 3) = v4 / 0x989680 * g_qpcFrequency.QuadPart
                          + g_qpcFrequency.QuadPart * (v4 % 0x989680) / 0x989680;
  }
  return v3;
}
