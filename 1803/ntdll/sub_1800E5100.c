/*
 * XREFs of sub_1800E5100 @ 0x1800E5100
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800E4CA0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_1800E5100(__int16 a1, char a2, _UNICODE_STRING *a3)
{
  _UNICODE_STRING *v4; // rcx
  const WCHAR *v5; // rdx
  bool v6; // zf

  switch ( a1 )
  {
    case 1:
      v6 = a2 == 0;
      v4 = a3;
      v5 = L"\\System32\\";
      if ( v6 )
        v5 = L"System32";
      break;
    case 332:
      v4 = a3;
      if ( a2 )
        v5 = L"\\SysWOW64\\";
      else
        v5 = L"SysWOW64";
      break;
    case 452:
      v4 = a3;
      if ( a2 )
        v5 = L"\\SysARM32\\";
      else
        v5 = L"SysARM32";
      break;
    case 14948:
      v4 = a3;
      if ( a2 )
        v5 = L"\\SyCHPE32\\";
      else
        v5 = L"SyCHPE32";
      break;
    default:
      return 3221225485LL;
  }
  RtlInitUnicodeString(v4, v5);
  return 0LL;
}
