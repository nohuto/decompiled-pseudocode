/*
 * XREFs of ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x18016BEF4 (--4-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016C770 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?Thunk_SetAutoReset_104@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B5F0 (-Thunk_SetAutoReset_104@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?Thunk_SetCaptureState_98@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B640 (-Thunk_SetCaptureState_98@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?Thunk_UpdateManipulation_90@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B7A0 (-Thunk_UpdateManipulation_90@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 16LL))(v1 + 8);
  }
  return result;
}
