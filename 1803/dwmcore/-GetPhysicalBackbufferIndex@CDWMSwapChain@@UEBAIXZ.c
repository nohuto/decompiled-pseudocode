/*
 * XREFs of ?GetPhysicalBackbufferIndex@CDWMSwapChain@@UEBAIXZ @ 0x1801EA750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetPhysicalBackbufferIndex(CDWMSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 256LL))(*((_QWORD *)this + 53));
}
