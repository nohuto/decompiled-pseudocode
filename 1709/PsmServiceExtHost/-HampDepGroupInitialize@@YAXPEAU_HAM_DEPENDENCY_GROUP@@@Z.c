/*
 * XREFs of ?HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EF50
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EEBC (-HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall HampDepGroupInitialize(struct _HAM_DEPENDENCY_GROUP *a1)
{
  memset_0(a1, 0, 0x88uLL);
  *(_QWORD *)a1 = _InterlockedIncrement64(&NextDependencyGroupId);
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 8);
  *((_DWORD *)a1 + 4) = 0;
  RtlInitializeConditionVariable((char *)a1 + 24);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 11) = 1LL;
}
