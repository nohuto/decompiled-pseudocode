/*
 * XREFs of _CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor$0 @ 0x1800379B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Details::MakeAllocator<CVolumeLimitTrackerImpl>::~MakeAllocator<CVolumeLimitTrackerImpl>((void **)(a2 + 96));
}
