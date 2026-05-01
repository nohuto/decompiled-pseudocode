/*
 * XREFs of ?SstpHandleDplKeysStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180049B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandleDplKeysStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  result = 0LL;
  a4[4] = a4[4] & 0xFFFFFFF7 | (a5[2] != 0 ? 8 : 0);
  return result;
}
