/*
 * XREFs of ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x1800083D0
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x180008208 (-HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilCreateUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x1800082A4 (-HampUtilCreateUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemCreateKey(HKEY a1, const unsigned __int16 *a2, DWORD a3, REGSAM a4, HKEY *a5)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a1, a2, 0, 0LL, a3, a4, 0LL, a5, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
