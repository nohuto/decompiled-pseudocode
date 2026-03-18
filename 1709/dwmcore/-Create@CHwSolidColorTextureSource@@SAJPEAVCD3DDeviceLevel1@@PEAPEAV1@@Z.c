/*
 * XREFs of ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801AF6C8
 * Callers:
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801A77E0 (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwSolidColorTextureSource **a2)
{
  char *v4; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_QWORD *)v4 + 2) = a1;
  *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
  *((_DWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 13) = 0LL;
  *(_QWORD *)v4 = &CHwSolidColorTextureSource::`vftable';
  *((_DWORD *)v4 + 7) = 3;
  *((_DWORD *)v4 + 8) = 3;
  *((_DWORD *)v4 + 24) = 1;
  *((_DWORD *)v4 + 25) = 1;
  *((_DWORD *)v4 + 23) = 0;
  *((_QWORD *)v4 + 14) = 0LL;
  *((_DWORD *)v4 + 34) = 1065353216;
  *((_DWORD *)v4 + 31) = 1065353216;
  *((_DWORD *)v4 + 32) = 1065353216;
  *((_DWORD *)v4 + 33) = 1065353216;
  v4[120] = 0;
  *((_DWORD *)v4 + 6) = 2;
  *(_QWORD *)(v4 + 36) = 0LL;
  *(_QWORD *)(v4 + 44) = 1065353216LL;
  *((_DWORD *)v4 + 13) = 0;
  *((_QWORD *)v4 + 7) = 1065353216LL;
  *((_DWORD *)v4 + 16) = 0;
  _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
  *a2 = (struct CHwSolidColorTextureSource *)v4;
  return 0LL;
}
