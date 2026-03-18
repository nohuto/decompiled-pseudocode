/*
 * XREFs of GetPrintableOperandValue @ 0x1406FDB1C
 * Callers:
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x140700190 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x1406FC4EC (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1407007B0 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        unsigned int a2,
        wchar_t **a3,
        unsigned int *a4,
        __int64 a5,
        unsigned __int64 a6,
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
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  wchar_t *v34; // rax
  wchar_t **v35; // r11
  unsigned int v36; // ebx
  unsigned int v37; // ecx
  char *v38; // rdi
  __int64 v39; // rdx
  int v40; // r9d
  __int64 v41; // r10
  unsigned int v42; // ecx
  wchar_t *v43; // rcx
  wchar_t **v44; // rax
  wchar_t **v45; // rcx
  unsigned __int64 v46; // rbx
  char v47; // dl
  wchar_t *v48; // rax
  wchar_t *v49; // r10
  __int16 v50; // ax
  wchar_t *v51; // r8
  __int64 v52; // rcx
  int v53; // edx
  wchar_t v54; // ax
  wchar_t v55; // ax
  wchar_t v56; // ax
  __int64 v57; // rcx
  int v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+40h] [rbp-C0h]
  unsigned int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  unsigned int Sizeb; // [rsp+44h] [rbp-BCh]
  char Size_4; // [rsp+48h] [rbp-B8h]
  unsigned int v65; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  unsigned int v70; // [rsp+64h] [rbp-9Ch]
  wchar_t **v71; // [rsp+68h] [rbp-98h]
  int v72[2]; // [rsp+70h] [rbp-90h]
  unsigned __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h]
  char *v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  wchar_t pszFormat[12]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Sid1[80]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = a3;
  *(_QWORD *)v72 = a5;
  v73 = a6;
  v76 = a7;
  v71 = a3;
  PrintableOperandValue = 0;
  v70 = a2;
  v75 = a1;
  P = 0LL;
  v67 = 0;
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
          v42 = *(_DWORD *)(a1 + 1);
          Sizeb = v42;
          *a4 = 5;
          if ( a2 - 5 >= v42 )
          {
            if ( v42 + 6 >= v42 )
            {
              v43 = (wchar_t *)SddlpAlloc(v42 + 6);
              v44 = v71;
              *v71 = v43;
              if ( v43 )
              {
                *v43 = 34;
                memmove(*v44 + 1, &v75[*a4], Sizeb);
                v45 = v71;
                v46 = (unsigned __int64)Sizeb >> 1;
                (*v71)[v46 + 1] = 34;
                (*v45)[v46 + 2] = 0;
                *a4 += Sizeb;
              }
              else
              {
                PrintableOperandValue = 8;
              }
              goto LABEL_103;
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
              v69 = v18;
              *a4 = 5;
              if ( v18 )
              {
                if ( a2 - 5 >= v18 )
                {
                  v74 = 6LL;
                  v19 = (wchar_t *)SddlpAlloc(6uLL);
                  *v8 = v19;
                  if ( v19 )
                  {
                    v20 = 0;
                    *v19 = 123;
                    v21 = *a4;
                    Size = *a4;
                    v68 = 0;
                    if ( v69 )
                    {
                      v22 = v21;
                      while ( 1 )
                      {
                        v23 = &v75[v22 + v20];
                        if ( *v23 == 80 )
                          break;
                        PrintableOperandValue = GetPrintableOperandValue(
                                                  (_DWORD)v23,
                                                  v70 - v20 - v21,
                                                  (unsigned int)&P,
                                                  (_DWORD)a4,
                                                  *(__int64 *)v72,
                                                  v73,
                                                  v76,
                                                  a8);
                        if ( PrintableOperandValue )
                          goto LABEL_103;
                        v68 += *a4;
                        if ( (int)ULongAddStringSize((unsigned int)v74, P, &v67) < 0 )
                          goto LABEL_17;
                        v24 = 0xFFFFFFFFLL;
                        v25 = v67 + 4 < v67;
                        if ( v67 + 4 >= v67 )
                          v24 = v67 + 4;
                        v65 = v24;
                        v67 = v24;
                        if ( v25 )
                          goto LABEL_17;
                        v26 = *v71;
                        v27 = -1LL;
                        do
                          ++v27;
                        while ( v26[v27] );
                        v28 = (wchar_t *)SddlpReAlloc(2 * v27, v24, v26);
                        *v71 = v28;
                        if ( !v28 )
                          goto LABEL_70;
                        if ( RtlStringCchPrintfW(
                               &v28[((unsigned __int64)(unsigned int)v74 >> 1) - 2],
                               (unsigned __int64)(v65 - (unsigned int)v74 + 4) >> 1,
                               L"%ls, ",
                               P) < 0 )
                          goto LABEL_85;
                        if ( P )
                          ExFreePoolWithTag(P, 0);
                        v20 = v68;
                        v21 = Size;
                        v22 = Size;
                        P = 0LL;
                        v29 = v65;
                        v74 = v65;
                        if ( v69 <= v68 )
                        {
                          v8 = v71;
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
                      (*v8)[v30 - 4] = 125;
                      (*v8)[v30 - 3] = 0;
                      *a4 = v21 + v69;
                    }
                  }
                  else
                  {
                    PrintableOperandValue = 8;
                  }
                  goto LABEL_103;
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
              PrintableOperandValue = LocalGetStringForSid(Sid1, (wchar_t **)&P, *(__int64 *)v72, v13, v59, a8);
              if ( PrintableOperandValue )
                goto LABEL_103;
              *a4 += v12;
              v14 = -1LL;
              do
                ++v14;
              while ( *((_WORD *)P + v14) );
              if ( (int)v14 + 6 < (unsigned int)v14 )
              {
LABEL_17:
                PrintableOperandValue = 534;
                goto LABEL_103;
              }
              v15 = 2LL * (unsigned int)(v14 + 6);
              if ( v15 > 0xFFFFFFFF )
              {
                PrintableOperandValue = 534;
                goto LABEL_103;
              }
              v16 = (unsigned int)v15;
              v17 = (wchar_t *)SddlpAlloc((unsigned int)v15);
              *v71 = v17;
              if ( !v17 )
              {
                PrintableOperandValue = 8;
                goto LABEL_103;
              }
              if ( RtlStringCchPrintfW(v17, v16 >> 1, L"SID(%ls)", P) < 0 )
                goto LABEL_85;
              goto LABEL_103;
            }
          }
          return 1336;
        }
        if ( a2 - 1 >= 4 )
        {
          v31 = *(unsigned int *)(a1 + 1);
          v70 = v31;
          *a4 = 5;
          if ( a2 - 5 >= (unsigned int)v31 )
          {
            if ( (_DWORD)v31 )
            {
              v32 = 2 * v31;
              if ( v32 <= 0xFFFFFFFF && (int)v32 + 2 >= (unsigned int)v32 )
              {
                v33 = 2LL * (unsigned int)(v32 + 2);
                if ( v33 <= 0xFFFFFFFF )
                {
                  v73 = (unsigned int)v33;
                  v34 = (wchar_t *)SddlpAlloc((unsigned int)v33);
                  v35 = v71;
                  *v71 = v34;
                  if ( v34 )
                  {
                    v36 = v70;
                    *v34 = 35;
                    Sizea = 0;
                    v37 = 0;
                    if ( v36 )
                    {
                      v38 = v75;
                      v39 = 0LL;
                      *(_QWORD *)v72 = 0LL;
                      do
                      {
                        v40 = 2 * v37;
                        v41 = v38[v39 + *a4] & 0xF;
                        (*v35)[v40 + 1] = a0123456789abcd[(unsigned __int64)(unsigned __int8)v38[v39 + *a4] >> 4];
                        (*v35)[v40 + 2] = a0123456789abcd[v41];
                        v37 = Sizea + 1;
                        v39 = *(_QWORD *)v72 + 1LL;
                        Sizea = v37;
                        ++*(_QWORD *)v72;
                      }
                      while ( v37 < v36 );
                      PrintableOperandValue = 0;
                    }
                    (*v35)[(v73 >> 1) - 1] = 0;
                    *a4 += v36;
                  }
                  else
                  {
                    PrintableOperandValue = 8;
                  }
                  goto LABEL_103;
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
    v47 = a1[9];
    v73 = *(_QWORD *)(a1 + 1);
    Size_4 = a1[10];
    v60 = v47;
    v48 = (wchar_t *)SddlpAlloc(0x40uLL);
    *v8 = v48;
    v49 = v48;
    if ( !v48 )
    {
LABEL_70:
      PrintableOperandValue = 8;
      goto LABEL_103;
    }
    if ( v60 == 1 )
    {
      v50 = 43;
    }
    else
    {
      if ( v60 != 2 )
      {
LABEL_76:
        v51 = pszFormat;
        v52 = 8LL;
        if ( Size_4 == 1 )
        {
          *v49 = 48;
          v53 = 0;
          ++v49;
          while ( v52 != -2147483638 )
          {
            v54 = *(wchar_t *)((char *)v51 + (char *)L"%I64o" - (char *)pszFormat);
            if ( !v54 )
              break;
            *v51++ = v54;
            if ( !--v52 )
              goto LABEL_83;
          }
        }
        else
        {
          v53 = 0;
          if ( Size_4 == 3 )
          {
            *(_DWORD *)v49 = 7864368;
            v49 += 2;
            while ( v52 != -2147483638 )
            {
              v55 = *(wchar_t *)((char *)v51 + (char *)L"%I64x" - (char *)pszFormat);
              if ( !v55 )
                break;
              *v51++ = v55;
              if ( !--v52 )
                goto LABEL_83;
            }
          }
          else
          {
            while ( v52 != -2147483638 )
            {
              v56 = *(wchar_t *)((char *)v51 + (char *)L"%I64u" - (char *)pszFormat);
              if ( !v56 )
                break;
              *v51++ = v56;
              if ( !--v52 )
              {
LABEL_83:
                --v51;
                v53 = -2147483643;
                break;
              }
            }
          }
        }
        *v51 = 0;
        if ( v53 < 0 )
          goto LABEL_85;
        v57 = v73;
        if ( v73 || Size_4 != 1 )
        {
          if ( v60 == 2 )
            v57 = -(__int64)v73;
          if ( RtlStringCchPrintfW(v49, 32 - (v49 - *v8), pszFormat, v57) < 0 )
          {
LABEL_85:
            PrintableOperandValue = 50;
            goto LABEL_103;
          }
        }
        *a4 += 10;
LABEL_103:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return PrintableOperandValue;
      }
      v50 = 45;
    }
    *v49++ = v50;
    goto LABEL_76;
  }
  return 87LL;
}
