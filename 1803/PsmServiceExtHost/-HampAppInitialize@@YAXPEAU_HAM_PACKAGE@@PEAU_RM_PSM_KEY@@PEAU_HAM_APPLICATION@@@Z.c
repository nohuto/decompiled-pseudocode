/*
 * XREFs of ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x180009B54
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800099C4 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampAppInitialize(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION *a3)
{
  __int64 v6; // rdx
  struct _RM_PSM_KEY *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1

  memset_0(a3, 0, 0x268uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  memset_0(a3, 0, 0x28uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 40;
  *((_QWORD *)a3 + 3) = 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 11) = a1;
  *((_QWORD *)a3 + 72) = 0LL;
  *((_QWORD *)a3 + 73) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 576);
  *((_DWORD *)a3 + 146) = 0;
  v6 = 3LL;
  *((_QWORD *)a3 + 75) = (char *)a3 + 592;
  *((_QWORD *)a3 + 74) = (char *)a3 + 592;
  v7 = a2;
  v8 = (_OWORD *)((char *)a3 + 96);
  do
  {
    *v8 = *(_OWORD *)v7;
    v8[1] = *((_OWORD *)v7 + 1);
    v8[2] = *((_OWORD *)v7 + 2);
    v8[3] = *((_OWORD *)v7 + 3);
    v8[4] = *((_OWORD *)v7 + 4);
    v8[5] = *((_OWORD *)v7 + 5);
    v8[6] = *((_OWORD *)v7 + 6);
    v8 += 8;
    v9 = *((_OWORD *)v7 + 7);
    v7 = (struct _RM_PSM_KEY *)((char *)v7 + 128);
    *(v8 - 1) = v9;
    --v6;
  }
  while ( v6 );
  *v8 = *(_OWORD *)v7;
  v8[1] = *((_OWORD *)v7 + 1);
  v8[2] = *((_OWORD *)v7 + 2);
  v8[3] = *((_OWORD *)v7 + 3);
  v8[4] = *((_OWORD *)v7 + 4);
  *((_DWORD *)a3 + 152) = *((_DWORD *)a3 + 152) & 0xFFF00004 | ((PsmIsDynamicKey(a2, 0LL, 128LL) & 1) << 19) | 4;
}
