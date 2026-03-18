/*
 * XREFs of ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800B1570
 * Callers:
 *     ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x1800A0D90 (--0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x1800B12A8 (--0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x18015AB54 (--0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x18015BF04 (--0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CCompositionLight *__fastcall CCompositionLight::CCompositionLight(
        CCompositionLight *this,
        struct CComposition *a2,
        char a3)
{
  CCompositionLight *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionLight::`vftable';
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 1;
  *(_QWORD *)((char *)this + 92) = 1LL;
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  result = this;
  *((_DWORD *)this + 32) = 1;
  *(_QWORD *)((char *)this + 132) = 1LL;
  *((_BYTE *)this + 152) = 1;
  *((_BYTE *)this + 153) = a3;
  return result;
}
