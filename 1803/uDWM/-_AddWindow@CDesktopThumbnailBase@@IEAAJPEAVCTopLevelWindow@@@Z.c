/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800A4848
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800A4BEC (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  struct CVisual *v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0LL;
  v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, a3, a4, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x72u);
    v8 = v16;
    goto LABEL_11;
  }
  v8 = v16;
  v9 = (_QWORD *)((char *)this + 240);
  v10 = *((unsigned int *)this + 66);
  *((_QWORD *)&v15 + 1) = v16;
  *(_QWORD *)&v15 = a2;
  v11 = v10 + 1;
  v12 = (int)v10 + 1 < (unsigned int)v10 ? 0x80070216 : 0;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xB5u);
    goto LABEL_9;
  }
  if ( v11 <= *((_DWORD *)this + 65) )
  {
    *(_OWORD *)(*v9 + 16 * v10) = v15;
    *((_DWORD *)this + 66) = v11;
    goto LABEL_9;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 16, 1, &v15);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC0u);
LABEL_9:
    if ( v12 < 0 )
      goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  v8 = v16;
  VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), (struct CVisual **)v16, 0LL, 0, 1);
LABEL_11:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
