/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004346C (-HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043888 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18004631C (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18004718C (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800478B8 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampHostNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v3; // rcx
  struct _HAM_ACTIVITY *v4; // rbx
  struct _HAM_DEPENDENCY_GROUP *v5; // rbx
  __int64 v6; // rbx

  *((_DWORD *)a1 + 157) &= 0xFFFFFFFC;
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    if ( HampActCanBeInvalidated(i) )
      HampActInvalidateAndNotify(v3);
  }
  v5 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 80);
  HampDepGroupAcquireLockExclusive(v5);
  HampDepGroupQueueWorker(v5);
  HampDepGroupReleaseLockExclusive(v5);
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v6 = *((_QWORD *)a1 + 90);
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v6);
    if ( (unsigned int)(*(_DWORD *)(v6 + 592) - 3) > 1 )
    {
      HampAppIssueStateChangeNotification(v6, 3LL);
      HampPkgUpdateApplicationStateCounters(*(_QWORD *)(v6 + 48), 3LL, *(unsigned int *)(v6 + 592));
      *(_DWORD *)(v6 + 592) = 3;
    }
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v6);
  }
}
