/*
 * XREFs of ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x18005F130
 * Callers:
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9E14 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800CD200 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 24, 0LL, 0LL);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = 1;
  return this;
}
