/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800019E0
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001CD0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x180008170 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x180008180 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
