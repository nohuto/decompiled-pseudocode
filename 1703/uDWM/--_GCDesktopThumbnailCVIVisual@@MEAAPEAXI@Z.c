/*
 * XREFs of ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180082350
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x18001F090 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CDesktopThumbnailCVIVisual *__fastcall CDesktopThumbnailCVIVisual::`scalar deleting destructor'(
        CDesktopThumbnailCVIVisual *this,
        char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v6 )
    CBaseObject::Release(v6);
  VisualCollection::RemoveAll((CDesktopThumbnailCVIVisual *)((char *)this + 32));
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopThumbnailCVIVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
