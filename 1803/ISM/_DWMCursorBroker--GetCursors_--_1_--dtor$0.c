/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1800E80A4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180017550 (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 */

void __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
      *(_QWORD *)(a2 + 56),
      a2);
  }
}
