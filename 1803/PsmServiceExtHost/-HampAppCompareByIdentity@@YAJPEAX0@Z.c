/*
 * XREFs of ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x180027A50
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000C430 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 * Callees:
 *     <none>
 */

int __fastcall HampAppCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1, a2 + 48);
}
