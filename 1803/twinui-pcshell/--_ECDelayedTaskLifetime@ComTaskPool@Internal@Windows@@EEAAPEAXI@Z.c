/*
 * XREFs of ??_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180105420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_CancelTimer@CDelayedTask@ComTaskPool@Internal@Windows@@AEAA_NXZ @ 0x1800F59A0 (-_CancelTimer@CDelayedTask@ComTaskPool@Internal@Windows@@AEAA_NXZ.c)
 */

Windows::Internal::ComTaskPool::CDelayedTaskLifetime *__fastcall Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CDelayedTaskLifetime *this,
        char a2)
{
  CWinRTApplicationView **v2; // rdi

  v2 = (CWinRTApplicationView **)*((_QWORD *)this + 2);
  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vftable';
  if ( v2
    && Windows::Internal::ComTaskPool::CDelayedTask::_CancelTimer((Windows::Internal::ComTaskPool::CDelayedTask *)v2) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2 + 4);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
