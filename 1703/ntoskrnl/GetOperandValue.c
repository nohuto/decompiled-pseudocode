/*
 * XREFs of GetOperandValue @ 0x1406FD104
 * Callers:
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     wcstoxq @ 0x14016C5A8 (wcstoxq.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x14057FB88 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x1406FC4EC (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x1406FCBEC (FreeOperandValue.c)
 *     GetAttributeName @ 0x1406FCC24 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1406FCE9C (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1406FCF80 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1406FD08C (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x1406FE264 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x1406FE4BC (IsValueSizeFixed.c)
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
  unsigned int NextNoneWhiteSpace; // esi
  PVOID v12; // rax
  PVOID v13; // rbx
  unsigned int AttributeName; // eax
  __int64 v16; // rax
  wchar_t *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // edx
  void *v21; // r11
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  void *v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // eax
  unsigned int *v35; // rcx
  PSID v36; // rbx
  bool v37; // zf
  int v38; // r10d
  unsigned int v39; // ecx
  __int64 v40; // rax
  size_t v41; // rcx
  PVOID v42; // rax
  __int64 v43; // r9
  __int64 v44; // r9
  int v45; // r8d
  __int64 v46; // r9
  __int64 v47; // r10
  void *v48; // rax
  wint_t *v49; // rdx
  unsigned __int64 v50; // rax
  wint_t *v51; // rbx
  char v52; // bl
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  int v56; // [rsp+30h] [rbp-49h]
  int v57; // [rsp+38h] [rbp-41h]
  char v58; // [rsp+58h] [rbp-21h] BYREF
  char v59; // [rsp+59h] [rbp-20h]
  __int64 v60; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v62; // [rsp+70h] [rbp-9h]
  PVOID v63; // [rsp+78h] [rbp-1h] BYREF
  int v64; // [rsp+80h] [rbp+7h] BYREF
  PSID Sid; // [rsp+88h] [rbp+Fh] BYREF
  wint_t *v66[3]; // [rsp+90h] [rbp+17h] BYREF
  char v69; // [rsp+D0h] [rbp+57h] BYREF

  NextNoneWhiteSpace = 0;
  v66[0] = 0LL;
  P = 0LL;
  *a5 = 0;
  Sid = 0LL;
  v69 = 0;
  v63 = 0LL;
  v59 = 0;
  v12 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v12;
  if ( !v12 )
  {
LABEL_2:
    NextNoneWhiteSpace = 8;
    goto LABEL_3;
  }
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, a5);
LABEL_15:
    NextNoneWhiteSpace = AttributeName;
    if ( !AttributeName )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, a5);
    goto LABEL_15;
  }
  if ( *a1 == 123 )
  {
    v16 = *a4;
    LODWORD(v60) = 1;
    *(_BYTE *)(v16 + 1) = 80;
    if ( !a1[1] )
      goto LABEL_4;
    while ( 1 )
    {
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v60);
      if ( NextNoneWhiteSpace )
        break;
      v17 = &a1[(unsigned int)v60];
      if ( *v17 == 123 )
        goto LABEL_48;
      NextNoneWhiteSpace = GetOperandValue((_DWORD)v17, 0, 0, (unsigned int)&v63, (__int64)a5, a6, a7, a8, a9);
      if ( NextNoneWhiteSpace )
        break;
      if ( a3 )
      {
        if ( v59 && v59 != *((_BYTE *)v63 + 1) )
          goto LABEL_48;
        v59 = *((_BYTE *)v63 + 1);
      }
      LOBYTE(v18) = *((_BYTE *)v63 + 1);
      v58 = IsValueSizeFixed(v18);
      v20 = v58 != 0 ? 1 : 5;
      v21 = *(void **)(*a4 + 8);
      if ( v21 )
      {
        v22 = *(_DWORD *)(*a4 + 4);
        v23 = v22 + *(_DWORD *)(v19 + 4);
        if ( v23 < v22 )
          goto LABEL_45;
        v24 = v22 + *(_DWORD *)(v19 + 4);
        v25 = v20 + v23;
        v26 = -1;
        if ( v20 + v24 >= v24 )
          v26 = v25;
        v62 = v26;
        if ( v25 < v24 )
          goto LABEL_45;
        v27 = SddlpReAlloc(v22, v26, v21);
        v28 = *a4;
        *(_QWORD *)(*a4 + 8) = v27;
        if ( !v27 )
          goto LABEL_2;
      }
      else
      {
        v29 = -1;
        v30 = v20 + *(_DWORD *)(v19 + 4);
        if ( v30 >= v20 )
          v29 = v20 + *(_DWORD *)(v19 + 4);
        v62 = v29;
        if ( v30 < v20 )
        {
LABEL_45:
          NextNoneWhiteSpace = 534;
          break;
        }
        v28 = *a4;
        *(_QWORD *)(v28 + 8) = SddlpAlloc(v29);
      }
      v31 = *(_QWORD *)(v28 + 8);
      if ( !v31 )
        goto LABEL_2;
      *(_BYTE *)(*(unsigned int *)(v28 + 4) + v31) = *((_BYTE *)v63 + 1);
      if ( v58 )
      {
        v32 = 1LL;
      }
      else
      {
        v32 = 5LL;
        *(_DWORD *)(*(unsigned int *)(v28 + 4) + *(_QWORD *)(v28 + 8) + 1LL) = *((_DWORD *)v63 + 1);
      }
      memmove(
        (void *)(*(_QWORD *)(v28 + 8) + v32 + *(unsigned int *)(v28 + 4)),
        *((const void **)v63 + 1),
        *((unsigned int *)v63 + 1));
      *(_DWORD *)(v28 + 4) = v62;
      FreeOperandValue(v63);
      v63 = 0LL;
      LODWORD(v60) = *a5 + v60;
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v60);
      if ( NextNoneWhiteSpace )
        break;
      if ( a1[(unsigned int)v60] != 44 )
      {
        if ( a1[(unsigned int)v60] != 125 )
          goto LABEL_48;
        *a5 = v60 + 1;
        goto LABEL_4;
      }
      LODWORD(v60) = v60 + 1;
      if ( !a1[(unsigned int)v60] )
        goto LABEL_4;
    }
LABEL_3:
    FreeOperandValue((_QWORD *)*a4);
    *a4 = 0LL;
LABEL_4:
    v13 = P;
    goto LABEL_5;
  }
  if ( wcsnicmp(a1, L"SID", 3uLL) )
  {
    GetBinaryOperandLen(a1, &v60);
    v39 = v60;
    if ( *a1 == 35 )
    {
      if ( (unsigned int)v60 >= 2 )
      {
        *a5 = v60;
        v40 = *a4;
        v41 = v39 >> 1;
        LODWORD(a5) = v41;
        *(_BYTE *)(v40 + 1) = 24;
        *(_DWORD *)(v40 + 4) = v41;
        v42 = SddlpAlloc(v41);
        *(_QWORD *)(*a4 + 8) = v42;
        if ( v42 )
        {
          v43 = (int)v60 - 1;
          if ( v43 < 1 )
            goto LABEL_4;
          while ( GetDigitFromChar(a1[v43], &v58) && GetDigitFromChar(a1[v44 - 1], &a5) )
          {
            v43 = v46 - 2;
            *(_BYTE *)((unsigned int)(v45 - 1) + *(_QWORD *)(v47 + 8)) = v58 | (16 * (_BYTE)a5);
            if ( v43 < 1 )
              goto LABEL_4;
          }
        }
        goto LABEL_2;
      }
LABEL_48:
      NextNoneWhiteSpace = 1336;
      goto LABEL_3;
    }
    if ( !(_DWORD)v60 )
      goto LABEL_48;
    v64 = v38;
    *a5 = v60;
    v48 = (void *)wcstoxq(0LL, a1, v66, 0, 1, &v64);
    v49 = v66[0];
    Sid = v48;
    if ( v66[0] == a1 && !v48 )
      goto LABEL_48;
    if ( v66[0] != &a1[(unsigned int)v60] || v64 )
      goto LABEL_48;
    if ( *a1 == 45 )
    {
      v50 = wcstoxq(0LL, ++a1, v66, 0, 1, &v64);
      if ( v50 >= (unsigned __int64)Sid && v50 )
        goto LABEL_48;
      v49 = v66[0];
      LODWORD(a5) = 2;
    }
    else if ( *a1 == 43 )
    {
      ++a1;
      LODWORD(a5) = 1;
    }
    else
    {
      LODWORD(a5) = 3;
    }
    if ( *a1 == 48 )
    {
      v51 = a1 + 1;
      if ( v51 >= v49 || ((*v51 - 88) & 0xFFDF) != 0 )
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
    if ( v54 )
    {
      *v54 = Sid;
      *(_WORD *)(*(_QWORD *)(v55 + 8) + 8LL) = (_WORD)a5;
      *(_BYTE *)(*(_QWORD *)(v55 + 8) + 9LL) = v52;
      goto LABEL_4;
    }
    goto LABEL_2;
  }
  LODWORD(v60) = 3;
  NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v60);
  if ( NextNoneWhiteSpace )
    goto LABEL_3;
  if ( a1[(unsigned int)v60] != 40 )
    goto LABEL_48;
  v62 = v60 + 1;
  v60 = 2LL * (unsigned int)(v60 + 1);
  NextNoneWhiteSpace = LocalGetSidForString((wchar_t *)((char *)a1 + v60), &Sid, &P, &v69, a6, v56, v57, a9);
  if ( NextNoneWhiteSpace )
    goto LABEL_56;
  LODWORD(v60) = (((char *)P - v60 - (char *)a1) >> 1) + v62;
  NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v60);
  if ( NextNoneWhiteSpace )
    goto LABEL_56;
  if ( a1[(unsigned int)v60] != 41 )
  {
    NextNoneWhiteSpace = 1336;
LABEL_56:
    P = Sid;
    goto LABEL_3;
  }
  v33 = *a4;
  v34 = v60 + 1;
  v35 = a5;
  v36 = Sid;
  *(_BYTE *)(v33 + 1) = 81;
  *v35 = v34;
  *(_DWORD *)(v33 + 4) = RtlLengthSid(v36);
  v37 = v69 == 0;
  *(_QWORD *)(v33 + 8) = v36;
  v13 = 0LL;
  *(_BYTE *)v33 = v37;
LABEL_5:
  if ( v63 )
    FreeOperandValue(v63);
  if ( v13 && v69 )
    ExFreePoolWithTag(v13, 0);
  return NextNoneWhiteSpace;
}
