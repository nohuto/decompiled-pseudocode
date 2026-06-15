/*
 * XREFs of ??1?$MakeAllocator@VCVolumeLimitTrackerImpl@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180023118
 * Callers:
 *     _TSSession::Create_::_1_::dtor$25 @ 0x180028B13 (_TSSession--Create_--_1_--dtor$25.c)
 *     _CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor$0 @ 0x180028DE1 (_CVolumeLimitTrackerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CVolumeLimitTrackerImpl>::~MakeAllocator<CVolumeLimitTrackerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0LL);
}
