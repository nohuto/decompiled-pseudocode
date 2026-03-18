/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800B3004
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180005A60 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CSurfaceDrawListBrush *a1)
{
  char *Value; // rbx
  char *v3; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (char *)operator new(0xF8uLL);
    Value = v3;
    if ( v3 )
    {
      *(_QWORD *)v3 = 0LL;
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = 0LL;
      *((_QWORD *)v3 + 3) = 0LL;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      *((_QWORD *)v3 + 8) = 0LL;
      *((_QWORD *)v3 + 9) = 0LL;
      *((_QWORD *)v3 + 10) = 0LL;
      *((_QWORD *)v3 + 11) = 0LL;
      *((_QWORD *)v3 + 12) = 0LL;
      *((_QWORD *)v3 + 13) = 0LL;
      *((_QWORD *)v3 + 14) = 0LL;
      *((_QWORD *)v3 + 15) = 0LL;
      *((_QWORD *)v3 + 16) = 0LL;
      *((_QWORD *)v3 + 17) = 0LL;
      *((_QWORD *)v3 + 18) = 0LL;
      *((_QWORD *)v3 + 19) = 0LL;
      *((_QWORD *)v3 + 20) = 0LL;
      *((_QWORD *)v3 + 21) = 0LL;
      *((_QWORD *)v3 + 22) = 0LL;
      *((_QWORD *)v3 + 23) = 0LL;
      *((_QWORD *)v3 + 24) = 0LL;
      *((_QWORD *)v3 + 25) = 0LL;
      *((_QWORD *)v3 + 26) = 0LL;
      *((_QWORD *)v3 + 27) = 0LL;
      *((_QWORD *)v3 + 28) = 0LL;
      *((_QWORD *)v3 + 29) = 0LL;
      *((_QWORD *)v3 + 30) = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  return (struct CObjectCache *)(Value + 152);
}
