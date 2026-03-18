/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1404824B0
 * Callers:
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140691B68 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404826B0 (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x140568874 (CmRmIsKCBVisible.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
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
  int SubkeyInHashByChildCell; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // r14d
  bool v21; // cf
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *); // rax
  __int64 v23; // rax
  int v24; // eax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 NextElement; // rax
  int v28; // eax
  unsigned int v29; // [rsp+30h] [rbp-48h]
  ULONG_PTR v30; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-38h]
  unsigned int v32; // [rsp+44h] [rbp-34h]
  _DWORD v33[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v34; // [rsp+50h] [rbp-28h]
  __int64 v35; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-18h] BYREF
  _DWORD v37[2]; // [rsp+68h] [rbp-10h] BYREF
  int v38; // [rsp+B0h] [rbp+38h]

  v33[0] = -1;
  v33[1] = 0;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v9 = 0LL;
  v30 = 0LL;
  SubKeyByNumber = 0;
  v13 = (_DWORD *)v8(a1, a2, v33);
  if ( !v13 )
    return 3221225626LL;
  *a4 = -1;
  if ( a8 )
    *a8 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 200) == a5 + 200 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a1, v13, a3, a4);
    goto LABEL_6;
  }
  v16 = v13[5];
  v38 = 0;
  v36[0] = -1;
  v36[1] = 0;
  v37[0] = -1;
  v37[1] = 0;
  LODWORD(v35) = v16;
  if ( v16 )
    v32 = v13[7];
  else
    v32 = -1;
  v17 = v13[6];
  if ( v17 )
    LODWORD(v34) = v13[8];
  else
    LODWORD(v34) = -1;
  v31 = v16 + v17;
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
  v18 = v31;
  v19 = 0;
  v13 = 0LL;
  v29 = 0;
  if ( !v31 )
  {
LABEL_48:
    if ( v19 == v18 )
    {
      v35 = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(a5 + 200, &v35, 32LL);
        v34 = NextElement;
        if ( !NextElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
        {
          v28 = *(_DWORD *)(v34 + 68);
          if ( v28 == 1 )
          {
            v9 = *(_QWORD *)(v34 + 88);
          }
          else
          {
            if ( v28 != 10 )
              goto LABEL_60;
            v9 = *(_QWORD *)(v34 + 96);
          }
          v30 = v9;
          if ( (unsigned __int8)CmRmIsKCBVisible(v9, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
          {
            if ( v38 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 32);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v38;
          }
        }
LABEL_60:
        v9 = 0LL;
        v30 = 0LL;
      }
    }
LABEL_6:
    if ( !a8 || *a4 == -1 )
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
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
          v13 = 0LL;
        }
        SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v30);
        v9 = v30;
        SubKeyByNumber = SubkeyInHashByChildCell;
        if ( SubkeyInHashByChildCell < 0 )
          *a4 = -1;
      }
      *a8 = v9;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
    return SubKeyByNumber;
  }
  while ( 1 )
  {
    v20 = v35;
    v21 = v19 < (unsigned int)v35;
    v30 = 0LL;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
    if ( v21 )
    {
      v23 = v22(a1, v32, v36);
      if ( !v23 )
        return 3221225626LL;
      v24 = CmpDoFindSubKeyByNumber(a1, v23, v29);
      v25 = v36;
    }
    else
    {
      v26 = v22(a1, (unsigned int)v34, v37);
      if ( !v26 )
        return 3221225626LL;
      v24 = CmpDoFindSubKeyByNumber(a1, v26, v29 - v20);
      v25 = v37;
    }
    *a4 = v24;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
    if ( *a4 == -1 )
      return 3221225626LL;
    result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v30);
    SubKeyByNumber = result;
    if ( (int)result < 0 )
      return result;
    v9 = v30;
    if ( !v30 || (unsigned __int8)CmRmIsKCBVisible(v30, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
      ++v38;
    if ( v38 == a3 + 1 )
    {
      v19 = v29;
      v18 = v31;
      goto LABEL_48;
    }
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9);
    v18 = v31;
    v19 = v29 + 1;
    v29 = v19;
    if ( v19 >= v31 )
      goto LABEL_48;
  }
}
