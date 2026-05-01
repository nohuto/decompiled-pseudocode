/*
 * XREFs of ?GetSettingsCache@MultitaskingData@@UEAA?AV?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@XZ @ 0x1802744C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetSettingsCache(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 64);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
