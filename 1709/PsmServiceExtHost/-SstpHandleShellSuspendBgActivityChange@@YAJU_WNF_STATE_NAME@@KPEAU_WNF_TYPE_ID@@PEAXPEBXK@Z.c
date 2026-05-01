/*
 * XREFs of ?SstpHandleShellSuspendBgActivityChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180049B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandleShellSuspendBgActivityChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  if ( *a5 == -1 )
    a4[4] |= 0x40u;
  else
    a4[4] &= ~0x40u;
  return 0LL;
}
