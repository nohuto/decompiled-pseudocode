/*
 * XREFs of ?WaitForVBlank@CDWMOffScreenSwapChain@@UEAAJPEAX@Z @ 0x1801B21B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMOffScreenSwapChain::WaitForVBlank(CDWMOffScreenSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 66) + 48LL))(*((_QWORD *)this + 66), a2);
}
