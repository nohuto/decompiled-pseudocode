/*
 * XREFs of ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011944
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800067A0 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011880 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800118EC (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A3B0 (-HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostIsCached(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_QWORD *)a1 + 79) & 0x100000000000LL) != 0 )
    return HampHostHasActivities(a1) == 0;
  return v1;
}
