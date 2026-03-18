/*
 * XREFs of cjFillPolygon @ 0x1C022B924
 * Callers:
 *     lQueryTTOutline @ 0x1C022BD84 (lQueryTTOutline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall cjFillPolygon(__int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int16 v4; // bp
  int v5; // edi
  __int64 v6; // r15
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int16 v12; // r14
  __int64 v13; // r12
  void *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int16 v19; // di
  unsigned __int16 v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // r15
  _DWORD *v23; // r12
  _QWORD *v24; // r10
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // rsi
  bool v31; // bp
  unsigned __int64 v32; // r13
  __int16 v33; // [rsp+30h] [rbp-98h]
  unsigned int v34; // [rsp+34h] [rbp-94h]
  int v35; // [rsp+38h] [rbp-90h]
  unsigned __int16 v36; // [rsp+3Ch] [rbp-8Ch]
  __int64 v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+48h] [rbp-80h]
  void (__fastcall *v39)(char *, _QWORD, _QWORD, _QWORD, int); // [rsp+50h] [rbp-78h]
  _QWORD *v40; // [rsp+60h] [rbp-68h]
  unsigned __int64 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  _DWORD *v43; // [rsp+78h] [rbp-50h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  int v46; // [rsp+E0h] [rbp+18h]

  v46 = (int)a3;
  v4 = 0;
  v5 = (int)a3;
  v6 = a1;
  if ( !a3 || (v7 = 0, !a4) )
    v7 = 1;
  v8 = *(_QWORD *)(a1 + 184);
  v9 = 0xFFFFFFFFLL;
  v43 = 0LL;
  v10 = a3;
  v40 = 0LL;
  if ( !v7 )
    v9 = a4;
  v11 = (unsigned __int64)a3 + v9;
  v12 = *(_WORD *)(v8 + 118);
  v13 = *(_QWORD *)(v8 + 144);
  v38 = *(_QWORD *)(v8 + 152);
  v42 = *(_QWORD *)(v8 + 136);
  v36 = v12;
  v44 = v13;
  v41 = v11;
  if ( !*(_WORD *)(v8 + 116) )
    return 0LL;
  if ( v7 )
  {
    v15 = Scale_None;
  }
  else
  {
    v15 = Scale_16DOT16;
    if ( !a2 )
      v15 = Scale_28DOT4;
  }
  v39 = (void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, int))v15;
  v33 = 0;
  v16 = (unsigned __int16)(*(_WORD *)(v13 + 2LL * (v12 - 1)) + 1);
  v17 = v7;
  v34 = *(_DWORD *)(*(_QWORD *)(v8 + 120) + 4 * v16);
  v35 = *(_DWORD *)(*(_QWORD *)(v8 + 128) + 4 * v16);
  v37 = v7;
  if ( !v12 )
    return (unsigned int)((_DWORD)v10 - v5);
  v18 = *(_QWORD *)(v8 + 136);
  while ( 1 )
  {
    v19 = *(_WORD *)(v18 + 2LL * v4);
    v20 = *(_WORD *)(v13 + 2LL * v4);
    if ( v19 != v20 )
      break;
LABEL_49:
    v33 = ++v4;
    if ( v4 >= v36 )
    {
      v5 = v46;
      return (unsigned int)((_DWORD)v10 - v5);
    }
  }
  v21 = *(_QWORD *)(v6 + 184);
  v22 = (_DWORD *)(*(_QWORD *)(v21 + 120) + 4LL * v19);
  v23 = (_DWORD *)(*(_QWORD *)(v21 + 128) + 4LL * v19);
  if ( v17 )
  {
    v24 = v40;
  }
  else
  {
    if ( v11 < (unsigned __int64)(v10 + 2) )
      return 0xFFFFFFFFLL;
    v24 = v10 + 1;
    v43 = v10;
    v40 = v10 + 1;
    *((_DWORD *)v10 + 1) = 24;
  }
  v10 += 2;
  if ( (*(_BYTE *)(v19 + v38) & 1) != 0 )
  {
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v15)(v24, (unsigned int)*v22++, (unsigned int)*v23++);
    ++v19;
  }
  else
  {
    if ( (*(_BYTE *)(v20 + v38) & 1) != 0 )
    {
      v25 = v20 - v19;
      v26 = (unsigned int)v23[v25];
      v27 = (unsigned int)v22[v25];
    }
    else
    {
      v28 = v20 - v19;
      v26 = (unsigned int)((*v23 + v23[v28]) >> 1);
      v27 = (unsigned int)((*v22 + v22[v28]) >> 1);
    }
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v15)(v24, v27, v26);
  }
  v17 = v37;
  if ( v19 > v20 )
  {
LABEL_47:
    v6 = a1;
    v13 = v44;
    v18 = v42;
    if ( !v17 )
      *v43 = (_DWORD)v10 - (_DWORD)v43;
    goto LABEL_49;
  }
  while ( v11 >= (unsigned __int64)v10 + 12 )
  {
    v29 = v38;
    v30 = (char *)v10 + 4;
    v31 = (*(_BYTE *)(v19 + v38) & 1) == 0;
    if ( !v17 )
    {
      *(_WORD *)v10 = ((*(_BYTE *)(v19 + v38) & 1) == 0) + 1;
      v29 = v38;
    }
    if ( v19 <= v20 )
    {
      v32 = (unsigned __int64)v10 + 12;
      do
      {
        if ( (*(_BYTE *)(v19 + v29) & 1) == v31 )
          break;
        if ( v41 < v32 )
          return 0xFFFFFFFFLL;
        v39(v30, (unsigned int)*v22, (unsigned int)*v23, v34, v35);
        v29 = v38;
        ++v19;
        v30 += 8;
        v32 += 8LL;
        ++v22;
        ++v23;
      }
      while ( v19 <= v20 );
      v17 = v37;
      v15 = v39;
    }
    if ( v31 )
    {
      if ( v41 < (unsigned __int64)(v30 + 8) )
        return 0xFFFFFFFFLL;
      if ( v19 > v20 )
      {
        if ( !v17 )
          *(_QWORD *)v30 = *v40;
      }
      else
      {
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, int))v15)(
          v30,
          (unsigned int)*v22,
          (unsigned int)*v23,
          v34,
          v35);
        v17 = v37;
        ++v19;
        ++v22;
        ++v23;
      }
      v30 += 8;
    }
    if ( !v17 )
      *((_WORD *)v10 + 1) = (v30 - (char *)v10 - 4) >> 3;
    v10 = v30;
    v11 = v41;
    if ( v19 > v20 )
    {
      v4 = v33;
      goto LABEL_47;
    }
  }
  return 0xFFFFFFFFLL;
}
