/*
 * XREFs of ?DecodeRelativePath@@YAJPEA_W_KPEB_W@Z @ 0x1802652DC
 * Callers:
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1802656D4 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1802660CC (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 */

__int64 __fastcall DecodeRelativePath(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  unsigned __int64 v3; // rax
  HRESULT v6; // ebx
  PWSTR ppszPath; // [rsp+20h] [rbp-38h] BYREF
  KNOWNFOLDERID rfid; // [rsp+28h] [rbp-30h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( a3[v3] );
  if ( v3 <= 0x27 )
    return (unsigned int)StringCchCopyW(a1, 0x104uLL, a3);
  if ( !(unsigned int)GUIDFromStringW(a3, &rfid) )
    return (unsigned int)StringCchCopyW(a1, 0x104uLL, a3);
  ppszPath = 0LL;
  if ( SHGetKnownFolderPath(&rfid, 0x5000u, 0LL, &ppszPath) < 0 )
    return (unsigned int)StringCchCopyW(a1, 0x104uLL, a3);
  v6 = PathCchCombine(a1, 0x104uLL, ppszPath, a3 + 39);
  CoTaskMemFree(ppszPath);
  if ( v6 < 0 )
    return (unsigned int)StringCchCopyW(a1, 0x104uLL, a3);
  return (unsigned int)v6;
}
