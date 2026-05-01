/*
 * XREFs of ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180027A60
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000C430 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSessionCompareById(void *a1, _DWORD *a2)
{
  if ( a2[22] == (_DWORD)a1 )
    return 0LL;
  else
    return a2[22] < (unsigned int)a1 ? 1 : -1;
}
