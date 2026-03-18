/*
 * XREFs of ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180135A54
 * Callers:
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180195868 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801358F4 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::DeleteUnusableDevices(CD3DDeviceManager *this)
{
  unsigned int i; // ebx

  for ( i = dword_18023E8A8;
        i && i > (unsigned int)qword_18023E900;
        CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, i) )
  {
    --i;
  }
}
