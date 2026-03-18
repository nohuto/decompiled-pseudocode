/*
 * XREFs of GetPrintableOperandValue @ 0x140798D60
 * Callers:
 *     GetPrintableOperandValue @ 0x140798D60 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x14079B478 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x140796DD4 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x140797784 (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x140798D60 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x14079BA48 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        unsigned int a2,
        void **a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  void **v8; // rbx
  unsigned int PrintableOperandValue; // edi
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  wchar_t *v17; // rax
  unsigned int v18; // ecx
  _WORD *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  char *v23; // rcx
  SIZE_T v24; // rdx
  bool v25; // cf
  _WORD *v26; // r8
  __int64 v27; // rcx
  void *v28; // r8
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  size_t v34; // rcx
  unsigned __int64 v35; // rax
  _WORD *v36; // rax
  void **v37; // r11
  unsigned int v38; // ebx
  unsigned int v39; // ecx
  char *v40; // rdi
  __int64 v41; // rdx
  int v42; // r9d
  __int64 v43; // r10
  unsigned int v44; // ecx
  _WORD *v45; // rcx
  void **v46; // rax
  void **v47; // rcx
  unsigned __int64 v48; // rbx
  wchar_t *v49; // rax
  wchar_t *v50; // r10
  __int16 v51; // ax
  wchar_t *v52; // rdx
  __int64 v53; // rcx
  wchar_t v54; // ax
  wchar_t *v55; // rax
  wchar_t v56; // ax
  wchar_t *v57; // rax
  wchar_t v58; // ax
  wchar_t *v59; // rax
  __int64 v60; // r9
  int v62; // [rsp+20h] [rbp-E0h]
  unsigned int Size; // [rsp+40h] [rbp-C0h]
  unsigned int Sizea; // [rsp+40h] [rbp-C0h]
  unsigned int Sizeb; // [rsp+40h] [rbp-C0h]
  char Size_4; // [rsp+44h] [rbp-BCh]
  char Size_5; // [rsp+45h] [rbp-BBh]
  unsigned int v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  unsigned int v70; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v72; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v73; // [rsp+5Ch] [rbp-A4h]
  unsigned int v74; // [rsp+60h] [rbp-A0h]
  void **v75; // [rsp+68h] [rbp-98h]
  int v76[2]; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  char *v78; // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  wchar_t pszFormat[12]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Sid1[80]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = a3;
  *(_QWORD *)v76 = a5;
  v79 = a6;
  v80 = a7;
  v75 = a3;
  PrintableOperandValue = 0;
  v74 = a2;
  v78 = a1;
  P = 0LL;
  v72 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v11 = *a1;
    if ( !*a1 )
      return 1336;
    if ( v11 > 4u )
    {
      if ( v11 != 16 )
      {
        if ( v11 != 24 )
        {
          if ( v11 == 80 )
          {
            if ( a2 - 1 >= 4 )
            {
              v18 = *(_DWORD *)(a1 + 1);
              v68 = v18;
              *a4 = 5;
              if ( v18 )
              {
                if ( a2 - 5 >= v18 )
                {
                  v77 = 6LL;
                  v19 = SddlpAlloc(6uLL);
                  *v8 = v19;
                  if ( v19 )
                  {
                    *v19 = 123;
                    v20 = 0;
                    v21 = *a4;
                    Size = *a4;
                    v73 = 0;
                    if ( v68 )
                    {
                      v22 = v21;
                      while ( 1 )
                      {
                        v23 = &v78[v22 + v20];
                        if ( *v23 == 80 )
                          break;
                        PrintableOperandValue = GetPrintableOperandValue(
                                                  (_DWORD)v23,
                                                  v74 - v20 - v21,
                                                  (unsigned int)&P,
                                                  (_DWORD)a4,
                                                  *(__int64 *)v76,
                                                  v79,
                                                  v80,
                                                  a8);
                        if ( PrintableOperandValue )
                          goto LABEL_110;
                        v73 += *a4;
                        if ( (int)ULongAddStringSize((unsigned int)v77, P, &v72) < 0 )
                          goto LABEL_17;
                        v24 = 0xFFFFFFFFLL;
                        v25 = v72 + 4 < v72;
                        if ( v72 + 4 >= v72 )
                          v24 = v72 + 4;
                        v70 = v24;
                        v72 = v24;
                        if ( v25 )
                          goto LABEL_17;
                        v26 = *v75;
                        v27 = -1LL;
                        do
                          ++v27;
                        while ( v26[v27] );
                        v28 = SddlpReAlloc(2 * v27, v24, v26);
                        *v75 = v28;
                        if ( !v28 )
                          goto LABEL_72;
                        if ( RtlStringCchPrintfW(
                               (NTSTRSAFE_PWSTR)v28 + ((unsigned __int64)(unsigned int)v77 >> 1) - 2,
                               (unsigned __int64)(v70 - (unsigned int)v77 + 4) >> 1,
                               L"%ls, ",
                               P) < 0 )
                          goto LABEL_86;
                        if ( P )
                          ExFreePoolWithTag(P, 0);
                        v20 = v73;
                        v21 = Size;
                        v22 = Size;
                        P = 0LL;
                        v29 = v70;
                        v77 = v70;
                        if ( v68 <= v73 )
                        {
                          v8 = v75;
                          v21 = Size;
                          goto LABEL_47;
                        }
                      }
                      PrintableOperandValue = 1336;
                    }
                    else
                    {
                      v29 = 6;
LABEL_47:
                      v30 = (unsigned __int64)v29 >> 1;
                      *((_WORD *)*v8 + v30 - 4) = 125;
                      *((_WORD *)*v8 + v30 - 3) = 0;
                      *a4 = v21 + v68;
                    }
                  }
                  else
                  {
                    PrintableOperandValue = 8;
                  }
                  goto LABEL_110;
                }
              }
            }
          }
          else if ( v11 == 81 && a2 - 1 >= 4 )
          {
            v12 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v12 <= 0x44 && a2 - 5 >= v12 )
            {
              memmove(Sid1, a1 + 5, v12);
              PrintableOperandValue = LocalGetStringForSid(Sid1, (wchar_t **)&P, *(__int64 *)v76, v13, v62, a8);
              if ( !PrintableOperandValue )
              {
                *a4 += v12;
                v14 = -1LL;
                do
                  ++v14;
                while ( *((_WORD *)P + v14) );
                if ( (int)v14 + 6 >= (unsigned int)v14 )
                {
                  v15 = 2LL * (unsigned int)(v14 + 6);
                  if ( v15 <= 0xFFFFFFFF )
                  {
                    v16 = (unsigned int)v15;
                    v17 = (wchar_t *)SddlpAlloc((unsigned int)v15);
                    *v75 = v17;
                    if ( v17 )
                    {
                      if ( RtlStringCchPrintfW(v17, v16 >> 1, L"SID(%ls)", P) < 0 )
                        PrintableOperandValue = 50;
                    }
                    else
                    {
                      PrintableOperandValue = 8;
                    }
                  }
                  else
                  {
                    PrintableOperandValue = 534;
                  }
                }
                else
                {
LABEL_17:
                  PrintableOperandValue = 534;
                }
              }
              goto LABEL_110;
            }
          }
          return 1336;
        }
        if ( a2 - 1 >= 4 )
        {
          v31 = *(_DWORD *)(a1 + 1);
          v74 = v31;
          *a4 = 5;
          if ( a2 - 5 >= v31 )
          {
            if ( v31 )
            {
              v32 = 2LL * v31;
              if ( v32 <= 0xFFFFFFFF )
              {
                v33 = v32 + 2;
                if ( 2 * v31 + 2 >= 2 * v31 )
                {
                  v34 = 0xFFFFFFFFLL;
                  v35 = 2LL * v33;
                  if ( v35 <= 0xFFFFFFFF )
                    v34 = (unsigned int)v35;
                  v69 = v34;
                  if ( v35 <= 0xFFFFFFFF )
                  {
                    v36 = SddlpAlloc(v34);
                    v37 = v75;
                    *v75 = v36;
                    if ( v36 )
                    {
                      v38 = v74;
                      *v36 = 35;
                      Sizea = 0;
                      v39 = 0;
                      if ( v38 )
                      {
                        v40 = v78;
                        v41 = 0LL;
                        *(_QWORD *)v76 = 0LL;
                        do
                        {
                          v42 = 2 * v39;
                          v43 = v40[v41 + *a4] & 0xF;
                          *((_WORD *)*v37 + (unsigned int)(v42 + 1)) = a0123456789abcd[(unsigned __int64)(unsigned __int8)v40[v41 + *a4] >> 4];
                          *((_WORD *)*v37 + (unsigned int)(v42 + 2)) = a0123456789abcd[v43];
                          v39 = Sizea + 1;
                          v41 = *(_QWORD *)v76 + 1LL;
                          Sizea = v39;
                          ++*(_QWORD *)v76;
                        }
                        while ( v39 < v38 );
                        PrintableOperandValue = 0;
                      }
                      *((_WORD *)*v37 + ((unsigned __int64)v69 >> 1) - 1) = 0;
                      *a4 += v38;
                    }
                    else
                    {
                      PrintableOperandValue = 8;
                    }
                    goto LABEL_110;
                  }
                }
              }
              return 534;
            }
          }
        }
        return 1336;
      }
      if ( a2 - 1 < 4 )
        return 1336;
      v44 = *(_DWORD *)(a1 + 1);
      Sizeb = v44;
      *a4 = 5;
      if ( a2 - 5 < v44 )
        return 1336;
      if ( v44 + 6 < v44 )
        return 534;
      v45 = SddlpAlloc(v44 + 6);
      v46 = v75;
      *v75 = v45;
      if ( v45 )
      {
        *v45 = 34;
        memmove((char *)*v46 + 2, &v78[*a4], Sizeb);
        v47 = v75;
        v48 = (unsigned __int64)Sizeb >> 1;
        *((_WORD *)*v75 + v48 + 1) = 34;
        *((_WORD *)*v47 + v48 + 2) = 0;
        *a4 += Sizeb;
      }
      else
      {
        PrintableOperandValue = 8;
      }
LABEL_110:
      if ( P )
        ExFreePoolWithTag(P, 0);
      return PrintableOperandValue;
    }
    if ( a2 - 1 < 0xA )
      return 1336;
    v79 = *(_QWORD *)(a1 + 1);
    Size_4 = a1[9];
    Size_5 = a1[10];
    v49 = (wchar_t *)SddlpAlloc(0x40uLL);
    *v8 = v49;
    v50 = v49;
    if ( !v49 )
    {
LABEL_72:
      PrintableOperandValue = 8;
      goto LABEL_110;
    }
    if ( Size_4 == 1 )
    {
      v51 = 43;
    }
    else
    {
      if ( Size_4 != 2 )
        goto LABEL_78;
      v51 = 45;
    }
    *v50++ = v51;
LABEL_78:
    v52 = pszFormat;
    v53 = 8LL;
    if ( Size_5 == 1 )
    {
      *v50++ = 48;
      do
      {
        if ( v53 == -2147483638 )
          break;
        v54 = *(wchar_t *)((char *)v52 + (char *)L"%I64o" - (char *)pszFormat);
        if ( !v54 )
          break;
        *v52++ = v54;
        --v53;
      }
      while ( v53 );
      v55 = v52 - 1;
      if ( v53 )
        v55 = v52;
      *v55 = 0;
      if ( !v53 )
      {
LABEL_86:
        PrintableOperandValue = 50;
        goto LABEL_110;
      }
    }
    else if ( Size_5 == 3 )
    {
      *(_DWORD *)v50 = 7864368;
      v50 += 2;
      do
      {
        if ( v53 == -2147483638 )
          break;
        v56 = *(wchar_t *)((char *)v52 + (char *)L"%I64x" - (char *)pszFormat);
        if ( !v56 )
          break;
        *v52++ = v56;
        --v53;
      }
      while ( v53 );
      v57 = v52 - 1;
      if ( v53 )
        v57 = v52;
      *v57 = 0;
      if ( !v53 )
      {
        PrintableOperandValue = 50;
        goto LABEL_110;
      }
    }
    else
    {
      do
      {
        if ( v53 == -2147483638 )
          break;
        v58 = *(wchar_t *)((char *)v52 + (char *)L"%I64u" - (char *)pszFormat);
        if ( !v58 )
          break;
        *v52++ = v58;
        --v53;
      }
      while ( v53 );
      v59 = v52 - 1;
      if ( v53 )
        v59 = v52;
      *v59 = 0;
      if ( !v53 )
      {
        PrintableOperandValue = 50;
        goto LABEL_110;
      }
    }
    if ( !v79 && Size_5 == 1 )
      goto LABEL_109;
    v60 = -v79;
    if ( Size_4 != 2 )
      v60 = v79;
    if ( RtlStringCchPrintfW(v50, 32 - (((char *)v50 - (_BYTE *)*v8) >> 1), pszFormat, v60) >= 0 )
LABEL_109:
      *a4 += 10;
    else
      PrintableOperandValue = 50;
    goto LABEL_110;
  }
  return 87LL;
}
