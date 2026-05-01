/*
 * XREFs of ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800118EC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180040DAC (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011944 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckCancelCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  if ( !HampHostIsCached(a1) && (*(_QWORD *)(v2 + 632) & 0x200000000000LL) != 0 )
  {
    if ( (unsigned int)TpSetTimerEx(*(_QWORD *)(v2 + 792), 0LL, 0LL, 0LL) )
      *((_QWORD *)a1 + 79) &= ~0x200000000000uLL;
  }
}
