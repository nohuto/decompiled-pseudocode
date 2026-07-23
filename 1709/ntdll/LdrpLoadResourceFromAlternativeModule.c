/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpIsReparsePoint @ 0x180018D88 (LdrpIsReparsePoint.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800219CC (LdrpFindMessageInAlternateModule.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     LdrpCompareServiceChecksum @ 0x180081CA4 (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800E0A80 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        PVOID BaseOfImage,
        __int64 a2,
        DWORD a3,
        __int64 a4,
        __int64 a5)
{
  PVOID v5; // r10
  ULONG Flags; // r14d
  unsigned int v7; // eax
  int MessageInAlternateModule; // esi
  LANGID v10; // bx
  char v11; // r11
  int v12; // r12d
  __int64 v13; // rdx
  _DWORD *RcConfig; // r13
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edi
  int v18; // r15d
  int v19; // ecx
  __int64 v20; // rcx
  char v21; // al
  unsigned int v22; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v24; // ecx
  NTSTATUS v25; // eax
  unsigned int *v26; // rdi
  __int64 v27; // rdx
  unsigned int **v28; // r15
  __int64 v29; // rcx
  _WORD *v31; // rax
  int ParentLangId; // eax
  __int64 v33; // rcx
  char v34; // [rsp+30h] [rbp-D0h]
  char v35; // [rsp+31h] [rbp-CFh]
  unsigned __int16 v36[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v37; // [rsp+38h] [rbp-C8h]
  bool v38[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-C4h]
  PVOID DllHandle; // [rsp+40h] [rbp-C0h]
  unsigned int v41; // [rsp+48h] [rbp-B8h]
  DWORD Lcid[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID ResourceDllBase; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  ULONG_PTR ResourceOffset; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v48[64]; // [rsp+90h] [rbp-70h] BYREF

  v5 = BaseOfImage;
  DllHandle = BaseOfImage;
  v46 = a5;
  Lcid[1] = a3;
  Flags = a4;
  v7 = a3 - 3;
  v44 = a2;
  ResourceDllBase = 0LL;
  v36[0] = 0;
  MessageInAlternateModule = -1073020927;
  v34 = 0;
  v10 = 0;
  v39 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  v35 = 0;
  v13 = 0LL;
  RcConfig = 0LL;
  LOBYTE(a4) = 0;
  if ( v7 > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v37 = v15;
  v38[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v16 = v12;
          v17 = v12;
          v18 = v12++;
          if ( !v16 )
            break;
          v19 = v16 - 1;
          if ( v19 )
          {
            v20 = (unsigned int)(v19 - 1);
            if ( !(_DWORD)v20 )
            {
              v36[0] = 0;
              v21 = LdrpSetThreadPreferredLangList(v20, v13);
              v22 = v41;
              if ( v21
                && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                    v41 < MergedPrefLanguages[2]) )
              {
                GetLCIDFromLangListNodeWithLICCheck(
                  (__int64)MergedPrefLanguages,
                  (__int64)NtCurrentTeb()->MergedPrefLanguages,
                  v41,
                  v36,
                  v38);
                v22 = v41;
                v10 = v36[0];
              }
              else
              {
                v10 = 0;
                v36[0] = 0;
              }
              if ( !v10 )
                goto LABEL_56;
              if ( v38[0] && (Flags & 0x100000) != 0 )
              {
                v10 = -4370;
                v36[0] = -4370;
              }
              v12 = v18;
              v41 = v22 + 1;
              goto LABEL_12;
            }
            if ( (_DWORD)v20 == 1 )
            {
              if ( !RcConfig )
              {
                RcConfig = LdrpGetRcConfig(v5, v13, 0, 1);
                if ( !RcConfig )
                  goto LABEL_56;
              }
              if ( *RcConfig != -20054323 || (RcConfig[6] & 2) == 0 || !RcConfig[31] )
                goto LABEL_56;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
              if ( !RtlCultureNameToLCID(&DestinationString, Lcid) )
              {
                MessageInAlternateModule = -1073020923;
LABEL_56:
                v10 = -4370;
                v36[0] = -4370;
LABEL_45:
                v13 = v39;
                LOBYTE(a4) = v35;
                goto LABEL_46;
              }
              v10 = Lcid[0];
              v36[0] = Lcid[0];
              if ( (Flags & 0x100000) != 0 )
              {
                GetLCIDFromLangListNodeWithLICCheck(v33, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v36, v38);
                v5 = DllHandle;
                v15 = v37;
                LOBYTE(a4) = v35;
                v11 = v34;
                if ( v38[0] )
                {
                  v10 = -4370;
                  v36[0] = -4370;
                }
                else
                {
                  v10 = v36[0];
                }
                goto LABEL_13;
              }
LABEL_12:
              v11 = v34;
              LOBYTE(a4) = v35;
              v15 = v37;
              v5 = DllHandle;
LABEL_13:
              v13 = v39;
              goto LABEL_18;
            }
            if ( (_BYTE)a4 || v11 || (int)LdrpIsReparsePoint(v5) < 0 )
              return (unsigned int)MessageInAlternateModule;
            v13 = 0LL;
            v41 = 0;
            LOBYTE(a4) = 1;
            v39 = 0;
            v35 = 1;
            Flags |= 0x400000u;
            v12 = 0;
LABEL_46:
            v15 = v37;
            v5 = DllHandle;
            v11 = v34;
          }
          else
          {
            if ( v10 == 0xEEEE )
              goto LABEL_35;
            if ( (Flags & 4) != 0 )
            {
              v10 = -4370;
              v36[0] = -4370;
              v12 = -2;
            }
            else
            {
              if ( (v15 & 0x3FF) == 0 )
                goto LABEL_35;
              ParentLangId = LdrpGetParentLangId(v10, v36, v15, a4);
              v13 = v39;
              v5 = DllHandle;
              v15 = v37;
              LOBYTE(a4) = v35;
              v11 = v34;
              if ( ParentLangId >= 0 )
              {
                v10 = v36[0];
                if ( v36[0] )
                {
                  v12 = v17;
                  goto LABEL_18;
                }
              }
              v12 = -2;
LABEL_35:
              v10 = -4370;
              v36[0] = -4370;
            }
          }
        }
        if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
          v10 = v15;
        else
          v10 = -4370;
        v36[0] = v10;
LABEL_18:
        ;
      }
      while ( v10 == 0xEEEE );
      v24 = 0;
      if ( !(_DWORD)v13 )
        break;
      v31 = v48;
      while ( *v31 != v10 )
      {
        ++v24;
        ++v31;
        if ( v24 >= (unsigned int)v13 )
          goto LABEL_20;
      }
    }
LABEL_20:
    if ( (unsigned int)v13 >= 0x40 )
      return (unsigned int)MessageInAlternateModule;
    ResourceOffset = 0LL;
    v39 = v13 + 1;
    v48[(unsigned int)v13] = v10;
    v25 = LdrLoadAlternateResourceModuleEx(v5, v10, &ResourceDllBase, &ResourceOffset, Flags);
    MessageInAlternateModule = v25;
    if ( v25 >= 0 )
      break;
    if ( v25 != -1073741772 )
    {
      v13 = v39;
      v5 = DllHandle;
      v15 = v37;
      LOBYTE(a4) = v35;
      v11 = v34;
      if ( v25 != -1073741766 )
        continue;
    }
    MessageInAlternateModule = -1073020927;
    goto LABEL_45;
  }
  v26 = (unsigned int *)ResourceDllBase;
  v27 = v44;
  v28 = (unsigned int **)v46;
  *(_QWORD *)(v44 + 16) = v10;
  v34 = 1;
  MessageInAlternateModule = LdrpSearchResourceSection_U(v26, v27, 3LL, 0x30u, (__int64)v28);
  if ( (Flags & 0x40) == 0 )
    goto LABEL_23;
  if ( MessageInAlternateModule < 0 )
    goto LABEL_84;
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(v26, *v28, 0LL, *(_DWORD *)(v44 + 24), 0);
  if ( MessageInAlternateModule < 0 )
  {
    *v28 = 0LL;
LABEL_23:
    if ( MessageInAlternateModule < 0 )
    {
LABEL_84:
      if ( (unsigned __int8)LdrpCompareServiceChecksum(DllHandle, v26) )
        return (unsigned int)MessageInAlternateModule;
      goto LABEL_45;
    }
  }
  if ( *v28 <= v26 || ResourceOffset && *v28 >= (unsigned int *)((char *)v26 + ResourceOffset) )
  {
    *v28 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    goto LABEL_45;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v26 = (unsigned int *)ResourceDllBase;
    v29 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v29 = 2147353477LL;
  }
  if ( (*(_BYTE *)v29 & 2) != 0 )
    LdrpMUIEtwOutput(v26);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return (unsigned int)MessageInAlternateModule;
}
