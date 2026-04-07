/*
 * XREFs of ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800A3550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180018460 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800834A8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::CloneVisualTree(
        CDesktopThumbnailCVIVisual *this,
        struct CVisual **a2,
        bool a3,
        bool a4,
        bool a5)
{
  __int64 v5; // rax
  int v10; // eax
  unsigned int v11; // esi
  CBaseObject *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct CVisual *v18; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  v19 = 0LL;
  v10 = CDesktopThumbnailCVIVisual::Create(*(struct IDwmChannel **)(v5 + 16), &v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v19;
    v18 = v19;
    v13 = CRenderDataVisual::CloneVisualTree(this, &v18, a3, a4, a5);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x203u);
      goto LABEL_13;
    }
    *((_QWORD *)v12 + 37) = *((_QWORD *)this + 37);
    v14 = *((_QWORD *)this + 37);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v12 = v19;
    }
    *((_QWORD *)v12 + 35) = *((_QWORD *)this + 35);
    v15 = *((_QWORD *)this + 35);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v12 = v19;
    }
    *((_QWORD *)v12 + 38) = *((_QWORD *)this + 38);
    v16 = *((_QWORD *)this + 38);
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v12 = v19;
    }
    *a2 = v12;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1FCu);
  }
  v12 = v19;
LABEL_13:
  if ( v12 )
    CBaseObject::Release(v12);
  return v11;
}
