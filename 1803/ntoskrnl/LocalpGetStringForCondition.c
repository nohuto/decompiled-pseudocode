/*
 * XREFs of LocalpGetStringForCondition @ 0x14079B478
 * Callers:
 *     LocalGetAceCondition @ 0x140796B58 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x140797C50 (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x140798AFC (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x140798B20 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140798D60 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x14079BA48 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        char *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r11
  unsigned int v9; // r12d
  __int64 v11; // r8
  unsigned int PrintableAttributeName; // ebx
  int v13; // r13d
  __int64 v15; // r14
  __int64 v16; // rsi
  char *v17; // rdi
  unsigned int v18; // r15d
  PVOID *v19; // r9
  __int64 *v20; // r10
  bool v21; // zf
  bool v22; // zf
  int OperatorIndexByToken; // eax
  wchar_t **v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // eax
  wchar_t *v28; // rsi
  size_t v29; // r14
  wchar_t *v30; // rdi
  NTSTATUS v31; // eax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // r8
  wchar_t *v37; // r14
  _QWORD *v38; // r10
  void *v39; // rsi
  size_t v40; // r15
  __int64 v41; // rax
  _QWORD *v42; // rdi
  PVOID *v43; // rcx
  __int64 v44; // rdi
  PVOID v45; // rcx
  wchar_t *v46; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-B8h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-B0h]
  __int64 *v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  unsigned int v52; // [rsp+70h] [rbp-90h]
  char *v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  PVOID v58[256]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = a6;
  v9 = a2;
  v52 = a2;
  v11 = a5;
  v56 = a7;
  P = a3;
  PrintableAttributeName = 0;
  v53 = a1;
  v13 = 0;
  v54 = a5;
  v55 = a6;
  v46 = 0LL;
  v47 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *(_DWORD *)a1 != 2020897377 )
    return 805LL;
  LODWORD(v15) = 4;
  v50 = 4;
  v51 = 0LL;
  v49 = &v56;
  p_P = &P;
  v16 = 0LL;
  do
  {
    if ( v16 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_83;
    }
    v17 = &a1[(unsigned int)v15];
    v18 = (unsigned __int8)*v17;
    if ( v18 > 0x51 )
    {
      if ( v18 < 0x80 )
        goto LABEL_23;
      if ( v18 > 0x93 )
      {
        if ( v18 <= 0x9F )
          goto LABEL_23;
        if ( v18 > 0xA3 )
        {
          if ( v18 <= 0xF7 || v18 > 0xFC )
            goto LABEL_23;
          PrintableAttributeName = GetPrintableAttributeName(
                                     (__int64)&a1[(unsigned int)v15],
                                     v9 - (unsigned int)v15,
                                     v18,
                                     &v46,
                                     &v47);
          if ( PrintableAttributeName )
          {
LABEL_75:
            v30 = v46;
            goto LABEL_80;
          }
          v58[v16] = v46;
          goto LABEL_18;
        }
      }
      if ( (unsigned __int8)(v18 + 96) <= 1u )
      {
        if ( v16 < 2 )
          goto LABEL_23;
        PrintableAttributeName = EncloseSubCondition(&v58[v13 - 1]);
        if ( PrintableAttributeName )
          goto LABEL_83;
        PrintableAttributeName = EncloseSubCondition(&v58[v13 - 2]);
        v22 = PrintableAttributeName == 0;
      }
      else
      {
        if ( (_BYTE)v18 != 0xA2 )
        {
LABEL_40:
          OperatorIndexByToken = GetOperatorIndexByToken(*v17);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_23;
          v25 = 3LL * OperatorIndexByToken;
          v26 = -1LL;
          do
            ++v26;
          while ( (&Operators)[v25][v26] );
          v27 = 2 * v26;
          LODWORD(v46) = v27;
          if ( LOBYTE((&Operators)[v25 + 1]) )
          {
            if ( !v16 )
              goto LABEL_23;
            v28 = *v24;
            if ( (int)ULongAddStringSize(v27, *v24, &v46) < 0 )
              goto LABEL_78;
            v29 = (unsigned int)((_DWORD)v46 + 8);
            v30 = (wchar_t *)SddlpAlloc(v29);
            if ( !v30 )
              goto LABEL_77;
            if ( (_BYTE)v18 == 0xA2 )
            {
              v31 = RtlStringCchPrintfW(v30, v29 >> 1, L"(%ls%ls)", (&Operators)[v25], v28);
            }
            else
            {
              v32 = *((_BYTE *)&Operators + 8 * v25 + 8);
              if ( (v32 == -121 || v32 == -115)
                && (!wcsnicmp(v28, L"@USER.", 6uLL)
                 || !wcsnicmp(v28, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v28, L"@TOKEN.", 7uLL)) )
              {
                PrintableAttributeName = 1336;
                goto LABEL_80;
              }
              v31 = RtlStringCchPrintfW(v30, v29 >> 1, L"(%ls %ls)", (&Operators)[v25], v28);
            }
            v33 = 0LL;
            if ( v31 < 0 )
              goto LABEL_79;
            if ( v28 )
            {
              ExFreePoolWithTag(v28, 0);
              v33 = 0LL;
            }
            v34 = -1LL;
            v35 = 0;
            v36 = 0LL;
          }
          else
          {
            if ( v16 < 2 )
              goto LABEL_23;
            v37 = *v24;
            if ( (int)ULongAddStringSize(v27, *v24, &v46) < 0
              || (v39 = (void *)*v38, (int)ULongAddStringSize((unsigned int)v46, *v38, &v46) < 0) )
            {
LABEL_78:
              PrintableAttributeName = 534;
              goto LABEL_83;
            }
            v40 = (unsigned int)((_DWORD)v46 + 10);
            v30 = (wchar_t *)SddlpAlloc(v40);
            if ( !v30 )
            {
LABEL_77:
              PrintableAttributeName = 8;
              goto LABEL_83;
            }
            if ( RtlStringCchPrintfW(v30, v40 >> 1, L"(%ls %ls %ls)", v39, (&Operators)[v25], v37) < 0 )
            {
LABEL_79:
              PrintableAttributeName = 50;
LABEL_80:
              if ( v30 )
                ExFreePoolWithTag(v30, 0);
              goto LABEL_83;
            }
            if ( v37 )
              ExFreePoolWithTag(v37, 0);
            if ( v39 )
              ExFreePoolWithTag(v39, 0);
            v34 = -2LL;
            v35 = -1;
            v36 = 0x1FFFFFFFFFFFFFFFLL;
            v33 = 0x1FFFFFFFFFFFFFFFLL;
          }
          v41 = v51 + v34;
          v13 += v35;
          v19 = &p_P[v33];
          LODWORD(v15) = v50;
          v20 = &v49[v36];
          v9 = v52;
          v16 = v41 + 1;
          v58[v41] = v30;
          v47 = 1;
          goto LABEL_70;
        }
        if ( v16 < 1 )
          goto LABEL_23;
        PrintableAttributeName = EncloseSubCondition(&v58[v13 - 1]);
        v22 = PrintableAttributeName == 0;
      }
      if ( !v22 )
        goto LABEL_83;
      goto LABEL_40;
    }
    if ( v18 >= 0x50 )
      goto LABEL_16;
    if ( *v17 )
    {
      if ( v18 > 4 && v18 != 16 && v18 != 24 )
        goto LABEL_23;
LABEL_16:
      PrintableAttributeName = GetPrintableOperandValue(
                                 &a1[(unsigned int)v15],
                                 v9 - (unsigned int)v15,
                                 (void **)&v46,
                                 &v47,
                                 v11,
                                 v8,
                                 v56,
                                 a8);
      if ( PrintableAttributeName )
        goto LABEL_75;
      v58[v16] = v46;
LABEL_18:
      ++v13;
      v19 = p_P + 1;
      ++v16;
      v20 = v49 + 1;
LABEL_70:
      a1 = v53;
      v11 = v54;
      v8 = v55;
      v51 = v16;
      p_P = v19;
      v49 = v20;
      v46 = 0LL;
      goto LABEL_71;
    }
    while ( 1 )
    {
      v15 = (unsigned int)(v15 + 1);
      v21 = (_DWORD)v15 == v9;
      if ( (unsigned int)v15 >= v9 )
        break;
      if ( a1[v15] )
      {
        v21 = (_DWORD)v15 == v9;
        break;
      }
    }
    if ( !v21 )
    {
LABEL_23:
      PrintableAttributeName = 1336;
      goto LABEL_83;
    }
LABEL_71:
    LODWORD(v15) = v47 + v15;
    v50 = v15;
  }
  while ( (unsigned int)v15 < v9 );
  if ( v13 == 1 )
  {
    v42 = P;
    v43 = (PVOID *)P;
    *(PVOID *)P = v58[0];
    PrintableAttributeName = EncloseSubCondition(v43);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v42 = 0LL;
    goto LABEL_84;
  }
LABEL_83:
  if ( !v13 )
    return PrintableAttributeName;
LABEL_84:
  v44 = v13;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  while ( v44 )
  {
    v45 = v58[--v44];
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
  }
  return PrintableAttributeName;
}
