/*
 * XREFs of EtwpApplyPredicate @ 0x1402B6D34
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x1402B6498 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     strncmp @ 0x140187D50 (strncmp.c)
 *     wcsncmp @ 0x14018A6F0 (wcsncmp.c)
 *     EtwpGetFieldValue @ 0x1402B7298 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1402B7300 (EtwpGetSignedFieldValue.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned int a5,
        bool *a6)
{
  const wchar_t *v6; // rdi
  char v10; // r14
  __int16 v11; // r12
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // bl
  bool v19; // zf
  unsigned int v20; // r9d
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // r15
  char *i; // rsi
  __int64 v26; // rsi
  wchar_t v27; // r12
  const wchar_t *v28; // r13
  char *v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  const char *v32; // r15
  char *j; // rsi
  unsigned int v34; // esi
  const char *v35; // rcx
  char v36; // r12
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // [rsp+28h] [rbp-40h] BYREF
  const wchar_t *v44; // [rsp+30h] [rbp-38h]
  const wchar_t *v45; // [rsp+38h] [rbp-30h]
  const wchar_t *v46; // [rsp+40h] [rbp-28h]

  v6 = a4;
  if ( !a5 )
    return 0;
  v10 = 0;
  v11 = *(_WORD *)(a3 + 2);
  v12 = a2 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v43) )
      return 0;
    v41 = *(_QWORD *)(a3 + 8);
    v42 = *(_QWORD *)(a3 + 16);
    if ( !v11 )
    {
      v19 = v43 == v41;
      goto LABEL_120;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = v43 <= v41;
          goto LABEL_121;
        case 3:
          v18 = v43 > v41;
          goto LABEL_121;
        case 4:
          v18 = v43 < v41;
          goto LABEL_121;
        case 5:
          v18 = v43 >= v41;
          goto LABEL_121;
        case 6:
          if ( v41 > v43 || v43 > v42 )
            goto LABEL_112;
          break;
        case 7:
          if ( v43 >= v41 && v42 >= v43 )
            goto LABEL_112;
          break;
        default:
          if ( v11 != 8 || !v41 )
            return 0;
          v39 = v43 % v41;
          goto LABEL_82;
      }
LABEL_109:
      v18 = 1;
      goto LABEL_121;
    }
    v40 = v43 == v41;
LABEL_118:
    v18 = !v40;
    goto LABEL_121;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v43) )
      return 0;
    if ( !v11 )
    {
      v19 = v43 == *(_QWORD *)(a3 + 8);
      goto LABEL_120;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = (unsigned __int64)v43 <= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 3:
          v18 = (unsigned __int64)v43 > *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 4:
          v18 = (unsigned __int64)v43 < *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 5:
          v18 = (unsigned __int64)v43 >= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v43 || (unsigned __int64)v43 > *(_QWORD *)(a3 + 16) )
            goto LABEL_112;
          break;
        case 7:
          if ( (unsigned __int64)v43 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v43 )
            goto LABEL_112;
          break;
        case 8:
          v38 = *(_QWORD *)(a3 + 8);
          if ( !v38 )
            return 0;
          v39 = v43 % v38;
LABEL_82:
          v19 = v39 == 0;
          goto LABEL_120;
        default:
          return 0;
      }
      goto LABEL_109;
    }
    v40 = v43 == *(_QWORD *)(a3 + 8);
    goto LABEL_118;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 && a5 == 16 )
      {
        v16 = *(_QWORD *)(a3 + 8);
        v17 = *(_QWORD *)a4 - v16;
        if ( *(_QWORD *)a4 == v16 )
          v17 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
        v18 = v17 == 0;
        if ( v11 == 30 )
          goto LABEL_121;
        if ( v11 == 31 )
          goto LABEL_13;
      }
      return 0;
    }
    if ( (a5 & 1) != 0 )
      return 0;
    v20 = a5 >> 1;
    v21 = (char *)a1 + a1[22];
    v22 = (unsigned __int64)&v21[2 * ((unsigned __int64)a1[23] >> 1)];
    v23 = *(_QWORD *)(a3 + 8);
    v24 = (const wchar_t *)&v21[2 * v23];
    if ( (unsigned __int64)v24 >= v22 )
      return 0;
    for ( i = &v21[2 * v23]; *(_WORD *)i && (unsigned __int64)i < v22; i += 2 )
      ;
    v26 = (i - (char *)v24) >> 1;
    if ( (_DWORD)v26 )
    {
      if ( v11 != 20 )
      {
        if ( v11 != 21 )
        {
          if ( v11 != 30 )
          {
            if ( v11 != 31 )
              return 0;
            v10 = 1;
          }
          v18 = v10;
          if ( (_DWORD)v26 == v20 )
          {
            v18 = 1;
            while ( (_DWORD)v26 )
            {
              if ( *v24 != *v6 )
              {
                v18 = 0;
                goto LABEL_31;
              }
              v44 = ++v6;
              v46 = ++v24;
              LODWORD(v26) = v26 - 1;
            }
            goto LABEL_31;
          }
          goto LABEL_121;
        }
        v10 = 1;
      }
      v18 = v10;
      if ( (unsigned int)v26 > v20 )
        goto LABEL_121;
      v27 = *v24;
      v28 = &v6[v20 - (unsigned __int64)(unsigned int)v26 + 1];
      v18 = 0;
      while ( v6 < v28 )
      {
        if ( *v6 == v27 && !wcsncmp(v6, v24, (unsigned int)v26) )
        {
          v18 = 1;
          goto LABEL_31;
        }
        v44 = ++v6;
      }
      goto LABEL_31;
    }
LABEL_112:
    v18 = 0;
    goto LABEL_121;
  }
  v29 = (char *)a1 + a1[24];
  v30 = (unsigned __int64)&v29[a1[25]];
  v31 = *(_QWORD *)(a3 + 8);
  v32 = &v29[v31];
  if ( (unsigned __int64)&v29[v31] >= v30 )
    return 0;
  for ( j = &v29[v31]; *j && (unsigned __int64)j < v30; ++j )
    ;
  v34 = (_DWORD)j - (_DWORD)v32;
  if ( !v34 )
    goto LABEL_112;
  if ( v11 == 20 )
  {
LABEL_62:
    v18 = v10;
    if ( v34 > a5 )
      goto LABEL_121;
    v36 = *v32;
    v37 = (unsigned __int64)a4 + a5 - (unsigned __int64)v34 + 1;
    v18 = 0;
    while ( (unsigned __int64)v6 < v37 )
    {
      if ( *(_BYTE *)v6 == v36 && !strncmp((const char *)v6, v32, v34) )
      {
        v18 = 1;
        goto LABEL_31;
      }
      v6 = (const wchar_t *)((char *)v6 + 1);
      v45 = v6;
    }
    goto LABEL_31;
  }
  if ( v11 == 21 )
  {
    v10 = 1;
    goto LABEL_62;
  }
  if ( v11 != 30 )
  {
    if ( v11 != 31 )
      return 0;
    v10 = 1;
  }
  v18 = v10;
  if ( v34 == a5 )
  {
    v18 = 1;
    while ( 1 )
    {
      v35 = v32;
      if ( !v34 )
        break;
      if ( *(_BYTE *)v6 != *v32 )
      {
        v18 = 0;
        break;
      }
      v6 = (const wchar_t *)((char *)v6 + 1);
      v45 = v6;
      ++v32;
      v43 = (__int64)(v35 + 1);
      --v34;
    }
LABEL_31:
    if ( v10 )
    {
LABEL_13:
      v19 = !v18;
LABEL_120:
      v18 = v19;
    }
  }
LABEL_121:
  *a6 = v18;
  return 1;
}
