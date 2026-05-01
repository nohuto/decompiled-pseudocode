/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18000904C
 * Callers:
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008FC8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 * Callees:
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B4B4 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // edx
  char v7; // al
  unsigned int v8; // ebx
  unsigned int v9; // edx

  HampHostAcquireLockExclusiveEx(a1, 0);
  HampHostStartProcessPresenceChange(a1);
  HampHostReleaseLockExclusiveEx(a1, v6);
  v7 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL)
                                                                                 + 80LL))(
         (char *)a1 + 488,
         *((unsigned int *)a1 + 139),
         (char *)a1 + 24,
         *((unsigned int *)a1 + 140),
         *((_QWORD *)a1 - 4),
         a2);
  v8 = 0;
  if ( v7 )
    *a3 = *((_QWORD *)a1 + 96);
  else
    v8 = -1073741394;
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 79) &= ~0x80000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 656);
  HampHostReleaseLockExclusiveEx(a1, v9);
  return v8;
}
