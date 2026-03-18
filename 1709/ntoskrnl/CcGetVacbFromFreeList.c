/*
 * XREFs of CcGetVacbFromFreeList @ 0x1400A4050
 * Callers:
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 * Callees:
 *     CcReferenceVacbArray @ 0x1400A4114 (CcReferenceVacbArray.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcGetVacbFromFreeList(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rax
  int *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 840);
    v4 = (int *)(a1 + 856);
  }
  else
  {
    v3 = &CcVacbFreeList;
    v4 = &CcNumberOfFreeVacbs;
  }
  v5 = (_QWORD *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    ++CcNumberOfMappedVacbs;
    v2 = v5 - 2;
    v6 = v5;
    v7 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( !*v4 )
      KeBugCheckEx(0x34u, 0x342uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v4;
    v9 = v2[4];
    v10 = ((__int64)v2 - v9 - 16) / 40;
    if ( (unsigned int)v10 > *(_DWORD *)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v10;
    if ( !*v2 )
      CcReferenceVacbArray(*(unsigned int *)v2[4]);
    v2[1] = -1LL;
  }
  return v2;
}
