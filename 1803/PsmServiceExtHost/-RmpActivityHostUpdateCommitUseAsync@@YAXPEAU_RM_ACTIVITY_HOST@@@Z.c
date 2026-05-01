/*
 * XREFs of ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031748
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012208 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001C730 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostUpdateCommitUseAsync(struct _RM_ACTIVITY_HOST *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 6) + 2228LL) & 2) == 0 && (*((_BYTE *)a1 + 1476) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 369) |= 1u;
    TpPostWork(*((_QWORD *)a1 + 173));
  }
}
