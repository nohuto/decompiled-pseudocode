/*
 * XREFs of ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x1800094C8
 * Callers:
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800093E8 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180009458 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetFirstLiveHost(struct _HAM_APPLICATION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // r8
  struct _LIST_ENTRY **v3; // rdx
  __int64 v4; // rcx

  v2 = (struct _LIST_ENTRY *)((char *)a1 + 592);
  while ( a2 != v2 )
  {
    if ( RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)&a2[-49].Blink) )
      return (struct _RM_HAM_ACTIVITY_HOST *)v4;
    a2 = *v3;
  }
  return 0LL;
}
