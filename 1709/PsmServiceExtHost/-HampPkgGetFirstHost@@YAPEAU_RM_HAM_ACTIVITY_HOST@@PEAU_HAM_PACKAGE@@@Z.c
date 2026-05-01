/*
 * XREFs of ?HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z @ 0x180046980
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CemRcTableGetFirst @ 0x18001F640 (CemRcTableGetFirst.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180046184 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampPkgGetFirstHost(struct _HAM_PACKAGE *a1)
{
  struct _HAM_APPLICATION *First; // rax
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rbx
  struct _HAM_APPLICATION *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  First = (struct _HAM_APPLICATION *)CemRcTableGetFirst((__int64)a1 + 272);
  FirstHost = 0LL;
  v3 = First;
  if ( First )
  {
    FirstHost = HampAppGetFirstHost(First);
    CemRcObjectDereference(v3, v4, v5, v6);
  }
  return FirstHost;
}
