/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B6F34
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x180097944 (--0CPreComputeContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  __int64 v4; // r9

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 64), a2);
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 104) = (char *)this + 864;
  *((_QWORD *)this + 105) = (char *)this + 864;
  *((_DWORD *)this + 212) = 1;
  *((_DWORD *)this + 213) = 1;
  *((_QWORD *)this + 3) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  return this;
}
