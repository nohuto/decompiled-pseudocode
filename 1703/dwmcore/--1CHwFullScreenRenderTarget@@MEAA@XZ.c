/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800CDC64
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800CDCF0 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18019C320 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwFullScreenRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 43));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 44));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 45));
  v2 = (void *)*((_QWORD *)this + 41);
  if ( v2 )
    DeleteObject(v2);
  v3 = (void *)*((_QWORD *)this + 42);
  if ( v3 )
    DeleteObject(v3);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
