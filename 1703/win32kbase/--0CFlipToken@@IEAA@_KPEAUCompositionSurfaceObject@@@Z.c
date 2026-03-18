/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0005C74
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0005808 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0007100 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(
        CFlipToken *this,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_QWORD *)this + 18) = 1LL;
  *((_DWORD *)this + 60) = -1;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_WORD *)this + 44) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_WORD *)this + 58) = 0;
  *((_WORD *)this + 68) = 0;
  *((_BYTE *)this + 138) = 0;
  *((_DWORD *)this + 35) = 0;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 61) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 55) = 0x1000000;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_DWORD *)this + 52) = 0;
  return result;
}
