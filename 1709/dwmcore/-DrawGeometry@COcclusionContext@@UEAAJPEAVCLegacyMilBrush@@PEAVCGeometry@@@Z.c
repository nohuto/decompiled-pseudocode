/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005DCD0
 * Callers:
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE@gsl@@@Z @ 0x18001DD7C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE@gsl@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007C5B8 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D670 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CLegacyMilBrush *, __int64, struct CGeometry *); // rax
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-20h]

  v5 = *(__int64 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v5 == (char *)CSolidColorLegacyMilBrush::IsOfType )
    v6 = CSolidColorLegacyMilBrush::IsOfType(a2, 71LL);
  else
    v6 = v5(a2, 71LL, a3);
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = v15;
      *(_QWORD *)&v16 = *((_QWORD *)this + 101);
      v10 = *((unsigned int *)this + 294);
      *((_QWORD *)&v16 + 1) = CachedBrushCVINoRef;
      LOBYTE(v17) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v9 = v10 + 1;
      if ( v11 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11 < (unsigned int)v10 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v9 <= *((_DWORD *)this + 293) )
      {
        v13 = *((_QWORD *)this + 144);
        v14 = 5 * v10;
        *(_OWORD *)(v13 + 8 * v14) = v16;
        *(_OWORD *)(v13 + 8 * v14 + 16) = v17;
        *(_QWORD *)(v13 + 8 * v14 + 32) = v18;
        *((_DWORD *)this + 294) = v9;
      }
      else
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1152, 40LL, 1LL, &v16);
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
      }
    }
  }
  return 0LL;
}
