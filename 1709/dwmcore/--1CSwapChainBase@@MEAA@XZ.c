/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x1801B270C
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1801AFAEC (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1801B0E7C (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this)
{
  __int64 i; // rbx
  char *v3; // rcx
  char *v4; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 100); i = (unsigned int)(i + 1) )
    ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(*((_QWORD *)this + 47) + 8 * i));
  v3 = (char *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    v4 = v3 - 8;
    `vector destructor iterator'(
      v3,
      8LL,
      *((_QWORD *)v3 - 1),
      (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::~ComPtr<CD3DPhysicalSwapChainBuffer>);
    WPF::ProcessHeapImpl::Free(v4);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 47);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  FastRegion::CRegion::FreeMemory((void **)this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
