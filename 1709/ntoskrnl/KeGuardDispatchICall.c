/*
 * XREFs of KeGuardDispatchICall @ 0x1402B1470
 * Callers:
 *     KiDecodeMcaFault @ 0x140168660 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1401694C0 (KiSwInterruptDispatch.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     sub_140175530 @ 0x140175530 (sub_140175530.c)
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     sub_14017579C @ 0x14017579C (sub_14017579C.c)
 *     sub_140175834 @ 0x140175834 (sub_140175834.c)
 *     sub_140176734 @ 0x140176734 (sub_140176734.c)
 *     RtlpComputeEpilogueOffset @ 0x140176D88 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_1402AE570 @ 0x1402AE570 (sub_1402AE570.c)
 *     sub_1402AEFBC @ 0x1402AEFBC (sub_1402AEFBC.c)
 *     sub_1402AFF20 @ 0x1402AFF20 (sub_1402AFF20.c)
 *     sub_1402B09E0 @ 0x1402B09E0 (sub_1402B09E0.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     sub_14082686C @ 0x14082686C (sub_14082686C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
