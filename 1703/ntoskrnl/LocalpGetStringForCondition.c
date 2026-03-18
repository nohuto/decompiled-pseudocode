/*
 * XREFs of LocalpGetStringForCondition @ 0x140700190
 * Callers:
 *     LocalGetAceCondition @ 0x1406FB8C0 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x1406FC9F4 (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x1406FD8AC (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x1406FD8D0 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1407007B0 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        _DWORD *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r10
  __int64 v9; // rsi
  unsigned __int64 v10; // r11
  _DWORD *v11; // r9
  unsigned int PrintableAttributeName; // ebx
  int v13; // r12d
  __int64 v15; // r8
  int v16; // r14d
  void **v17; // r15
  PVOID *p_P; // r13
  char *v19; // rdi
  char v20; // cl
  unsigned int v21; // eax
  bool v22; // zf
  bool v23; // zf
  int OperatorIndexByToken; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  wchar_t *v27; // rcx
  unsigned int v28; // eax
  wchar_t *v29; // r14
  size_t v30; // r15
  wchar_t *v31; // rdi
  NTSTATUS v32; // eax
  char v33; // al
  int v34; // r12d
  int v35; // r14d
  int v36; // eax
  __int64 v37; // rsi
  PVOID *v38; // r13
  __int64 *v39; // r15
  PVOID v40; // r14
  void *v41; // r15
  size_t v42; // r13
  _QWORD *v43; // rdi
  PVOID *v44; // rcx
  __int64 v45; // rdi
  PVOID v46; // rcx
  int v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+44h] [rbp-BCh]
  wchar_t *v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+50h] [rbp-B0h]
  unsigned int v51; // [rsp+54h] [rbp-ACh] BYREF
  int v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53; // [rsp+5Ch] [rbp-A4h]
  __int64 *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  PVOID *v56; // [rsp+70h] [rbp-90h]
  _DWORD *v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  PVOID v62[256]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = a5;
  v9 = 0LL;
  v10 = a6;
  v11 = a1;
  v57 = a1;
  PrintableAttributeName = 0;
  v60 = a7;
  v13 = 0;
  P = a3;
  v53 = a2;
  v58 = a5;
  v59 = a6;
  v49 = 0LL;
  v51 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *a1 != 2020897377 )
    return 805LL;
  LODWORD(v15) = 4;
  v52 = 4;
  v16 = -1;
  v47 = -2;
  v50 = -1;
  v17 = (void **)&v60;
  p_P = &P;
  v54 = &v60;
  v56 = &P;
  do
  {
    if ( v9 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_83;
    }
    v19 = (char *)v11 + (unsigned int)v15;
    v48 = *v19;
    v20 = *v19;
    v21 = (unsigned __int8)*v19;
    if ( v21 > 0x51 )
    {
      if ( v21 < 0x80 )
        goto LABEL_22;
      if ( v21 > 0x93 )
      {
        if ( v21 <= 0x9F )
          goto LABEL_22;
        if ( v21 > 0xA3 )
        {
          if ( v21 <= 0xF7 || v21 > 0xFC )
            goto LABEL_22;
          PrintableAttributeName = GetPrintableAttributeName((__int64)v19, a2 - (unsigned int)v15, v20, &v49, &v51);
          if ( PrintableAttributeName )
          {
LABEL_75:
            v31 = v49;
            goto LABEL_80;
          }
          ++v13;
          ++v47;
          ++v16;
          v62[v9] = v49;
          ++p_P;
          ++v9;
          v49 = 0LL;
          ++v17;
          goto LABEL_70;
        }
      }
      if ( (unsigned __int8)(v20 + 96) <= 1u )
      {
        if ( v9 < 2 )
          goto LABEL_22;
        PrintableAttributeName = EncloseSubCondition(&v62[v16]);
        if ( PrintableAttributeName )
          goto LABEL_83;
        PrintableAttributeName = EncloseSubCondition(&v62[v47]);
        v23 = PrintableAttributeName == 0;
      }
      else
      {
        if ( v20 != -94 )
        {
LABEL_39:
          OperatorIndexByToken = GetOperatorIndexByToken(*v19);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_22;
          v25 = 3LL * OperatorIndexByToken;
          v26 = -1LL;
          v27 = (&Operators)[v25];
          v55 = v25;
          do
            ++v26;
          while ( v27[v26] );
          v28 = 2 * v26;
          LODWORD(v49) = v28;
          if ( LOBYTE((&Operators)[v25 + 1]) )
          {
            if ( !v9 )
              goto LABEL_22;
            v29 = (wchar_t *)*p_P;
            if ( (int)ULongAddStringSize(v28, *p_P, &v49) < 0 )
              goto LABEL_78;
            v30 = (unsigned int)((_DWORD)v49 + 8);
            v31 = (wchar_t *)SddlpAlloc(v30);
            if ( !v31 )
              goto LABEL_77;
            if ( v48 == -94 )
            {
              v32 = RtlStringCchPrintfW(v31, v30 >> 1, L"(%ls%ls)", (&Operators)[v55], v29);
            }
            else
            {
              v33 = *((_BYTE *)&Operators + 8 * v55 + 8);
              if ( (v33 == -121 || v33 == -115)
                && (!wcsnicmp(v29, L"@USER.", 6uLL)
                 || !wcsnicmp(v29, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v29, L"@TOKEN.", 7uLL)) )
              {
                PrintableAttributeName = 1336;
                goto LABEL_80;
              }
              v32 = RtlStringCchPrintfW(v31, v30 >> 1, L"(%ls %ls)", (&Operators)[v55], v29);
            }
            if ( v32 < 0 )
              goto LABEL_79;
            if ( v29 )
              ExFreePoolWithTag(v29, 0);
            v34 = v13 - 1;
            v35 = v50 - 1;
            v36 = v47 - 1;
            v37 = v9 - 1;
            v38 = p_P - 1;
            v39 = v54 - 1;
          }
          else
          {
            if ( v9 < 2 )
              goto LABEL_22;
            v40 = *p_P;
            if ( (int)ULongAddStringSize(v28, *p_P, &v49) < 0
              || (v41 = *v17, (int)ULongAddStringSize((unsigned int)v49, v41, &v49) < 0) )
            {
LABEL_78:
              PrintableAttributeName = 534;
              goto LABEL_83;
            }
            v42 = (unsigned int)((_DWORD)v49 + 10);
            v31 = (wchar_t *)SddlpAlloc(v42);
            if ( !v31 )
            {
LABEL_77:
              PrintableAttributeName = 8;
              goto LABEL_83;
            }
            if ( RtlStringCchPrintfW(v31, v42 >> 1, L"(%ls %ls %ls)", v41, (&Operators)[v55], v40) < 0 )
            {
LABEL_79:
              PrintableAttributeName = 50;
LABEL_80:
              if ( v31 )
                ExFreePoolWithTag(v31, 0);
              goto LABEL_83;
            }
            if ( v40 )
              ExFreePoolWithTag(v40, 0);
            if ( v41 )
              ExFreePoolWithTag(v41, 0);
            v34 = v13 - 2;
            v35 = v50 - 2;
            v36 = v47 - 2;
            v38 = v56 - 2;
            v37 = v9 - 2;
            v39 = v54 - 2;
          }
          v62[v37] = v31;
          v9 = v37 + 1;
          v47 = v36 + 1;
          v13 = v34 + 1;
          v51 = 1;
          v16 = v35 + 1;
          p_P = v38 + 1;
          v17 = (void **)(v39 + 1);
          goto LABEL_69;
        }
        if ( v9 < 1 )
          goto LABEL_22;
        PrintableAttributeName = EncloseSubCondition(&v62[v16]);
        v23 = PrintableAttributeName == 0;
      }
      if ( !v23 )
        goto LABEL_83;
      goto LABEL_39;
    }
    if ( v21 >= 0x50 )
      goto LABEL_16;
    if ( *v19 )
    {
      if ( v21 > 4 && v21 != 16 && v21 != 24 )
        goto LABEL_22;
LABEL_16:
      PrintableAttributeName = GetPrintableOperandValue(v19, a2 - (unsigned int)v15, &v49, &v51, v8, v10, v60, a8);
      if ( PrintableAttributeName )
        goto LABEL_75;
      ++v13;
      ++v47;
      ++v16;
      v62[v9] = v49;
      ++p_P;
      ++v9;
      ++v17;
LABEL_69:
      v49 = 0LL;
LABEL_70:
      LODWORD(v15) = v52;
      a2 = v53;
      v11 = v57;
      v8 = v58;
      v10 = v59;
      v50 = v16;
      v56 = p_P;
      v54 = (__int64 *)v17;
      goto LABEL_71;
    }
    while ( 1 )
    {
      v15 = (unsigned int)(v15 + 1);
      v22 = (_DWORD)v15 == a2;
      if ( (unsigned int)v15 >= a2 )
        break;
      if ( *((_BYTE *)v11 + v15) )
      {
        v22 = (_DWORD)v15 == a2;
        break;
      }
    }
    if ( !v22 )
    {
LABEL_22:
      PrintableAttributeName = 1336;
      goto LABEL_83;
    }
LABEL_71:
    LODWORD(v15) = v51 + v15;
    v52 = v15;
  }
  while ( (unsigned int)v15 < a2 );
  if ( v13 == 1 )
  {
    v43 = P;
    v44 = (PVOID *)P;
    *(PVOID *)P = v62[0];
    PrintableAttributeName = EncloseSubCondition(v44);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v43 = 0LL;
    goto LABEL_84;
  }
LABEL_83:
  if ( !v13 )
    return PrintableAttributeName;
LABEL_84:
  v45 = v13;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  while ( v45 )
  {
    v46 = v62[--v45];
    if ( v46 )
      ExFreePoolWithTag(v46, 0);
  }
  return PrintableAttributeName;
}
