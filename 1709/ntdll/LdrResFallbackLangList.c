/*
 * XREFs of LdrResFallbackLangList @ 0x18001FCD4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpResUltimateFallbackInfo @ 0x18001F734 (RtlpResUltimateFallbackInfo.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpGetParentLangId @ 0x180085030 (LdrpGetParentLangId.c)
 *     NtQueryDefaultLocale @ 0x1800A0360 (NtQueryDefaultLocale.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResFallbackLangList(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v10; // r8
  unsigned __int16 CurrentLocale; // bx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // edi
  int v15; // r14d
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  char v22; // al
  unsigned int v23; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  _BYTE v33[4]; // [rsp+38h] [rbp-51h] BYREF
  _WORD v34[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v35; // [rsp+40h] [rbp-49h]
  unsigned int v36; // [rsp+44h] [rbp-45h]
  unsigned __int16 v37[2]; // [rsp+48h] [rbp-41h] BYREF
  DWORD v38; // [rsp+4Ch] [rbp-3Dh] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp-39h] BYREF
  DWORD Lcid; // [rsp+54h] [rbp-35h] BYREF
  int v41; // [rsp+58h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-29h] BYREF
  int v43; // [rsp+68h] [rbp-21h] BYREF
  const wchar_t *v44; // [rsp+70h] [rbp-19h]
  int v45; // [rsp+78h] [rbp-11h] BYREF
  const wchar_t *v46; // [rsp+80h] [rbp-9h]
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  int v52; // [rsp+108h] [rbp+7Fh]

  v43 = 3801144;
  v44 = L"LdrResFallbackLangList Enter";
  v45 = 3670070;
  v46 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v32 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v32 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v32);
  }
  if ( !a5 )
  {
    v27 = -1073741811;
    goto LABEL_31;
  }
  *a5 = 0;
  LODWORD(v10) = 0;
  *((_BYTE *)a5 + 516) = 0;
  CurrentLocale = 0;
  v36 = 0;
  v35 = 0;
  v33[0] = 0;
  v38 = 0;
LABEL_6:
  v12 = a4;
  while ( 1 )
  {
    v13 = v10;
    v14 = v10;
    v15 = v10;
    v10 = (unsigned int)(v10 + 1);
    v52 = v10;
    if ( !v13 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_22;
    }
    v16 = v13 - 1;
    if ( !v16 )
      break;
    v17 = (unsigned int)(v16 - 1);
    if ( (_DWORD)v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( !a1 )
          goto LABEL_38;
        if ( (int)RtlpResUltimateFallbackInfo(a1, a2, &SourceString, &v41, v12) < 0 )
          goto LABEL_37;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          v35 = -1073020923;
LABEL_37:
          LODWORD(v10) = v52;
LABEL_38:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = Lcid;
        v34[0] = Lcid;
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            v31,
            NtCurrentTeb()->MergedPrefLanguages,
            0,
            (unsigned int)v34,
            (__int64)v33);
          if ( v33[0] )
            CurrentLocale = -4370;
          else
            CurrentLocale = v34[0];
        }
        LODWORD(v10) = v52;
        v5 = (v41 & 1) != 0 ? 10 : 4;
        goto LABEL_22;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_30;
            CurrentLocale = 1033;
LABEL_23:
            v25 = *a5;
            v26 = 0;
            if ( !*a5 )
              goto LABEL_27;
            do
            {
              if ( a5[4 * v26 + 2] == CurrentLocale )
                break;
              ++v26;
            }
            while ( v26 < (unsigned int)v25 );
            if ( v26 >= (unsigned int)v25 )
            {
LABEL_27:
              if ( (unsigned int)v25 >= 0x40 )
                goto LABEL_30;
              a5[4 * v25 + 2] = CurrentLocale;
              *(_DWORD *)&a5[4 * (*a5)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v29 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          LODWORD(v10) = v52;
          v12 = a4;
          v35 = v29;
          if ( v29 >= 0 && DefaultLocaleId != v38 )
          {
            CurrentLocale = DefaultLocaleId;
            goto LABEL_22;
          }
        }
        else
        {
          CurrentLocale = -4370;
          v30 = NtQueryDefaultLocale(1u, &v38);
          LODWORD(v10) = v52;
          v12 = a4;
          v35 = v30;
          if ( v30 >= 0 )
          {
            CurrentLocale = v38;
            goto LABEL_22;
          }
        }
      }
      else
      {
        v34[0] = -4370;
        if ( (~(_DWORD)v12 & 0x80000) != 0 )
          goto LABEL_30;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_22;
        }
        CurrentLocale = v34[0];
      }
    }
    else
    {
      v34[0] = 0;
      v22 = LdrpSetThreadPreferredLangList(v17, v12);
      v23 = v36;
      if ( v22
        && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v36 < MergedPrefLanguages[2]) )
      {
        GetLCIDFromLangListNodeWithLICCheck(
          (_DWORD)MergedPrefLanguages,
          NtCurrentTeb()->MergedPrefLanguages,
          v36,
          (unsigned int)v34,
          (__int64)v33);
        v23 = v36;
        CurrentLocale = v34[0];
      }
      else
      {
        CurrentLocale = 0;
      }
      if ( !CurrentLocale )
      {
        LODWORD(v10) = v52;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( v33[0] && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v36 = v23 + 1;
      LODWORD(v10) = v15;
LABEL_22:
      v12 = a4;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_23;
    }
  }
  if ( (v12 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)a5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, v37, v10, 0LL) < 0 )
        goto LABEL_30;
      LODWORD(v10) = v14;
      CurrentLocale = v37[0];
      if ( !v37[0] )
        LODWORD(v10) = -1;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v5 = 2;
    goto LABEL_22;
  }
  *((_BYTE *)a5 + 516) = 1;
LABEL_30:
  v27 = v35;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v45, *(unsigned __int8 *)v8);
  }
  return v27;
}
