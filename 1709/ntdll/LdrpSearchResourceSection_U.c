/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180023154
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x180021A50 (RtlFindMessage.c)
 *     RtlLoadString @ 0x180021B10 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x180023010 (LdrFindResource_U.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceEx_U @ 0x180084620 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E05A0 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     ResourceEntryBinarySearch @ 0x180023CB4 (ResourceEntryBinarySearch.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrIsResItemExist @ 0x18002AA68 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007F19C (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A0360 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  int v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // r13d
  PVOID v10; // r15
  int v11; // eax
  __int64 CurrentLocale_low; // rcx
  __int64 v13; // rdx
  int v14; // r14d
  __int64 v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned __int16 v18; // ax
  unsigned int *v19; // r8
  unsigned int v20; // edi
  void *v21; // rax
  __int64 *v22; // r8
  unsigned int v23; // eax
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  int ResourceFromAlternativeModule; // edi
  __int64 result; // rax
  PVOID Heap; // rax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  struct _TEB *v39; // rax
  int ParentLangId; // eax
  unsigned __int16 v41; // r14
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  _DWORD *RcConfig; // rax
  unsigned __int16 v45[2]; // [rsp+30h] [rbp-108h] BYREF
  bool v46; // [rsp+34h] [rbp-104h]
  NTSTATUS v47; // [rsp+38h] [rbp-100h]
  unsigned __int16 v48; // [rsp+3Ch] [rbp-FCh]
  unsigned int v49; // [rsp+40h] [rbp-F8h]
  __int64 v50; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-E8h]
  unsigned int v52; // [rsp+54h] [rbp-E4h]
  unsigned int v53; // [rsp+58h] [rbp-E0h]
  PVOID BaseOfImage; // [rsp+60h] [rbp-D8h] BYREF
  bool v55; // [rsp+68h] [rbp-D0h] BYREF
  DWORD v56; // [rsp+6Ch] [rbp-CCh] BYREF
  void *v57; // [rsp+70h] [rbp-C8h]
  __int64 v58; // [rsp+78h] [rbp-C0h]
  __int64 v59; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+88h] [rbp-B0h]
  DWORD DefaultLocaleId; // [rsp+90h] [rbp-A8h] BYREF
  DWORD Lcid; // [rsp+94h] [rbp-A4h] BYREF
  __int64 v63; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-98h]
  struct _TEB *v65; // [rsp+B0h] [rbp-88h]
  unsigned int *v66; // [rsp+B8h] [rbp-80h]
  __int64 *v67; // [rsp+C0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-60h]
  __int64 v70; // [rsp+E0h] [rbp-58h]
  __int64 v71; // [rsp+E8h] [rbp-50h]
  __int64 v72; // [rsp+F0h] [rbp-48h]

  v5 = a4;
  v6 = a3;
  v7 = (__int64 *)a2;
  BaseOfImage = a1;
  v49 = a4;
  v58 = a5;
  v60 = a2;
  v8 = 0LL;
  v46 = 0;
  v53 = 0;
  if ( (unsigned int)a3 < 3 && (a4 & 2) == 0 || (unsigned int)a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( (_DWORD)a3 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)a3 != 4 )
  {
    goto LABEL_5;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_5:
  v9 = a3;
  if ( (_DWORD)a3 == 4 )
    v9 = 3;
  v52 = v9;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v9 - 1 <= 2 )
  {
    if ( v9 == 3 )
      v41 = *(_WORD *)(a2 + 16);
    else
      v41 = 0;
    v48 = v41;
    v42 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v42 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v42, L"MUI"))
      || (~(_BYTE)v5 & 8) == 0
      || (v41 & 0xF3FF) != 0
      || v41 == 3072 )
    {
      v10 = BaseOfImage;
      v5 |= LdrIsResItemExist(BaseOfImage, v7, a3, v5);
      v49 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v47 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v69 = *v7;
          if ( v9 < 2 )
            v43 = 0LL;
          else
            v43 = v7[1];
          v70 = v43;
          if ( v9 == 3 )
            v8 = v7[2];
          v71 = v8;
          if ( v6 == 4 )
            v72 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v58);
          v47 = result;
        }
        return result;
      }
      goto LABEL_13;
    }
    v5 |= 0x10u;
    v49 = v5;
  }
  v10 = BaseOfImage;
LABEL_13:
  v11 = RtlpImageDirectoryEntryToDataEx((int)v10, (__int64)&v63);
  CurrentLocale_low = v63;
  if ( v11 < 0 )
    CurrentLocale_low = 0LL;
  v63 = CurrentLocale_low;
  v64 = CurrentLocale_low;
  if ( !CurrentLocale_low )
    return 3221225609LL;
  BaseOfImage = (PVOID)CurrentLocale_low;
  v50 = 61166LL;
  v51 = 0;
  v13 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  v45[0] = 0;
  v48 = 0;
  v56 = 0;
  v14 = -1073741811;
  while ( 1 )
  {
    v15 = 3221225610LL;
    if ( !CurrentLocale_low )
      goto LABEL_28;
    v16 = v52;
    v17 = --v52;
    if ( !v16 )
      goto LABEL_28;
    if ( !v17 )
    {
      v21 = v57;
      if ( v9 == 3 )
        v21 = (void *)CurrentLocale_low;
      v57 = v21;
    }
    if ( v57 )
    {
      v22 = (__int64 *)v60;
      v48 = *(_WORD *)(v60 + 16);
      v46 = (v48 & 0x3FF) == 0;
      while ( 1 )
      {
        v23 = v51++;
        if ( v23 == 6 )
        {
          v45[0] = v50;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_46;
          v45[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v13) )
          {
            CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v53 >= (unsigned int)CurrentLocale_low )
              v45[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                CurrentLocale_low,
                (__int64)NtCurrentTeb()->MergedPrefLanguages,
                v53,
                v45,
                &v55);
            v5 = v49;
          }
          else
          {
            v45[0] = 0;
          }
          if ( v45[0] )
          {
            ++v53;
LABEL_81:
            --v51;
            goto LABEL_46;
          }
          goto LABEL_67;
        }
        if ( v23 <= 6 )
          break;
        v34 = v23 - 7;
        if ( !v34 )
        {
          if ( (~v5 & 0x80000) != 0 )
          {
            RcConfig = (_DWORD *)LdrpGetRcConfig(v10);
            if ( RcConfig )
            {
              if ( *RcConfig == -20054323 )
              {
                if ( RcConfig[31] )
                {
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                  if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
                  {
                    v24 = Lcid;
                    goto LABEL_45;
                  }
                }
              }
            }
          }
LABEL_67:
          v24 = v50;
          goto LABEL_45;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( !v36 )
          {
            v45[0] = v50;
            v47 = NtQueryDefaultLocale(1u, &v56);
            if ( v47 < 0 )
              goto LABEL_46;
            v24 = v56;
            goto LABEL_45;
          }
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              if ( v38 != 1 )
                return 3221225988LL;
LABEL_111:
              v5 |= 0x20u;
              v49 = v5;
              goto LABEL_46;
            }
            v24 = 1033;
            goto LABEL_45;
          }
          v45[0] = v50;
          v47 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v47 >= 0 )
          {
            v24 = DefaultLocaleId;
            if ( DefaultLocaleId != v56 )
              goto LABEL_45;
          }
        }
        else
        {
          v45[0] = v50;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_111;
          if ( NtCurrentTeb() )
          {
            v39 = NtCurrentTeb();
            CurrentLocale_low = LOWORD(v39->CurrentLocale);
            v45[0] = v39->CurrentLocale;
          }
          v5 = v49;
        }
LABEL_46:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v45[0] != v50 )
        {
          v50 = v45[0];
          v7 = &v50;
          v67 = &v50;
          CurrentLocale_low = (__int64)v57;
          BaseOfImage = v57;
          v15 = 3221225610LL;
          goto LABEL_21;
        }
LABEL_49:
        v22 = (__int64 *)v60;
      }
      if ( !v23 )
      {
        if ( !v48 )
          goto LABEL_55;
        v24 = v50;
        if ( (v5 & 0x80000) != 0 )
          v24 = v48;
        goto LABEL_45;
      }
      v25 = v23 - 1;
      if ( !v25 )
      {
        v13 = ~v5;
        LOBYTE(CurrentLocale_low) = (v13 & 0x20000) != 0 && (v13 & 0x80000) != 0;
        if ( ((unsigned __int8)CurrentLocale_low & ((~(_BYTE)v5 & 0x10) != 0)) != 0 )
        {
          v69 = *v22;
          if ( v9 < 2 )
            v29 = 0LL;
          else
            v29 = v22[1];
          v70 = v29;
          if ( v9 == 3 )
            v30 = v22[2];
          else
            v30 = 0LL;
          v71 = v30;
          if ( v6 == 4 )
            v72 = v22[3];
          ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(v10, v58);
          v47 = ResourceFromAlternativeModule;
          if ( ResourceFromAlternativeModule >= 0 )
          {
            LdrpResReportResourceAccessInternal(v10);
            return (unsigned int)ResourceFromAlternativeModule;
          }
        }
        goto LABEL_67;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v24 = v48;
        if ( v46 )
          v24 = v50;
        goto LABEL_45;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( !v46 )
        {
          ParentLangId = LdrpGetParentLangId(v45[0], v45, v22, v15);
          if ( ParentLangId >= 0 )
          {
            if ( !v45[0] )
              goto LABEL_46;
            goto LABEL_81;
          }
LABEL_55:
          v45[0] = 0;
          goto LABEL_46;
        }
        goto LABEL_67;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
          return 3221225988LL;
        if ( !v46 )
          return 3221225988LL;
        goto LABEL_67;
      }
      if ( v46 )
        goto LABEL_67;
      v24 = v48 & 0x3FF;
LABEL_45:
      v45[0] = v24;
      goto LABEL_46;
    }
LABEL_21:
    v18 = *(_WORD *)(CurrentLocale_low + 12);
    v19 = (unsigned int *)(CurrentLocale_low + 16);
    v66 = (unsigned int *)(CurrentLocale_low + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v19 += 2 * v18;
      v66 = v19;
      v18 = *(_WORD *)(CurrentLocale_low + 14);
    }
    if ( !v18 )
    {
      switch ( v9 - v52 )
      {
        case 1u:
          v14 = -1073741686;
          v47 = -1073741686;
          goto LABEL_98;
        case 2u:
          v14 = -1073741685;
          v47 = -1073741685;
          goto LABEL_99;
        case 3u:
          v14 = -1073741308;
          v47 = -1073741308;
          break;
        default:
          v47 = -1073741811;
LABEL_98:
          if ( (unsigned int)(v14 + 1073741686) <= 1 )
          {
LABEL_99:
            if ( (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v9 == 3 )
            {
              v69 = *(_QWORD *)v60;
              v70 = *(_QWORD *)(v60 + 8);
              v71 = *(_QWORD *)(v60 + 16);
              if ( v6 == 4 )
                v72 = *(_QWORD *)(v60 + 24);
              v14 = LdrpLoadResourceFromAlternativeModule(v10, v58);
              v47 = v14;
              if ( v14 >= 0 )
                LdrpResReportResourceAccessInternal(v10);
            }
          }
          break;
      }
      return (unsigned int)v14;
    }
    if ( v57 && (v5 & 0x20) != 0 )
      break;
    ResourceEntryBinarySearch(v18, v64, v19, *v7++, &BaseOfImage, &v59);
    v67 = v7;
    CurrentLocale_low = (__int64)BaseOfImage;
    v13 = v59;
  }
  CurrentLocale_low = 0LL;
  BaseOfImage = 0LL;
  v50 = *v19;
  v13 = v64 + v19[1];
  v59 = v13;
LABEL_28:
  if ( !v13 || (v5 & 2) != 0 )
  {
    if ( CurrentLocale_low && (v5 & 2) != 0 )
    {
      *(_QWORD *)v58 = CurrentLocale_low;
      goto LABEL_34;
    }
    switch ( v9 - v52 )
    {
      case 1u:
        v20 = -1073741686;
        v47 = -1073741686;
        break;
      case 2u:
        v20 = -1073741685;
        v47 = -1073741685;
LABEL_103:
        if ( (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v9 == 3 )
        {
          v69 = *(_QWORD *)v60;
          v70 = *(_QWORD *)(v60 + 8);
          v71 = *(_QWORD *)(v60 + 16);
          if ( v6 == 4 )
            v72 = *(_QWORD *)(v60 + 24);
          v20 = LdrpLoadResourceFromAlternativeModule(v10, v58);
          v47 = v20;
          if ( (v20 & 0x80000000) == 0 )
            LdrpResReportResourceAccessInternal(v10);
        }
        return v20;
      case 3u:
        v20 = -1073741308;
        v47 = -1073741308;
        if ( v57 )
        {
          v59 = 0LL;
          goto LABEL_49;
        }
        break;
      default:
        v20 = -1073741811;
        v47 = -1073741811;
        break;
    }
    if ( v20 + 1073741686 > 1 )
      return v20;
    goto LABEL_103;
  }
  *(_QWORD *)v58 = v13;
  if ( !NtCurrentTeb()->ResourceRetValue )
  {
    v65 = NtCurrentTeb();
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
    v65->ResourceRetValue = Heap;
  }
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v10;
    *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v59;
    *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v10;
  }
LABEL_34:
  v20 = 0;
  v47 = 0;
  return v20;
}
