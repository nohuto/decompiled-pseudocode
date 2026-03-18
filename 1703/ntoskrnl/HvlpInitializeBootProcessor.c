/*
 * XREFs of HvlpInitializeBootProcessor @ 0x1401E5B04
 * Callers:
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlpMapStatisticsPage @ 0x1401E5C54 (HvlpMapStatisticsPage.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rax
  signed __int32 v5[12]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( HvlHypervisorConnected )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v5, 0);
    v8 = 0LL;
    v7 = 0LL;
    if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 2) == 0 )
    {
      v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))qword_14033B428)(a1, 1LL, &v8, 4LL);
      if ( !v3 )
        return 3221225626LL;
      CurrentPrcb->VirtualApicAssist = (void *)v3;
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v6[1] = 0LL;
      v6[0] = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, v6, &v7) >= 0 )
        v1 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_14033B430)(v7, 1LL, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v1;
    }
    HvlEnlightenProcessor();
  }
  return 0LL;
}
