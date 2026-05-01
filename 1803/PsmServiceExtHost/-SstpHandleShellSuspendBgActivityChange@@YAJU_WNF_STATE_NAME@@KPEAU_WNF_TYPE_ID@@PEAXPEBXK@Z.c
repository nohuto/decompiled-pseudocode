/*
 * XREFs of ?SstpHandleShellSuspendBgActivityChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006AEC0
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
  int v5; // ecx
  unsigned int v6; // ecx

  v5 = a4[5];
  if ( *a5 == -1 )
    v6 = v5 | 0x20;
  else
    v6 = v5 & 0xFFFFFFDF;
  a4[5] = v6;
  return 0LL;
}
