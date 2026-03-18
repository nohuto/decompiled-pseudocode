/*
 * XREFs of DxgkEngIsDwmProcess @ 0x1C0252720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngIsDwmProcess(__int64 a1, __int64 a2, __int64 a3)
{
  return UserUnsafeIsCurrentProcessDwm(a1, a2, a3);
}
