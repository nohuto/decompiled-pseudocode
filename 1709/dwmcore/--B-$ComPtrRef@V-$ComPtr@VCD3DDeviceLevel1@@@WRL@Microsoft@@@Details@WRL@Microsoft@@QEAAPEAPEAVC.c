/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18011DEF8
 * Callers:
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801C17E8 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<CD3DDeviceLevel1>>::operator CD3DDeviceLevel1 * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(*a1);
  return v1;
}
