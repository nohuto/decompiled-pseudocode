/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800516B4 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180129B20 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18004F698 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004F6F8 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180058AA0 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180096B00 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(CVisual *this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  const struct CGeometry *v4; // rdx
  char v6; // bp
  bool (__fastcall *v7)(CRgnGeometry *__hidden, const struct CGeometry *); // rax
  char IsSameGeometry; // al
  int v9; // eax

  v3 = 0;
  v4 = (const struct CGeometry *)*((_QWORD *)this + 29);
  if ( a2 != v4 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = *(bool (__fastcall **)(CRgnGeometry *__hidden, const struct CGeometry *))(*(_QWORD *)a2 + 168LL);
      if ( v7 == CRgnGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRgnGeometry::IsSameGeometry(a2, v4);
      }
      else if ( v7 == CRectangleGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRectangleGeometry::IsSameGeometry(a2, v4);
      }
      else
      {
        IsSameGeometry = ((__int64 (__fastcall *)(struct CGeometry *))v7)(a2);
      }
      v6 = IsSameGeometry;
    }
    v9 = CResource::RegisterNotifier(this, a2);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x959u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 29));
      *((_QWORD *)this + 29) = a2;
      if ( !v6 )
      {
        CVisual::PropagateFlags(this, 5LL, 0LL);
        CVisual::OnTransformChanged(this);
        CVisual::OnClipChanged(this);
      }
    }
  }
  return v3;
}
