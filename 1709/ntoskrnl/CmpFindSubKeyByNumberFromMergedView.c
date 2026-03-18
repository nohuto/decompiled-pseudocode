/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x140691B68
 * Callers:
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x14069775C (CmpCompareKeysByName.c)
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
  char v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned int v13; // edi
  unsigned int v14; // r12d
  __int64 v15; // r9
  __int64 v16; // r12
  int SubKeyByNumber; // eax
  bool v18; // al
  __int64 v19; // r13
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rcx
  int v23; // r15d
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
  v9 = 0;
  v44[1] = 0;
  v10 = 0LL;
  v43[1] = 0;
  v11 = 0LL;
  v33 = 0;
  v12 = -1;
  v13 = -1073741670;
  v32 = 0;
  v14 = -1;
  v44[0] = -1;
  v43[0] = -1;
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
    if ( v9 && v8 >= (unsigned int)a3 )
    {
LABEL_64:
      v13 = -2147483622;
      goto LABEL_69;
    }
    if ( v10 )
    {
      CmpDelayDerefKeyControlBlock(v10);
      v10 = 0LL;
      v41 = 0LL;
    }
    if ( v11 )
    {
      CmpDelayDerefKeyControlBlock(v11);
      v11 = 0LL;
      v42 = 0LL;
    }
    v15 = 0xFFFFFFFFLL;
    if ( !v33 && v14 == -1 )
    {
      v16 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v36,
                         &v35,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         (ULONG_PTR *)((unsigned __int64)&v41 & -(__int64)(a4 != 0)));
      v10 = v41;
      v13 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_70;
      v15 = 0xFFFFFFFFLL;
      v14 = v35;
      v33 = v35 == -1;
    }
    v18 = v34;
    if ( !v34 && v12 == -1 )
    {
      v19 = a2;
      v20 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 24),
              *(unsigned int *)(a2 + 32),
              v38,
              &v37,
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              (ULONG_PTR *)((unsigned __int64)&v42 & -(__int64)(a4 != 0)));
      v11 = v42;
      v13 = v20;
      if ( v20 < 0 )
      {
        v16 = a1;
        goto LABEL_71;
      }
      v15 = 0xFFFFFFFFLL;
      v12 = v37;
      v18 = v37 == -1;
      v34 = v37 == -1;
    }
    if ( v33 )
    {
      if ( v18 )
        goto LABEL_64;
      v21 = 2;
    }
    else
    {
      v21 = v18;
    }
    if ( v12 != -1 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64))(*(_QWORD *)(a2 + 24) + 8LL))(
              *(_QWORD *)(a2 + 24),
              v12,
              v43,
              0xFFFFFFFFLL);
      if ( !v40 )
        goto LABEL_68;
      v15 = 0xFFFFFFFFLL;
    }
    if ( v14 != -1 )
      break;
    v22 = v39;
LABEL_28:
    if ( !v21 )
    {
      v27 = CmpCompareKeysByName(v22, v40, a3, 0xFFFFFFFFLL);
      v28 = v27 < 0;
      v29 = v27 <= 0;
      v30 = v8 + 1;
      if ( v28 )
      {
        if ( !v32 )
          v30 = v8;
        v8 = v30;
        v9 = 1;
        if ( v30 == v47 )
          goto LABEL_66;
        v26 = 0;
LABEL_55:
        v15 = 0xFFFFFFFFLL;
LABEL_56:
        v9 = 1;
        v35 = -1;
        ++v36;
        v14 = -1;
        v32 = 1;
        if ( v26 )
          goto LABEL_57;
      }
      else
      {
        if ( v29 )
        {
          if ( !v32 )
            v30 = v8;
          v8 = v30;
          v26 = 1;
          v9 = 1;
          if ( v8 == v47 )
          {
LABEL_66:
            *a5 = *(_QWORD *)(a1 + 24);
            *a6 = v14;
            if ( a7 )
            {
              *a7 = v10;
              v10 = 0LL;
            }
            goto LABEL_36;
          }
          goto LABEL_55;
        }
        v9 = 1;
        if ( !v32 )
          v30 = v8;
        v8 = v30;
        if ( v30 == v47 )
        {
LABEL_34:
          *a5 = *(_QWORD *)(a2 + 24);
          *a6 = v12;
          if ( a7 )
          {
            *a7 = v11;
            v11 = 0LL;
          }
LABEL_36:
          v13 = 0;
          goto LABEL_69;
        }
        v15 = 0xFFFFFFFFLL;
LABEL_57:
        v9 = 1;
        v37 = -1;
        ++v38;
        v12 = -1;
        v32 = 1;
      }
      v22 = v39;
      goto LABEL_59;
    }
    v23 = v21 - 1;
    if ( !v23 )
    {
      v25 = v8 + 1;
      if ( !v32 )
        v25 = v8;
      v8 = v25;
      v9 = 1;
      if ( v25 == v47 )
        goto LABEL_66;
      v26 = 0;
      goto LABEL_56;
    }
    if ( v23 == 1 )
    {
      v24 = v8 + 1;
      v9 = 1;
      if ( !v32 )
        v24 = v8;
      v8 = v24;
      if ( v24 == v47 )
        goto LABEL_34;
      goto LABEL_57;
    }
    v9 = v32;
LABEL_59:
    if ( v22 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(*(_QWORD *)(a1 + 24) + 16LL))(
        *(_QWORD *)(a1 + 24),
        v44,
        a3,
        0xFFFFFFFFLL);
      v39 = 0LL;
    }
    a3 = v47;
    if ( v40 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD, __int64))(*(_QWORD *)(a2 + 24) + 16LL))(
        *(_QWORD *)(a2 + 24),
        v43,
        v47,
        v15);
      v40 = 0LL;
      a3 = v47;
    }
  }
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          v14,
          v44,
          0xFFFFFFFFLL);
  v22 = v39;
  if ( v39 )
  {
    v15 = 0xFFFFFFFFLL;
    goto LABEL_28;
  }
LABEL_68:
  v9 = v32;
LABEL_69:
  v16 = a1;
LABEL_70:
  v19 = a2;
LABEL_71:
  if ( v10 )
    CmpDelayDerefKeyControlBlock(v10);
  if ( v11 )
    CmpDelayDerefKeyControlBlock(v11);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v19 + 24) + 16LL))(*(_QWORD *)(v19 + 24), v43);
  if ( v39 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v44);
  if ( v9 )
    *a8 = v8 + 1;
  else
    *a8 = 0;
  return v13;
}
