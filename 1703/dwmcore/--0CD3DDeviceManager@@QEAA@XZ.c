/*
 * XREFs of ??0CD3DDeviceManager@@QEAA@XZ @ 0x180043148
 * Callers:
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001300 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 * Callees:
 *     <none>
 */

CD3DDeviceManager *__fastcall CD3DDeviceManager::CD3DDeviceManager(CD3DDeviceManager *this)
{
  CD3DDeviceManager *result; // rax

  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18023E818 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18023E820 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  InitializeCriticalSection(&CriticalSection);
  qword_18023E860 = (__int64)&unk_18023E880;
  qword_18023E868 = (__int64)&unk_18023E880;
  dword_18023E870 = 1;
  qword_18023E874 = 1LL;
  qword_18023E890 = (__int64)&unk_18023E8B0;
  qword_18023E898 = (__int64)&unk_18023E8B0;
  dword_18023E8A0 = 2;
  unk_18023E8A4 = 2LL;
  *(__int64 *)((char *)&qword_18023E900 + 4) = 0LL;
  qword_18023E90C = 0LL;
  result = (CD3DDeviceManager *)&g_D3DDeviceManager;
  LODWORD(qword_18023E900) = 0;
  qword_18023E858 = 0LL;
  return result;
}
