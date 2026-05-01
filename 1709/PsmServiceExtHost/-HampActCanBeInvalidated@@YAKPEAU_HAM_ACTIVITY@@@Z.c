/*
 * XREFs of ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18004718C
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActCanBeInvalidated(struct _HAM_ACTIVITY *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 124);
  if ( (v1 & 0x10) != 0 )
    return 0LL;
  else
    return ((unsigned __int8)v1 >> 3) & 1;
}
