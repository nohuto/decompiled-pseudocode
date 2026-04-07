/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002C188
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800042F0 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180036740 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 i; // rsi
  __int64 v7; // r14
  __int64 (__fastcall *v8)(CDCompThumbnailData *__hidden); // rax
  int v9; // eax
  CVisual *v10; // rcx
  CThumbnailVisual *v11; // rcx
  int v12; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)a2 + 126) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 60) + 8 * v3);
      v8 = *(__int64 (__fastcall **)(CDCompThumbnailData *__hidden))(*(_QWORD *)v7 + 8LL);
      v9 = v8 == CDCompThumbnailData::EnsureThumbnailVisual
         ? CDCompThumbnailData::EnsureThumbnailVisual((CDCompThumbnailData *)v7)
         : v8((CDCompThumbnailData *)v7);
      v2 = v9;
      if ( v9 < 0 )
        break;
      v10 = (CVisual *)*((_QWORD *)a2 + 49);
      if ( *(_BYTE *)(v7 + 34) )
      {
        CVisual::SetDirtyFlags(v10, 0x8000000);
      }
      else
      {
        v12 = CTopLevelWindow::OnThumbnailAdded(v10, *(struct CVisual **)(v7 + 88));
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1464u);
          return v2;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a2 + 126) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1459u);
  }
  else
  {
LABEL_2:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v11 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 64) + 8 * i) + 88LL);
      if ( v11 )
        CThumbnailVisual::SetDirtyFlags(v11, 0x2000);
    }
  }
  return v2;
}
