/*
 * XREFs of ExProtectPool @ 0x140053018
 * Callers:
 *     HvpProtectBin @ 0x14048DBFC (HvpProtectBin.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
