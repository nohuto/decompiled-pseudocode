/*
 * XREFs of ?WaitForVBlank@CDWMOffScreenSwapChain@@UEAAJPEAX@Z @ 0x1800CE810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMOffScreenSwapChain::WaitForVBlank(CDWMOffScreenSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 60) + 48LL))(*((_QWORD *)this + 60), a2);
}
