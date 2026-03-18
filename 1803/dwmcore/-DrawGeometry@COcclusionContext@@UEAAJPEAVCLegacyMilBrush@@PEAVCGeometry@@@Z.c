/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A9910
 * Callers:
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800566A8 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B5F40 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800B804C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CLegacyMilBrush *, __int64, struct CGeometry *); // rax
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v5 = *(__int64 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v5 == (char *)CSolidColorLegacyMilBrush::IsOfType )
    v6 = CSolidColorLegacyMilBrush::IsOfType(a2, 77LL);
  else
    v6 = v5(a2, 77LL, a3);
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = *((_QWORD *)this + 101);
      *((_QWORD *)&v15 + 1) = CachedBrushCVINoRef;
      v10 = *((unsigned int *)this + 294);
      *(_QWORD *)&v15 = v9;
      LOBYTE(v16) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v10 + 1 < (unsigned int)v10 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 293) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1152, 0x28u, 1, &v15);
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        v12 = 5 * v10;
        v13 = *((_QWORD *)this + 144);
        *(_OWORD *)(v13 + 8 * v12) = v15;
        *(_OWORD *)(v13 + 8 * v12 + 16) = v16;
        *(_QWORD *)(v13 + 8 * v12 + 32) = v17;
        *((_DWORD *)this + 294) = v11;
      }
    }
  }
  return 0LL;
}
