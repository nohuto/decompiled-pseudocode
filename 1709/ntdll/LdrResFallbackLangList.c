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
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v11; // r8
  unsigned __int16 CurrentLocale; // bx
  int v13; // ecx
  int v14; // edi
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  char v19; // al
  unsigned int v20; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rcx
  _BYTE v29[4]; // [rsp+38h] [rbp-51h] BYREF
  _WORD v30[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v31; // [rsp+40h] [rbp-49h]
  unsigned int v32; // [rsp+44h] [rbp-45h]
  unsigned __int16 v33[2]; // [rsp+48h] [rbp-41h] BYREF
  int v34; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v35; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v36; // [rsp+54h] [rbp-35h] BYREF
  int v37; // [rsp+58h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-29h] BYREF
  int v39; // [rsp+68h] [rbp-21h] BYREF
  const wchar_t *v40; // [rsp+70h] [rbp-19h]
  int v41; // [rsp+78h] [rbp-11h] BYREF
  const wchar_t *v42; // [rsp+80h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  int v48; // [rsp+108h] [rbp+7Fh]

  v39 = 3801144;
  v40 = L"LdrResFallbackLangList Enter";
  v41 = 3670070;
  v42 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v7 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  v9 = 2147353476LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v6) )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v39, *(unsigned __int8 *)v28);
  }
  if ( !a5 )
  {
    v22 = -1073741811;
    goto LABEL_31;
  }
  *a5 = 0;
  LODWORD(v11) = 0;
  *((_BYTE *)a5 + 516) = 0;
  CurrentLocale = 0;
  v32 = 0;
  v31 = 0;
  v29[0] = 0;
  v34 = 0;
LABEL_6:
  v6 = a4;
  while ( 1 )
  {
    v13 = v11;
    v14 = v11;
    v15 = v11;
    v11 = (unsigned int)(v11 + 1);
    v48 = v11;
    if ( !v13 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_22;
    }
    v8 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v8 )
      break;
    v16 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( !a1 )
          goto LABEL_38;
        if ( (int)RtlpResUltimateFallbackInfo(a1, a2, &SourceString, &v37, v6) < 0 )
          goto LABEL_37;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v36) )
        {
          v31 = -1073020923;
LABEL_37:
          LODWORD(v11) = v48;
LABEL_38:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = v36;
        v30[0] = v36;
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            v27,
            NtCurrentTeb()->MergedPrefLanguages,
            0,
            (unsigned int)v30,
            (__int64)v29);
          if ( v29[0] )
            CurrentLocale = -4370;
          else
            CurrentLocale = v30[0];
        }
        LODWORD(v11) = v48;
        v5 = (v37 & 1) != 0 ? 10 : 4;
        goto LABEL_22;
      }
      v8 = (unsigned int)(v17 - 1);
      if ( (_DWORD)v8 )
      {
        v18 = (unsigned int)(v8 - 1);
        if ( (_DWORD)v18 )
        {
          v8 = (unsigned int)(v18 - 1);
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 != 1 )
              goto LABEL_30;
            CurrentLocale = 1033;
LABEL_23:
            v6 = *a5;
            v8 = 0LL;
            if ( !*a5 )
              goto LABEL_27;
            do
            {
              if ( a5[4 * (unsigned int)v8 + 2] == CurrentLocale )
                break;
              v8 = (unsigned int)(v8 + 1);
            }
            while ( (unsigned int)v8 < (unsigned int)v6 );
            if ( (unsigned int)v8 >= (unsigned int)v6 )
            {
LABEL_27:
              if ( (unsigned int)v6 >= 0x40 )
                goto LABEL_30;
              a5[4 * v6 + 2] = CurrentLocale;
              *(_DWORD *)&a5[4 * (*a5)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v25 = NtQueryDefaultLocale(0LL, &v35, v11, 0LL);
          LODWORD(v11) = v48;
          v6 = a4;
          v31 = v25;
          if ( v25 >= 0 && v35 != v34 )
          {
            CurrentLocale = v35;
            goto LABEL_22;
          }
        }
        else
        {
          LODWORD(v18) = 1;
          CurrentLocale = -4370;
          v26 = NtQueryDefaultLocale(v18, &v34, v11, 0LL);
          LODWORD(v11) = v48;
          v6 = a4;
          v31 = v26;
          if ( v26 >= 0 )
          {
            CurrentLocale = v34;
            goto LABEL_22;
          }
        }
      }
      else
      {
        v30[0] = -4370;
        if ( (~(_DWORD)v6 & 0x80000) != 0 )
          goto LABEL_30;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_22;
        }
        CurrentLocale = v30[0];
      }
    }
    else
    {
      v30[0] = 0;
      v19 = LdrpSetThreadPreferredLangList(v16, v6);
      v20 = v32;
      if ( v19
        && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v32 < MergedPrefLanguages[2]) )
      {
        GetLCIDFromLangListNodeWithLICCheck(
          (_DWORD)MergedPrefLanguages,
          NtCurrentTeb()->MergedPrefLanguages,
          v32,
          (unsigned int)v30,
          (__int64)v29);
        v20 = v32;
        CurrentLocale = v30[0];
      }
      else
      {
        CurrentLocale = 0;
      }
      if ( !CurrentLocale )
      {
        LODWORD(v11) = v48;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( v29[0] && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v32 = v20 + 1;
      LODWORD(v11) = v15;
LABEL_22:
      v6 = a4;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_23;
    }
  }
  if ( (v6 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)a5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, v33, v11, 0LL) < 0 )
        goto LABEL_30;
      LODWORD(v11) = v14;
      CurrentLocale = v33[0];
      if ( !v33[0] )
        LODWORD(v11) = -1;
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
  v22 = v31;
LABEL_31:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v6) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v23) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v9);
  }
  return v22;
}
