/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1404ACF50
 * Callers:
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406F517C (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404A9930 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404AC3CC (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumber @ 0x1404AD3B0 (CmpFindSubKeyByNumber.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmRmIsKCBVisible @ 0x14056FB10 (CmRmIsKCBVisible.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  ULONG_PTR v9; // r13
  unsigned int SubKeyByNumber; // r14d
  _DWORD *v13; // rdi
  __int64 result; // rax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // r14d
  bool v20; // cf
  __int64 (__fastcall *v21)(__int64, _QWORD, _DWORD *); // rax
  __int16 *v22; // rax
  int v23; // eax
  _DWORD *v24; // rdx
  int v25; // r9d
  __int64 NextElement; // rax
  int v27; // eax
  int SubkeyInHashByChildCell; // eax
  __int16 *v29; // rax
  unsigned int i; // [rsp+30h] [rbp-48h]
  ULONG_PTR v31; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-38h]
  unsigned int v33; // [rsp+44h] [rbp-34h]
  _DWORD v34[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v35; // [rsp+50h] [rbp-28h]
  __int64 v36; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v37[2]; // [rsp+60h] [rbp-18h] BYREF
  _DWORD v38[2]; // [rsp+68h] [rbp-10h] BYREF
  int v39; // [rsp+B0h] [rbp+38h]

  v34[0] = -1;
  v34[1] = 0;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v9 = 0LL;
  v31 = 0LL;
  SubKeyByNumber = 0;
  v13 = (_DWORD *)v8(a1, a2, v34);
  if ( !v13 )
    return 3221225626LL;
  *a4 = -1;
  if ( a8 )
    *a8 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 200) == a5 + 200 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a1, v13, a3, a4);
  }
  else
  {
    v15 = v13[5];
    v39 = 0;
    v37[0] = -1;
    v37[1] = 0;
    v38[0] = -1;
    v38[1] = 0;
    LODWORD(v36) = v15;
    if ( v15 )
      v33 = v13[7];
    else
      v33 = -1;
    v16 = v13[6];
    if ( v16 )
      LODWORD(v35) = v13[8];
    else
      LODWORD(v35) = -1;
    v32 = v15 + v16;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v34);
    v17 = v32;
    v18 = 0;
    v13 = 0LL;
    for ( i = 0; v18 < v32; i = v18 )
    {
      v19 = v36;
      v20 = v18 < (unsigned int)v36;
      v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
      v31 = 0LL;
      if ( v20 )
      {
        v22 = (__int16 *)v21(a1, v33, v37);
        if ( !v22 )
          return 3221225626LL;
        v23 = CmpDoFindSubKeyByNumber(a1, v22, i);
        v24 = v37;
      }
      else
      {
        v29 = (__int16 *)v21(a1, (unsigned int)v35, v38);
        if ( !v29 )
          return 3221225626LL;
        v23 = CmpDoFindSubKeyByNumber(a1, v29, i - v19);
        v24 = v38;
      }
      *a4 = v23;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v24);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v31);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v9 = v31;
      if ( !v31 || (unsigned __int8)CmRmIsKCBVisible(v31, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
        ++v39;
      if ( v39 == a3 + 1 )
      {
        v18 = i;
        v17 = v32;
        break;
      }
      if ( v9 )
        CmpDelayDerefKeyControlBlock(v9);
      v17 = v32;
      v18 = i + 1;
    }
    if ( v18 == v17 )
    {
      v36 = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(a5 + 200, &v36, 32LL);
        v35 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
        {
          v27 = *(_DWORD *)(v35 + 68);
          if ( v27 == 1 )
          {
            v9 = *(_QWORD *)(v35 + 88);
          }
          else
          {
            if ( v27 != 10 )
              goto LABEL_42;
            v9 = *(_QWORD *)(v35 + 96);
          }
          v31 = v9;
          if ( (unsigned __int8)CmRmIsKCBVisible(v9, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
          {
            if ( v39 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 32);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v39;
          }
        }
LABEL_42:
        v9 = 0LL;
        v31 = 0LL;
      }
    }
  }
  if ( !a8 || (v25 = *a4, *a4 == -1) )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9);
  }
  else
  {
    if ( !v9 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v34);
        v25 = *a4;
        v13 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, v25, (__int64)&v31);
      v9 = v31;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a8 = v9;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v34);
  return SubKeyByNumber;
}
