/*
 * XREFs of sub_1800093FC @ 0x1800093FC
 * Callers:
 *     sub_1800080C0 @ 0x1800080C0 (sub_1800080C0.c)
 *     sub_18000894C @ 0x18000894C (sub_18000894C.c)
 *     sub_180008E70 @ 0x180008E70 (sub_180008E70.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_1800FE1C0 @ 0x1800FE1C0 (sub_1800FE1C0.c)
 *     sub_1800FE220 @ 0x1800FE220 (sub_1800FE220.c)
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FE4C4 @ 0x1800FE4C4 (sub_1800FE4C4.c)
 *     sub_1800FEA80 @ 0x1800FEA80 (sub_1800FEA80.c)
 * Callees:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 */

__int64 __fastcall sub_1800093FC(size_t Size, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // r8

  v4 = RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)InitFn, 0LL, 0LL);
  v5 = 0LL;
  if ( v4 >= 0 )
  {
    if ( a2 )
      return sub_18001EFB4(qword_18015BFE0, Size);
    else
      return sub_180009468(qword_18015BFE0);
  }
  return v5;
}
