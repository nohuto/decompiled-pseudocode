/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x1406F517C
 * Callers:
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404A9930 (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x1406FA870 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  char v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned int v14; // edi
  __int64 v15; // r13
  int SubKeyByNumber; // eax
  bool v17; // al
  __int64 v18; // r12
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  int v23; // r15d
  unsigned int v24; // eax
  bool v25; // zf
  unsigned int v26; // eax
  bool v27; // zf
  char v28; // al
  int v29; // eax
  unsigned int v30; // ecx
  char v31; // [rsp+48h] [rbp-51h]
  bool v32; // [rsp+4Ch] [rbp-4Dh]
  bool v33; // [rsp+50h] [rbp-49h]
  int v34; // [rsp+54h] [rbp-45h] BYREF
  int v35; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v37; // [rsp+60h] [rbp-39h]
  __int64 v38; // [rsp+68h] [rbp-31h]
  __int64 v39; // [rsp+70h] [rbp-29h]
  __int64 v40; // [rsp+78h] [rbp-21h] BYREF
  __int64 v41; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v42[2]; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v43[18]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v46; // [rsp+F8h] [rbp+5Fh]

  v46 = a3;
  v36 = 0;
  v39 = 0LL;
  v8 = 0;
  v37 = 0;
  v9 = -1;
  v38 = 0LL;
  v10 = 0;
  v43[0] = -1;
  v11 = -1;
  v42[0] = -1;
  v12 = 0LL;
  v43[1] = 0;
  v13 = 0LL;
  v42[1] = 0;
  v14 = -1073741670;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v35 = -1;
  v34 = -1;
  *a5 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  *a6 = -1;
  if ( !a2 )
  {
    v11 = -1;
    v32 = 1;
    v34 = -1;
  }
  while ( 1 )
  {
    if ( v10 && v8 >= a3 )
    {
LABEL_72:
      v14 = -2147483622;
      goto LABEL_26;
    }
    if ( v12 )
    {
      CmpDelayDerefKeyControlBlock(v12);
      v12 = 0LL;
      v40 = 0LL;
    }
    if ( v13 )
    {
      CmpDelayDerefKeyControlBlock(v13);
      v13 = 0LL;
      v41 = 0LL;
    }
    if ( !v33 && v9 == -1 )
    {
      v15 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v36,
                         &v35,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         (ULONG_PTR *)((unsigned __int64)&v40 & -(__int64)(a4 != 0)));
      v12 = v40;
      v14 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_27;
      v9 = v35;
      v33 = v35 == -1;
    }
    v17 = v32;
    if ( !v32 && v11 == -1 )
      break;
LABEL_17:
    if ( v33 )
    {
      if ( v17 )
        goto LABEL_72;
      v20 = 2;
    }
    else
    {
      v20 = v17;
    }
    if ( v11 != -1 )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a2 + 24) + 8LL))(
              *(_QWORD *)(a2 + 24),
              v11,
              v42);
      if ( !v39 )
      {
LABEL_25:
        v10 = v31;
LABEL_26:
        v15 = a1;
LABEL_27:
        v18 = a2;
        goto LABEL_28;
      }
    }
    if ( v9 == -1 )
    {
      v21 = v38;
    }
    else
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              v9,
              v43);
      v21 = v38;
      if ( !v38 )
        goto LABEL_25;
    }
    if ( !v20 )
    {
      v29 = CmpCompareKeysByName(v21, v39);
      v30 = v8 + 1;
      if ( v29 >= 0 )
      {
        if ( v29 > 0 )
        {
          if ( !v31 )
            v30 = v8;
          v25 = v30 == v46;
          v8 = v30;
          goto LABEL_44;
        }
        v28 = 1;
        v10 = 1;
        if ( !v31 )
          v30 = v8;
        v8 = v30;
        if ( v30 == v46 )
        {
LABEL_74:
          *a5 = *(_QWORD *)(a1 + 24);
          *a6 = v9;
          if ( a7 )
          {
            *a7 = v12;
            v12 = 0LL;
          }
          goto LABEL_47;
        }
      }
      else
      {
        if ( !v31 )
          v30 = v8;
        v27 = v30 == v46;
        v8 = v30;
LABEL_51:
        v10 = 1;
        if ( v27 )
          goto LABEL_74;
        v28 = 0;
      }
      v10 = 1;
      v9 = -1;
      ++v36;
      v35 = -1;
      v31 = 1;
      if ( v28 )
      {
LABEL_65:
        v11 = -1;
        v10 = 1;
        ++v37;
        v34 = -1;
        v31 = 1;
      }
      v21 = v38;
      goto LABEL_67;
    }
    v23 = v20 - 1;
    if ( !v23 )
    {
      v26 = v8 + 1;
      if ( !v31 )
        v26 = v8;
      v27 = v26 == v46;
      v8 = v26;
      goto LABEL_51;
    }
    if ( v23 == 1 )
    {
      v24 = v8 + 1;
      if ( !v31 )
        v24 = v8;
      v25 = v24 == v46;
      v8 = v24;
LABEL_44:
      v10 = 1;
      if ( v25 )
      {
        *a5 = *(_QWORD *)(a2 + 24);
        *a6 = v11;
        if ( a7 )
        {
          *a7 = v13;
          v13 = 0LL;
        }
LABEL_47:
        v14 = 0;
        goto LABEL_26;
      }
      goto LABEL_65;
    }
    v10 = v31;
LABEL_67:
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v43);
      v38 = 0LL;
    }
    a3 = v46;
    if ( v39 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a2 + 24) + 16LL))(*(_QWORD *)(a2 + 24), v42, v46);
      v39 = 0LL;
      a3 = v46;
    }
  }
  v18 = a2;
  v19 = CmpFindSubKeyByNumberEx(
          *(_QWORD *)(a2 + 24),
          *(unsigned int *)(a2 + 32),
          v37,
          &v34,
          a2 & -(__int64)(a4 != 0),
          a1 & -(__int64)(a4 != 0),
          a4,
          (ULONG_PTR *)((unsigned __int64)&v41 & -(__int64)(a4 != 0)));
  v13 = v41;
  v14 = v19;
  if ( v19 >= 0 )
  {
    v11 = v34;
    v17 = v34 == -1;
    v32 = v34 == -1;
    goto LABEL_17;
  }
  v15 = a1;
LABEL_28:
  if ( v12 )
    CmpDelayDerefKeyControlBlock(v12);
  if ( v13 )
    CmpDelayDerefKeyControlBlock(v13);
  if ( v39 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v42);
  if ( v38 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v43);
  *a8 = v10 != 0 ? v8 + 1 : 0;
  return v14;
}
