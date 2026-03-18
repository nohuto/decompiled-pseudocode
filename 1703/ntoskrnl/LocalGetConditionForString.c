/*
 * XREFs of LocalGetConditionForString @ 0x1406FE4E8
 * Callers:
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     iswspace @ 0x14016A7F0 (iswspace.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     AppendCondition @ 0x1406FC724 (AppendCondition.c)
 *     FreeOperandValue @ 0x1406FCBEC (FreeOperandValue.c)
 *     GetConditionToken @ 0x1406FCEF0 (GetConditionToken.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     GetOperatorIndexByToken @ 0x1406FD8AC (GetOperatorIndexByToken.c)
 *     IsValueSizeFixed @ 0x1406FE4BC (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(
        wint_t *a1,
        wint_t **a2,
        const void **a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wint_t *v8; // r14
  const void **v9; // r12
  int v10; // esi
  unsigned int appended; // ebx
  unsigned int v12; // edi
  int v13; // r15d
  _QWORD *v14; // r13
  __int64 v15; // rax
  unsigned int *v16; // rdi
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  __int16 v21; // r10
  int v22; // eax
  __int64 v23; // rax
  char ConditionToken; // al
  char v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  char v28; // di
  char v29; // al
  int v30; // eax
  int v31; // eax
  char v32; // r10
  __int64 v33; // r8
  char v34; // r11
  int v35; // eax
  char v36; // r10
  char v37; // r10
  __int64 v38; // r8
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  char *v42; // rdi
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
  char v53; // al
  unsigned int OperandValue; // eax
  char v55; // cl
  unsigned int *v56; // r15
  __int64 v57; // rdi
  char v58; // al
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+50h] [rbp-B0h] BYREF
  char v63; // [rsp+51h] [rbp-AFh]
  __int16 v64; // [rsp+52h] [rbp-AEh]
  int v65[2]; // [rsp+58h] [rbp-A8h]
  int v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v67[2]; // [rsp+68h] [rbp-98h]
  unsigned int v68; // [rsp+70h] [rbp-90h] BYREF
  wint_t *v69; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  wint_t **v74; // [rsp+A0h] [rbp-60h]
  _BYTE v76[256]; // [rsp+B0h] [rbp-50h] BYREF

  v69 = a1;
  v8 = a1;
  *(_QWORD *)v65 = a3;
  v73 = a5;
  v9 = a3;
  v10 = 0;
  v72 = a6;
  appended = 0;
  v12 = 0;
  v71 = a7;
  v13 = 0;
  *(_QWORD *)v67 = a4;
  v14 = 0LL;
  v74 = a2;
  v63 = 0;
  P = 0LL;
  v64 = 0;
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
    v16 = (unsigned int *)a4;
    goto LABEL_129;
  }
  v17 = v15 + 1;
  v18 = -1;
  if ( v17 )
    v18 = v17;
  *a4 = v18;
  if ( !v17 )
  {
    appended = 534;
    goto LABEL_116;
  }
  v19 = 2LL * (unsigned int)*a4;
  if ( v19 > 0xFFFFFFFF )
  {
    *a4 = -1;
    appended = 534;
    v16 = (unsigned int *)a4;
    goto LABEL_129;
  }
  *a4 = v19;
  v20 = SddlpAlloc((unsigned int)v19);
  v21 = 0;
  *v9 = v20;
  if ( !v20 )
  {
    appended = 8;
    goto LABEL_116;
  }
  *v20 = 2020897377;
  v66[0] = 4;
  while ( 1 )
  {
    if ( *v8 == v21 )
      goto LABEL_108;
    v22 = iswspace(*v8);
    v21 = 0;
    if ( v22 )
    {
      v23 = 2LL;
      goto LABEL_106;
    }
    if ( v10 == 255 )
    {
      appended = 1001;
      goto LABEL_116;
    }
    ConditionToken = GetConditionToken(v8, &v68);
    v21 = 0;
    v25 = ConditionToken;
    if ( !ConditionToken )
    {
      if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 || v13 == 3 )
        break;
      if ( !v13 )
      {
        v13 = 5;
        if ( !v10 )
          goto LABEL_91;
        v48 = v10 - 1;
        if ( v10 - 1 < 0 )
          goto LABEL_91;
        while ( 1 )
        {
          v63 = v76[v48];
          OperatorIndexByToken = GetOperatorIndexByToken(v63);
          if ( OperatorIndexByToken != -1 )
            break;
          --v51;
          v48 = v50 - 1;
          if ( v48 < 0 )
            goto LABEL_90;
        }
        v52 = *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8);
        if ( (unsigned __int8)(v52 + 119) > 3u
          && (unsigned __int8)(v52 + 112) > 3u
          && BYTE1((&Operators)[3 * OperatorIndexByToken + 1]) != (_BYTE)v21 )
        {
          v13 = 4;
        }
        if ( v52 == -121 || v52 == -115 )
          LOBYTE(v64) = 1;
LABEL_90:
        if ( v51 < 0 )
LABEL_91:
          v13 = 4;
      }
      v12 = v13;
      v53 = 1;
      if ( v13 != 4 )
        v53 = v21;
      OperandValue = GetOperandValue(v8, v53, v21, (__int64 *)&P, &v68, v73, v72, v71, a8);
      v14 = P;
      appended = OperandValue;
      if ( OperandValue )
        goto LABEL_125;
      if ( (_BYTE)v64 )
      {
        v55 = *((_BYTE *)P + 1);
        LOBYTE(v64) = 0;
        if ( ((v55 + 7) & 0xFC) == 0 && v55 != -6 )
        {
          appended = 1336;
          goto LABEL_125;
        }
      }
      v56 = *(unsigned int **)v67;
      v9 = *(const void ***)v65;
      LODWORD(Sizea) = 1;
      appended = AppendCondition(*(const void ***)v65, *(unsigned int **)v67, (unsigned int *)v66, (char *)P + 1, Sizea);
      if ( appended )
        goto LABEL_126;
      if ( !IsValueSizeFixed(*((_BYTE *)v14 + 1)) )
      {
        LODWORD(Size) = 4;
        appended = AppendCondition(v9, v56, (unsigned int *)v66, (char *)v14 + 4, Size);
        if ( appended )
          goto LABEL_126;
      }
      if ( *((_DWORD *)v14 + 1) )
      {
        LODWORD(Size) = *((_DWORD *)v14 + 1);
        appended = AppendCondition(v9, v56, (unsigned int *)v66, (const void *)v14[1], Size);
        if ( appended )
          goto LABEL_126;
      }
      FreeOperandValue(v14);
      v21 = 0;
      v14 = 0LL;
      P = 0LL;
      v13 = 3;
      goto LABEL_104;
    }
    if ( ConditionToken == -2 )
    {
      if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 )
        break;
      v26 = v10;
      v12 = 1;
      ++v10;
      v76[v26] = v25;
      v9 = *(const void ***)v65;
      goto LABEL_105;
    }
    v27 = v10;
    if ( ConditionToken == -1 )
    {
      if ( !v10 || v12 == 3 )
        break;
      v9 = *(const void ***)v65;
      if ( v12 == 1 )
        goto LABEL_120;
      v28 = v76[v10 - 1];
      HIBYTE(v64) = v28 == -2;
      while ( 1 )
      {
        v29 = v76[--v27];
        --v10;
        v63 = v29;
        v62 = v29;
        if ( v29 == -2 )
          break;
        LODWORD(Size) = 1;
        appended = AppendCondition(v9, *(unsigned int **)v67, (unsigned int *)v66, &v62, Size);
        if ( appended )
          goto LABEL_116;
        if ( !v27 )
        {
          v63 = v62;
          if ( v62 != -2 )
            goto LABEL_120;
          break;
        }
      }
      if ( !v10 )
      {
        v8 = &v69[v68];
LABEL_108:
        v57 = v10;
        if ( v10 )
        {
          v9 = *(const void ***)v65;
          while ( 1 )
          {
            v58 = v76[--v57];
            v62 = v58;
            if ( v58 == -2 )
              break;
            LODWORD(Size) = 1;
            appended = AppendCondition(v9, *(unsigned int **)v67, (unsigned int *)v66, &v62, Size);
            if ( appended )
              goto LABEL_116;
            if ( !v57 )
              goto LABEL_124;
          }
          appended = 1336;
        }
LABEL_124:
        **(_DWORD **)v67 = v66[0];
        *v74 = v8;
LABEL_125:
        v9 = *(const void ***)v65;
LABEL_126:
        if ( v14 )
          FreeOperandValue(v14);
        goto LABEL_116;
      }
      v30 = GetOperatorIndexByToken(v76[v10 - 1]);
      if ( v30 != -1
        && v28 != -2
        && *((_BYTE *)&Operators + 24 * v30 + 19) != (_BYTE)v21
        && *((_BYTE *)&Operators + 24 * v30 + 8) != 0xA2 )
      {
LABEL_120:
        appended = 1336;
        goto LABEL_116;
      }
      v12 = 2;
      goto LABEL_104;
    }
    v31 = GetOperatorIndexByToken(ConditionToken);
    v33 = 3LL * v31;
    v66[1] = *((_DWORD *)&Operators + 6 * v31 + 3);
    if ( *((_BYTE *)&Operators + 24 * v31 + 18) != v32 && v12 != 4 && (v12 != 2 || HIBYTE(v64) == v32) )
      break;
    v34 = (char)(&Operators)[3 * v31 + 1];
    if ( v34 )
    {
      if ( v12 > 1 )
      {
        if ( v12 != 3 )
          break;
        v35 = GetOperatorIndexByToken(v76[v10 - 1]);
        if ( *((_BYTE *)&Operators + 24 * v35 + 19) != v36 )
          break;
      }
    }
    v37 = *((_BYTE *)&Operators + 8 * v33 + 19);
    if ( !v37 && (v12 & 0xFFFFFFFC) == 0 && v12 != 2 )
      break;
    if ( v13 == 5 )
      break;
    if ( v10 )
    {
      if ( v37 )
      {
        v38 = v10 - 1;
        if ( v10 - 1 >= 0 )
        {
          while ( (unsigned int)GetOperatorIndexByToken(v76[v38]) == -1 )
          {
            v38 = v39 - 1;
            if ( v38 < 0 )
              goto LABEL_61;
          }
          v41 = 3LL * (int)GetOperatorIndexByToken(v76[v40]);
          if ( *((_BYTE *)&Operators + 8 * v41 + 19) )
          {
            if ( *((_BYTE *)&Operators + 8 * v41 + 8) != 0xA2 )
              break;
          }
        }
      }
    }
LABEL_61:
    if ( v34 || !v37 )
    {
      v21 = 0;
      v13 = 0;
    }
    else
    {
      v13 = 5;
      v21 = 0;
    }
    if ( v10 )
    {
      v42 = &v76[v10 - 1];
      while ( 1 )
      {
        v43 = *v42;
        if ( *v42 == -2 )
          break;
        v63 = *v42;
        v62 = v43;
        v44 = GetOperatorIndexByToken(v63);
        if ( v45 > *((_DWORD *)&Operators + 6 * v44 + 3) )
          break;
        --v10;
        LODWORD(Size) = 1;
        --v42;
        v46 = AppendCondition(*(const void ***)v65, *(unsigned int **)v67, (unsigned int *)v66, &v62, Size);
        v21 = 0;
        appended = v46;
        if ( v46 )
          goto LABEL_115;
        v63 = v62;
        if ( !&v42[1LL - (_QWORD)v76] )
          goto LABEL_73;
      }
      v47 = v10++;
      v76[v47] = v25;
    }
LABEL_73:
    v9 = *(const void ***)v65;
    v12 = 3;
LABEL_104:
    v8 = v69;
LABEL_105:
    v23 = 2LL * v68;
LABEL_106:
    v8 = (wint_t *)((char *)v8 + v23);
    v69 = v8;
  }
  appended = 1336;
LABEL_115:
  v9 = *(const void ***)v65;
LABEL_116:
  v16 = *(unsigned int **)v67;
  if ( **(_DWORD **)v67 == 4 || appended )
  {
LABEL_129:
    if ( *v9 )
    {
      ExFreePoolWithTag((PVOID)*v9, 0);
      *v9 = 0LL;
      *v16 = 0;
    }
  }
  return appended;
}
