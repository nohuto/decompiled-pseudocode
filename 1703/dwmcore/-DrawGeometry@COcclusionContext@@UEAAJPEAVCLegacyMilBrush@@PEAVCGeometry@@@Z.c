/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18009BB30
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004BCD0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007B360 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA70 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  {
    v6 = CSolidColorLegacyMilBrush::IsOfType((__int64)a2, 80);
  }
  else if ( (char *)v5 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v6 = CImageLegacyMilBrush::IsOfType((__int64)a2, 80);
  }
  else
  {
    v6 = v5(a2, 80LL, a3);
  }
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = v15;
      *(_QWORD *)&v16 = *((_QWORD *)this + 90);
      v10 = *((unsigned int *)this + 270);
      *((_QWORD *)&v16 + 1) = CachedBrushCVINoRef;
      LOBYTE(v17) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v9 = v10 + 1;
      if ( v11 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11 < (unsigned int)v10 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v9 <= *((_DWORD *)this + 269) )
      {
        v13 = *((_QWORD *)this + 132);
        v14 = 5 * v10;
        *(_OWORD *)(v13 + 8 * v14) = v16;
        *(_OWORD *)(v13 + 8 * v14 + 16) = v17;
        *(_QWORD *)(v13 + 8 * v14 + 32) = v18;
        *((_DWORD *)this + 270) = v9;
      }
      else
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1056, 0x28u, 1, &v16);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
    }
  }
  return 0LL;
}
