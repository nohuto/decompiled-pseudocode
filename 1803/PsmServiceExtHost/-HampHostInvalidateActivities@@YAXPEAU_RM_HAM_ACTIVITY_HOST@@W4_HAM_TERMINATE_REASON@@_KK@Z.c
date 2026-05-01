/*
 * XREFs of ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180007EA8
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 * Callees:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180006180 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180006784 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostInvalidateActivities(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        int a2,
        __int64 a3,
        char a4)
{
  struct _HAM_ACTIVITY *result; // rax
  struct _HAM_ACTIVITY *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  for ( result = HampHostGetFirstActivity(a1); ; result = HampHostGetNextActivity(v8) )
  {
    v8 = result;
    if ( !result )
      break;
    if ( HampActCanBeInvalidated(result) && ((a4 & 1) == 0 || *((char *)v8 + 112) < 0) )
    {
      HampActInvalidateAndNotify(v9, a2);
      v10 = *((_QWORD *)v8 + 9);
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 40) == 2 )
          *((_QWORD *)v8 + 63) = a3;
      }
    }
  }
  return result;
}
