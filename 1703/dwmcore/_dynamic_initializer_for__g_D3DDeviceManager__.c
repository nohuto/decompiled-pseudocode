/*
 * XREFs of _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001300
 * Callers:
 *     <none>
 * Callees:
 *     ??0CD3DDeviceManager@@QEAA@XZ @ 0x180043148 (--0CD3DDeviceManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_D3DDeviceManager__(CD3DDeviceManager *a1)
{
  CD3DDeviceManager::CD3DDeviceManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_D3DDeviceManager__);
}
