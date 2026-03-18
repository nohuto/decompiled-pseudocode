/*
 * XREFs of ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1801306A4
 * Callers:
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180130918 (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x18011D8E0 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((__int64)this + 24, (__int64)a2, a3, a4);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((__int64)this + 112, v5, v6, v7);
  return this;
}
