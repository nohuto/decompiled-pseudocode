/*
 * XREFs of ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x18001F270
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180048640 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rbx
  LPVOID Value; // rbx
  _QWORD *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CCommonRenderingEffect *)((char *)this + 64);
  v5 = 2LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v8 = operator new(0xA8uLL);
      Value = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v8[2] = 0LL;
        v8[3] = 0LL;
        v8[4] = 0LL;
        v8[5] = 0LL;
        v8[6] = 0LL;
        v8[7] = 0LL;
        v8[8] = 0LL;
        v8[9] = 0LL;
        v8[10] = 0LL;
        v8[11] = 0LL;
        v8[12] = 0LL;
        v8[13] = 0LL;
        v8[14] = 0LL;
        v8[15] = 0LL;
        v8[16] = 0LL;
        v8[17] = 0LL;
        v8[18] = 0LL;
        v8[19] = 0LL;
        v8[20] = 0LL;
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
    if ( *((_DWORD *)Value + 23) >= *((_DWORD *)Value + 22) )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)Value + 12);
      ++*((_DWORD *)Value + 23);
      *((_QWORD *)Value + 12) = this;
    }
  }
  return this;
}
