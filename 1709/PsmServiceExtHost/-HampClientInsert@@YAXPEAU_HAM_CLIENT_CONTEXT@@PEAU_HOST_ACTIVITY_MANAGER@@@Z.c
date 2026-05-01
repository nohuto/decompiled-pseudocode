/*
 * XREFs of ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C0E8
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180019038 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampClientInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HOST_ACTIVITY_MANAGER *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 **v5; // rcx

  *(_QWORD *)a1 = a2;
  HampManagerAcquireLockExclusive(a2);
  v3 = (__int64 *)((char *)a1 + 8);
  v4 = *(_QWORD *)a1 + 16 * (*((int *)a1 + 30) + 1LL);
  v5 = *(__int64 ***)(v4 + 8);
  if ( *v5 != (__int64 *)v4 )
    __fastfail(3u);
  *v3 = v4;
  *((_QWORD *)a1 + 2) = v5;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  HampManagerReleaseLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
}
