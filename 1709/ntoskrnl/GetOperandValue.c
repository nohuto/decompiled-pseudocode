/*
 * XREFs of GetOperandValue @ 0x140734AFC
 * Callers:
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     wcstoxq @ 0x140160E88 (wcstoxq.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x14057C4E4 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x140733EDC (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x1407345E4 (FreeOperandValue.c)
 *     GetAttributeName @ 0x14073461C (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x140734894 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x140734978 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x140734A84 (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     GetStringOperandValue @ 0x140735C84 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x140735EDC (IsValueSizeFixed.c)
 */

__int64 GetOperandValue(wchar_t *a1, char a2, char a3, ...)
{
  __int64 *v4; // rdi
  unsigned int AttributeName; // esi
  PVOID v6; // rax
  __int64 v7; // rax
  wchar_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  void *v12; // r11
  unsigned int v13; // r10d
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  void *v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // rdi
  unsigned int v26; // eax
  unsigned int *v27; // rcx
  PSID v28; // rbx
  bool v29; // zf
  void *v30; // rbx
  int v31; // r10d
  unsigned int v32; // ecx
  __int64 v33; // rax
  size_t v34; // rcx
  PVOID v35; // rax
  __int64 v36; // r9
  __int64 v37; // r9
  int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  wint_t *v42; // rdx
  unsigned __int64 v43; // rax
  wint_t *v44; // rbx
  char v45; // bl
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  int v50; // [rsp+30h] [rbp-49h]
  int v51; // [rsp+38h] [rbp-41h]
  char v52; // [rsp+58h] [rbp-21h] BYREF
  char v53; // [rsp+59h] [rbp-20h]
  __int64 v54; // [rsp+60h] [rbp-19h] BYREF
  char *v55; // [rsp+68h] [rbp-11h] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  int v57; // [rsp+78h] [rbp-1h] BYREF
  PSID Sid; // [rsp+80h] [rbp+7h] BYREF
  wint_t *v59[4]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v62; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  unsigned int *v64; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v66; // [rsp+E0h] [rbp+67h]
  __int64 v67; // [rsp+E8h] [rbp+6Fh]
  __int64 v68; // [rsp+F0h] [rbp+77h]
  __int64 v69; // [rsp+F8h] [rbp+7Fh]
  va_list va2; // [rsp+100h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v62 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v64 = va_arg(va2, unsigned int *);
  v66 = va_arg(va2, _QWORD);
  v67 = va_arg(va2, _QWORD);
  v68 = va_arg(va2, _QWORD);
  v69 = va_arg(va2, _QWORD);
  v4 = (__int64 *)v62;
  AttributeName = 0;
  v59[0] = 0LL;
  v55 = 0LL;
  *v64 = 0;
  Sid = 0LL;
  v52 = 0;
  P = 0LL;
  v53 = 0;
  v6 = SddlpAlloc(0x10uLL);
  *v4 = (__int64)v6;
  if ( !v6 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, v4, v64);
    goto LABEL_80;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, v4, v64);
    if ( !AttributeName )
      goto LABEL_82;
LABEL_80:
    if ( AttributeName )
      goto LABEL_81;
    goto LABEL_82;
  }
  if ( *a1 == 123 )
  {
    v7 = *v4;
    LODWORD(v54) = 1;
    *(_BYTE *)(v7 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v54);
        if ( AttributeName )
          goto LABEL_81;
        v8 = &a1[(unsigned int)v54];
        if ( *v8 == 123 )
          goto LABEL_39;
        AttributeName = GetOperandValue((_DWORD)v8, 0, 0, (unsigned int)&P, (__int64)v64, v66, v67, v68, v69);
        if ( AttributeName )
          goto LABEL_81;
        if ( a3 )
        {
          if ( v53 && v53 != *((_BYTE *)P + 1) )
            goto LABEL_39;
          v53 = *((_BYTE *)P + 1);
        }
        LOBYTE(v9) = *((_BYTE *)P + 1);
        LOBYTE(v62) = IsValueSizeFixed(v9);
        v11 = (_BYTE)v62 != 0 ? 1 : 5;
        v12 = *(void **)(*v4 + 8);
        if ( v12 )
        {
          v13 = *(_DWORD *)(*v4 + 4);
          v14 = v13 + *(_DWORD *)(v10 + 4);
          if ( v14 < v13 )
            goto LABEL_36;
          v15 = v13 + *(_DWORD *)(v10 + 4);
          v16 = v11 + v14;
          v17 = -1;
          if ( v11 + v15 >= v15 )
            v17 = v16;
          LODWORD(Sid) = v17;
          if ( v16 < v15 )
            goto LABEL_36;
          v18 = SddlpReAlloc(v13, v17, v12);
          v19 = *v4;
          *(_QWORD *)(*v4 + 8) = v18;
          if ( !v18 )
            goto LABEL_2;
        }
        else
        {
          v20 = -1;
          v21 = v11 + *(_DWORD *)(v10 + 4);
          if ( v21 >= v11 )
            v20 = v11 + *(_DWORD *)(v10 + 4);
          LODWORD(Sid) = v20;
          if ( v21 < v11 )
          {
LABEL_36:
            AttributeName = 534;
            goto LABEL_81;
          }
          v19 = *v4;
          *(_QWORD *)(v19 + 8) = SddlpAlloc(v20);
        }
        v22 = *(_QWORD *)(v19 + 8);
        if ( !v22 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v19 + 4) + v22) = *((_BYTE *)P + 1);
        if ( (_BYTE)v62 )
        {
          v23 = 1LL;
        }
        else
        {
          v23 = 5LL;
          *(_DWORD *)(*(unsigned int *)(v19 + 4) + *(_QWORD *)(v19 + 8) + 1LL) = *((_DWORD *)P + 1);
        }
        memmove(
          (void *)(*(_QWORD *)(v19 + 8) + v23 + *(unsigned int *)(v19 + 4)),
          *((const void **)P + 1),
          *((unsigned int *)P + 1));
        *(_DWORD *)(v19 + 4) = (_DWORD)Sid;
        FreeOperandValue(P);
        P = 0LL;
        LODWORD(v54) = *v64 + v54;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v54);
        if ( AttributeName )
          goto LABEL_81;
        if ( a1[(unsigned int)v54] != 44 )
        {
          if ( a1[(unsigned int)v54] != 125 )
            goto LABEL_39;
          *v64 = v54 + 1;
          goto LABEL_82;
        }
        LODWORD(v54) = v54 + 1;
        if ( !a1[(unsigned int)v54] )
          goto LABEL_82;
      }
    }
    goto LABEL_82;
  }
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    LODWORD(v54) = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v54);
    if ( !AttributeName )
    {
      if ( a1[(unsigned int)v54] == 40 )
      {
        v24 = v54 + 1;
        v54 = 2LL * (unsigned int)(v54 + 1);
        AttributeName = LocalGetSidForString((wchar_t *)((char *)a1 + v54), &Sid, &v55, &v52, v66, v50, v51, v69);
        if ( !AttributeName )
        {
          LODWORD(v54) = ((&v55[-v54] - (char *)a1) >> 1) + v24;
          AttributeName = GetNextNoneWhiteSpace((__int64)a1, &v54);
          if ( !AttributeName )
          {
            v4 = (__int64 *)v62;
            if ( a1[(unsigned int)v54] == 41 )
            {
              v25 = *(_QWORD *)v62;
              v26 = v54 + 1;
              v27 = v64;
              v28 = Sid;
              *(_BYTE *)(*(_QWORD *)v62 + 1LL) = 81;
              *v27 = v26;
              *(_DWORD *)(v25 + 4) = RtlLengthSid(v28);
              v29 = v52 == 0;
              *(_QWORD *)(v25 + 8) = v28;
              v30 = 0LL;
              *(_BYTE *)v25 = v29;
              goto LABEL_83;
            }
            AttributeName = 1336;
            v55 = (char *)Sid;
            goto LABEL_81;
          }
        }
        v55 = (char *)Sid;
      }
      else
      {
        AttributeName = 1336;
      }
      v4 = (__int64 *)v62;
    }
LABEL_81:
    FreeOperandValue((_QWORD *)*v4);
    *v4 = 0LL;
    goto LABEL_82;
  }
  GetBinaryOperandLen(a1, &v54);
  v32 = v54;
  if ( *a1 != 35 )
  {
    if ( !(_DWORD)v54 )
      goto LABEL_39;
    v57 = v31;
    *v64 = v54;
    v41 = wcstoxq(0LL, a1, v59, 0, 1, &v57);
    v42 = v59[0];
    v62 = v41;
    if ( v59[0] == a1 && !v41 )
      goto LABEL_39;
    if ( v59[0] != &a1[(unsigned int)v54] || v57 )
      goto LABEL_39;
    if ( *a1 == 45 )
    {
      v43 = wcstoxq(0LL, ++a1, v59, 0, 1, &v57);
      if ( v43 >= v62 && v43 )
        goto LABEL_39;
      v42 = v59[0];
      LODWORD(v64) = 2;
    }
    else if ( *a1 == 43 )
    {
      ++a1;
      LODWORD(v64) = 1;
    }
    else
    {
      LODWORD(v64) = 3;
    }
    if ( *a1 == 48 )
    {
      v44 = a1 + 1;
      if ( v44 >= v42 || ((*v44 - 88) & 0xFFDF) != 0 )
        v45 = 1;
      else
        v45 = 3;
    }
    else
    {
      v45 = 2;
    }
    v46 = *v4;
    *(_BYTE *)(v46 + 1) = 4;
    *(_DWORD *)(v46 + 4) = 10;
    v47 = SddlpAlloc(0xAuLL);
    v48 = *v4;
    *(_QWORD *)(*v4 + 8) = v47;
    if ( !v47 )
      goto LABEL_2;
    *v47 = v62;
    *(_WORD *)(*(_QWORD *)(v48 + 8) + 8LL) = (_WORD)v64;
    *(_BYTE *)(*(_QWORD *)(v48 + 8) + 9LL) = v45;
    goto LABEL_82;
  }
  if ( (unsigned int)v54 < 2 )
  {
LABEL_39:
    AttributeName = 1336;
    goto LABEL_81;
  }
  *v64 = v54;
  v33 = *v4;
  v34 = v32 >> 1;
  LODWORD(v64) = v34;
  *(_BYTE *)(v33 + 1) = 24;
  *(_DWORD *)(v33 + 4) = v34;
  v35 = SddlpAlloc(v34);
  *(_QWORD *)(*v4 + 8) = v35;
  if ( !v35 )
  {
LABEL_2:
    AttributeName = 8;
    goto LABEL_81;
  }
  v36 = (int)v54 - 1;
  if ( v36 >= 1 )
  {
    while ( GetDigitFromChar(a1[v36], (unsigned __int64 *)va) && GetDigitFromChar(a1[v37 - 1], (unsigned int **)va1) )
    {
      v36 = v39 - 2;
      *(_BYTE *)((unsigned int)(v38 - 1) + *(_QWORD *)(v40 + 8)) = v62 | (16 * (_BYTE)v64);
      if ( v36 < 1 )
        goto LABEL_82;
    }
    goto LABEL_2;
  }
LABEL_82:
  v30 = v55;
LABEL_83:
  if ( P )
    FreeOperandValue(P);
  if ( v30 && v52 )
    ExFreePoolWithTag(v30, 0);
  return AttributeName;
}
