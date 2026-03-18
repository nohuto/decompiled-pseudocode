/*
 * XREFs of ?GetLastPresentCountInternal@CDWMOffScreenSwapChain@@UEAAJPEAI@Z @ 0x1801B1680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetLastPresentCountInternal(CDWMOffScreenSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 66) + 32LL))(
           *((_QWORD *)this + 66),
           a2);
}
