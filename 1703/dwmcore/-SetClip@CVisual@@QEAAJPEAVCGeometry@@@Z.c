/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x180085980 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x1801406C0 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180058200 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180086BB0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180094F10 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  v4 = (const struct CGeometry *)*((_QWORD *)this + 29);
  if ( a2 != v4 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = *(char (__fastcall **)(CRgnGeometry *, const struct CGeometry *))(*(_QWORD *)a2 + 144LL);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x92Bu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 29));
      *((_QWORD *)this + 29) = a2;
      if ( !v6 )
      {
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
        CVisual::OnTransformChanged(this);
        CVisual::OnClipChanged(this);
      }
    }
  }
  return v3;
}
