/*
 * XREFs of ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C011020C
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CCDE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
        __int64 a1,
        unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 v6; // rax
  bool v7; // cf
  SIZE_T v8; // rax
  char *v9; // rax

  v2 = 0LL;
  v3 = a2;
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
    v6 = 8 * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v6 = -1LL;
    v7 = __CFADD__(v6, 8LL);
    v8 = v6 + 8;
    if ( v7 )
      v8 = -1LL;
    v9 = (char *)operator new[](v8, 0x4B677844u, PagedPool);
    if ( v9 )
    {
      v2 = v9 + 8;
      *(_QWORD *)v9 = v3;
      `vector constructor iterator'(
        v9 + 8,
        8LL,
        v3,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
  }
  else
  {
    v2 = (char *)(a1 + 8);
  }
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 40) = v3;
  return a1;
}
