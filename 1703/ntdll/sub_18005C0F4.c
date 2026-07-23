/*
 * XREFs of sub_18005C0F4 @ 0x18005C0F4
 * Callers:
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180040BCC @ 0x180040BCC (sub_180040BCC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18005C510 @ 0x18005C510 (sub_18005C510.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 *     ZwQueryDefaultLocale @ 0x1800A55A0 (ZwQueryDefaultLocale.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall sub_18005C0F4(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4, unsigned __int16 *a5)
{
  int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  int v10; // edx
  unsigned __int16 CurrentLocale; // bx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // edi
  int v15; // r14d
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  char v22; // al
  unsigned int v23; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int i; // ecx
  unsigned int v26; // ebx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32[4]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v33[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v34; // [rsp+40h] [rbp-49h]
  unsigned int v35; // [rsp+44h] [rbp-45h]
  unsigned __int16 v36[2]; // [rsp+48h] [rbp-41h] BYREF
  DWORD v37; // [rsp+4Ch] [rbp-3Dh] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp-39h] BYREF
  DWORD Lcid; // [rsp+54h] [rbp-35h] BYREF
  int v40; // [rsp+58h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-29h] BYREF
  int v42; // [rsp+68h] [rbp-21h] BYREF
  const wchar_t *v43; // [rsp+70h] [rbp-19h]
  int v44; // [rsp+78h] [rbp-11h] BYREF
  const wchar_t *v45; // [rsp+80h] [rbp-9h]
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  int v51; // [rsp+108h] [rbp+7Fh]

  v42 = 3801144;
  v43 = L"LdrResFallbackLangList Enter";
  v44 = 3670070;
  v45 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v31 = 2147353476LL;
    sub_1800E2008(&v42, *(unsigned __int8 *)v31);
  }
  if ( !a5 )
  {
    v26 = -1073741811;
    goto LABEL_31;
  }
  *a5 = 0;
  v10 = 0;
  *((_BYTE *)a5 + 516) = 0;
  CurrentLocale = 0;
  v35 = 0;
  v34 = 0;
  v32[0] = 0;
  v37 = 0;
LABEL_6:
  v12 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = v10;
      v14 = v10;
      v15 = v10++;
      v51 = v10;
      if ( v13 )
        break;
      CurrentLocale = a3;
      v5 = 1;
LABEL_22:
      v12 = a4;
      if ( CurrentLocale != 0xEEEE )
      {
LABEL_23:
        for ( i = 0; i < *a5; ++i )
        {
          if ( a5[4 * i + 2] == CurrentLocale )
            break;
        }
        v12 = a4;
        if ( i >= *a5 )
        {
          if ( *a5 >= 0x40u )
            goto LABEL_30;
          a5[4 * *a5 + 2] = CurrentLocale;
          *(_DWORD *)&a5[4 * (*a5)++ + 4] = v5;
          goto LABEL_6;
        }
      }
    }
    v16 = v13 - 1;
    if ( !v16 )
      break;
    v17 = v16 - 1;
    if ( !v17 )
    {
      v33[0] = 0;
      v22 = sub_180040BCC();
      v23 = v35;
      if ( v22
        && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v35 < MergedPrefLanguages[2]) )
      {
        sub_180037618((__int64)MergedPrefLanguages, (__int64)NtCurrentTeb()->MergedPrefLanguages, v35, v33, v32);
        v23 = v35;
        CurrentLocale = v33[0];
      }
      else
      {
        CurrentLocale = 0;
      }
      if ( !CurrentLocale )
      {
        v10 = v51;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( v32[0] && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v35 = v23 + 1;
      v10 = v15;
      goto LABEL_22;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( !a1 )
        goto LABEL_38;
      if ( (int)sub_18005C510(a1, a2, (unsigned int)&SourceString, (unsigned int)&v40, v12) < 0 )
        goto LABEL_37;
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v34 = -1073020923;
LABEL_37:
        v10 = v51;
LABEL_38:
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      CurrentLocale = Lcid;
      v33[0] = Lcid;
      if ( (a4 & 0x100000) != 0 )
      {
        sub_180037618(v30, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v33, v32);
        if ( v32[0] )
          CurrentLocale = -4370;
        else
          CurrentLocale = v33[0];
      }
      v10 = v51;
      v5 = (v40 & 1) != 0 ? 10 : 4;
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
          goto LABEL_23;
        }
        CurrentLocale = -4370;
        v28 = ZwQueryDefaultLocale(0, &DefaultLocaleId);
        v10 = v51;
        v12 = a4;
        v34 = v28;
        if ( v28 >= 0 && DefaultLocaleId != v37 )
        {
          CurrentLocale = DefaultLocaleId;
          goto LABEL_22;
        }
      }
      else
      {
        CurrentLocale = -4370;
        v29 = ZwQueryDefaultLocale(1u, &v37);
        v10 = v51;
        v12 = a4;
        v34 = v29;
        if ( v29 >= 0 )
        {
          CurrentLocale = v37;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v33[0] = -4370;
      if ( (~(_DWORD)v12 & 0x80000) != 0 )
        goto LABEL_30;
      if ( NtCurrentTeb() )
      {
        CurrentLocale = NtCurrentTeb()->CurrentLocale;
        goto LABEL_22;
      }
      CurrentLocale = v33[0];
    }
  }
  if ( (v12 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)a5 + 516) = 1;
      if ( (int)sub_180088CF8(CurrentLocale, v36, v12) < 0 )
        goto LABEL_30;
      v10 = v14;
      CurrentLocale = v36[0];
      if ( !v36[0] )
        v10 = -1;
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
  v26 = v34;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800E2008(&v44, *(unsigned __int8 *)v8);
  }
  return v26;
}
