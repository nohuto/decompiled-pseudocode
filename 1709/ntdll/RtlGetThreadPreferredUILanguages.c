/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x18002C530
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180004C20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 * Callees:
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800043E0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegDupLanguageList @ 0x180004568 (RtlpMuiRegDupLanguageList.c)
 *     RtlpSetProcMergedLangList @ 0x1800045FC (RtlpSetProcMergedLangList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18002CE30 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x18005042C (RtlpComputeLangListCheckSum.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180050BDC (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050F1C (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r15
  void *PreferredLanguages; // rsi
  bool v8; // r12
  PVOID v9; // rdi
  ULONG v10; // r13d
  NTSTATUS result; // eax
  NTSTATUS PreferredUILanguages; // ebx
  void *MergedPrefLanguages; // rcx
  __int64 v14; // rdx
  void *v15; // r15
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  char *v20; // rax
  int v21; // edx
  __int64 *v22; // r15
  __int64 v23; // [rsp+38h] [rbp-59h]
  __int64 v24; // [rsp+38h] [rbp-59h]
  char v25; // [rsp+58h] [rbp-39h]
  PVOID v26; // [rsp+60h] [rbp-31h] BYREF
  PVOID LanguageList; // [rsp+68h] [rbp-29h] BYREF
  ULONG v28; // [rsp+70h] [rbp-21h]
  void *v29; // [rsp+78h] [rbp-19h]
  unsigned int v30; // [rsp+80h] [rbp-11h]
  ULONG v31; // [rsp+84h] [rbp-Dh]
  __int64 v32; // [rsp+88h] [rbp-9h]
  PVOID BaseAddress; // [rsp+90h] [rbp-1h] BYREF
  int v34; // [rsp+98h] [rbp+7h]
  PVOID v35; // [rsp+A0h] [rbp+Fh]
  char v36; // [rsp+F8h] [rbp+67h] BYREF
  PULONG v37; // [rsp+100h] [rbp+6Fh]
  PZZWSTR v38; // [rsp+108h] [rbp+77h]
  PULONG v39; // [rsp+110h] [rbp+7Fh]

  v39 = ReturnLength;
  v38 = Languages;
  v37 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v31 = 0;
  v30 = 0;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  BaseAddress = 0LL;
  PreferredLanguages = 0LL;
  LanguageList = 0LL;
  v8 = 0;
  v35 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v32 = 0LL;
  v28 = v4;
  if ( ReturnLength )
    v31 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_68;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_68;
  }
  else
  {
    Flags |= 8u;
  }
  if ( (Flags & 0x10000) != 0 )
  {
    if ( (Flags & 0x40) != 0 || (Flags & 0x30) != 0 )
      goto LABEL_68;
    Flags |= 0x30u;
  }
  if ( (Flags & 0x40) != 0 && (Flags & 0x30) != 0 )
    goto LABEL_68;
  v10 = Flags | 0x20;
  if ( (Flags & 0x70) != 0 )
    v10 = Flags;
  if ( !ReturnLength )
    goto LABEL_68;
  if ( !*ReturnLength || Languages )
  {
    if ( (v10 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v26);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v9 = v26;
        if ( *((_DWORD *)v26 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_18;
        v26 = 0LL;
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v26);
        if ( PreferredUILanguages < 0 )
          goto LABEL_102;
      }
      v9 = v26;
LABEL_18:
      v34 = v10 & 0x10000;
      if ( (v10 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
          v29 = PreferredLanguages;
        }
        v9 = v26;
LABEL_22:
        if ( (v10 & 0x40) == 0 )
        {
          PreferredUILanguages = InitializeTEBUserLangList(0, (__int64)v9);
          if ( PreferredUILanguages < 0 )
            goto LABEL_69;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = v26;
          v32 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v26 + 6);
          PreferredUILanguages = RtlpSetProcUserMachineLangList((__int64)v26, 0);
          if ( PreferredUILanguages < 0 )
            goto LABEL_69;
          v6 = *((_QWORD *)v9 + 7);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( MergedPrefLanguages && v28 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v26 + 4) )
          {
            v9 = v26;
            PreferredLanguages = NtCurrentTeb()->MergedPrefLanguages;
            LanguageList = PreferredLanguages;
LABEL_80:
            v15 = v29;
            v8 = MergedPrefLanguages != 0LL;
LABEL_47:
            PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                     (_DWORD)PreferredLanguages,
                                     (_DWORD)v9,
                                     (_DWORD)v38,
                                     (_DWORD)v39,
                                     v10,
                                     0,
                                     (__int64)v37);
            if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v28 == 48 )
            {
              if ( !*((_WORD *)PreferredLanguages + 22) )
                RtlpComputeLangListCheckSum(PreferredLanguages);
              if ( !v8 )
              {
                if ( (*((_BYTE *)PreferredLanguages + 40) & 0x40) == 0 )
                {
                  RtlpMUIRegPatchLicenseInfortmation(PreferredLanguages);
                  if ( !v15 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v32 == *((_QWORD *)v9 + 6) )
                    RtlpSetProcMergedLangList((__int64)v9, (__int64)PreferredLanguages);
                }
                NtCurrentTeb()->MergedPrefLanguages = LanguageList;
                v9 = v26;
                NtCurrentTeb()->MuiGeneration = v30;
              }
              PreferredLanguages = 0LL;
              LanguageList = 0LL;
            }
LABEL_57:
            if ( PreferredLanguages )
            {
              v18 = LanguageList;
              if ( LanguageList == NtCurrentTeb()->MergedPrefLanguages )
              {
                v18 = LanguageList;
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
              RtlpMuiRegFreeLanguageList(v18);
              v9 = v26;
            }
LABEL_61:
            if ( PreferredUILanguages >= 0 )
            {
LABEL_62:
              if ( v25 && v9 )
                RtlpMuiFreeLangRegistryInfo(v9);
              if ( v35 )
                RtlpMuiRegFreeLanguageList(v35);
              return PreferredUILanguages;
            }
LABEL_69:
            if ( v38 && v31 )
            {
              if ( v31 == 1 )
                *v38 = 0;
              else
                *(_DWORD *)v38 = 0;
            }
            goto LABEL_62;
          }
          v8 = 0;
          RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
        }
        else
        {
          v8 = MergedPrefLanguages != 0LL;
          if ( v28 == 48 )
          {
            v8 = MergedPrefLanguages != 0LL;
            if ( !PreferredLanguages )
            {
              v9 = v26;
              v20 = (char *)*((_QWORD *)v26 + 12);
              if ( v20 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v20[40] >= 0 )
              {
                v9 = v26;
                LanguageList = (PVOID)*((_QWORD *)v26 + 12);
                PreferredLanguages = v20;
                NtCurrentTeb()->MuiGeneration = *((_DWORD *)v26 + 4);
                goto LABEL_80;
              }
              goto LABEL_34;
            }
          }
        }
        v9 = v26;
LABEL_34:
        PreferredLanguages = LanguageList;
        goto LABEL_35;
      }
      v36 = 0;
      v29 = 0LL;
      if ( *((_DWORD *)v9 + 3) == MEMORY[0x7FFE03A4] )
      {
        PreferredLanguages = 0LL;
        goto LABEL_22;
      }
      v26 = 0LL;
      PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v26);
      if ( PreferredUILanguages >= 0 )
      {
        v9 = v26;
        v25 = 1;
        v22 = (__int64 *)((char *)v26 + 56);
        if ( !*((_QWORD *)v26 + 7) )
        {
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                   (_DWORD)v26,
                                   v21,
                                   0,
                                   3,
                                   (__int64)&v36,
                                   (__int64)v26 + 56);
          if ( PreferredUILanguages < 0 && !v36 )
            goto LABEL_61;
        }
        if ( !*((_QWORD *)v9 + 8) )
        {
          v36 = 0;
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                   (_DWORD)v9,
                                   v21,
                                   1,
                                   3,
                                   (__int64)&v36,
                                   (__int64)v9 + 64);
          if ( PreferredUILanguages < 0 && !v36 )
            goto LABEL_61;
        }
        v5 = *((_QWORD *)v9 + 8);
        v6 = *v22;
LABEL_35:
        if ( !v34 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v35 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v9 + 9), v14);
          v30 = *((_DWORD *)v9 + 4);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        if ( v9 )
        {
          LanguageList = (PVOID)RtlpMuiRegCreateLanguageList(25LL, 0LL, v9);
          PreferredLanguages = LanguageList;
          PreferredUILanguages = LanguageList == 0LL ? 0xC0000017 : 0;
        }
        else
        {
          PreferredUILanguages = -1073741811;
        }
        if ( PreferredUILanguages < 0 )
          goto LABEL_57;
        if ( (v10 & 0x40) != 0 )
        {
          v24 = v6;
          v15 = v29;
          v19 = LdrpMergeLangFallbackLists(
                  v10,
                  (_DWORD)v9,
                  (unsigned int)&LanguageList,
                  (_DWORD)v29,
                  0LL,
                  v5,
                  v24,
                  v32,
                  0);
          PreferredLanguages = LanguageList;
          PreferredUILanguages = v19;
        }
        else
        {
          LdrpCreateLangFallbackList(&BaseAddress, v9, 25LL);
          v23 = v6;
          v15 = v29;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v10,
                                   (_DWORD)v9,
                                   (unsigned int)&BaseAddress,
                                   (_DWORD)v29,
                                   (__int64)v35,
                                   v5,
                                   v23,
                                   v32,
                                   0);
          if ( PreferredUILanguages >= 0 )
          {
            if ( v28 == 48 || (v10 & 0x10) != 0 )
              LOBYTE(v16) = 1;
            else
              v16 = 0LL;
            v17 = RtlpAddNeutralsToMergedList(v16, v9, BaseAddress, &LanguageList);
            PreferredLanguages = LanguageList;
            PreferredUILanguages = v17;
          }
          RtlpMuiRegFreeLanguageList(BaseAddress);
        }
        if ( PreferredUILanguages < 0 )
          goto LABEL_57;
        goto LABEL_47;
      }
LABEL_102:
      v9 = v26;
      goto LABEL_69;
    }
LABEL_68:
    PreferredUILanguages = -1073741811;
    goto LABEL_69;
  }
  return -1073741811;
}
