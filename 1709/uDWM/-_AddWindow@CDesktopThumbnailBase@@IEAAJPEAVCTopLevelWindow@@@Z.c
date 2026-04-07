/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18009C3C8
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18009C788 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800096A0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(
        CDesktopThumbnailBase *this,
        struct CTopLevelWindow *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  struct CVisual *v8; // rdi
  unsigned int v9; // edx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  struct CVisual *v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0LL;
  v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, a3, a4, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x71u);
    v8 = v17;
    goto LABEL_13;
  }
  v9 = (unsigned int)v17;
  v10 = (_QWORD *)((char *)this + 240);
  v11 = *((unsigned int *)this + 66);
  v8 = v17;
  *((_QWORD *)&v16 + 1) = v17;
  *(_QWORD *)&v16 = a2;
  v12 = v11 + 1;
  if ( (int)v11 + 1 >= (unsigned int)v11 )
    v9 = v11 + 1;
  v13 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
  if ( v12 < (unsigned int)v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
    goto LABEL_11;
  }
  if ( v9 <= *((_DWORD *)this + 65) )
  {
    *(_OWORD *)(*v10 + 16 * v11) = v16;
    *((_DWORD *)this + 66) = v9;
    goto LABEL_11;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10, 0x10u, 1, &v16);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
LABEL_11:
    if ( v13 < 0 )
      goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  v8 = v17;
  VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), (struct CVisual **)v17, 0LL, 0, 1);
LABEL_13:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
