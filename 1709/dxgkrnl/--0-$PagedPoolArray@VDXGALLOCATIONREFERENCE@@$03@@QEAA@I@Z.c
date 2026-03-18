/*
 * XREFs of ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C01001B8
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
        __int64 a1,
        unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v7; // rax
  bool v8; // cf
  SIZE_T v9; // rax
  char *v10; // rax

  v2 = 0LL;
  v3 = a2;
  v4 = a1 + 8;
  *(_QWORD *)a1 = 0LL;
  `vector constructor iterator'(
    (char *)(a1 + 8),
    8LL,
    4LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  *(_DWORD *)(a1 + 40) = 0;
  if ( (unsigned int)v3 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 8 )
      return a1;
    v7 = 8 * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v7 = -1LL;
    v8 = __CFADD__(v7, 8LL);
    v9 = v7 + 8;
    if ( v8 )
      v9 = -1LL;
    v10 = (char *)operator new[](v9, 0x4B677844u, PagedPool);
    if ( v10 )
    {
      v2 = v10 + 8;
      *(_QWORD *)v10 = v3;
      `vector constructor iterator'(
        v10 + 8,
        8LL,
        v3,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *(_QWORD *)a1 = v2;
  }
  else
  {
    *(_QWORD *)a1 = v4;
  }
  *(_DWORD *)(a1 + 40) = v3;
  return a1;
}
