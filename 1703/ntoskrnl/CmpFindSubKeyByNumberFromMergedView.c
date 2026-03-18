/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x14066742C
 * Callers:
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x14066D0E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned int v12; // r13d
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned int v15; // r12d
  int SubKeyByNumber; // eax
  bool v17; // al
  __int64 v18; // r13
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // r15d
  bool v23; // zf
  unsigned int v24; // eax
  unsigned int v25; // eax
  char v26; // al
  int v27; // eax
  bool v28; // sf
  bool v29; // cc
  unsigned int v30; // eax
  char v32; // [rsp+48h] [rbp-51h]
  bool v33; // [rsp+4Ch] [rbp-4Dh]
  bool v34; // [rsp+50h] [rbp-49h]
  int v35; // [rsp+54h] [rbp-45h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-41h]
  int v37; // [rsp+5Ch] [rbp-3Dh] BYREF
  unsigned int v38; // [rsp+60h] [rbp-39h]
  __int64 v39; // [rsp+68h] [rbp-31h]
  __int64 v40; // [rsp+70h] [rbp-29h]
  __int64 v41; // [rsp+78h] [rbp-21h] BYREF
  __int64 v42; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v43[2]; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v44[18]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v47; // [rsp+F8h] [rbp+5Fh]

  v47 = a3;
  v36 = 0;
  v38 = 0;
  v40 = 0LL;
  v8 = 0;
  v39 = 0LL;
  v9 = 0LL;
  v44[1] = 0;
  v10 = 0LL;
  v43[1] = 0;
  v11 = (unsigned int)a3;
  v33 = 0;
  LOBYTE(a3) = 0;
  v12 = -1;
  v13 = a1;
  v32 = 0;
  v14 = -1073741670;
  v44[0] = -1;
  v43[0] = -1;
  v15 = -1;
  *a5 = 0LL;
  v35 = -1;
  if ( !a2 )
    v12 = -1;
  v41 = 0LL;
  v37 = -1;
  v34 = a2 == 0;
  v42 = 0LL;
  *a6 = -1;
  while ( 1 )
  {
    if ( (_BYTE)a3 && v8 >= (unsigned int)v11 )
    {
LABEL_72:
      v14 = -2147483622;
      goto LABEL_36;
    }
    if ( v9 )
    {
      CmpDelayDerefKeyControlBlock(v9);
      v9 = 0LL;
      v41 = 0LL;
    }
    if ( v10 )
    {
      CmpDelayDerefKeyControlBlock(v10);
      v10 = 0LL;
      v42 = 0LL;
    }
    if ( !v33 && v15 == -1 )
    {
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(v13 + 24),
                         *(unsigned int *)(v13 + 32),
                         v36,
                         &v35,
                         v13 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         (__int64 *)((unsigned __int64)&v41 & -(__int64)(a4 != 0)));
      v9 = v41;
      v14 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_36;
      v15 = v35;
      v33 = v35 == -1;
    }
    v17 = v34;
    if ( !v34 && v12 == -1 )
    {
      v18 = a2;
      v19 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 24),
              *(unsigned int *)(a2 + 32),
              v38,
              &v37,
              a2 & -(__int64)(a4 != 0),
              v13 & -(__int64)(a4 != 0),
              a4,
              (__int64 *)((unsigned __int64)&v42 & -(__int64)(a4 != 0)));
      v10 = v42;
      v14 = v19;
      if ( v19 < 0 )
        goto LABEL_37;
      v12 = v37;
      v17 = v37 == -1;
      v34 = v37 == -1;
    }
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
    if ( v12 != -1 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64))(*(_QWORD *)(a2 + 24) + 8LL))(
              *(_QWORD *)(a2 + 24),
              v12,
              v43,
              v11);
      if ( !v40 )
        goto LABEL_35;
    }
    if ( v15 == -1 )
    {
      v21 = v39;
    }
    else
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              v15,
              v44,
              v11);
      v21 = v39;
      if ( !v39 )
        goto LABEL_35;
    }
    if ( v20 )
    {
      v22 = v20 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          goto LABEL_68;
        v23 = v32 == 0;
        v24 = v8 + 1;
        v32 = 1;
        if ( v23 )
          v24 = v8;
        v8 = v24;
        if ( v24 == v47 )
          goto LABEL_32;
        goto LABEL_66;
      }
      v25 = v8 + 1;
      if ( !v32 )
        v25 = v8;
      v8 = v25;
      v32 = 1;
      if ( v25 == v47 )
        break;
      v26 = 0;
      goto LABEL_65;
    }
    v27 = CmpCompareKeysByName(v21, v40);
    v28 = v27 < 0;
    v29 = v27 <= 0;
    v30 = v8 + 1;
    if ( v28 )
    {
      if ( !v32 )
        v30 = v8;
      v8 = v30;
      v32 = 1;
      if ( v30 == v47 )
        break;
      v26 = 0;
      goto LABEL_65;
    }
    if ( !v29 )
    {
      v23 = v32 == 0;
      v32 = 1;
      if ( v23 )
        v30 = v8;
      v8 = v30;
      if ( v30 == v47 )
      {
LABEL_32:
        *a5 = *(_QWORD *)(a2 + 24);
        *a6 = v12;
        if ( a7 )
        {
          *a7 = v10;
          v10 = 0LL;
        }
        v14 = 0;
LABEL_35:
        v13 = a1;
        goto LABEL_36;
      }
LABEL_66:
      ++v38;
      v12 = -1;
      v37 = -1;
      goto LABEL_67;
    }
    if ( !v32 )
      v30 = v8;
    v8 = v30;
    v26 = 1;
    v32 = 1;
    if ( v8 == v47 )
      break;
LABEL_65:
    ++v36;
    v15 = -1;
    v35 = -1;
    if ( v26 )
      goto LABEL_66;
LABEL_67:
    v21 = v39;
LABEL_68:
    v13 = a1;
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v44);
      v39 = 0LL;
    }
    LOBYTE(a3) = v32;
    v11 = v47;
    if ( v40 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD))(*(_QWORD *)(a2 + 24) + 16LL))(
        *(_QWORD *)(a2 + 24),
        v43,
        a3,
        v47);
      v40 = 0LL;
      LOBYTE(a3) = v32;
      v11 = v47;
    }
  }
  v13 = a1;
  *a5 = *(_QWORD *)(a1 + 24);
  *a6 = v15;
  if ( a7 )
  {
    *a7 = v9;
    v9 = 0LL;
  }
  v14 = 0;
LABEL_36:
  v18 = a2;
LABEL_37:
  if ( v9 )
    CmpDelayDerefKeyControlBlock(v9);
  if ( v10 )
    CmpDelayDerefKeyControlBlock(v10);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v43);
  if ( v39 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v13 + 24) + 16LL))(*(_QWORD *)(v13 + 24), v44);
  if ( v32 )
    *a8 = v8 + 1;
  else
    *a8 = 0;
  return v14;
}
