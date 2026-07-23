/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1404D9C34
 * Callers:
 *     LdrpGetRcConfig @ 0x1400DD0A8 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD444 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x1405BBF70 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x14071ED10 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x14071ED30 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x14071F980 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     LdrIsResItemExist @ 0x1400DD1E0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD444 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetParentLangId @ 0x14013268C (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     LdrpCompareResourceNames_U @ 0x1404DA6A0 (LdrpCompareResourceNames_U.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, int a4, char **a5)
{
  int v5; // r12d
  int v6; // r13d
  __int64 *v7; // r15
  int v8; // eax
  unsigned __int16 v9; // si
  char *v10; // rax
  char *v11; // rbx
  char *v12; // r14
  int v13; // r8d
  __int64 v14; // rcx
  char v15; // di
  unsigned int v16; // ecx
  int v17; // r9d
  int v18; // eax
  char *v19; // rdx
  unsigned __int16 v20; // di
  unsigned int *v21; // r14
  unsigned int *v22; // rax
  unsigned __int16 v23; // r12
  char *v24; // rdi
  __int64 v25; // rax
  char v26; // di
  unsigned int *v27; // r13
  int v28; // eax
  bool v29; // cl
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  NTSTATUS result; // eax
  __int64 v35; // rax
  __int16 v36; // cx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int16 v40; // ax
  __int16 v41[2]; // [rsp+30h] [rbp-118h] BYREF
  char v42; // [rsp+34h] [rbp-114h]
  bool v43; // [rsp+35h] [rbp-113h]
  int v44; // [rsp+38h] [rbp-110h]
  char v45; // [rsp+3Ch] [rbp-10Ch]
  int v46; // [rsp+40h] [rbp-108h]
  unsigned int v47; // [rsp+44h] [rbp-104h]
  ULONG Size; // [rsp+48h] [rbp-100h] BYREF
  int v49; // [rsp+4Ch] [rbp-FCh]
  int v50; // [rsp+50h] [rbp-F8h]
  char **v51; // [rsp+58h] [rbp-F0h]
  __int64 v52; // [rsp+60h] [rbp-E8h] BYREF
  char *v53; // [rsp+68h] [rbp-E0h]
  bool v54; // [rsp+70h] [rbp-D8h]
  char v55; // [rsp+71h] [rbp-D7h]
  __int16 v56; // [rsp+74h] [rbp-D4h]
  int v57; // [rsp+78h] [rbp-D0h]
  void *v58; // [rsp+80h] [rbp-C8h]
  char *v59; // [rsp+88h] [rbp-C0h]
  char *v60; // [rsp+90h] [rbp-B8h]
  char *v61; // [rsp+98h] [rbp-B0h]
  char *v62; // [rsp+A0h] [rbp-A8h]
  unsigned int v63; // [rsp+A8h] [rbp-A0h]
  unsigned int *v64; // [rsp+B0h] [rbp-98h]
  unsigned int *v65; // [rsp+B8h] [rbp-90h]
  unsigned int *v66; // [rsp+C0h] [rbp-88h]
  int v67; // [rsp+C8h] [rbp-80h]
  char *v68; // [rsp+D0h] [rbp-78h]
  __int64 *v69; // [rsp+D8h] [rbp-70h]
  __int64 *v70; // [rsp+E0h] [rbp-68h]
  _QWORD v71[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-50h]
  __int64 v73; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v50 = a4;
  v6 = a3;
  v63 = a3;
  v7 = a2;
  v58 = a1;
  v51 = a5;
  v69 = a2;
  v43 = 0;
  v45 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
    goto LABEL_5;
  }
  if ( a3 == 4 )
  {
LABEL_5:
    if ( (a4 & 0x41) != 0 )
      goto LABEL_6;
    return -1073741583;
  }
LABEL_6:
  v8 = a3;
  if ( a3 == 4 )
    v8 = 3;
  v47 = v8;
  v49 = v8;
  LOWORD(v46) = 0;
  v9 = 0;
  v41[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v10 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v61 = v10;
  if ( !v10 )
    return -1073741687;
  v11 = v10;
  v59 = v10;
  v52 = 61166LL;
  v57 = 0;
  v12 = 0LL;
  v53 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v68 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || PnPBootDriversInitialized != 1 || v47 - 1 > 2 )
    goto LABEL_20;
  if ( v47 == 3 )
    v13 = *((unsigned __int16 *)v7 + 8);
  else
    v13 = 0;
  v46 = v13;
  v56 = v13;
  v14 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v14, L"MUI") )
      goto LABEL_19;
    LOWORD(v13) = v46;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
  {
LABEL_19:
    v5 |= LdrIsResItemExist(v58, v7);
    v50 = v5;
LABEL_20:
    LOWORD(v13) = v46;
    goto LABEL_21;
  }
  v5 |= 0x10u;
  v50 = v5;
LABEL_21:
  if ( PnPBootDriversInitialized != 1 || (~v5 & 0x20000) == 0 || (~v5 & 0x80000) == 0 || (~(_BYTE)v5 & 0x10) == 0 )
  {
    v15 = 0;
    v42 = 0;
    goto LABEL_24;
  }
  v15 = 1;
  v42 = 1;
  v71[0] = *v7;
  v16 = v47;
  if ( v47 < 2 )
    v35 = 0LL;
  else
    v35 = v7[1];
  v71[1] = v35;
  if ( v6 == 4 )
    v73 = v7[3];
LABEL_25:
  v17 = v49;
  if ( !v11 )
  {
    v19 = v60;
    goto LABEL_68;
  }
  v18 = v49;
  v17 = v49 - 1;
  v49 = v17;
  v67 = v17;
  v19 = v60;
  if ( v18 )
  {
    if ( !v17 )
    {
      if ( v16 == 3 )
        v19 = v11;
      v60 = v19;
      v68 = v19;
    }
    if ( v19 )
    {
      v13 = *((unsigned __int16 *)v69 + 8);
      v46 = v13;
      v56 = v13;
      v29 = (v13 & 0x3FF) == 0;
      v43 = v29;
      v54 = v29;
LABEL_50:
      v30 = v57;
      while ( 1 )
      {
        v31 = v30++;
        v57 = v30;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v37 = v33 - 1;
              if ( !v37 )
              {
                if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) != PsMachineUILanguageId )
                {
                  if ( v15 )
                  {
                    v72 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                    result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
                    v44 = result;
                    if ( result >= 0 )
                      return result;
                  }
                  v40 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
                  goto LABEL_147;
                }
LABEL_144:
                v9 = v52;
                v41[0] = v52;
                goto LABEL_61;
              }
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  if ( v39 != 1 )
                    goto LABEL_154;
                  v5 |= 0x20u;
                  v50 = v5;
                }
                else
                {
                  v9 = 1033;
                  v41[0] = 1033;
                  if ( PsDefaultSystemLocaleId == 1033
                    || *(_WORD *)((char *)&NlsMbCodePageTag + 3) == 1033
                    || PsMachineUILanguageId == 1033 )
                  {
                    goto LABEL_144;
                  }
                  if ( v15 )
                  {
                    v72 = 1033LL;
                    result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
                    v44 = result;
                    if ( result >= 0 )
                      return result;
                  }
                }
              }
              else
              {
                v9 = PsDefaultSystemLocaleId;
                v41[0] = PsDefaultSystemLocaleId;
                if ( (_WORD)PsDefaultSystemLocaleId == *(_WORD *)((char *)&NlsMbCodePageTag + 3)
                  || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
                {
                  goto LABEL_144;
                }
                if ( v15 )
                {
                  v72 = (unsigned __int16)PsDefaultSystemLocaleId;
                  result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
                  v44 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              if ( !v29 )
                goto LABEL_154;
              if ( v15 && PsMachineUILanguageId )
              {
                v72 = (unsigned __int16)PsMachineUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
                v44 = result;
                if ( result >= 0 )
                  return result;
                v40 = PsMachineUILanguageId;
LABEL_147:
                v9 = v40;
                v41[0] = v40;
                goto LABEL_61;
              }
              v36 = v52;
              if ( PsMachineUILanguageId )
                v36 = PsMachineUILanguageId;
              v9 = v36;
              v41[0] = v36;
            }
          }
          else
          {
            if ( v9 )
            {
              if ( (int)LdrpGetParentLangId(v9, v41) >= 0 )
              {
                v9 = v41[0];
              }
              else
              {
                v9 = 0;
                v41[0] = 0;
              }
            }
            if ( v15 )
            {
              if ( !v9 )
                goto LABEL_61;
              v72 = v9;
              result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
              v44 = result;
              if ( result >= 0 )
                return result;
            }
            if ( v9 )
              v57 = --v30;
          }
        }
        else
        {
          if ( v15 && (_WORD)v13 )
          {
            v72 = (unsigned __int16)v13;
            result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v51);
            v44 = result;
            if ( result >= 0 )
              return result;
            LOWORD(v13) = v46;
          }
          v9 = v13;
          v41[0] = v13;
        }
LABEL_61:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v52 )
        {
          v52 = v9;
          v7 = &v52;
          v70 = &v52;
          v19 = v60;
          v11 = v60;
          v59 = v60;
          v17 = v49;
          break;
        }
        LOWORD(v13) = v46;
        v29 = v43;
      }
    }
    v20 = *((_WORD *)v11 + 6);
    LOWORD(Size) = v20;
    v21 = (unsigned int *)(v11 + 16);
    v65 = (unsigned int *)(v11 + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v21 += 2 * v20;
      v65 = v21;
      v20 = *((_WORD *)v11 + 7);
      LOWORD(Size) = v20;
    }
    if ( !v20 )
    {
      v59 = 0LL;
      v45 = 0;
      v55 = 0;
      v15 = v42;
      LOWORD(v13) = v46;
      v16 = v47;
      goto LABEL_70;
    }
    if ( v19 && (v5 & 0x20) != 0 )
    {
      v11 = 0LL;
      v59 = 0LL;
      v52 = *v21;
      v12 = &v61[v21[1]];
      v62 = v12;
      v15 = v42;
      LOWORD(v13) = v46;
      v16 = v47;
      goto LABEL_68;
    }
    v11 = 0LL;
    v59 = 0LL;
    v22 = &v21[2 * v20 - 2];
    v66 = v22;
    while ( 1 )
    {
      if ( v21 > v22 )
        goto LABEL_40;
      v23 = v20 >> 1;
      if ( !(v20 >> 1) )
      {
        if ( !v20 )
          goto LABEL_40;
        v24 = v61;
        if ( (unsigned int)LdrpCompareResourceNames_U(*v7, v61, v21) )
          goto LABEL_40;
        v25 = v21[1];
        if ( (int)v25 < 0 )
          goto LABEL_39;
        v12 = &v24[v25];
        goto LABEL_99;
      }
      v64 = v21;
      v26 = v20 & 1;
      if ( v26 )
        v27 = &v21[2 * v23];
      else
        v27 = &v21[2 * v23 - 2];
      v64 = v27;
      v28 = LdrpCompareResourceNames_U(*v7, v61, v27);
      if ( !v28 )
      {
        v25 = v27[1];
        if ( (int)v25 < 0 )
        {
          v24 = v61;
LABEL_39:
          v11 = &v24[v25 & 0xFFFFFFFF7FFFFFFFuLL];
          v59 = v11;
LABEL_40:
          v12 = v53;
          goto LABEL_41;
        }
        v11 = 0LL;
        v59 = 0LL;
        v12 = &v61[v25];
LABEL_99:
        v53 = v12;
        v62 = v12;
LABEL_41:
        v70 = ++v7;
        v5 = v50;
        v6 = v63;
        v15 = v42;
        LOWORD(v13) = v46;
LABEL_24:
        v16 = v47;
        goto LABEL_25;
      }
      if ( v28 >= 0 )
        break;
      v22 = v27 - 2;
      v66 = v27 - 2;
      if ( v26 )
      {
        LOWORD(Size) = v23;
LABEL_108:
        v20 = v23;
      }
      else
      {
        v20 = v23 - 1;
        LOWORD(Size) = v23 - 1;
      }
    }
    v21 = v27 + 2;
    v65 = v27 + 2;
    LOWORD(Size) = v23;
    v22 = v66;
    goto LABEL_108;
  }
LABEL_68:
  if ( !v12 || (v5 & 2) != 0 )
  {
    if ( v11 && (v5 & 2) != 0 )
    {
      *v51 = v11;
      goto LABEL_78;
    }
LABEL_70:
    switch ( v16 - v17 )
    {
      case 1u:
        result = -1073741686;
        goto LABEL_79;
      case 2u:
        result = -1073741685;
        break;
      case 3u:
        result = -1073741308;
        v44 = -1073741308;
        if ( !v19 )
          return result;
        v53 = 0LL;
        v62 = 0LL;
        if ( v45 )
        {
          v29 = v43;
          goto LABEL_50;
        }
LABEL_154:
        result = -1073741308;
        break;
      default:
        result = -1073741811;
        goto LABEL_79;
    }
    v44 = result;
    return result;
  }
  *v51 = v12;
LABEL_78:
  result = 0;
LABEL_79:
  v44 = result;
  return result;
}
