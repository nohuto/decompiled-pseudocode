/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1405BBB44
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x14013D80C (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x14013DB50 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x140639150 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x140782330 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x140782350 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x140783060 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14013D80C (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x14013D8D8 (LdrIsResItemExist.c)
 *     LdrpGetParentLangId @ 0x14014D810 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1401A6D4C (LdrpCompareResourceNamesWithValidation.c)
 */

int __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, int a4, unsigned int **a5)
{
  int v5; // r15d
  int v6; // r14d
  __int64 *v7; // r12
  int result; // eax
  int v9; // eax
  int v10; // r13d
  unsigned __int16 v11; // di
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  int v21; // eax
  char *v22; // r8
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // ax
  unsigned __int16 v31; // si
  unsigned int *v32; // r14
  unsigned int *v33; // rax
  unsigned __int16 v34; // r13
  __int64 v35; // rax
  char v36; // si
  unsigned int *v37; // r15
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // eax
  __int16 v43[2]; // [rsp+30h] [rbp-118h] BYREF
  char v44; // [rsp+34h] [rbp-114h]
  char v45; // [rsp+35h] [rbp-113h]
  int v46; // [rsp+38h] [rbp-110h]
  char v47; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v48; // [rsp+40h] [rbp-108h]
  ULONG Size; // [rsp+44h] [rbp-104h] BYREF
  __int64 v50; // [rsp+48h] [rbp-100h]
  int v51; // [rsp+50h] [rbp-F8h]
  int v52; // [rsp+54h] [rbp-F4h]
  int v53; // [rsp+58h] [rbp-F0h]
  unsigned int **v54; // [rsp+60h] [rbp-E8h]
  __int64 v55; // [rsp+68h] [rbp-E0h] BYREF
  char v56[4]; // [rsp+70h] [rbp-D8h] BYREF
  __int16 v57; // [rsp+74h] [rbp-D4h]
  int v58; // [rsp+78h] [rbp-D0h]
  unsigned int v59; // [rsp+7Ch] [rbp-CCh]
  char v60; // [rsp+80h] [rbp-C8h]
  char v61; // [rsp+81h] [rbp-C7h]
  char v62[6]; // [rsp+82h] [rbp-C6h] BYREF
  void *v63; // [rsp+88h] [rbp-C0h]
  char *v64; // [rsp+90h] [rbp-B8h]
  char *v65; // [rsp+98h] [rbp-B0h]
  __int64 v66; // [rsp+A0h] [rbp-A8h]
  __int64 v67; // [rsp+A8h] [rbp-A0h]
  unsigned int *v68; // [rsp+B0h] [rbp-98h]
  unsigned int *v69; // [rsp+B8h] [rbp-90h]
  unsigned int *v70; // [rsp+C0h] [rbp-88h]
  int v71; // [rsp+C8h] [rbp-80h]
  char *v72; // [rsp+D0h] [rbp-78h]
  __int64 *v73; // [rsp+D8h] [rbp-70h]
  __int64 *v74; // [rsp+E0h] [rbp-68h]
  _QWORD v75[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-50h]
  __int64 v77; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v52 = a4;
  v6 = a3;
  v59 = a3;
  v7 = a2;
  v63 = a1;
  v54 = a5;
  v73 = a2;
  v45 = 0;
  v47 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return -1073741583;
LABEL_10:
  v9 = a3;
  if ( a3 == 4 )
    v9 = 3;
  v48 = v9;
  v51 = v9;
  LOWORD(v10) = 0;
  v53 = 0;
  v11 = 0;
  v43[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v12 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v66 = (__int64)v12;
  if ( !v12 )
    return -1073741687;
  v13 = v12;
  v64 = v12;
  v55 = 61166LL;
  v58 = 0;
  v14 = 0LL;
  v50 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v72 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) != 0 && v48 - 1 <= 2 && PnPBootDriversInitialized == 1 )
  {
    if ( v48 == 3 )
      v10 = *((unsigned __int16 *)v7 + 8);
    else
      v10 = 0;
    v53 = v10;
    v57 = v10;
    v15 = *v7;
    if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v15, L"MUI"))
      || (~(_BYTE)v5 & 8) == 0
      || (v10 & 0xF3FF) != 0
      || (_WORD)v10 == 3072 )
    {
      v5 |= LdrIsResItemExist(v63, v7);
    }
    else
    {
      v5 |= 0x10u;
    }
    v14 = v50;
    v52 = v5;
  }
  if ( PnPBootDriversInitialized != 1 || (v16 = ~v5, (~v5 & 0x80000) == 0) || (v16 & 0x20000) == 0 || (v16 & 0x10) == 0 )
  {
    v17 = 0;
    v44 = 0;
    goto LABEL_42;
  }
  v17 = 1;
  v44 = 1;
  v75[0] = *v7;
  v18 = v48;
  if ( v48 < 2 )
    v19 = 0LL;
  else
    v19 = v7[1];
  v75[1] = v19;
  if ( v6 == 4 )
    v77 = v7[3];
LABEL_43:
  v20 = v51;
  if ( v13 )
  {
    v21 = v51;
    v20 = v51 - 1;
    v51 = v20;
    v71 = v20;
    v22 = v65;
    if ( v21 )
    {
      if ( !v20 )
      {
        if ( (_DWORD)v18 == 3 )
          v22 = v13;
        v65 = v22;
        v72 = v22;
      }
      if ( v22 )
      {
        v10 = *((unsigned __int16 *)v73 + 8);
        v53 = v10;
        v57 = v10;
        LOBYTE(v14) = (v10 & 0x3FF) == 0;
        v45 = v14;
        v60 = v14;
LABEL_70:
        v23 = v58;
        while ( 1 )
        {
          v24 = v23++;
          v58 = v23;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( !v27 )
                {
                  v14 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                  if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) != PsMachineUILanguageId )
                  {
                    if ( v17 )
                    {
                      v76 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                      result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                      v46 = result;
                      if ( result >= 0 )
                        return result;
                    }
                    v30 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
                    goto LABEL_95;
                  }
LABEL_91:
                  v11 = v55;
                  v43[0] = v55;
                  goto LABEL_117;
                }
                v28 = v27 - 1;
                if ( v28 )
                {
                  v29 = v28 - 1;
                  if ( v29 )
                  {
                    if ( v29 != 1 )
                      goto LABEL_152;
                    v5 |= 0x20u;
                    v52 = v5;
                  }
                  else
                  {
                    v11 = 1033;
                    v43[0] = 1033;
                    if ( PsDefaultSystemLocaleId == 1033
                      || *(_WORD *)((char *)&NlsMbCodePageTag + 3) == 1033
                      || PsMachineUILanguageId == 1033 )
                    {
                      goto LABEL_91;
                    }
                    if ( v17 )
                    {
                      v76 = 1033LL;
                      result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                      v46 = result;
                      if ( result >= 0 )
                        return result;
                    }
                  }
                }
                else
                {
                  v14 = (unsigned int)PsDefaultSystemLocaleId;
                  v11 = PsDefaultSystemLocaleId;
                  v43[0] = PsDefaultSystemLocaleId;
                  if ( (_WORD)PsDefaultSystemLocaleId == *(_WORD *)((char *)&NlsMbCodePageTag + 3)
                    || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
                  {
                    goto LABEL_91;
                  }
                  if ( v17 )
                  {
                    v76 = (unsigned __int16)PsDefaultSystemLocaleId;
                    result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                    v46 = result;
                    if ( result >= 0 )
                      return result;
                  }
                }
              }
              else
              {
                if ( !(_BYTE)v14 )
                  goto LABEL_152;
                if ( v17 && PsMachineUILanguageId )
                {
                  v76 = (unsigned __int16)PsMachineUILanguageId;
                  result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                  v46 = result;
                  if ( result >= 0 )
                    return result;
                  v30 = PsMachineUILanguageId;
LABEL_95:
                  v11 = v30;
                  v43[0] = v30;
                  goto LABEL_117;
                }
                v14 = (unsigned __int16)v55;
                if ( PsMachineUILanguageId )
                  LOWORD(v14) = PsMachineUILanguageId;
                v11 = v14;
                v43[0] = v14;
              }
            }
            else
            {
              if ( v11 )
              {
                if ( (int)LdrpGetParentLangId(v11, v43) >= 0 )
                {
                  v11 = v43[0];
                }
                else
                {
                  v11 = 0;
                  v43[0] = 0;
                }
              }
              if ( v17 )
              {
                if ( !v11 )
                  goto LABEL_117;
                v76 = v11;
                result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                v46 = result;
                if ( result >= 0 )
                  return result;
              }
              if ( v11 )
                v58 = --v23;
            }
          }
          else
          {
            if ( v17 )
            {
              if ( (_WORD)v10 )
              {
                v76 = (unsigned __int16)v10;
                result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v75, v6, v5, v54);
                v46 = result;
                if ( result >= 0 )
                  return result;
              }
            }
            v11 = v10;
            v43[0] = v10;
          }
LABEL_117:
          if ( (~(_BYTE)v5 & 0x20) == 0 || v11 != v55 )
          {
            v55 = v11;
            v7 = &v55;
            v74 = &v55;
            v22 = v65;
            v13 = v65;
            v64 = v65;
            v20 = v51;
            break;
          }
          LOBYTE(v14) = v45;
        }
      }
      v31 = *((_WORD *)v13 + 6);
      LOWORD(Size) = v31;
      v32 = (unsigned int *)(v13 + 16);
      v69 = (unsigned int *)(v13 + 16);
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v32 += 2 * v31;
        v69 = v32;
        v31 = *((_WORD *)v13 + 7);
        LOWORD(Size) = v31;
      }
      if ( !v31 )
      {
        v64 = 0LL;
        v47 = 0;
        v61 = 0;
        v6 = v59;
        v17 = v44;
        v18 = v48;
        goto LABEL_59;
      }
      if ( v22 && (v5 & 0x20) != 0 )
      {
        v13 = 0LL;
        v64 = 0LL;
        v55 = *v32;
        v14 = v66 + v32[1];
        v67 = v14;
        v6 = v59;
        v17 = v44;
        v18 = v48;
        goto LABEL_52;
      }
      v13 = 0LL;
      v64 = 0LL;
      v33 = &v32[2 * v31 - 2];
      v70 = v33;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v32 > v33 )
            goto LABEL_138;
          v34 = v31 >> 1;
          if ( !(v31 >> 1) )
          {
            if ( v31 )
            {
              v41 = v66;
              if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v66, v32, v56) )
              {
                v42 = v32[1];
                v40 = (unsigned int)v42;
                if ( v42 >= 0 )
                {
                  v14 = v41 + (unsigned int)v42;
                  goto LABEL_141;
                }
LABEL_137:
                v13 = (char *)(v41 + (v40 & 0xFFFFFFFF7FFFFFFFuLL));
                v64 = v13;
              }
            }
LABEL_138:
            v14 = v50;
            goto LABEL_139;
          }
          v68 = v32;
          v35 = 2LL * v34;
          v36 = v31 & 1;
          if ( v36 )
            v37 = &v32[v35];
          else
            v37 = &v32[v35 - 2];
          v68 = v37;
          v38 = LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v66, v37, v62);
          if ( !v38 )
          {
            v39 = v37[1];
            v40 = (unsigned int)v39;
            if ( v39 < 0 )
            {
              v41 = v66;
              goto LABEL_137;
            }
            v13 = 0LL;
            v64 = 0LL;
            v14 = v66 + (unsigned int)v39;
LABEL_141:
            v50 = v14;
            v67 = v14;
LABEL_139:
            v74 = ++v7;
            v5 = v52;
            v6 = v59;
            v17 = v44;
            LOWORD(v10) = v53;
LABEL_42:
            v18 = v48;
            goto LABEL_43;
          }
          if ( v38 < 0 )
            break;
          v32 = v37 + 2;
          v69 = v37 + 2;
          LOWORD(Size) = v34;
          v33 = v70;
LABEL_147:
          v31 = v34;
        }
        v33 = v37 - 2;
        v70 = v37 - 2;
        if ( v36 )
        {
          LOWORD(Size) = v34;
          goto LABEL_147;
        }
        v31 = v34 - 1;
        LOWORD(Size) = v34 - 1;
      }
    }
  }
  else
  {
    v22 = v65;
  }
LABEL_52:
  if ( v14 && (v5 & 2) == 0 )
  {
    *v54 = (unsigned int *)v14;
LABEL_55:
    result = 0;
LABEL_66:
    v46 = result;
    return result;
  }
  if ( v13 && (v5 & 2) != 0 )
  {
    *v54 = (unsigned int *)v13;
    goto LABEL_55;
  }
LABEL_59:
  if ( (_DWORD)v18 - v20 == 1 )
  {
    result = -1073741686;
    goto LABEL_66;
  }
  if ( (_DWORD)v18 - v20 == 2 )
  {
    result = -1073741685;
LABEL_153:
    v46 = result;
    return result;
  }
  if ( (_DWORD)v18 - v20 != 3 )
  {
    result = -1073741811;
    goto LABEL_66;
  }
  result = -1073741308;
  v46 = -1073741308;
  if ( v22 )
  {
    v50 = 0LL;
    v67 = 0LL;
    if ( v47 )
    {
      LOBYTE(v14) = v45;
      goto LABEL_70;
    }
LABEL_152:
    result = -1073741308;
    goto LABEL_153;
  }
  return result;
}
