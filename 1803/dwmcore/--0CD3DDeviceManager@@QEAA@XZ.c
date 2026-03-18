/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x180089804
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180002970 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1802D6728 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1802D6730 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&stru_1802D6738);
  qword_1802D6770 = (__int64)&unk_1802D6790;
  qword_1802D6778 = (__int64)&unk_1802D6790;
  dword_1802D6780 = 1;
  unk_1802D6784 = 1LL;
  qword_1802D67A0 = (__int64)&unk_1802D67C0;
  qword_1802D67A8 = (__int64)&unk_1802D67C0;
  dword_1802D67B0 = 2;
  unk_1802D67B4 = 2LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_1802D67F0) = 0;
  qword_1802D6768 = 0LL;
  BYTE4(qword_1802D67F0) = 0;
  return result;
}
