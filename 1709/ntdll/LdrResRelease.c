/*
 * XREFs of LdrResRelease @ 0x180089B50
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180011F70 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v18; // [rsp+38h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v21; // [rsp+98h] [rbp+20h] BYREF

  v15 = 2621478;
  v16 = L"LdrResRelease Enter";
  v17 = 2490404;
  v18 = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v15, *(unsigned __int8 *)v13);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !String2 )
    return 3221225485LL;
  v21 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v20) )
        return 3221225485LL;
    }
    else
    {
      v20 = 0;
    }
    LOWORD(SourceString) = v20;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v14 = LdrRemoveLoadAsDataTable(String2, &v21, 0LL, a3);
    v11 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073740024 && v14 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    v21 = String2;
  }
  v9 = (unsigned __int64)v21;
  LdrUnloadAlternateResourceModuleEx((__int64)v21, (__int16)SourceString);
  if ( (a3 & 0xC00) != 0 && v9 )
    NtUnmapViewOfSection(-1LL, v9 & 0xFFFFFFFFFFFFFFFCuLL, v10);
LABEL_11:
  v11 = 0;
LABEL_12:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v17, *(unsigned __int8 *)v8);
  }
  return v11;
}
