/*
 * XREFs of ?SstpHandlePoEnergySaverStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800210D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandlePoEnergySaverStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  result = 0LL;
  a4[4] ^= (a4[4] ^ (8 * *a5)) & 0x10;
  return result;
}
