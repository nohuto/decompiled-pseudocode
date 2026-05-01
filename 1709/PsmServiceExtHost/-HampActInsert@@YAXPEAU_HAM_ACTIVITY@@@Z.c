/*
 * XREFs of ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F698 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F6C0 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActAddToClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18004700C (-HampActAddToClient@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x18004947C (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 **v4; // rdx
  struct _HAM_CLIENT_CONTEXT *v5; // rbx
  __int64 v6; // rdx

  CemRcTableFindOrInsertEx(
    *((_DWORD *)a1 + 8) & 0xFFFFFFFC,
    (_DWORD)a1 + 40,
    (unsigned int)HampActCompareByHandle,
    (_DWORD)a1);
  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9), 0);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  v2 = (__int64 *)((char *)a1 + 88);
  v3 = *((_QWORD *)a1 + 9) + 584LL;
  v4 = *(__int64 ***)(*((_QWORD *)a1 + 9) + 592LL);
  if ( *v4 != (__int64 *)v3 )
    __fastfail(3u);
  *v2 = v3;
  *((_QWORD *)a1 + 12) = v4;
  *v4 = v2;
  *(_QWORD *)(v3 + 8) = v2;
  if ( (*((_DWORD *)a1 + 124) & 0x180) == 0 )
  {
    v5 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    HampClientAcquireLockExclusive(v5, (__int64)v4);
    HampActAddToClient(a1);
    HampClientReleaseLockExclusive(v5, v6);
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 9));
}
