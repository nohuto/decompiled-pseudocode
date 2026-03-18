/*
 * XREFs of ??1CBrushRenderingEffect@@UEAA@XZ @ 0x180016290
 * Callers:
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x180016330 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x1800167F0 (-Release@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?Release@CRenderingTechnique@@UEAAKXZ @ 0x180016A70 (-Release@CRenderingTechnique@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::~CBrushRenderingEffect(CBrushRenderingEffect *this)
{
  unsigned int v2; // ebx
  CRenderingTechnique *v3; // rcx
  void (*v4)(void); // rax
  _QWORD *v5; // rsi
  CRenderTargetImageSource *v6; // rcx
  void (*v7)(void); // rax

  *(_QWORD *)this = &CBrushRenderingEffect::`vftable';
  v2 = 0;
  v3 = (CRenderingTechnique *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CRenderingTechnique::Release )
      CRenderingTechnique::Release(v3);
    else
      v4();
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 24);
  do
  {
    v6 = (CRenderTargetImageSource *)(*v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
      if ( (char *)v7 == (char *)CRenderTargetImageSource::Release )
        CRenderTargetImageSource::Release(v6);
      else
        v7();
    }
    ++v2;
    ++v5;
  }
  while ( v2 < 4 );
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
