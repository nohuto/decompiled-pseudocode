/*
 * XREFs of ??B?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800C5B08
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801C1A50 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
