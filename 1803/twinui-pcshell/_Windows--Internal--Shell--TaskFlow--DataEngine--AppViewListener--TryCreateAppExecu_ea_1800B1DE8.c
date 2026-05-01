/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$8 @ 0x1800B1DE8
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180104A08 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 432));
  }
}
