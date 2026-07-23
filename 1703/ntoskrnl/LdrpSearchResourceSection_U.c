/*
 * XREFs of LdrpSearchResourceSection_U @ 0x14042A354
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x140012E98 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x1400131C8 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x1405BD880 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x1406E6670 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1406E6690 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1406E7BA0 (RtlLoadString.c)
 * Callees:
 *     LdrpLoadResourceFromAlternativeModule @ 0x140012E98 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x140012F64 (LdrIsResItemExist.c)
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetParentLangId @ 0x140136BB0 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     LdrpCompareResourceNames_U @ 0x14042ADC4 (LdrpCompareResourceNames_U.c)
 */

int __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, int a4, unsigned int **a5)
{
  int v5; // r12d
  int v6; // r13d
  __int64 *v7; // r15
  int v8; // eax
  unsigned __int16 v9; // si
  char v10; // di
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // r9d
  int v14; // eax
  char *v15; // rdx
  unsigned __int16 v16; // di
  unsigned int *v17; // r14
  char *v18; // rbx
  unsigned int *v19; // rax
  unsigned __int16 v20; // r12
  char *v21; // rdi
  __int64 v22; // rax
  unsigned int *v23; // r14
  int v24; // r8d
  char v25; // di
  __int64 v26; // rax
  unsigned int *v27; // r13
  int v28; // eax
  bool v29; // cl
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int result; // eax
  __int16 v35; // ax
  char *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int16 v41[2]; // [rsp+30h] [rbp-118h] BYREF
  char v42; // [rsp+34h] [rbp-114h]
  int v43; // [rsp+38h] [rbp-110h]
  int v44; // [rsp+3Ch] [rbp-10Ch]
  char v45; // [rsp+40h] [rbp-108h]
  unsigned int v46; // [rsp+44h] [rbp-104h]
  ULONG Size; // [rsp+48h] [rbp-100h] BYREF
  int v48; // [rsp+4Ch] [rbp-FCh]
  int v49; // [rsp+50h] [rbp-F8h]
  unsigned int **v50; // [rsp+58h] [rbp-F0h]
  __int64 v51; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int *v52; // [rsp+68h] [rbp-E0h]
  bool v53; // [rsp+70h] [rbp-D8h]
  char v54; // [rsp+71h] [rbp-D7h]
  __int16 v55; // [rsp+74h] [rbp-D4h]
  int v56; // [rsp+78h] [rbp-D0h]
  BOOL v57; // [rsp+7Ch] [rbp-CCh]
  void *v58; // [rsp+80h] [rbp-C8h]
  char *v59; // [rsp+88h] [rbp-C0h]
  char *v60; // [rsp+90h] [rbp-B8h]
  char *v61; // [rsp+98h] [rbp-B0h]
  unsigned int *v62; // [rsp+A0h] [rbp-A8h]
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
  v49 = a4;
  v6 = a3;
  v63 = a3;
  v7 = a2;
  v58 = a1;
  v50 = a5;
  v69 = a2;
  LOBYTE(v57) = 0;
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
  v46 = v8;
  v48 = v8;
  LOWORD(v44) = 0;
  v9 = 0;
  v41[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v36 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v61 = v36;
  if ( !v36 )
    return -1073741687;
  v18 = v36;
  v59 = v36;
  v51 = 61166LL;
  v56 = 0;
  v23 = 0LL;
  v52 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v68 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v46 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_107;
  if ( v46 == 3 )
    v24 = *((unsigned __int16 *)v7 + 8);
  else
    v24 = 0;
  v44 = v24;
  v55 = v24;
  v37 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v37 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v37, L"MUI") )
      goto LABEL_106;
    LOWORD(v24) = v44;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v24 & 0xF3FF) != 0 || (_WORD)v24 == 3072 )
  {
LABEL_106:
    v5 |= LdrIsResItemExist(v58, v7);
    v49 = v5;
LABEL_107:
    LOWORD(v24) = v44;
    goto LABEL_108;
  }
  v5 |= 0x10u;
  v49 = v5;
LABEL_108:
  if ( PnPBootDriversInitialized != 1 || (~v5 & 0x20000) == 0 || (~v5 & 0x80000) == 0 || (~(_BYTE)v5 & 0x10) == 0 )
  {
    v10 = 0;
    v42 = 0;
    goto LABEL_31;
  }
  v10 = 1;
  v42 = 1;
  v71[0] = *v7;
  v11 = v46;
  if ( v46 < 2 )
    v12 = 0LL;
  else
    v12 = v7[1];
  v71[1] = v12;
  if ( v6 == 4 )
    v73 = v7[3];
LABEL_14:
  v13 = v48;
  if ( !v18 )
  {
    v15 = v60;
    goto LABEL_58;
  }
  v14 = v48;
  v13 = v48 - 1;
  v48 = v13;
  v67 = v13;
  v15 = v60;
  if ( v14 )
  {
    if ( !v13 )
    {
      if ( v11 == 3 )
        v15 = v18;
      v60 = v15;
      v68 = v15;
    }
    if ( v15 )
    {
      v24 = *((unsigned __int16 *)v69 + 8);
      v44 = v24;
      v55 = v24;
      v29 = (v24 & 0x3FF) == 0;
      v57 = v29;
      v53 = v29;
LABEL_40:
      v30 = v56;
      while ( 1 )
      {
        v31 = v30++;
        v56 = v30;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v38 = v33 - 1;
              if ( !v38 )
              {
                if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) == PsMachineUILanguageId )
                {
LABEL_145:
                  v9 = v51;
                }
                else
                {
                  if ( v10 )
                  {
                    v72 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                    result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
                    v43 = result;
                    if ( result >= 0 )
                      return result;
                  }
                  v9 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
                }
LABEL_147:
                v41[0] = v9;
                goto LABEL_51;
              }
              v39 = v38 - 1;
              if ( v39 )
              {
                v40 = v39 - 1;
                if ( v40 )
                {
                  if ( v40 != 1 )
                    goto LABEL_155;
                  v5 |= 0x20u;
                  v49 = v5;
                }
                else
                {
                  v9 = 1033;
                  v41[0] = 1033;
                  if ( PsDefaultSystemLocaleId == 1033
                    || *(_WORD *)((char *)&NlsMbCodePageTag + 3) == 1033
                    || PsMachineUILanguageId == 1033 )
                  {
                    goto LABEL_145;
                  }
                  if ( v10 )
                  {
                    v72 = 1033LL;
                    result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
                    v43 = result;
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
                  goto LABEL_145;
                }
                if ( v10 )
                {
                  v72 = (unsigned __int16)PsDefaultSystemLocaleId;
                  result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              if ( !v29 )
                goto LABEL_155;
              if ( v10 && PsMachineUILanguageId )
              {
                v72 = (unsigned __int16)PsMachineUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
                v43 = result;
                if ( result >= 0 )
                  return result;
                v9 = PsMachineUILanguageId;
                goto LABEL_147;
              }
              v35 = v51;
              if ( PsMachineUILanguageId )
                v35 = PsMachineUILanguageId;
              v9 = v35;
              v41[0] = v35;
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
            if ( v10 )
            {
              if ( !v9 )
                goto LABEL_51;
              v72 = v9;
              result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
              v43 = result;
              if ( result >= 0 )
                return result;
            }
            if ( v9 )
              v56 = --v30;
          }
        }
        else
        {
          if ( v10 && (_WORD)v24 )
          {
            v72 = (unsigned __int16)v24;
            result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v71, v6, v5, v50);
            v43 = result;
            if ( result >= 0 )
              return result;
            LOWORD(v24) = v44;
          }
          v9 = v24;
          v41[0] = v24;
        }
LABEL_51:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v51 )
        {
          v51 = v9;
          v7 = &v51;
          v70 = &v51;
          v15 = v60;
          v18 = v60;
          v59 = v60;
          v13 = v48;
          break;
        }
        LOWORD(v24) = v44;
        v29 = v57;
      }
    }
    v16 = *((_WORD *)v18 + 6);
    LOWORD(Size) = v16;
    v17 = (unsigned int *)(v18 + 16);
    v65 = (unsigned int *)(v18 + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v17 += 2 * v16;
      v65 = v17;
      v16 = *((_WORD *)v18 + 7);
      LOWORD(Size) = v16;
    }
    if ( !v16 )
    {
      v59 = 0LL;
      v45 = 0;
      v54 = 0;
      v10 = v42;
      LOWORD(v24) = v44;
      v11 = v46;
      goto LABEL_60;
    }
    if ( v15 && (v5 & 0x20) != 0 )
    {
      v18 = 0LL;
      v59 = 0LL;
      v51 = *v17;
      v23 = (unsigned int *)&v61[v17[1]];
      v62 = v23;
      v10 = v42;
      LOWORD(v24) = v44;
      v11 = v46;
      goto LABEL_58;
    }
    v18 = 0LL;
    v59 = 0LL;
    v19 = &v17[2 * v16 - 2];
    v66 = v19;
    while ( 1 )
    {
      if ( v17 > v19 )
        goto LABEL_29;
      v20 = v16 >> 1;
      if ( !(v16 >> 1) )
      {
        if ( !v16 )
          goto LABEL_29;
        v21 = v61;
        if ( (unsigned int)LdrpCompareResourceNames_U(*v7, v61, v17) )
          goto LABEL_29;
        v22 = v17[1];
        if ( (unsigned int)v22 >= 0x80000000 )
          goto LABEL_28;
        v23 = (unsigned int *)&v21[v22];
        goto LABEL_85;
      }
      v64 = v17;
      v25 = v16 & 1;
      if ( v25 )
        v26 = v20;
      else
        v26 = v20 - 1;
      v27 = &v17[2 * v26];
      v64 = v27;
      v28 = LdrpCompareResourceNames_U(*v7, v61, v27);
      if ( !v28 )
      {
        v22 = v27[1];
        if ( (unsigned int)v22 >= 0x80000000 )
        {
          v21 = v61;
LABEL_28:
          v18 = &v21[v22 & 0xFFFFFFFF7FFFFFFFuLL];
          v59 = v18;
LABEL_29:
          v23 = v52;
          goto LABEL_30;
        }
        v18 = 0LL;
        v59 = 0LL;
        v23 = (unsigned int *)&v61[v22];
LABEL_85:
        v52 = v23;
        v62 = v23;
LABEL_30:
        v70 = ++v7;
        v5 = v49;
        v6 = v63;
        v10 = v42;
        LOWORD(v24) = v44;
LABEL_31:
        v11 = v46;
        goto LABEL_14;
      }
      if ( v28 >= 0 )
        break;
      v19 = v27 - 2;
      v66 = v27 - 2;
      if ( v25 )
      {
        LOWORD(Size) = v20;
LABEL_90:
        v16 = v20;
      }
      else
      {
        v16 = v20 - 1;
        LOWORD(Size) = v20 - 1;
      }
    }
    v17 = v27 + 2;
    v65 = v27 + 2;
    LOWORD(Size) = v20;
    v19 = v66;
    goto LABEL_90;
  }
LABEL_58:
  if ( !v23 || (v5 & 2) != 0 )
  {
    if ( v18 && (v5 & 2) != 0 )
    {
      *v50 = (unsigned int *)v18;
      goto LABEL_68;
    }
LABEL_60:
    switch ( v11 - v13 )
    {
      case 1u:
        result = -1073741686;
        goto LABEL_69;
      case 2u:
        result = -1073741685;
        break;
      case 3u:
        result = -1073741308;
        v43 = -1073741308;
        if ( !v15 )
          return result;
        v52 = 0LL;
        v62 = 0LL;
        if ( v45 )
        {
          v29 = v57;
          goto LABEL_40;
        }
LABEL_155:
        result = -1073741308;
        break;
      default:
        result = -1073741811;
        goto LABEL_69;
    }
    v43 = result;
    return result;
  }
  *v50 = v23;
LABEL_68:
  result = 0;
LABEL_69:
  v43 = result;
  return result;
}
