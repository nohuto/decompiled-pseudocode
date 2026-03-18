/*
 * XREFs of PiDevCfgPopCopyKeyEntry @ 0x140150414
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140593AB8 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPopCopyKeyEntry(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v6; // rcx
  void **v7; // r10

  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  v6 = (_QWORD *)a1[1];
  v7 = (void **)v6[1];
  if ( (_QWORD *)*v6 != a1 || *v7 != v6 )
    __fastfail(3u);
  a1[1] = v7;
  *v7 = a1;
  *a2 = v6[2];
  *a3 = v6[3];
  *a4 = *((_DWORD *)v6 + 8);
  ExFreePoolWithTag(v6, 0);
  return 1LL;
}
