/*
 * XREFs of ??0CLightStack@@QEAA@XZ @ 0x18009E948
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180040B1C (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x180054E94 (--0CPreComputeContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005CE1C (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CLightStack *__fastcall CLightStack::CLightStack(CLightStack *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 4;
  *(_QWORD *)((char *)this + 20) = 4LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 50) = 3;
  *(_QWORD *)((char *)this + 204) = 3LL;
  return this;
}
