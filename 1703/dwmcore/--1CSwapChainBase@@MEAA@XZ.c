/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x1800CDB58
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800CE018 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800CEA8C (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this)
{
  __int64 i; // rdi
  CMILPoolResource *v3; // rcx
  void *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    v3 = *(CMILPoolResource **)(*((_QWORD *)this + 33) + 8 * i);
    if ( v3 )
      CMILPoolResource::Release(v3);
  }
  v4 = (void *)*((_QWORD *)this + 26);
  if ( v4 )
    DeleteObject(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  CD3DResource::~CD3DResource(this);
}
