/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1400B7DAC
 * Callers:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140069DFC (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140091448 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1400B7CA4 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(_QWORD *a1, unsigned __int64 UnbiasedInterruptTime)
{
  __int64 v2; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // r10
  _QWORD *i; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx

  v2 = 0LL;
  if ( !UnbiasedInterruptTime )
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v4 = -1LL;
  v5 = a1 + 21;
  v6 = -1LL;
  for ( i = a1; i < v5; i += 3 )
  {
    v8 = i[1];
    if ( v8 != -1LL )
    {
      v13 = i[2];
      if ( v13 < UnbiasedInterruptTime - a1[23] )
        v13 = UnbiasedInterruptTime - a1[23];
      v14 = *i + v13;
      if ( v14 >= v4 )
        v14 = v4;
      v4 = v14;
      if ( v8 < v6 )
        v6 = i[1];
    }
  }
  v9 = UnbiasedInterruptTime;
  v10 = UnbiasedInterruptTime;
  if ( v4 >= UnbiasedInterruptTime )
    v9 = v4;
  if ( v6 >= UnbiasedInterruptTime )
    v10 = v6;
  *v5 = v10;
  if ( v10 == -1LL )
  {
    a1[22] = v2;
  }
  else
  {
    if ( v10 >= v9 )
      v10 = v9;
    v11 = v10 - UnbiasedInterruptTime;
    a1[22] = v11;
    if ( v11 )
    {
      v2 = v11;
    }
    else
    {
      a1[22] = 1LL;
      v2 = 1LL;
    }
  }
  result = *(a1 - 715);
  *(_QWORD *)(result + 6584) = -v2;
  return result;
}
