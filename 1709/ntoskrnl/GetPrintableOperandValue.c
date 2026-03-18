/*
 * XREFs of GetPrintableOperandValue @ 0x140735534
 * Callers:
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x140733EDC (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1407381A8 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        unsigned int a2,
        wchar_t **a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wchar_t **v8; // rbx
  unsigned int PrintableOperandValue; // edi
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  wchar_t *v17; // rax
  unsigned int v18; // ecx
  wchar_t *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  char *v23; // rcx
  SIZE_T v24; // rdx
  bool v25; // cf
  wchar_t *v26; // r8
  __int64 v27; // rcx
  wchar_t *v28; // r8
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  size_t v34; // rcx
  unsigned __int64 v35; // rax
  wchar_t *v36; // rax
  wchar_t **v37; // r11
  unsigned int v38; // ebx
  unsigned int v39; // ecx
  char *v40; // rdi
  __int64 v41; // rdx
  int v42; // r9d
  __int64 v43; // r10
  unsigned int v44; // ecx
  wchar_t *v45; // rcx
  wchar_t **v46; // rax
  wchar_t **v47; // rcx
  unsigned __int64 v48; // rbx
  char v49; // dl
  wchar_t *v50; // rax
  wchar_t *v51; // r10
  __int16 v52; // ax
  wchar_t *v53; // r8
  __int64 v54; // rcx
  int v55; // edx
  wchar_t v56; // ax
  wchar_t v57; // ax
  wchar_t v58; // ax
  __int64 v59; // rcx
  int v61; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+40h] [rbp-C0h]
  unsigned int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  unsigned int Sizeb; // [rsp+44h] [rbp-BCh]
  char Size_4; // [rsp+48h] [rbp-B8h]
  unsigned int v67; // [rsp+4Ch] [rbp-B4h]
  unsigned int v68; // [rsp+4Ch] [rbp-B4h]
  unsigned int v69; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v71; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v72; // [rsp+64h] [rbp-9Ch]
  unsigned int v73; // [rsp+68h] [rbp-98h]
  wchar_t **v74; // [rsp+70h] [rbp-90h]
  int v75[2]; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  char *v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  wchar_t pszFormat[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid1[80]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = a3;
  *(_QWORD *)v75 = a5;
  v78 = a6;
  v79 = a7;
  v74 = a3;
  PrintableOperandValue = 0;
  v73 = a2;
  v77 = a1;
  P = 0LL;
  v71 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v11 = *a1;
    if ( !*a1 )
      return 1336;
    if ( v11 > 4u )
    {
      if ( v11 == 16 )
      {
        if ( a2 - 1 >= 4 )
        {
          v44 = *(_DWORD *)(a1 + 1);
          Sizeb = v44;
          *a4 = 5;
          if ( a2 - 5 >= v44 )
          {
            if ( v44 + 6 >= v44 )
            {
              v45 = (wchar_t *)SddlpAlloc(v44 + 6);
              v46 = v74;
              *v74 = v45;
              if ( v45 )
              {
                *v45 = 34;
                memmove(*v46 + 1, &v77[*a4], Sizeb);
                v47 = v74;
                v48 = (unsigned __int64)Sizeb >> 1;
                (*v74)[v48 + 1] = 34;
                (*v47)[v48 + 2] = 0;
                *a4 += Sizeb;
              }
              else
              {
                PrintableOperandValue = 8;
              }
              goto LABEL_106;
            }
            return 534;
          }
        }
      }
      else
      {
        if ( v11 != 24 )
        {
          if ( v11 == 80 )
          {
            if ( a2 - 1 >= 4 )
            {
              v18 = *(_DWORD *)(a1 + 1);
              v67 = v18;
              *a4 = 5;
              if ( v18 )
              {
                if ( a2 - 5 >= v18 )
                {
                  v76 = 6LL;
                  v19 = (wchar_t *)SddlpAlloc(6uLL);
                  *v8 = v19;
                  if ( v19 )
                  {
                    v20 = 0;
                    *v19 = 123;
                    v21 = *a4;
                    Size = *a4;
                    v72 = 0;
                    if ( v67 )
                    {
                      v22 = v21;
                      while ( 1 )
                      {
                        v23 = &v77[v22 + v20];
                        if ( *v23 == 80 )
                          break;
                        PrintableOperandValue = GetPrintableOperandValue(
                                                  (_DWORD)v23,
                                                  v73 - v20 - v21,
                                                  (unsigned int)&P,
                                                  (_DWORD)a4,
                                                  *(__int64 *)v75,
                                                  v78,
                                                  v79,
                                                  a8);
                        if ( PrintableOperandValue )
                          goto LABEL_106;
                        v72 += *a4;
                        if ( (int)ULongAddStringSize((unsigned int)v76, P, &v71) < 0 )
                          goto LABEL_17;
                        v24 = 0xFFFFFFFFLL;
                        v25 = v71 + 4 < v71;
                        if ( v71 + 4 >= v71 )
                          v24 = v71 + 4;
                        v69 = v24;
                        v71 = v24;
                        if ( v25 )
                          goto LABEL_17;
                        v26 = *v74;
                        v27 = -1LL;
                        do
                          ++v27;
                        while ( v26[v27] );
                        v28 = (wchar_t *)SddlpReAlloc(2 * v27, v24, v26);
                        *v74 = v28;
                        if ( !v28 )
                          goto LABEL_73;
                        if ( RtlStringCchPrintfW(
                               &v28[((unsigned __int64)(unsigned int)v76 >> 1) - 2],
                               (unsigned __int64)(v69 - (unsigned int)v76 + 4) >> 1,
                               L"%ls, ",
                               P) < 0 )
                          goto LABEL_88;
                        if ( P )
                          ExFreePoolWithTag(P, 0);
                        v20 = v72;
                        v21 = Size;
                        v22 = Size;
                        P = 0LL;
                        v29 = v69;
                        v76 = v69;
                        if ( v67 <= v72 )
                        {
                          v8 = v74;
                          v21 = Size;
                          goto LABEL_48;
                        }
                      }
                      PrintableOperandValue = 1336;
                    }
                    else
                    {
                      v29 = 6;
LABEL_48:
                      v30 = (unsigned __int64)v29 >> 1;
                      (*v8)[v30 - 4] = 125;
                      (*v8)[v30 - 3] = 0;
                      *a4 = v21 + v67;
                    }
                  }
                  else
                  {
                    PrintableOperandValue = 8;
                  }
                  goto LABEL_106;
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
              PrintableOperandValue = LocalGetStringForSid(Sid1, (wchar_t **)&P, *(__int64 *)v75, v13, v61, a8);
              if ( PrintableOperandValue )
                goto LABEL_106;
              *a4 += v12;
              v14 = -1LL;
              do
                ++v14;
              while ( *((_WORD *)P + v14) );
              if ( (int)v14 + 6 < (unsigned int)v14 )
              {
LABEL_17:
                PrintableOperandValue = 534;
                goto LABEL_106;
              }
              v15 = 2LL * (unsigned int)(v14 + 6);
              if ( v15 > 0xFFFFFFFF )
              {
                PrintableOperandValue = 534;
                goto LABEL_106;
              }
              v16 = (unsigned int)v15;
              v17 = (wchar_t *)SddlpAlloc((unsigned int)v15);
              *v74 = v17;
              if ( !v17 )
              {
                PrintableOperandValue = 8;
                goto LABEL_106;
              }
              if ( RtlStringCchPrintfW(v17, v16 >> 1, L"SID(%ls)", P) < 0 )
                goto LABEL_88;
              goto LABEL_106;
            }
          }
          return 1336;
        }
        if ( a2 - 1 >= 4 )
        {
          v31 = *(_DWORD *)(a1 + 1);
          v73 = v31;
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
                  v68 = v34;
                  if ( v35 <= 0xFFFFFFFF )
                  {
                    v36 = (wchar_t *)SddlpAlloc(v34);
                    v37 = v74;
                    *v74 = v36;
                    if ( v36 )
                    {
                      v38 = v73;
                      *v36 = 35;
                      Sizea = 0;
                      v39 = 0;
                      if ( v38 )
                      {
                        v40 = v77;
                        v41 = 0LL;
                        *(_QWORD *)v75 = 0LL;
                        do
                        {
                          v42 = 2 * v39;
                          v43 = v40[v41 + *a4] & 0xF;
                          (*v37)[v42 + 1] = a0123456789abcd[(unsigned __int64)(unsigned __int8)v40[v41 + *a4] >> 4];
                          (*v37)[v42 + 2] = a0123456789abcd[v43];
                          v39 = Sizea + 1;
                          v41 = *(_QWORD *)v75 + 1LL;
                          Sizea = v39;
                          ++*(_QWORD *)v75;
                        }
                        while ( v39 < v38 );
                        PrintableOperandValue = 0;
                      }
                      (*v37)[((unsigned __int64)v68 >> 1) - 1] = 0;
                      *a4 += v38;
                    }
                    else
                    {
                      PrintableOperandValue = 8;
                    }
                    goto LABEL_106;
                  }
                }
              }
              return 534;
            }
          }
        }
      }
      return 1336;
    }
    if ( a2 - 1 < 0xA )
      return 1336;
    v49 = a1[9];
    v78 = *(_QWORD *)(a1 + 1);
    Size_4 = a1[10];
    v62 = v49;
    v50 = (wchar_t *)SddlpAlloc(0x40uLL);
    *v8 = v50;
    v51 = v50;
    if ( !v50 )
    {
LABEL_73:
      PrintableOperandValue = 8;
      goto LABEL_106;
    }
    if ( v62 == 1 )
    {
      v52 = 43;
    }
    else
    {
      if ( v62 != 2 )
      {
LABEL_79:
        v53 = pszFormat;
        v54 = 8LL;
        if ( Size_4 == 1 )
        {
          *v51 = 48;
          v55 = 0;
          ++v51;
          while ( v54 != -2147483638 )
          {
            v56 = *(wchar_t *)((char *)v53 + (char *)L"%I64o" - (char *)pszFormat);
            if ( !v56 )
              break;
            *v53++ = v56;
            if ( !--v54 )
              goto LABEL_86;
          }
        }
        else
        {
          v55 = 0;
          if ( Size_4 == 3 )
          {
            *(_DWORD *)v51 = 7864368;
            v51 += 2;
            while ( v54 != -2147483638 )
            {
              v57 = *(wchar_t *)((char *)v53 + (char *)L"%I64x" - (char *)pszFormat);
              if ( !v57 )
                break;
              *v53++ = v57;
              if ( !--v54 )
                goto LABEL_86;
            }
          }
          else
          {
            while ( v54 != -2147483638 )
            {
              v58 = *(wchar_t *)((char *)v53 + (char *)L"%I64u" - (char *)pszFormat);
              if ( !v58 )
                break;
              *v53++ = v58;
              if ( !--v54 )
              {
LABEL_86:
                --v53;
                v55 = -2147483643;
                break;
              }
            }
          }
        }
        *v53 = 0;
        if ( v55 < 0 )
          goto LABEL_88;
        v59 = v78;
        if ( v78 || Size_4 != 1 )
        {
          if ( v62 == 2 )
            v59 = -v78;
          if ( RtlStringCchPrintfW(v51, 32 - (v51 - *v8), pszFormat, v59) < 0 )
          {
LABEL_88:
            PrintableOperandValue = 50;
            goto LABEL_106;
          }
        }
        *a4 += 10;
LABEL_106:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return PrintableOperandValue;
      }
      v52 = 45;
    }
    *v51++ = v52;
    goto LABEL_79;
  }
  return 87LL;
}
