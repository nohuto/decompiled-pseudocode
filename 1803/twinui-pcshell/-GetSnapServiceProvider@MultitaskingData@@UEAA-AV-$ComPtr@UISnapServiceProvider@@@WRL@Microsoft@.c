/*
 * XREFs of ?GetSnapServiceProvider@MultitaskingData@@UEAA?AV?$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@XZ @ 0x1802744F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetSnapServiceProvider(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
