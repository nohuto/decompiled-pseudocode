/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@@Z @ 0x180071A8C
 * Callers:
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18007140C (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2)
{
  _QWORD *v3; // rax
  CGradientBrush *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResource::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = operator new(0x30uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v3 = v3;
  if ( v3 != (_QWORD *)-8LL )
    v3[1] = v3;
  if ( v3 != (_QWORD *)-16LL )
    v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 11) = v3;
  result = this;
  *((_WORD *)this + 52) = 256;
  *((_DWORD *)this + 27) = 2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}
