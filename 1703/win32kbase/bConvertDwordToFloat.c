/*
 * XREFs of bConvertDwordToFloat @ 0x1C0022E70
 * Callers:
 *     ProbeAndConvertXFORM @ 0x1C0022DC0 (ProbeAndConvertXFORM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertDwordToFloat(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  *a2 = a1;
  return result;
}
