/*
 * XREFs of ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00216C8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsXBoxOneDevice(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 75) & 0x200) != 0;
}
