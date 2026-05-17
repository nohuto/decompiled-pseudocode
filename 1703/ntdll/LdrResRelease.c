/*
 * XREFs of LdrResRelease @ 0x18008C450
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, unsigned int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned int v10; // edi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v20; // [rsp+98h] [rbp+20h] BYREF

  v14 = 2621478;
  v15 = L"LdrResRelease Enter";
  v16 = 2490404;
  v17 = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v12 = 2147353476LL;
    sub_1800E2008(&v14, *(unsigned __int8 *)v12);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !String2 )
    return 3221225485LL;
  v20 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v19) )
        return 3221225485LL;
    }
    else
    {
      v19 = 0;
    }
    LOWORD(SourceString) = v19;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v13 = LdrRemoveLoadAsDataTable(String2, &v20, 0LL, a3);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073740024 && v13 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    v20 = String2;
  }
  v9 = (unsigned __int64)v20;
  LdrUnloadAlternateResourceModuleEx((__int64)v20, (__int16)SourceString);
  if ( (a3 & 0xC00) != 0 && v9 )
    ZwUnmapViewOfSection(-1LL, v9 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_11:
  v10 = 0;
LABEL_12:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    sub_1800E2008(&v16, *(unsigned __int8 *)v8);
  }
  return v10;
}
