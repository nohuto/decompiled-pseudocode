/*
 * XREFs of ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800461F4
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180045FCC (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall HampAppInitialize(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION *a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0

  memset_0(a3, 0, 0x258uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 272;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 5) = HamObjectIdGenerate(6);
  if ( v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, (unsigned int)v6) <= v6 )
    __fastfail(v6 + 13);
  *((_QWORD *)a3 + 6) = a1;
  *((_QWORD *)a3 + 12) = 0LL;
  *((_QWORD *)a3 + 13) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 96);
  *((_DWORD *)a3 + 26) = 0;
  v7 = 3LL;
  *((_QWORD *)a3 + 15) = (char *)a3 + 112;
  *((_QWORD *)a3 + 14) = (char *)a3 + 112;
  v8 = (_OWORD *)((char *)a3 + 128);
  do
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
    v8[4] = *((_OWORD *)a2 + 4);
    v8[5] = *((_OWORD *)a2 + 5);
    v8[6] = *((_OWORD *)a2 + 6);
    v8 += 8;
    v9 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_KEY *)((char *)a2 + 128);
    *(v8 - 1) = v9;
    --v7;
  }
  while ( v7 );
  *v8 = *(_OWORD *)a2;
  v8[1] = *((_OWORD *)a2 + 1);
  v8[2] = *((_OWORD *)a2 + 2);
  v8[3] = *((_OWORD *)a2 + 3);
  v10 = *((_OWORD *)a2 + 4);
  *((_DWORD *)a3 + 148) = 4;
  v8[4] = v10;
}
