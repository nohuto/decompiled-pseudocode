/*
 * XREFs of ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18019CA10
 * Callers:
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x180196C28 (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwSolidColorTextureSource **a2)
{
  LPVOID v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v4 + 23) = 0;
  *((_QWORD *)v4 + 13) = 0LL;
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 10) = 0;
  *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v4 = &CHwSolidColorTextureSource::`vftable';
  *((_DWORD *)v4 + 7) = 3;
  *((_DWORD *)v4 + 8) = 3;
  *((_DWORD *)v4 + 24) = 1;
  *((_DWORD *)v4 + 25) = 1;
  *((_DWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 2) = a1;
  *((_DWORD *)v4 + 32) = 1065353216;
  *((_DWORD *)v4 + 29) = 1065353216;
  *((_DWORD *)v4 + 30) = 1065353216;
  *((_DWORD *)v4 + 31) = 1065353216;
  *((_BYTE *)v4 + 112) = 0;
  *((_DWORD *)v4 + 6) = 2;
  *((_DWORD *)v4 + 12) = 0;
  *((_DWORD *)v4 + 13) = 0;
  *((_DWORD *)v4 + 15) = 0;
  *((_DWORD *)v4 + 16) = 0;
  *((_DWORD *)v4 + 11) = 1065353216;
  *((_DWORD *)v4 + 14) = 1065353216;
  _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
  *a2 = (struct CHwSolidColorTextureSource *)v4;
  return 0LL;
}
