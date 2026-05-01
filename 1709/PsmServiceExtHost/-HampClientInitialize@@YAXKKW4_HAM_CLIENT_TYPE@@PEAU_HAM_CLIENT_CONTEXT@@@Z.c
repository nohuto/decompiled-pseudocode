/*
 * XREFs of ?HampClientInitialize@@YAXKKW4_HAM_CLIENT_TYPE@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C9C4
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18001CA58 (CemRcTableInitialize.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall HampClientInitialize(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  memset_0((void *)a4, 0, 0x88uLL);
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  RtlInitializeSRWLock(a4 + 24);
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 48) = a4 + 40;
  *(_QWORD *)(a4 + 40) = a4 + 40;
  result = CemRcTableInitialize(HampClientPkgDestroy, a4 + 56);
  *(_DWORD *)(a4 + 120) = a3;
  *(_DWORD *)(a4 + 124) = a1;
  *(_DWORD *)(a4 + 128) = a2;
  return result;
}
