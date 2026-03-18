/*
 * XREFs of ?WaitForVBlank@CDWMOffScreenSwapChain@@UEAAJPEAX@Z @ 0x1800D88C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMOffScreenSwapChain::WaitForVBlank(CDWMOffScreenSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 67) + 48LL))(*((_QWORD *)this + 67), a2);
}
