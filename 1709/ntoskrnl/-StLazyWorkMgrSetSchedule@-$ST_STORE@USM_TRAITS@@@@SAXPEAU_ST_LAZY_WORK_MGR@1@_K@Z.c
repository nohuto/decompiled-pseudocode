/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1402704F0
 * Callers:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140270310 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1402703A4 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140270400 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 UnbiasedInterruptTime; // r9
  _QWORD *v3; // r11
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *i; // r10
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  UnbiasedInterruptTime = a2;
  v3 = a1;
  if ( !a2 )
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v4 = -1LL;
  v5 = v3 + 21;
  v6 = -1LL;
  for ( i = v3; i < v5; i += 3 )
  {
    v8 = i[1];
    if ( v8 != -1LL )
    {
      v9 = UnbiasedInterruptTime - v3[23];
      if ( i[2] >= v9 )
        v9 = i[2];
      v10 = *i + v9;
      if ( v10 >= v4 )
        v10 = v4;
      v4 = v10;
      if ( v8 < v6 )
        v6 = i[1];
    }
  }
  if ( v4 < UnbiasedInterruptTime )
    v4 = UnbiasedInterruptTime;
  if ( v6 < UnbiasedInterruptTime )
    v6 = UnbiasedInterruptTime;
  *v5 = v6;
  if ( v6 == -1LL )
  {
    v3[22] = 0LL;
  }
  else
  {
    if ( v6 >= v4 )
      v3[22] = v4 - UnbiasedInterruptTime;
    else
      v3[22] = v6 - UnbiasedInterruptTime;
    if ( !v3[22] )
      v3[22] = 1LL;
  }
  result = *(v3 - 715);
  *(_QWORD *)(result + 6584) = -v3[22];
  return result;
}
