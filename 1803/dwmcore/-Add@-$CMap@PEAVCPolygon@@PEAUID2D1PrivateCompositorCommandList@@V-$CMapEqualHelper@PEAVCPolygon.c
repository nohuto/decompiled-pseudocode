/*
 * XREFs of ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E5FA4
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1801E6040 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E6184 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D5F20 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  char *v13; // rdx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = (char *)ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v12 = (_QWORD *)(*(_QWORD *)a1 + 8 * v11);
  if ( v12 )
  {
    *v12 = *a2;
    v10 = *(char **)(a1 + 8);
  }
  v13 = &v10[8 * v11];
  if ( v13 )
    *(_QWORD *)v13 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
