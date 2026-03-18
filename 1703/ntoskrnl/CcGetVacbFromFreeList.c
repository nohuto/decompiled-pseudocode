/*
 * XREFs of CcGetVacbFromFreeList @ 0x1400AA6F4
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 * Callees:
 *     CcReferenceVacbArray @ 0x1400AA7C8 (CcReferenceVacbArray.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcGetVacbFromFreeList(char a1)
{
  _QWORD *v1; // rbx
  int *v2; // r8
  __int64 *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  v1 = 0LL;
  v2 = &CcNumberOfFreeHighPriorityVacbs;
  if ( !a1 )
    v2 = &CcNumberOfFreeVacbs;
  v3 = &CcVacbFreeHighPriorityList;
  if ( !a1 )
    v3 = &CcVacbFreeList;
  v4 = (_QWORD *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    ++CcNumberOfMappedVacbs;
    v1 = v4 - 2;
    v5 = v4;
    v6 = *v4;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*v2 )
      KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v2;
    v8 = v1[4];
    v9 = ((__int64)v1 - v8 - 16) / 40;
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*v1 )
      CcReferenceVacbArray(*(unsigned int *)v1[4]);
    v1[1] = -1LL;
  }
  return v1;
}
