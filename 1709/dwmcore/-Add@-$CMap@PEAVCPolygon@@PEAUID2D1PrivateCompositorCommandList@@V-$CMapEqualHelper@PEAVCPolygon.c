/*
 * XREFs of ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800B5A1C
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1800B57CC (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800B58D0 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800B5AB4 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = ReallocHeap(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
    *v11 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
