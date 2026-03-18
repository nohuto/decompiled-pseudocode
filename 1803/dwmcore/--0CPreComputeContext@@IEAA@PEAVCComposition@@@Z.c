/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x1800A2B18
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800411E4 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x1800BE774 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x1800C22A0 (--0CLightStack@@QEAA@XZ.c)
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
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 64) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 264));
  *(_QWORD *)(v2 + 544) = v3;
  *(_QWORD *)(v2 + 560) = v3;
  *(_DWORD *)(v2 + 552) = v3;
  *(_DWORD *)(v2 + 568) = v3;
  *(_QWORD *)(v2 + 540) = 1LL;
  *(_DWORD *)(v2 + 516) = v3;
  *(_QWORD *)(v2 + 520) = v3;
  *(_QWORD *)(v2 + 528) = v3;
  *(_QWORD *)(v2 + 592) = v3;
  *(_QWORD *)(v2 + 600) = v3;
  *(_QWORD *)(v2 + 608) = v3;
  *(_QWORD *)(v2 + 616) = v3;
  *(_DWORD *)(v2 + 624) = v3;
  *(_QWORD *)(v2 + 632) = v3;
  *(_QWORD *)(v2 + 640) = v3;
  *(_QWORD *)(v2 + 648) = v3;
  *(_DWORD *)(v2 + 656) = v3;
  *(_QWORD *)(v2 + 664) = v3;
  *(_QWORD *)(v2 + 680) = v3;
  *(_QWORD *)(v2 + 688) = v3;
  *(_QWORD *)(v2 + 696) = v3;
  CBspPreComputeHelper::CBspPreComputeHelper((CBspPreComputeHelper *)(v2 + 704));
  *(_QWORD *)(v4 + 1032) = v5;
  *(_QWORD *)(v4 + 1048) = v5;
  *(_DWORD *)(v4 + 1040) = v5;
  *(_DWORD *)(v4 + 1056) = v5;
  *(_QWORD *)(v4 + 1024) = &CTransformParentPreComputeHelper::`vftable';
  *(_QWORD *)(v4 + 1072) = v5;
  *(_QWORD *)(v4 + 1088) = v5;
  *(_DWORD *)(v4 + 1080) = v5;
  *(_DWORD *)(v4 + 1096) = v5;
  *(_QWORD *)(v4 + 1064) = &CLightPreComputeHelper::`vftable';
  return (CPreComputeContext *)v4;
}
