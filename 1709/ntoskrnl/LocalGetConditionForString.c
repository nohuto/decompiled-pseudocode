/*
 * XREFs of LocalGetConditionForString @ 0x140735F08
 * Callers:
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     iswspace @ 0x14015F250 (iswspace.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     AppendCondition @ 0x140734114 (AppendCondition.c)
 *     FreeOperandValue @ 0x1407345E4 (FreeOperandValue.c)
 *     GetConditionToken @ 0x1407348E8 (GetConditionToken.c)
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     GetOperatorIndexByToken @ 0x1407352C4 (GetOperatorIndexByToken.c)
 *     IsValueSizeFixed @ 0x140735EDC (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(
        wint_t *a1,
        wint_t **a2,
        const void **a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wint_t *v8; // r13
  const void **v9; // r10
  int v10; // esi
  unsigned int appended; // ebx
  unsigned int v12; // edi
  int v13; // r12d
  _QWORD *v14; // r15
  __int64 v15; // rax
  unsigned int *v16; // r15
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  _DWORD *v21; // rax
  int v22; // eax
  __int16 v23; // r11
  __int64 v24; // rax
  char ConditionToken; // al
  char v26; // r9
  __int64 v27; // rax
  __int64 v28; // r14
  char v29; // di
  char v30; // al
  int v31; // eax
  int v32; // eax
  char v33; // r11
  wchar_t **v34; // r10
  __int64 v35; // r8
  char v36; // r11
  int v37; // eax
  char v38; // r10
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  char v43; // al
  int v44; // eax
  int v45; // r9d
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r8
  int OperatorIndexByToken; // eax
  __int64 v50; // r8
  int v51; // r9d
  char v52; // cl
  unsigned int OperandValue; // eax
  char v54; // cl
  const void **v55; // r12
  bool v56; // al
  unsigned int *v57; // r14
  __int64 v58; // rdi
  char v59; // al
  unsigned int v60; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v66; // [rsp+51h] [rbp-AFh]
  int v67[2]; // [rsp+58h] [rbp-A8h]
  char v68; // [rsp+60h] [rbp-A0h]
  char v69; // [rsp+61h] [rbp-9Fh]
  int v70[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v71[2]; // [rsp+70h] [rbp-90h]
  unsigned int v72; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  wint_t **v77; // [rsp+A0h] [rbp-60h]
  _BYTE v78[257]; // [rsp+AFh] [rbp-51h]

  *(_QWORD *)v67 = a3;
  v8 = a1;
  v77 = a2;
  v76 = a5;
  v9 = a3;
  v10 = 0;
  v75 = a6;
  appended = 0;
  v12 = 0;
  v74 = a7;
  v13 = 0;
  *(_QWORD *)v71 = a4;
  v14 = 0LL;
  v66 = 0;
  P = 0LL;
  v68 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a3 = 0LL;
  v15 = -1LL;
  *a4 = 0;
  do
    ++v15;
  while ( a1[v15] );
  if ( (unsigned int)v15 < 3 || *a1 != 40 )
  {
    appended = 1336;
    v16 = a4;
    goto LABEL_124;
  }
  v17 = v15 + 1;
  v18 = -1;
  if ( v17 )
    v18 = v17;
  *a4 = v18;
  if ( !v17 )
    goto LABEL_13;
  v19 = -1;
  v20 = 2LL * *a4;
  if ( v20 <= 0xFFFFFFFF )
    v19 = 2 * *a4;
  *a4 = v19;
  if ( v20 > 0xFFFFFFFF )
  {
LABEL_13:
    appended = 534;
    goto LABEL_122;
  }
  v21 = SddlpAlloc(v19);
  v9 = *(const void ***)v67;
  **(_QWORD **)v67 = v21;
  if ( !v21 )
  {
    appended = 8;
    goto LABEL_122;
  }
  *v21 = 2020897377;
  v70[0] = 4;
  if ( !*v8 )
    goto LABEL_110;
  while ( 1 )
  {
    v22 = iswspace(*v8);
    v23 = 0;
    if ( !v22 )
      break;
    v24 = 2LL;
LABEL_105:
    v8 = (wint_t *)((char *)v8 + v24);
    if ( *v8 == v23 )
      goto LABEL_109;
  }
  if ( v10 == 255 )
  {
    appended = 1001;
    goto LABEL_121;
  }
  ConditionToken = GetConditionToken(v8, &v72);
  v23 = 0;
  v69 = ConditionToken;
  v26 = ConditionToken;
  if ( !ConditionToken )
  {
    if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 || v13 == 3 )
      goto LABEL_107;
    if ( !v13 )
    {
      v13 = 5;
      if ( !v10 )
        goto LABEL_93;
      v48 = v10 - 1;
      if ( v10 - 1 < 0 )
        goto LABEL_93;
      while ( 1 )
      {
        LOBYTE(v66) = v78[v48 + 1];
        OperatorIndexByToken = GetOperatorIndexByToken(v66);
        if ( OperatorIndexByToken != -1 )
          break;
        --v51;
        v48 = v50 - 1;
        if ( v48 < 0 )
          goto LABEL_92;
      }
      v52 = *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8);
      if ( (unsigned __int8)(v52 + 119) > 3u
        && (unsigned __int8)(v52 + 112) > 3u
        && BYTE1((&Operators)[3 * OperatorIndexByToken + 1]) != (_BYTE)v23 )
      {
        v13 = 4;
      }
      if ( v52 == -121 || v52 == -115 )
        HIBYTE(v66) = 1;
LABEL_92:
      if ( v51 < 0 )
LABEL_93:
        v13 = 4;
    }
    v12 = v13;
    LOBYTE(v64) = a8;
    OperandValue = GetOperandValue(v8, v13 == 4, v23, &P, &v72, v76, v75, v74, v64);
    v14 = P;
    appended = OperandValue;
    if ( OperandValue )
      goto LABEL_119;
    if ( HIBYTE(v66) )
    {
      v54 = *((_BYTE *)P + 1);
      HIBYTE(v66) = 0;
      if ( ((v54 + 7) & 0xFC) == 0 && v54 != -6 )
      {
        appended = 1336;
        goto LABEL_119;
      }
    }
    v55 = *(const void ***)v67;
    LODWORD(Sizea) = 1;
    appended = AppendCondition(*(const void ***)v67, *(unsigned int **)v71, (unsigned int *)v70, (char *)P + 1, Sizea);
    if ( appended )
      goto LABEL_119;
    v56 = IsValueSizeFixed(*((_BYTE *)v14 + 1));
    v57 = *(unsigned int **)v71;
    if ( !v56 )
    {
      LODWORD(Size) = 4;
      appended = AppendCondition(v55, *(unsigned int **)v71, (unsigned int *)v70, (char *)v14 + 4, Size);
      if ( appended )
        goto LABEL_119;
    }
    if ( *((_DWORD *)v14 + 1) )
    {
      LODWORD(Size) = *((_DWORD *)v14 + 1);
      appended = AppendCondition(v55, v57, (unsigned int *)v70, (const void *)v14[1], Size);
      if ( appended )
        goto LABEL_119;
    }
    FreeOperandValue(v14);
    v23 = 0;
    v14 = 0LL;
    P = 0LL;
    v13 = 3;
    goto LABEL_104;
  }
  if ( ConditionToken == -2 )
  {
    if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 )
      goto LABEL_107;
    v27 = v10;
    v12 = 1;
    ++v10;
    v78[v27 + 1] = v26;
    goto LABEL_104;
  }
  v28 = v10;
  if ( ConditionToken != -1 )
  {
    v32 = GetOperatorIndexByToken(ConditionToken);
    v34 = &Operators;
    v35 = 3LL * v32;
    v70[1] = *((_DWORD *)&Operators + 6 * v32 + 3);
    if ( *((_BYTE *)&Operators + 24 * v32 + 18) != v33 && v12 != 4 && (v12 != 2 || v68 == v33) )
      goto LABEL_107;
    v36 = (char)(&Operators)[3 * v32 + 1];
    if ( v36 )
    {
      if ( v12 > 1 )
      {
        if ( v12 != 3 )
          goto LABEL_107;
        v37 = GetOperatorIndexByToken(v78[v10]);
        if ( BYTE3(v34[3 * v37 + 2]) )
          goto LABEL_107;
      }
    }
    v38 = BYTE3(v34[v35 + 2]);
    if ( !v38 && (v12 & 0xFFFFFFFC) == 0 && v12 != 2 )
      goto LABEL_107;
    if ( v13 == 5 )
      goto LABEL_107;
    if ( v10 )
    {
      if ( v38 )
      {
        v39 = v10 - 1;
        if ( v10 - 1 >= 0 )
        {
          while ( (unsigned int)GetOperatorIndexByToken(v78[v39 + 1]) == -1 )
          {
            v39 = v40 - 1;
            if ( v39 < 0 )
              goto LABEL_63;
          }
          v42 = 3LL * (int)GetOperatorIndexByToken(v78[v41 + 1]);
          if ( *((_BYTE *)&Operators + 8 * v42 + 19) )
          {
            if ( *((_BYTE *)&Operators + 8 * v42 + 8) != 0xA2 )
            {
LABEL_107:
              appended = 1336;
              goto LABEL_121;
            }
          }
        }
      }
    }
LABEL_63:
    if ( v36 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 0;
      if ( v38 )
      {
        v13 = 5;
LABEL_68:
        if ( v10 )
        {
          while ( 1 )
          {
            v43 = v78[v28];
            if ( v43 == -2 )
              break;
            LOBYTE(v66) = v78[v28];
            v65 = v43;
            v44 = GetOperatorIndexByToken(v66);
            if ( v45 > *((_DWORD *)&Operators + 6 * v44 + 3) )
              break;
            --v10;
            LODWORD(Size) = 1;
            --v28;
            v46 = AppendCondition(*(const void ***)v67, *(unsigned int **)v71, (unsigned int *)v70, &v65, Size);
            v23 = 0;
            appended = v46;
            if ( v46 )
              goto LABEL_121;
            LOBYTE(v66) = v65;
            if ( !v28 )
              goto LABEL_75;
          }
          v47 = v10++;
          v78[v47 + 1] = v69;
        }
LABEL_75:
        v12 = 3;
LABEL_104:
        v24 = 2LL * v72;
        goto LABEL_105;
      }
    }
    v13 = 0;
    goto LABEL_68;
  }
  if ( !v10 || v12 == 3 || v12 == 1 )
    goto LABEL_107;
  v29 = v78[v10];
  v68 = v29 == -2;
  while ( 1 )
  {
    v30 = v78[v28--];
    --v10;
    LOBYTE(v66) = v30;
    v65 = v30;
    if ( v30 == -2 )
      break;
    LODWORD(Size) = 1;
    appended = AppendCondition(*(const void ***)v67, *(unsigned int **)v71, (unsigned int *)v70, &v65, Size);
    if ( appended )
      goto LABEL_121;
    if ( !v28 )
    {
      LOBYTE(v66) = v65;
      if ( v65 != -2 )
        goto LABEL_107;
      break;
    }
  }
  if ( v10 )
  {
    v31 = GetOperatorIndexByToken(v78[v10]);
    if ( v31 != -1
      && v29 != -2
      && *((_BYTE *)&Operators + 24 * v31 + 19) != (_BYTE)v23
      && *((_BYTE *)&Operators + 24 * v31 + 8) != 0xA2 )
    {
      goto LABEL_107;
    }
    v12 = 2;
    goto LABEL_104;
  }
  v8 += v72;
LABEL_109:
  v9 = *(const void ***)v67;
LABEL_110:
  v58 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v59 = v78[v58--];
      v65 = v59;
      if ( v59 == -2 )
        break;
      LODWORD(Size) = 1;
      v60 = AppendCondition(v9, *(unsigned int **)v71, (unsigned int *)v70, &v65, Size);
      v9 = *(const void ***)v67;
      appended = v60;
      if ( v60 )
        goto LABEL_122;
      if ( !v58 )
        goto LABEL_118;
    }
    appended = 1336;
  }
LABEL_118:
  **(_DWORD **)v71 = v70[0];
  *v77 = v8;
LABEL_119:
  if ( v14 )
    FreeOperandValue(v14);
LABEL_121:
  v9 = *(const void ***)v67;
LABEL_122:
  v16 = *(unsigned int **)v71;
  if ( **(_DWORD **)v71 == 4 || appended )
  {
LABEL_124:
    if ( *v9 )
    {
      ExFreePoolWithTag((PVOID)*v9, 0);
      **(_QWORD **)v67 = 0LL;
      *v16 = 0;
    }
  }
  return appended;
}
