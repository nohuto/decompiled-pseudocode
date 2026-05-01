/*
 * XREFs of ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B4B4
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18000904C (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032E6C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005CAC (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostStartProcessPresenceChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)a1 + 79); (i & 0x80000000000LL) != 0; i = *((_QWORD *)a1 + 79) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 656, 0LL);
  *((_QWORD *)a1 + 79) = i | 0x80000000000LL;
}
