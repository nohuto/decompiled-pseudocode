/*
 * XREFs of SdbpCheckDll @ 0x1402E9520
 * Callers:
 *     KiSwInterruptDispatch @ 0x140193570 (KiSwInterruptDispatch.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402E8270 @ 0x1402E8270 (sub_1402E8270.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
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
