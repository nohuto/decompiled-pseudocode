/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x1800D7C14
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D875C (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800D8C3C (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this)
{
  __int64 v1; // rbx
  _QWORD *i; // rsi
  char *v4; // rcx
  char *v5; // rbx

  v1 = 0LL;
  for ( i = (_QWORD *)((char *)this + 384); (unsigned int)v1 < *((_DWORD *)this + 102); v1 = (unsigned int)(v1 + 1) )
    ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(*i + 8 * v1));
  v4 = (char *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      8LL,
      *((_QWORD *)v4 - 1),
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete(v5, 8LL * *(_QWORD *)v5 + 8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)i);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 344);
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  FastRegion::CRegion::FreeMemory((void **)this + 25);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
