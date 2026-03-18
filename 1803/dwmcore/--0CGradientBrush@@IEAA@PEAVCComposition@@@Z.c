/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@@Z @ 0x18001238C
 * Callers:
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800118AC (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2)
{
  __int64 v3; // rax
  CGradientBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResource::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 56LL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 10) = v3;
  result = this;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 26) = 2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 84) = 0;
  return result;
}
