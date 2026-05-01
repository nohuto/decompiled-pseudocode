/*
 * XREFs of _CApplicationFrameService::_HandleFrameManagerCrash_::_1_::dtor$6 @ 0x18012BC4E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationFrameService::_HandleFrameManagerCrash_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 168));
  }
}
