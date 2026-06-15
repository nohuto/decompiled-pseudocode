/*
 * XREFs of ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x1800D31FC
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x1800832E0 (s_sndevtResolveSoundAlias.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A8E8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800D346C (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall _GetSoundAlias(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        HKEY hkey,
        unsigned __int16 *a7)
{
  __int64 result; // rax
  unsigned int Registry; // edi
  const unsigned __int16 *v12; // r14
  const unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR String1[128]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SubKey[264]; // [rsp+150h] [rbp+50h] BYREF

  result = 0LL;
  if ( a1 && a2 && hkey )
  {
    if ( a7 && *a7 )
      *a4 |= 0x80u;
    Registry = 0;
    v12 = (const unsigned __int16 *)&szSystemDefaultSound;
    pcbData = 256;
    if ( lstrcmpW(a1, gszDefaultBeepOldAlias) )
      v12 = a1;
    if ( !RegGetValueW(hkey, gszSchemesRootKey, 0LL, 2u, 0LL, String1, &pcbData)
      && !lstrcmpiW(String1, gszNoSoundsSchemeName) )
    {
      *a4 |= 2u;
    }
    if ( v12 )
    {
      v14 = 32LL;
      v13 = v12;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      v15 = v14 == 0 ? 0x80070057 : 0;
    }
    else
    {
      v15 = -2147024809;
    }
    if ( !v15
      && (*(char *)a4 >= 0 || !a7 || !*a7 || (Registry = sndQueryRegistry(v13, a7, v12, a2, 0x104u, a4, hkey)) == 0)
      && ((*a4 & 0x400000) == 0 || (Registry = sndQueryRegistry(v13, aszExplorer, v12, a2, 0x104u, a4, hkey)) == 0) )
    {
      Registry = sndQueryRegistry(v13, aszDefault, v12, a2, 0x104u, a4, hkey);
      if ( !Registry )
      {
        phkResult = 0LL;
        pcbData = 260;
        StringCchPrintfW(SubKey, 0x104uLL, (size_t *)c_szPathFormat, &PSZ_SOUNDS_REGKEY, v12);
        if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) )
          return RegGetValueW(phkResult, 0LL, PSZ_SOUNDS_SOUND, Registry + 2, 0LL, a2, &pcbData) == 0;
      }
    }
    return Registry;
  }
  return result;
}
