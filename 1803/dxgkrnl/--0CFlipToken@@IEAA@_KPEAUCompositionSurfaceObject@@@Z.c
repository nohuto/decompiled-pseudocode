/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0024F5C
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C004B7A0 (-CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C004B85C (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0018420 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(CFlipToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_DWORD *)this + 139) = 0x1000000;
  *((_WORD *)this + 44) = 0;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_DWORD *)this + 52) = 0;
  return result;
}
