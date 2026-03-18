/*
 * XREFs of SdbpCheckDll @ 0x1402B11C0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401694C0 (KiSwInterruptDispatch.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AFF20 @ 0x1402AFF20 (sub_1402AFF20.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
