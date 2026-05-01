/*
 * XREFs of ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800665A8
 * Callers:
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180063C64 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180005C30 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180005CE8 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800093E8 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180009458 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334DC (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampAppTerminate(struct _HAM_APPLICATION *a1, __int64 a2, unsigned int a3)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  int v5; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rdi
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  for ( i = HampAppGetFirstHost(a1); ; i = HampAppGetNextHost(v6) )
  {
    v6 = i;
    if ( !i )
      break;
    v5 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)v8, i);
    if ( v5 < 0 )
      goto LABEL_6;
  }
  v5 = 0;
LABEL_6:
  if ( v5 >= 0 )
  {
    HampHostSnapshotTerminate((__int64)v8, 3u, a3, 0LL, 0xFA0u);
    v5 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)v8);
  return (unsigned int)v5;
}
