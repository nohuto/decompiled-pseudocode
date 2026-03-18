/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140054BF0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v3; // r11

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( *(_QWORD *)(a1 + 168) != -1LL )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
    if ( *(_QWORD *)(v3 + 168) <= UnbiasedInterruptTime )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v3, UnbiasedInterruptTime);
    }
    else if ( v1 )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(v3, UnbiasedInterruptTime);
    }
  }
}
