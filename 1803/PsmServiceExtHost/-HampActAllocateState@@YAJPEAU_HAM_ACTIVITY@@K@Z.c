/*
 * XREFs of ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180040C8C
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180024A28 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800405A0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 */

__int64 __fastcall HampActAllocateState(struct _HAM_ACTIVITY *a1, char a2)
{
  __int64 result; // rax

  result = HampRmPopulateDefaultProperties(
             (struct _HAM_ACTIVITY *)((char *)a1 + 112),
             (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 200),
             a2);
  if ( (int)result >= 0 )
  {
    result = HampRmContextCreate(a1, (void **)a1 + 11);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
