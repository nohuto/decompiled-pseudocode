/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016EC0
 * Callers:
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180016E7C (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // r8d

  v1 = *((_DWORD *)a1 + 157) & 3;
  if ( !v1 )
    return 0LL;
  if ( v1 == 1 )
    return *((char *)a1 + 948) < 0 && *((_BYTE *)a1 + 952) >= 0;
  return v1 > 1;
}
