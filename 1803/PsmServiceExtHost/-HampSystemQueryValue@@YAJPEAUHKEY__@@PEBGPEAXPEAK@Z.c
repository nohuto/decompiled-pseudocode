/*
 * XREFs of ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180008890
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180008540 (-HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REAS.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800087E4 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemQueryValue(HKEY a1, const unsigned __int16 *a2, BYTE *lpData, unsigned int *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
