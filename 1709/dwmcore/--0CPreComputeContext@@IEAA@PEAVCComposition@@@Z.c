/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x180054E94
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180031984 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18007B2F8 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x18009E948 (--0CLightStack@@QEAA@XZ.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(
        CPreComputeContext *this,
        struct CComposition *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9

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
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 48) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 200));
  *(_QWORD *)(v2 + 480) = v3;
  *(_QWORD *)(v2 + 496) = v3;
  *(_DWORD *)(v2 + 488) = v3;
  *(_DWORD *)(v2 + 504) = v3;
  *(_QWORD *)(v2 + 476) = 1LL;
  *(_DWORD *)(v2 + 452) = v3;
  *(_QWORD *)(v2 + 456) = v3;
  *(_QWORD *)(v2 + 464) = v3;
  *(_QWORD *)(v2 + 528) = v3;
  *(_QWORD *)(v2 + 536) = v3;
  *(_QWORD *)(v2 + 544) = v3;
  *(_QWORD *)(v2 + 552) = v3;
  *(_DWORD *)(v2 + 560) = v3;
  *(_QWORD *)(v2 + 568) = v3;
  *(_QWORD *)(v2 + 576) = v3;
  *(_QWORD *)(v2 + 584) = v3;
  *(_DWORD *)(v2 + 592) = v3;
  *(_QWORD *)(v2 + 600) = v3;
  CBspPreComputeHelper::CBspPreComputeHelper((CBspPreComputeHelper *)(v2 + 616));
  *(_QWORD *)(v4 + 944) = v5;
  *(_QWORD *)(v4 + 960) = v5;
  *(_DWORD *)(v4 + 952) = v5;
  *(_DWORD *)(v4 + 968) = v5;
  *(_QWORD *)(v4 + 936) = &CTransformParentPreComputeHelper::`vftable';
  *(_QWORD *)(v4 + 984) = v5;
  *(_QWORD *)(v4 + 1000) = v5;
  *(_DWORD *)(v4 + 992) = v5;
  *(_DWORD *)(v4 + 1008) = v5;
  *(_QWORD *)(v4 + 976) = &CLightPreComputeHelper::`vftable';
  return (CPreComputeContext *)v4;
}
