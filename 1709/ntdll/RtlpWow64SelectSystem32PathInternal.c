/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x1800166E4
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180016640 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(__int16 a1, char a2, _UNICODE_STRING *a3)
{
  _UNICODE_STRING *v3; // rcx
  const WCHAR *v4; // rdx
  bool v6; // zf

  switch ( a1 )
  {
    case 1:
      v6 = a2 == 0;
      v3 = a3;
      v4 = L"\\System32\\";
      if ( v6 )
        v4 = L"System32";
      goto LABEL_5;
    case 332:
      v3 = a3;
      if ( a2 )
        v4 = L"\\SysWOW64\\";
      else
        v4 = L"SysWOW64";
LABEL_5:
      RtlInitUnicodeString(v3, v4);
      return 0LL;
    case 452:
      v3 = a3;
      if ( a2 )
        v4 = L"\\SysARM32\\";
      else
        v4 = L"SysARM32";
      goto LABEL_5;
    case 14948:
      v3 = a3;
      if ( a2 )
        v4 = L"\\SyCHPE32\\";
      else
        v4 = L"SyCHPE32";
      goto LABEL_5;
  }
  return 3221225485LL;
}
