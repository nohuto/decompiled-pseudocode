/*
 * XREFs of LocalGetConditionForString @ 0x140799754
 * Callers:
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     iswspace @ 0x140188FA0 (iswspace.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     AppendCondition @ 0x1407979BC (AppendCondition.c)
 *     FreeOperandValue @ 0x140797E48 (FreeOperandValue.c)
 *     GetConditionToken @ 0x140798130 (GetConditionToken.c)
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     GetOperatorIndexByToken @ 0x140798AFC (GetOperatorIndexByToken.c)
 *     IsValueSizeFixed @ 0x140799728 (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(
        wint_t *a1,
        wint_t **a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wint_t *v8; // r14
  unsigned int *v9; // r15
  int v10; // esi
  unsigned int appended; // ebx
  unsigned int v12; // edi
  int v13; // r13d
  _QWORD *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  char ConditionToken; // al
  char v22; // r10
  char v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  char v26; // di
  char v27; // al
  int v28; // eax
  char v29; // r10
  int v30; // eax
  char v31; // r10
  __int64 v32; // r8
  char v33; // r11
  int v34; // eax
  char v35; // r10
  char v36; // r10
  __int64 v37; // r8
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  unsigned int *v41; // rdi
  char v42; // al
  int v43; // eax
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // r8
  int OperatorIndexByToken; // eax
  __int64 v48; // r8
  int v49; // r9d
  char v50; // cl
  unsigned int OperandValue; // eax
  char v52; // cl
  const void **v53; // r13
  __int64 v54; // rdi
  const void **v55; // r13
  char v56; // al
  const void **v57; // rdi
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v61; // [rsp+50h] [rbp-B0h] BYREF
  char v62; // [rsp+51h] [rbp-AFh]
  __int16 v63; // [rsp+52h] [rbp-AEh]
  int v64[2]; // [rsp+58h] [rbp-A8h]
  int v65[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  int v67[2]; // [rsp+70h] [rbp-90h]
  wint_t *v68; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  wint_t **v73; // [rsp+A0h] [rbp-60h]
  _BYTE v74[257]; // [rsp+AFh] [rbp-51h]

  v68 = a1;
  v8 = a1;
  *(_QWORD *)v64 = a4;
  v72 = a5;
  v9 = a4;
  v10 = 0;
  v71 = a6;
  appended = 0;
  v12 = 0;
  v70 = a7;
  v13 = 0;
  *(_QWORD *)v67 = a3;
  v14 = 0LL;
  v73 = a2;
  v62 = 0;
  P = 0LL;
  v63 = 0;
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
    goto LABEL_125;
  }
  v16 = v15 + 1;
  v17 = -1;
  if ( v16 )
    v17 = v16;
  *a4 = v17;
  if ( !v16 )
  {
LABEL_13:
    appended = 534;
    goto LABEL_121;
  }
  v18 = 2LL * v17;
  if ( v18 > 0xFFFFFFFF )
  {
    *a4 = -1;
    goto LABEL_13;
  }
  *a4 = v18;
  v19 = SddlpAlloc((unsigned int)v18);
  **(_QWORD **)v67 = v19;
  if ( !v19 )
  {
    appended = 8;
    goto LABEL_121;
  }
  *v19 = 2020897377;
  v65[0] = 4;
  while ( 1 )
  {
    if ( !*v8 )
      goto LABEL_106;
    if ( iswspace(*v8) )
    {
      v20 = 2LL;
      goto LABEL_104;
    }
    if ( v10 == 255 )
    {
      appended = 1001;
      goto LABEL_121;
    }
    ConditionToken = GetConditionToken(v8, &v66);
    v22 = 0;
    v23 = ConditionToken;
    if ( !ConditionToken )
    {
      if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 || v13 == 3 )
        goto LABEL_112;
      if ( !v13 )
      {
        v13 = 5;
        if ( !v10 )
          goto LABEL_91;
        v46 = v10 - 1;
        if ( v10 - 1 < 0 )
          goto LABEL_91;
        while ( 1 )
        {
          v62 = v74[v46 + 1];
          OperatorIndexByToken = GetOperatorIndexByToken(v62);
          if ( OperatorIndexByToken != -1 )
            break;
          --v49;
          v46 = v48 - 1;
          if ( v46 < 0 )
            goto LABEL_90;
        }
        v50 = *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8);
        if ( (unsigned __int8)(v50 + 119) > 3u
          && (unsigned __int8)(v50 + 112) > 3u
          && BYTE1((&Operators)[3 * OperatorIndexByToken + 1]) != v22 )
        {
          v13 = 4;
        }
        if ( v50 == -121 || v50 == -115 )
          LOBYTE(v63) = 1;
LABEL_90:
        if ( v49 < 0 )
LABEL_91:
          v13 = 4;
      }
      v12 = v13;
      OperandValue = GetOperandValue(v8, v13 == 4, v22, (__int64 *)&P, &v66, v72, v71, v70, a8);
      v14 = P;
      appended = OperandValue;
      if ( OperandValue )
        goto LABEL_113;
      if ( (_BYTE)v63 )
      {
        v52 = *((_BYTE *)P + 1);
        LOBYTE(v63) = 0;
        if ( ((v52 + 7) & 0xFC) == 0 && v52 != -6 )
          goto LABEL_112;
      }
      v9 = *(unsigned int **)v64;
      v53 = *(const void ***)v67;
      LODWORD(Sizea) = 1;
      appended = AppendCondition(*(const void ***)v67, *(unsigned int **)v64, (unsigned int *)v65, (char *)P + 1, Sizea);
      if ( appended )
        goto LABEL_121;
      if ( !IsValueSizeFixed(*((_BYTE *)v14 + 1)) )
      {
        LODWORD(Size) = 4;
        appended = AppendCondition(v53, v9, (unsigned int *)v65, (char *)v14 + 4, Size);
        if ( appended )
          goto LABEL_121;
      }
      if ( *((_DWORD *)v14 + 1) )
      {
        LODWORD(Size) = *((_DWORD *)v14 + 1);
        appended = AppendCondition(v53, v9, (unsigned int *)v65, (const void *)v14[1], Size);
        if ( appended )
          goto LABEL_121;
      }
      FreeOperandValue(v14);
      v14 = 0LL;
      P = 0LL;
      v13 = 3;
      goto LABEL_102;
    }
    if ( ConditionToken == -2 )
    {
      if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 )
        goto LABEL_112;
      v24 = v10;
      v12 = 1;
      ++v10;
      v74[v24 + 1] = v23;
      v9 = *(unsigned int **)v64;
      goto LABEL_103;
    }
    v25 = v10;
    if ( ConditionToken == -1 )
    {
      if ( !v10 || v12 == 3 )
        goto LABEL_112;
      v9 = *(unsigned int **)v64;
      if ( v12 == 1 )
        goto LABEL_115;
      v26 = v74[v10];
      HIBYTE(v63) = v26 == -2;
      while ( 1 )
      {
        v27 = v74[v25--];
        --v10;
        v62 = v27;
        v61 = v27;
        if ( v27 == -2 )
          break;
        LODWORD(Size) = 1;
        appended = AppendCondition(*(const void ***)v67, v9, (unsigned int *)v65, &v61, Size);
        if ( appended )
          goto LABEL_121;
        if ( !v25 )
        {
          v62 = v61;
          if ( v61 != -2 )
            goto LABEL_115;
          break;
        }
      }
      if ( !v10 )
      {
        v8 = &v68[v66];
LABEL_106:
        v9 = *(unsigned int **)v64;
        v54 = v10;
        if ( v10 )
        {
          v55 = *(const void ***)v67;
          while ( 1 )
          {
            v56 = v74[v54--];
            v61 = v56;
            if ( v56 == -2 )
              break;
            LODWORD(Size) = 1;
            appended = AppendCondition(v55, v9, (unsigned int *)v65, &v61, Size);
            if ( appended )
              goto LABEL_121;
            if ( !v54 )
              goto LABEL_118;
          }
          appended = 1336;
        }
LABEL_118:
        *v9 = v65[0];
        *v73 = v8;
        goto LABEL_121;
      }
      v28 = GetOperatorIndexByToken(v74[v10]);
      if ( v28 != -1
        && v26 != -2
        && *((_BYTE *)&Operators + 24 * v28 + 19) != v29
        && *((_BYTE *)&Operators + 24 * v28 + 8) != 0xA2 )
      {
LABEL_115:
        appended = 1336;
        goto LABEL_121;
      }
      v12 = 2;
      goto LABEL_102;
    }
    v30 = GetOperatorIndexByToken(ConditionToken);
    v32 = 3LL * v30;
    v65[1] = *((_DWORD *)&Operators + 6 * v30 + 3);
    if ( *((_BYTE *)&Operators + 24 * v30 + 18) != v31 && v12 != 4 && (v12 != 2 || HIBYTE(v63) == v31) )
      goto LABEL_112;
    v33 = (char)(&Operators)[3 * v30 + 1];
    if ( v33 )
    {
      if ( v12 > 1 )
      {
        if ( v12 != 3 )
          goto LABEL_112;
        v34 = GetOperatorIndexByToken(v74[v10]);
        if ( *((_BYTE *)&Operators + 24 * v34 + 19) != v35 )
          goto LABEL_112;
      }
    }
    v36 = *((_BYTE *)&Operators + 8 * v32 + 19);
    if ( !v36 && (v12 & 0xFFFFFFFC) == 0 && v12 != 2 )
      goto LABEL_112;
    if ( (unsigned int)(v13 - 4) <= 1 )
      goto LABEL_112;
    if ( v10 )
    {
      if ( v36 )
      {
        v37 = v10 - 1;
        if ( v10 - 1 >= 0 )
        {
          while ( (unsigned int)GetOperatorIndexByToken(v74[v37 + 1]) == -1 )
          {
            v37 = v38 - 1;
            if ( v37 < 0 )
              goto LABEL_61;
          }
          v40 = 3LL * (int)GetOperatorIndexByToken(v74[v39 + 1]);
          if ( *((_BYTE *)&Operators + 8 * v40 + 19) )
          {
            if ( *((_BYTE *)&Operators + 8 * v40 + 8) != 0xA2 )
            {
LABEL_112:
              appended = 1336;
LABEL_113:
              v9 = *(unsigned int **)v64;
              goto LABEL_121;
            }
          }
        }
      }
    }
LABEL_61:
    v13 = v33 || !v36 ? 0 : 5;
    if ( v10 )
      break;
LABEL_73:
    v9 = *(unsigned int **)v64;
    v12 = 3;
LABEL_102:
    v8 = v68;
LABEL_103:
    v20 = 2LL * v66;
LABEL_104:
    v8 = (wint_t *)((char *)v8 + v20);
    v68 = v8;
  }
  v41 = *(unsigned int **)v64;
  while ( 1 )
  {
    v42 = v74[v25];
    if ( v42 == -2
      || (v62 = v74[v25], v61 = v42, v43 = GetOperatorIndexByToken(v62), v44 > *((_DWORD *)&Operators + 6 * v43 + 3)) )
    {
      v45 = v10++;
      v74[v45 + 1] = v23;
      goto LABEL_73;
    }
    LODWORD(Size) = 1;
    --v10;
    --v25;
    appended = AppendCondition(*(const void ***)v67, v41, (unsigned int *)v65, &v61, Size);
    if ( appended )
      break;
    v62 = v61;
    if ( !v25 )
      goto LABEL_73;
  }
  v9 = v41;
LABEL_121:
  if ( v14 )
    FreeOperandValue(v14);
  if ( *v9 == 4 || appended )
  {
LABEL_125:
    v57 = *(const void ***)v67;
    if ( **(_QWORD **)v67 )
    {
      ExFreePoolWithTag(**(PVOID **)v67, 0);
      *v57 = 0LL;
      *v9 = 0;
    }
  }
  return appended;
}
