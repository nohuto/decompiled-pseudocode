/*
 * XREFs of ?HampActInitialize@@YAXW4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800476F0
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

void __fastcall HampActInitialize(char a1, __int64 a2, _OWORD *a3, struct _RM_HAM_ACTIVITY_HOST *a4, char *a5)
{
  __int64 v9; // r8
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1

  memset_0(a5, 0, 0x1F8uLL);
  *((_QWORD *)a5 + 2) = -1LL;
  *((_QWORD *)a5 + 4) = a2 + 176;
  *((_QWORD *)a5 + 3) = 1LL;
  *((_DWORD *)a5 + 124) &= 0xFFFFFE7F;
  *((_DWORD *)a5 + 124) |= (a1 & 3) << 7;
  *((_QWORD *)a5 + 5) = HamObjectIdGenerate(5);
  v10 = (unsigned int)(v9 + 125);
  v11 = a5 + 104;
  a5[500] = 0;
  do
  {
    *v11 = *a3;
    v11[1] = a3[1];
    v11[2] = a3[2];
    v11[3] = a3[3];
    v11[4] = a3[4];
    v11[5] = a3[5];
    v11[6] = a3[6];
    v11 = (_OWORD *)((char *)v11 + v10);
    v12 = a3[7];
    a3 = (_OWORD *)((char *)a3 + v10);
    *(v11 - 1) = v12;
    --v9;
  }
  while ( v9 );
  RmpAcquireGlobalLock();
  *((_QWORD *)a5 + 9) = RmHamHostReference(a4);
  RmpReleaseGlobalLock();
}
