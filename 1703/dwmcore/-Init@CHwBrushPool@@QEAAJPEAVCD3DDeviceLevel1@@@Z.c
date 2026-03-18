/*
 * XREFs of ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18004AB10
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHwBrushPool::Init(CHwBrushPool *this, struct CD3DDeviceLevel1 *a2)
{
  _QWORD *v4; // rax
  union _SLIST_HEADER *v5; // rbx
  _QWORD *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v4[1] = a2;
  *v4 = &CHwBrush::`vftable';
  v4[5] = 0LL;
  v4[2] = &CMILRefCountBase::`vftable';
  *((_DWORD *)v4 + 6) = 0;
  v4[4] = a2;
  v4[8] = 0LL;
  *v4 = &CHwSolidBrush::`vftable'{for `CHwBrush'};
  v4[2] = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
  *(_QWORD *)this = v4;
  v5 = (union _SLIST_HEADER *)HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  if ( !v5 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5->Alignment = (ULONGLONG)&CHwBrushPoolManager::`vftable';
  InitializeSListHead(v5 + 1);
  v5[2].Region = (ULONGLONG)&v5[2];
  v5[2].Alignment = (ULONGLONG)&v5[2];
  LODWORD(v5[3].Alignment) = 0;
  v5[3].Region = 0LL;
  v5[4].Alignment = 0LL;
  *((_DWORD *)&v5[4].HeaderX64 + 2) = 0;
  v5->Alignment = (ULONGLONG)&CHwLinearGradientBrushPoolManager::`vftable';
  v5[5].Alignment = (ULONGLONG)a2;
  *((_QWORD *)this + 1) = v5;
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  if ( !v6 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[4] = 0LL;
  *v6 = &CHwBitmapBrush::`vftable';
  v6[1] = a2;
  *((_QWORD *)this + 2) = v6;
  return 0LL;
}
