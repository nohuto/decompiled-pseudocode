/*
 * XREFs of ZwCreateUserProcess @ 0x14017F0E0
 * Callers:
 *     RtlpCreateUserProcess @ 0x1408518F8 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
