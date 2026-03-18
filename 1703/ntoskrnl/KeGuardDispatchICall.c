/*
 * XREFs of KeGuardDispatchICall @ 0x140284420
 * Callers:
 *     KiDecodeMcaFault @ 0x140173DF0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x140174B80 (KiSwInterruptDispatch.c)
 *     sub_140175DB0 @ 0x140175DB0 (sub_140175DB0.c)
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     sub_140176024 @ 0x140176024 (sub_140176024.c)
 *     sub_1401760BC @ 0x1401760BC (sub_1401760BC.c)
 *     sub_140177004 @ 0x140177004 (sub_140177004.c)
 *     RtlpComputeEpilogueOffset @ 0x140177544 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_140282ED4 @ 0x140282ED4 (sub_140282ED4.c)
 *     sub_140283780 @ 0x140283780 (sub_140283780.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     sub_1407F58FC @ 0x1407F58FC (sub_1407F58FC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
