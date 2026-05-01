/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003217C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002B9FC (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032268 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  struct _CEM_RC_OBJECT *v3; // rcx
  __int64 v4; // rcx
  struct _HAM_HOST_DEPENDENCY *v5; // rcx
  struct _HAM_DEPENDENCY_GROUP *v6; // rcx
  struct _CEM_RC_OBJECT *v7; // rcx

  v3 = (struct _CEM_RC_OBJECT *)*((_QWORD *)a1 + 117);
  if ( v3 )
    CemRcObjectDereference(v3);
  if ( *((_QWORD *)a1 + 95) )
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))();
  v4 = *((_QWORD *)a1 + 99);
  if ( v4 )
    TpReleaseTimer(v4);
  v5 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 84);
  if ( v5 )
    HampDepGroupInvalidateDependency(v5, a2);
  v6 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  if ( v6 )
    HampDepGroupRemoveHost(v6, a1);
  if ( *((_QWORD *)a1 + 77) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 76) )
    TpReleaseWork();
  v7 = (struct _CEM_RC_OBJECT *)*((_QWORD *)a1 + 93);
  if ( v7 )
    CemRcObjectDereference(v7);
}
