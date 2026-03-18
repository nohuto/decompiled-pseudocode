/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x180097944
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B6F34 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x1800C5EC0 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(
        CPreComputeContext *this,
        struct CComposition *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 58) = 0;
  *(_QWORD *)((char *)this + 204) = 1LL;
  *((_DWORD *)this + 45) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeContext *)((char *)this + 368));
  *(_QWORD *)(v3 + 696) = v2;
  *(_QWORD *)(v3 + 712) = v2;
  *(_DWORD *)(v3 + 704) = v2;
  *(_DWORD *)(v3 + 720) = v2;
  *(_QWORD *)(v3 + 688) = &CTransformParentPreComputeHelper::`vftable';
  *(_QWORD *)(v3 + 736) = v2;
  *(_QWORD *)(v3 + 752) = v2;
  *(_DWORD *)(v3 + 744) = v2;
  *(_DWORD *)(v3 + 760) = v2;
  *(_QWORD *)(v3 + 728) = &CLightPreComputeHelper::`vftable';
  return (CPreComputeContext *)v3;
}
