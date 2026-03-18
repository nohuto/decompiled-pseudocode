/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@USamplerMode@@01@Z @ 0x180009740
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800C2624 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  SamplerMode *v6; // r14
  __int64 v10; // rbp

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  v6 = (SamplerMode *)(a1 + 32);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v10 = 2LL;
  do
  {
    SamplerMode::SamplerMode(v6);
    v6 = (SamplerMode *)((char *)v6 + 3);
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 24) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_WORD *)(a1 + 32) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 35) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a5 + 2);
  return a1;
}
