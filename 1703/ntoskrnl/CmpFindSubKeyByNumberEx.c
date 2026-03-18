/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1404FDC10
 * Callers:
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14066742C (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmRmIsKCBVisible @ 0x14044C0B4 (CmRmIsKCBVisible.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404FEDD0 (CmpDoFindSubKeyByNumber.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 v10; // r14
  unsigned int v13; // r12d
  _DWORD *v14; // rdi
  __int64 *v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 result; // rax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // r14d
  bool v26; // cf
  __int64 (__fastcall *v27)(__int64, _QWORD, _DWORD *); // rax
  __int64 v28; // rax
  int SubKeyByNumber; // eax
  _DWORD *v30; // rdx
  bool v31; // zf
  int SubkeyInHashByChildCell; // eax
  char *NextElement; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-48h]
  unsigned int v38; // [rsp+3Ch] [rbp-44h]
  unsigned int v39; // [rsp+40h] [rbp-40h]
  unsigned int v40; // [rsp+44h] [rbp-3Ch]
  _DWORD v41[2]; // [rsp+48h] [rbp-38h] BYREF
  char *v42; // [rsp+50h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v44[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+B0h] [rbp+30h] BYREF
  int v48; // [rsp+B4h] [rbp+34h]

  v41[0] = -1;
  v41[1] = 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v10 = 0LL;
  v36 = 0LL;
  v13 = 0;
  v14 = (_DWORD *)v9(a1, a2, v41);
  if ( !v14 )
    return 3221225626LL;
  v15 = a8;
  *a4 = -1;
  if ( v15 )
    *v15 = 0LL;
  if ( a5 )
  {
    v46 = (_QWORD *)(a5 + 200);
    if ( (_QWORD *)*v46 != v46 )
    {
      v20 = v14[5];
      v47 = 0;
      v44[0] = -1;
      v44[1] = 0;
      v45[0] = -1;
      v45[1] = 0;
      LODWORD(v42) = v20;
      if ( v20 )
        v39 = v14[7];
      else
        v39 = -1;
      v21 = v14[6];
      if ( v21 )
        v40 = v14[8];
      else
        v40 = -1;
      v38 = v20 + v21;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v41);
      v22 = v38;
      v23 = 0;
      v14 = 0LL;
      v37 = 0;
      if ( !v38 )
        goto LABEL_48;
      v24 = (unsigned int)v42;
      v25 = -(int)v42;
      LODWORD(v43) = -(int)v42;
      while ( 1 )
      {
        v26 = v23 < v24;
        v36 = 0LL;
        v27 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
        if ( v26 )
        {
          v28 = v27(a1, v39, v44);
          if ( !v28 )
            return 3221225626LL;
          SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v28, v37);
          v30 = v44;
        }
        else
        {
          v35 = v27(a1, v40, v45);
          if ( !v35 )
            return 3221225626LL;
          SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v35, v25 + v37);
          v30 = v45;
        }
        *a4 = SubKeyByNumber;
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
        if ( *a4 == -1 )
          return 3221225626LL;
        result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v36);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        v10 = v36;
        if ( !v36 || CmRmIsKCBVisible(v36, a7) && !CmpIsKeyDeleted(v10, a7) )
          ++v47;
        if ( v47 == a3 + 1 )
          break;
        if ( v10 )
          CmpDelayDerefKeyControlBlock(v10);
        v23 = v37 + 1;
        v37 = v23;
        v31 = v23 == v38;
        if ( v23 >= v38 )
          goto LABEL_49;
        v24 = (unsigned int)v42;
        v25 = v43;
      }
      v23 = v37;
      v22 = v38;
LABEL_48:
      v31 = v23 == v22;
LABEL_49:
      if ( v31 )
      {
        v43 = 0LL;
        *a4 = -1;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v46, &v43, 32);
          v42 = NextElement;
          if ( !NextElement )
            goto LABEL_10;
          if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
          {
            v34 = *((_DWORD *)v42 + 17);
            if ( v34 == 1 )
            {
              v10 = *((_QWORD *)v42 + 11);
            }
            else
            {
              if ( v34 != 10 )
                goto LABEL_55;
              v10 = *((_QWORD *)v42 + 12);
            }
            v36 = v10;
            if ( CmRmIsKCBVisible(v10, a7) && !CmpIsKeyDeleted(v10, a7) )
            {
              if ( v47 == a3 )
              {
                *a4 = *(_DWORD *)(v10 + 32);
                CmpReferenceKeyControlBlock(v10);
                goto LABEL_10;
              }
              ++v47;
            }
          }
LABEL_55:
          v10 = 0LL;
          v36 = 0LL;
        }
      }
      goto LABEL_10;
    }
  }
  v47 = -1;
  v48 = 0;
  v16 = v14[5];
  *a4 = -1;
  if ( a3 < v16 )
  {
    v17 = (unsigned int)v14[7];
LABEL_7:
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v17, &v47);
    if ( v18 )
    {
      *a4 = CmpDoFindSubKeyByNumber(a1, v18, a3);
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v47);
    }
    else
    {
      v13 = -1073741670;
    }
    v10 = v36;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 192) > 1u )
  {
    a3 -= v16;
    if ( a3 < v14[6] )
    {
      v17 = (unsigned int)v14[8];
      goto LABEL_7;
    }
  }
LABEL_10:
  if ( !v15 || *a4 == -1 )
  {
    if ( v10 )
      CmpDelayDerefKeyControlBlock(v10);
  }
  else
  {
    if ( !v10 )
    {
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v41);
        v14 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v36);
      v10 = v36;
      v13 = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *v15 = v10;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v41);
  return v13;
}
