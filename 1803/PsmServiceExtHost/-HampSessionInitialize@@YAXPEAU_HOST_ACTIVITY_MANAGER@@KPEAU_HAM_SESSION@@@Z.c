/*
 * XREFs of ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180036868
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180036520 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18002A2D0 (CemRcTableInitialize.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampSessionInitialize(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION *a3)
{
  memset_0(a3, 0, 0x88uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 152;
  *((_QWORD *)a3 + 3) = 1LL;
  CemRcTableInitialize((__int64)HampUserDestroy, (_QWORD *)a3 + 5);
  *((_QWORD *)a3 + 12) = 0LL;
  *((_QWORD *)a3 + 13) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 96);
  *((_DWORD *)a3 + 26) = 0;
  *((_DWORD *)a3 + 22) = a2;
}
