/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x140748098
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x14026BA58 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x140166BBC (_MuiRegAllocArray.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x1405B86E0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1406EB9D0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1407485F0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140748934 (RtlpMuiRegLangInfoMatchesSpec.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  __int64 v7; // r14
  __int16 v8; // bp
  wchar_t *v11; // r12
  __int64 v12; // r13
  bool v13; // zf
  char v14; // bl
  unsigned __int16 *v15; // rdi
  __int64 v16; // rdx
  unsigned __int16 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  const WCHAR *v21; // rdx
  wchar_t *v22; // rax
  __int64 v23; // r8
  const wchar_t *v24; // rdx
  __int64 *v25; // rdi
  __int64 v26; // r8
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  __int16 v29; // [rsp+88h] [rbp+10h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = a3;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 == a4 )
  {
    v13 = (_WORD)a3 == a5;
LABEL_3:
    v14 = v13;
    goto LABEL_47;
  }
  if ( !a2 || !a4 )
    goto LABEL_43;
  v15 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v16 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (int)*(unsigned __int16 *)(v16 + 6) )
        {
          LOBYTE(a3) = a4;
          v7 = *(_QWORD *)(v16 + 16) + 28LL * v8;
          v14 = RtlpMuiRegLangInfoMatchesSpec(a1, v7, a3, a5);
          goto LABEL_47;
        }
      }
    }
    goto LABEL_43;
  }
  if ( a4 != 2 )
  {
    v14 = 1;
    if ( a2 == 1 )
    {
      if ( a4 == 3 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 && (a5 & 0x8000u) == 0 && (__int16)a5 < (int)*(unsigned __int16 *)(v20 + 6) )
          v21 = (const WCHAR *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2LL * (__int16)a5));
        else
          v21 = 0LL;
        if ( v21 )
        {
          RtlInitUnicodeString(&DestinationString, v21);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            v13 = v8 == (__int16)Lcid;
            goto LABEL_3;
          }
        }
      }
    }
    else if ( a2 == 3 && a4 == 1 )
    {
      v22 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      v11 = v22;
      if ( v22 )
      {
        DestinationString.Buffer = v22;
        if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
        {
          v23 = *(_QWORD *)(a1 + 32);
          if ( v23 && v8 >= 0 && v8 < (int)*(unsigned __int16 *)(v23 + 6) )
            v24 = (const wchar_t *)(*(_QWORD *)(v23 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v23 + 16) + 2LL * v8));
          else
            v24 = 0LL;
          if ( v24 && !wcsicmp(DestinationString.Buffer, v24) )
            goto LABEL_44;
        }
      }
    }
LABEL_43:
    v14 = 0;
LABEL_44:
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v7 = 0LL;
    goto LABEL_47;
  }
  if ( !a1 )
    goto LABEL_43;
  v17 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_43;
  v18 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (int)*(unsigned __int16 *)(v18 + 6) )
    goto LABEL_43;
  v19 = (unsigned __int16)a3;
  LOBYTE(a3) = a2;
  v12 = *(_QWORD *)(v18 + 16) + 28LL * (__int16)a5;
  v14 = RtlpMuiRegLangInfoMatchesSpec(a1, v12, a3, v19);
  if ( v14 && v12 && v15 )
    *v15 = v17;
  v7 = 0LL;
LABEL_47:
  v25 = a6;
  if ( a6 )
  {
    if ( v14 )
    {
      if ( v12 )
      {
        *a6 = v12;
      }
      else if ( v7 )
      {
        *a6 = v7;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, a2, (unsigned __int16)v8, &v29) >= 0 && v29 >= 0 )
        {
          v26 = *(_QWORD *)(a1 + 24);
          if ( v29 < (int)*(unsigned __int16 *)(v26 + 6) )
            *v25 = *(_QWORD *)(v26 + 16) + 28LL * v29;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v14;
}
