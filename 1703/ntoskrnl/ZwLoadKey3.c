/*
 * XREFs of ZwLoadKey3 @ 0x140181840
 * Callers:
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey3(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
