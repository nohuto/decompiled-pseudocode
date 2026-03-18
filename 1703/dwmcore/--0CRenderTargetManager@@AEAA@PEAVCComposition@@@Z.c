/*
 * XREFs of ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x18006B468
 * Callers:
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBC04 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800B1990 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 24);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 112);
  return this;
}
