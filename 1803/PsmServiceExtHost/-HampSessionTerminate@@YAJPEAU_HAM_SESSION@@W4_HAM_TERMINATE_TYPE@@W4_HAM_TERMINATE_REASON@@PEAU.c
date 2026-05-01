/*
 * XREFs of ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800351D8
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800350E0 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180005C30 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180005CE8 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334DC (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180035270 (-HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall HampSessionTerminate(
        struct _HAM_RC_TREE_NODE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  int v8; // ebx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v10, 0, 24);
  for ( i = HampHostEnumerateHostsInNode(a1, 1, 0LL); ; i = HampSessionGetNextHost(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    v8 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)v10, i);
    if ( v8 < 0 )
      goto LABEL_6;
  }
  v8 = 0;
LABEL_6:
  if ( v8 >= 0 )
  {
    HampHostSnapshotTerminate((__int64)v10, 1u, 0x1100u, a4, a5);
    v8 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)v10);
  return (unsigned int)v8;
}
