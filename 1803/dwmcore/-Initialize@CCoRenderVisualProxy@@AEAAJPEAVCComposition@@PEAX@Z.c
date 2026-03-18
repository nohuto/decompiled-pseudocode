/*
 * XREFs of ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x18014B3A0
 * Callers:
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x18014B29C (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004F974 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CCoRenderContent@@SAPEAX_K@Z @ 0x18014AF28 (--2CCoRenderContent@@SAPEAX_K@Z.c)
 *     ??2CSpatialVisual@@SAPEAX_K@Z @ 0x18016DFB0 (--2CSpatialVisual@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::Initialize(CCoRenderVisualProxy *this, struct CComposition *a2, void *a3)
{
  _DWORD *v6; // rbx
  CVisual *v7; // rax
  CVisual *v8; // rdi
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v11; // eax

  v6 = 0LL;
  v7 = (CVisual *)CSpatialVisual::operator new((unsigned __int64)this);
  if ( v7 )
    v8 = CVisual::CVisual(v7, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = CCoRenderContent::operator new();
    v6 = v10;
    if ( v10 )
    {
      v10[2] = 0;
      *((_QWORD *)v10 + 2) = a2;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 5) = 0LL;
      v10[8] = 0;
      *(_QWORD *)v10 = &CCoRenderContent::`vftable'{for `CContent'};
      *((_QWORD *)v10 + 7) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
      *((_QWORD *)v10 + 8) = a3;
      v10[18] = 0;
      v10[19] = 0;
      v10[20] = 0;
      v10[21] = 0;
      *((_QWORD *)v10 + 11) = (char *)this + 32;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      v11 = (*(__int64 (__fastcall **)(CVisual *, _DWORD *))(*(_QWORD *)v8 + 296LL))(v8, v6);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x8Eu);
      }
      else
      {
        *((_QWORD *)this + 3) = v8;
        v8 = 0LL;
      }
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Bu);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x87u);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
