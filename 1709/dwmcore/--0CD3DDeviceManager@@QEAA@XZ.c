/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x1800C2278
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001490 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18026EEE8 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18026EEF0 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&CriticalSection);
  qword_18026EF30 = (__int64)&unk_18026EF50;
  qword_18026EF38 = (__int64)&unk_18026EF50;
  dword_18026EF40 = 1;
  unk_18026EF44 = 1LL;
  qword_18026EF60 = (__int64)&unk_18026EF80;
  qword_18026EF68 = (__int64)&unk_18026EF80;
  dword_18026EF70 = 2;
  unk_18026EF74 = 2LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_18026EFB0) = 0;
  qword_18026EF28 = 0LL;
  BYTE4(qword_18026EFB0) = 0;
  return result;
}
