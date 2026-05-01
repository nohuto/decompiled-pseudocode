/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016C24
 * Callers:
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180006CD0 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180004214 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004E20 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  char v2; // r8
  char v3; // dl
  unsigned __int64 v4; // rax
  struct _HAM_ACTIVITY *i; // rax
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v8, (union _RM_OPTIMIZATION_STATE *)&v9);
  v2 = v8 & 0x80;
  v3 = v9 & 0x80;
  v8 &= 0x180u;
  v4 = *((_QWORD *)a1 + 79);
  v9 &= 0x180u;
  if ( ((v4 >> 16) & 3) != 0 )
  {
    switch ( (v4 >> 16) & 3 )
    {
      case 1uLL:
        if ( v2 < 0 && v3 >= 0 && (v4 & 0x8000000000LL) == 0 )
        {
          for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v7) )
          {
            if ( !HampActIsIgnored(i)
              && HampActIsStartedOrReachedPendState(v7, 4u)
              && (*(_BYTE *)(v7 + 112) & 0x10) != 0 )
            {
              return 0LL;
            }
          }
          return 1LL;
        }
        break;
      case 2uLL:
        return (v4 & 0x800000000000LL) == 0;
      case 3uLL:
        return 1LL;
    }
  }
  return 0LL;
}
