/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004FDA8
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x18005067C (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18014B7C0 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18002ACE0 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18004D66C (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004D6CC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800A68F0 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(CVisual *this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  const struct CGeometry *v4; // rdx
  char v6; // bp
  char (__fastcall *v7)(CRgnGeometry *, const struct CGeometry *); // rax
  char IsSameGeometry; // al
  int v9; // eax

  v3 = 0;
  v4 = (const struct CGeometry *)*((_QWORD *)this + 30);
  if ( a2 != v4 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = *(char (__fastcall **)(CRgnGeometry *, const struct CGeometry *))(*(_QWORD *)a2 + 168LL);
      if ( v7 == CRgnGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRgnGeometry::IsSameGeometry(a2, v4);
      }
      else if ( (char *)v7 == (char *)CRectangleGeometry::IsSameGeometry )
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9ECu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 30));
      *((_QWORD *)this + 30) = a2;
      if ( !v6 )
      {
        CVisual::PropagateFlags(this, 5LL);
        CVisual::OnTransformChanged(this);
        CVisual::OnClipChanged(this);
      }
    }
  }
  return v3;
}
