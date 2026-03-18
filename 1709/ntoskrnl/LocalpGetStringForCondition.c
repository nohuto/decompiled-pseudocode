/*
 * XREFs of LocalpGetStringForCondition @ 0x140737BE0
 * Callers:
 *     LocalGetAceCondition @ 0x1407332A8 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x1407343EC (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x1407352C4 (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x1407352E8 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1407381A8 (ULongAddStringSize.c)
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
  __int64 v8; // r10
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // r11
  unsigned int PrintableAttributeName; // ebx
  int v14; // r13d
  __int64 v16; // r14
  __int64 v17; // rsi
  char *v18; // rdi
  unsigned int v19; // r15d
  PVOID *v20; // r9
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
  void *v38; // rsi
  size_t v39; // r15
  __int64 v40; // rax
  _QWORD *v41; // rdi
  PVOID *v42; // rcx
  __int64 v43; // rdi
  PVOID v44; // rcx
  wchar_t *v45; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-B0h]
  __int64 *v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  unsigned int v51; // [rsp+70h] [rbp-90h]
  char *v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  PVOID v57[256]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = a6;
  v10 = a5;
  v11 = a2;
  v12 = a7;
  v51 = a2;
  P = a3;
  PrintableAttributeName = 0;
  v52 = a1;
  v14 = 0;
  v53 = a5;
  v54 = a6;
  v55 = a7;
  v45 = 0LL;
  v46 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *(_DWORD *)a1 != 2020897377 )
    return 805LL;
  LODWORD(v16) = 4;
  v49 = 4;
  v50 = 0LL;
  v48 = &v55;
  p_P = &P;
  v17 = 0LL;
  do
  {
    if ( v17 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_83;
    }
    v18 = &a1[(unsigned int)v16];
    v19 = (unsigned __int8)*v18;
    if ( v19 > 0x51 )
    {
      if ( v19 < 0x80 )
        goto LABEL_23;
      if ( v19 > 0x93 )
      {
        if ( v19 <= 0x9F )
          goto LABEL_23;
        if ( v19 > 0xA3 )
        {
          if ( v19 <= 0xF7 || v19 > 0xFC )
            goto LABEL_23;
          PrintableAttributeName = GetPrintableAttributeName(
                                     (__int64)&a1[(unsigned int)v16],
                                     v11 - (unsigned int)v16,
                                     v19,
                                     &v45,
                                     &v46);
          if ( PrintableAttributeName )
          {
LABEL_75:
            v30 = v45;
            goto LABEL_80;
          }
          v57[v17] = v45;
          goto LABEL_18;
        }
      }
      if ( (unsigned __int8)(v19 + 96) <= 1u )
      {
        if ( v17 < 2 )
          goto LABEL_23;
        PrintableAttributeName = EncloseSubCondition(&v57[v14 - 1]);
        if ( PrintableAttributeName )
          goto LABEL_83;
        PrintableAttributeName = EncloseSubCondition(&v57[v14 - 2]);
        v22 = PrintableAttributeName == 0;
      }
      else
      {
        if ( (_BYTE)v19 != 0xA2 )
        {
LABEL_40:
          OperatorIndexByToken = GetOperatorIndexByToken(*v18);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_23;
          v25 = 3LL * OperatorIndexByToken;
          v26 = -1LL;
          do
            ++v26;
          while ( (&Operators)[v25][v26] );
          v27 = 2 * v26;
          LODWORD(v45) = v27;
          if ( LOBYTE((&Operators)[v25 + 1]) )
          {
            if ( !v17 )
              goto LABEL_23;
            v28 = *v24;
            if ( (int)ULongAddStringSize(v27, *v24, &v45) < 0 )
              goto LABEL_78;
            v29 = (unsigned int)((_DWORD)v45 + 8);
            v30 = (wchar_t *)SddlpAlloc(v29);
            if ( !v30 )
              goto LABEL_77;
            if ( (_BYTE)v19 == 0xA2 )
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
            if ( v17 < 2 )
              goto LABEL_23;
            v37 = *v24;
            if ( (int)ULongAddStringSize(v27, *v24, &v45) < 0
              || (v38 = (void *)*v48, (int)ULongAddStringSize((unsigned int)v45, *v48, &v45) < 0) )
            {
LABEL_78:
              PrintableAttributeName = 534;
              goto LABEL_83;
            }
            v39 = (unsigned int)((_DWORD)v45 + 10);
            v30 = (wchar_t *)SddlpAlloc(v39);
            if ( !v30 )
            {
LABEL_77:
              PrintableAttributeName = 8;
              goto LABEL_83;
            }
            if ( RtlStringCchPrintfW(v30, v39 >> 1, L"(%ls %ls %ls)", v38, (&Operators)[v25], v37) < 0 )
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
            if ( v38 )
              ExFreePoolWithTag(v38, 0);
            v34 = -2LL;
            v35 = -1;
            v36 = -8LL;
            v33 = 0x1FFFFFFFFFFFFFFFLL;
          }
          v40 = v50 + v34;
          v14 += v35;
          v48 = (__int64 *)((char *)v48 + v36);
          v20 = &p_P[v33];
          LODWORD(v16) = v49;
          v11 = v51;
          v17 = v40 + 1;
          v57[v40] = v30;
          v46 = 1;
          goto LABEL_70;
        }
        if ( v17 < 1 )
          goto LABEL_23;
        PrintableAttributeName = EncloseSubCondition(&v57[v14 - 1]);
        v22 = PrintableAttributeName == 0;
      }
      if ( !v22 )
        goto LABEL_83;
      goto LABEL_40;
    }
    if ( v19 >= 0x50 )
      goto LABEL_16;
    if ( *v18 )
    {
      if ( v19 > 4 && v19 != 16 && v19 != 24 )
        goto LABEL_23;
LABEL_16:
      PrintableAttributeName = GetPrintableOperandValue(
                                 &a1[(unsigned int)v16],
                                 v11 - (unsigned int)v16,
                                 &v45,
                                 &v46,
                                 v10,
                                 v8,
                                 v12,
                                 a8);
      if ( PrintableAttributeName )
        goto LABEL_75;
      v57[v17] = v45;
LABEL_18:
      ++v14;
      v20 = p_P + 1;
      ++v17;
      ++v48;
LABEL_70:
      a1 = v52;
      v10 = v53;
      v8 = v54;
      v12 = v55;
      v50 = v17;
      p_P = v20;
      v45 = 0LL;
      goto LABEL_71;
    }
    while ( 1 )
    {
      v16 = (unsigned int)(v16 + 1);
      v21 = (_DWORD)v16 == v11;
      if ( (unsigned int)v16 >= v11 )
        break;
      if ( a1[v16] )
      {
        v21 = (_DWORD)v16 == v11;
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
    LODWORD(v16) = v46 + v16;
    v49 = v16;
  }
  while ( (unsigned int)v16 < v11 );
  if ( v14 == 1 )
  {
    v41 = P;
    v42 = (PVOID *)P;
    *(PVOID *)P = v57[0];
    PrintableAttributeName = EncloseSubCondition(v42);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v41 = 0LL;
    goto LABEL_84;
  }
LABEL_83:
  if ( !v14 )
    return PrintableAttributeName;
LABEL_84:
  v43 = v14;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  while ( v43 )
  {
    v44 = v57[--v43];
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
  }
  return PrintableAttributeName;
}
