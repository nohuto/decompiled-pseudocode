/*
 * XREFs of ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x180011D98
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180011D50 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampActInitialize(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1

  memset_0(a4, 0, 0x220uLL);
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 4) = (char *)a1 + 200;
  *((_QWORD *)a4 + 3) = 1LL;
  v8 = HamObjectIdGenerate(5);
  v9 = 3LL;
  *((_QWORD *)a4 + 5) = v8;
  *((_WORD *)a4 + 270) = 1280;
  v10 = (_OWORD *)((char *)a4 + 112);
  do
  {
    *v10 = *(_OWORD *)a2;
    v10[1] = *((_OWORD *)a2 + 1);
    v10[2] = *((_OWORD *)a2 + 2);
    v10[3] = *((_OWORD *)a2 + 3);
    v10[4] = *((_OWORD *)a2 + 4);
    v10[5] = *((_OWORD *)a2 + 5);
    v10[6] = *((_OWORD *)a2 + 6);
    v10 += 8;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a2 + 128);
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  RmpAcquireGlobalLock();
  *((_QWORD *)a4 + 10) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
}
