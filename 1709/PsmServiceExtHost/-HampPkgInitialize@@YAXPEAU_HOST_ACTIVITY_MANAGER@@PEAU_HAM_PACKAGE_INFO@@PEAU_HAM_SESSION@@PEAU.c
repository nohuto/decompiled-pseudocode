/*
 * XREFs of ?HampPkgInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_SESSION@@PEAU_HAM_PACKAGE@@@Z @ 0x180046B30
 * Callers:
 *     ?HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800466A0 (-HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall HampPkgInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_SESSION *a3,
        struct _HAM_PACKAGE *a4)
{
  __int128 v8; // xmm1

  memset_0(a4, 0, 0x170uLL);
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 4) = (char *)a1 + 128;
  *((_QWORD *)a4 + 3) = 1LL;
  *(_OWORD *)((char *)a4 + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)a4 + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)a4 + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)a4 + 88) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)a4 + 104) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)a4 + 120) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)a4 + 136) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)a4 + 152) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)a4 + 168) = *((_OWORD *)a2 + 8);
  *(_OWORD *)((char *)a4 + 184) = *((_OWORD *)a2 + 9);
  *(_OWORD *)((char *)a4 + 200) = *((_OWORD *)a2 + 10);
  *(_OWORD *)((char *)a4 + 216) = *((_OWORD *)a2 + 11);
  *((_QWORD *)a4 + 29) = *((_QWORD *)a2 + 24);
  *((_DWORD *)a4 + 60) = *((_DWORD *)a2 + 50);
  *((_DWORD *)a4 + 88) = 4;
  *(_OWORD *)((char *)a4 + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)a4 + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)a4 + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)a4 + 88) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)a4 + 104) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)a4 + 120) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)a4 + 136) = *((_OWORD *)a2 + 6);
  v8 = *((_OWORD *)a2 + 7);
  a2 = (struct _HAM_PACKAGE_INFO *)((char *)a2 + 128);
  *(_OWORD *)((char *)a4 + 152) = v8;
  *(_OWORD *)((char *)a4 + 168) = *(_OWORD *)a2;
  *(_OWORD *)((char *)a4 + 184) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)a4 + 200) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)a4 + 216) = *((_OWORD *)a2 + 3);
  *((_QWORD *)a4 + 29) = *((_QWORD *)a2 + 8);
  *((_DWORD *)a4 + 60) = *((_DWORD *)a2 + 18);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 31) = a3;
  *((_QWORD *)a4 + 32) = 0LL;
  *((_QWORD *)a4 + 33) = 0LL;
  RtlInitializeSRWLock((char *)a4 + 256);
  *((_DWORD *)a4 + 66) = 0;
  CemRcTableInitialize((__int64)HampAppDestroy, (_QWORD *)a4 + 34);
}
