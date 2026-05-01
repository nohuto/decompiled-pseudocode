/*
 * XREFs of ?InternalClose@?$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18003AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::InternalClose(
        __int64 a1)
{
  return CloseHandle(*(HANDLE *)(a1 + 8));
}
