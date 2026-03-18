/*
 * XREFs of GreDxgkSetIndependentFlipMode @ 0x1C00F0AA0
 * Callers:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C01519D4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0151A8C (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0151E68 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDxgkSetIndependentFlipMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, __int64))qword_1C018BC50)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
