/*
 * XREFs of ?SetOperatingMode@CApplicationFrameWrapper@@UEAAJW4FRAME_OPERATING_MODE@@@Z @ 0x180016DD0
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetOperatingMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 176LL))(*(_QWORD *)(a1 + 112));
}
