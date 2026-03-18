/*
 * XREFs of GetOperandValue @ 0x140798348
 * Callers:
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     wcstoxq @ 0x14018B02C (wcstoxq.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x140601728 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x140797784 (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x140797E48 (FreeOperandValue.c)
 *     GetAttributeName @ 0x140797E80 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1407980D8 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1407981C0 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1407982CC (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x1407994D0 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x140799728 (IsValueSizeFixed.c)
 */

__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int AttributeName; // esi
  PVOID v12; // rax
  __int64 v13; // rax
  wchar_t *v14; // rcx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rsi
  void *v19; // r11
  unsigned int v20; // edx
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // eax
  void *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // eax
  unsigned int *v33; // rcx
  PSID v34; // rbx
  bool v35; // zf
  void *v36; // rbx
  int v37; // r11d
  unsigned int v38; // ecx
  __int64 v39; // rax
  size_t v40; // rcx
  PVOID v41; // rax
  __int64 v42; // r9
  __int64 v43; // r9
  int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // r10
  void *v47; // rax
  wint_t *v48; // rdx
  wchar_t v49; // cx
  unsigned __int64 v50; // rax
  wint_t *v51; // rbx
  char v52; // bl
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  int v57; // [rsp+30h] [rbp-49h]
  int v58; // [rsp+38h] [rbp-41h]
  char v59; // [rsp+58h] [rbp-21h] BYREF
  char v60; // [rsp+59h] [rbp-20h]
  __int64 v61; // [rsp+60h] [rbp-19h] BYREF
  char *v62; // [rsp+68h] [rbp-11h] BYREF
  PSID Sid; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  int v65; // [rsp+80h] [rbp+7h] BYREF
  wint_t *v66; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v67; // [rsp+90h] [rbp+17h]
  char v70; // [rsp+D0h] [rbp+57h] BYREF

  AttributeName = 0;
  v66 = 0LL;
  v62 = 0LL;
  *a5 = 0;
  Sid = 0LL;
  v70 = 0;
  P = 0LL;
  v60 = 0;
  v12 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v12;
  if ( !v12 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, a5);
    goto LABEL_78;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, a5);
    if ( !AttributeName )
      goto LABEL_80;
LABEL_78:
    if ( AttributeName )
      goto LABEL_79;
    goto LABEL_80;
  }
  if ( *a1 == 123 )
  {
    v13 = *a4;
    LODWORD(v61) = 1;
    *(_BYTE *)(v13 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v61);
        if ( AttributeName )
          goto LABEL_79;
        v14 = &a1[(unsigned int)v61];
        if ( *v14 == 123 )
          goto LABEL_39;
        AttributeName = GetOperandValue((_DWORD)v14, 0, 0, (unsigned int)&P, (__int64)a5, a6, a7, a8, a9);
        if ( AttributeName )
          goto LABEL_79;
        if ( a3 )
        {
          if ( v60 && v60 != *((_BYTE *)P + 1) )
            goto LABEL_39;
          v60 = *((_BYTE *)P + 1);
        }
        LOBYTE(v15) = *((_BYTE *)P + 1);
        v16 = IsValueSizeFixed(v15);
        v18 = *a4;
        v59 = v16;
        v19 = *(void **)(v18 + 8);
        v20 = v16 != 0 ? 1 : 5;
        if ( v19 )
        {
          v21 = *(_DWORD *)(v18 + 4);
          v22 = -1;
          v23 = v21 + *(_DWORD *)(v17 + 4);
          if ( v23 < v21 )
            goto LABEL_36;
          v24 = v21 + *(_DWORD *)(v17 + 4);
          v25 = v20 + v23;
          if ( v20 + v24 >= v24 )
            v22 = v25;
          LODWORD(Sid) = v22;
          if ( v25 < v24 )
            goto LABEL_36;
          v26 = SddlpReAlloc(v21, v22, v19);
          *(_QWORD *)(v18 + 8) = v26;
          if ( !v26 )
            goto LABEL_2;
        }
        else
        {
          v27 = -1;
          v28 = v20 + *(_DWORD *)(v17 + 4);
          if ( v28 >= v20 )
            v27 = v20 + *(_DWORD *)(v17 + 4);
          LODWORD(Sid) = v27;
          if ( v28 < v20 )
          {
LABEL_36:
            AttributeName = 534;
            goto LABEL_79;
          }
          *(_QWORD *)(v18 + 8) = SddlpAlloc(v27);
        }
        v29 = *(_QWORD *)(v18 + 8);
        if ( !v29 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v18 + 4) + v29) = *((_BYTE *)P + 1);
        if ( v59 )
        {
          v30 = 1LL;
        }
        else
        {
          v30 = 5LL;
          *(_DWORD *)(*(unsigned int *)(v18 + 4) + *(_QWORD *)(v18 + 8) + 1LL) = *((_DWORD *)P + 1);
        }
        memmove(
          (void *)(v30 + *(_QWORD *)(v18 + 8) + *(unsigned int *)(v18 + 4)),
          *((const void **)P + 1),
          *((unsigned int *)P + 1));
        *(_DWORD *)(v18 + 4) = (_DWORD)Sid;
        FreeOperandValue(P);
        P = 0LL;
        LODWORD(v61) = *a5 + v61;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v61);
        if ( AttributeName )
          goto LABEL_79;
        if ( a1[(unsigned int)v61] != 44 )
        {
          if ( a1[(unsigned int)v61] != 125 )
            goto LABEL_39;
          *a5 = v61 + 1;
          goto LABEL_80;
        }
        LODWORD(v61) = v61 + 1;
        if ( !a1[(unsigned int)v61] )
          goto LABEL_80;
      }
    }
    goto LABEL_80;
  }
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    LODWORD(v61) = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v61);
    if ( AttributeName )
      goto LABEL_79;
    if ( a1[(unsigned int)v61] == 40 )
    {
      v67 = (unsigned int)(v61 + 1);
      v61 = 2 * v67;
      AttributeName = LocalGetSidForString(&a1[v67], &Sid, &v62, &v70, a6, v57, v58, a9);
      if ( !AttributeName )
      {
        LODWORD(v61) = v67 + ((&v62[-v61] - (char *)a1) >> 1);
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v61);
        if ( !AttributeName )
        {
          if ( a1[(unsigned int)v61] == 41 )
          {
            v31 = *a4;
            v32 = v61 + 1;
            v33 = a5;
            v34 = Sid;
            *(_BYTE *)(v31 + 1) = 81;
            *v33 = v32;
            *(_DWORD *)(v31 + 4) = RtlLengthSid(v34);
            v35 = v70 == 0;
            *(_QWORD *)(v31 + 8) = v34;
            v36 = 0LL;
            *(_BYTE *)v31 = v35;
            goto LABEL_81;
          }
          AttributeName = 1336;
        }
      }
      v62 = (char *)Sid;
      goto LABEL_79;
    }
    goto LABEL_39;
  }
  GetBinaryOperandLen(a1, &v61);
  v38 = v61;
  if ( *a1 != 35 )
  {
    if ( !(_DWORD)v61 )
      goto LABEL_39;
    v65 = v37;
    *a5 = v61;
    v47 = (void *)wcstoxq(0LL, a1, &v66, 0, 1, &v65);
    v48 = v66;
    Sid = v47;
    if ( v66 == a1 && !v47 )
      goto LABEL_39;
    if ( v66 != &a1[(unsigned int)v61] || v65 )
      goto LABEL_39;
    v49 = *a1;
    if ( *a1 == 45 )
    {
      v50 = wcstoxq(0LL, ++a1, &v66, 0, 1, &v65);
      if ( v50 >= (unsigned __int64)Sid && v50 )
        goto LABEL_39;
      v49 = *a1;
      v48 = v66;
      LOWORD(a5) = 2;
    }
    else if ( v49 == 43 )
    {
      ++a1;
      LODWORD(a5) = 1;
      v49 = *a1;
    }
    else
    {
      LOWORD(a5) = 3;
    }
    if ( v49 == 48 )
    {
      v51 = a1 + 1;
      if ( v51 >= v48 || ((*v51 - 88) & 0xFFDF) != 0 )
        v52 = 1;
      else
        v52 = 3;
    }
    else
    {
      v52 = 2;
    }
    v53 = *a4;
    *(_BYTE *)(v53 + 1) = 4;
    *(_DWORD *)(v53 + 4) = 10;
    v54 = SddlpAlloc(0xAuLL);
    v55 = *a4;
    *(_QWORD *)(*a4 + 8) = v54;
    if ( !v54 )
      goto LABEL_2;
    *v54 = Sid;
    *(_WORD *)(*(_QWORD *)(v55 + 8) + 8LL) = (_WORD)a5;
    *(_BYTE *)(*(_QWORD *)(v55 + 8) + 9LL) = v52;
    goto LABEL_80;
  }
  if ( (unsigned int)v61 < 2 )
  {
LABEL_39:
    AttributeName = 1336;
    goto LABEL_79;
  }
  *a5 = v61;
  v39 = *a4;
  v40 = v38 >> 1;
  LODWORD(a5) = v40;
  *(_BYTE *)(v39 + 1) = 24;
  *(_DWORD *)(v39 + 4) = v40;
  v41 = SddlpAlloc(v40);
  *(_QWORD *)(*a4 + 8) = v41;
  if ( !v41 )
  {
LABEL_2:
    AttributeName = 8;
LABEL_79:
    FreeOperandValue((_QWORD *)*a4);
    *a4 = 0LL;
    goto LABEL_80;
  }
  v42 = (int)v61 - 1;
  if ( v42 >= 1 )
  {
    while ( GetDigitFromChar(a1[v42], &v59) && GetDigitFromChar(a1[v43 - 1], &a5) )
    {
      v42 = v45 - 2;
      *(_BYTE *)((unsigned int)(v44 - 1) + *(_QWORD *)(v46 + 8)) = v59 | (16 * (_BYTE)a5);
      if ( v42 < 1 )
        goto LABEL_80;
    }
    goto LABEL_2;
  }
LABEL_80:
  v36 = v62;
LABEL_81:
  if ( P )
    FreeOperandValue(P);
  if ( v36 && v70 )
    ExFreePoolWithTag(v36, 0);
  return AttributeName;
}
