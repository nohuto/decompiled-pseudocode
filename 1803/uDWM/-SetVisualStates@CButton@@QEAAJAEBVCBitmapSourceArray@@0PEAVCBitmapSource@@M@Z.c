/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180017400
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D92C (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180012370 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x180016C7C (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180025994 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        struct CBitmapSource *a4,
        float a5)
{
  unsigned int v5; // esi
  int v6; // r13d
  char v7; // r12
  bool v10; // r10
  unsigned int v11; // ebx
  __int64 v12; // r11
  bool v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  unsigned int v16; // ebx
  bool v17; // cl
  unsigned int v18; // r11d
  __int64 v19; // r10
  bool v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // r9
  CBaseObject *v23; // rcx
  int v25; // eax

  v5 = *((_DWORD *)this + 82);
  v6 = 0;
  v7 = 0;
  v10 = v5 == *((_DWORD *)a2 + 6);
  if ( v5 == *((_DWORD *)a2 + 6) && (v11 = 0, v5) )
  {
    v12 = 0LL;
    while ( v10 )
    {
      v13 = 0;
      v14 = (_QWORD *)(v12 + *(_QWORD *)a2);
      v15 = (_QWORD *)(v12 + *((_QWORD *)this + 38));
      ++v11;
      v12 += 8LL;
      if ( *v15 == *v14 )
        v13 = v10;
      v10 = v13;
      if ( v11 >= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v10 )
      goto LABEL_9;
  }
  v6 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 304), a2);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Bu);
    return (unsigned int)v6;
  }
  v7 = 1;
LABEL_9:
  v16 = *((_DWORD *)this + 90);
  v17 = v16 == *((_DWORD *)a3 + 6);
  if ( v16 == *((_DWORD *)a3 + 6) )
  {
    v18 = 0;
    if ( v16 )
    {
      v19 = 0LL;
      while ( v17 )
      {
        v20 = 0;
        v21 = (_QWORD *)(v19 + *(_QWORD *)a3);
        v22 = (_QWORD *)(v19 + *((_QWORD *)this + 42));
        ++v18;
        v19 += 8LL;
        if ( *v22 == *v21 )
          v20 = v17;
        v17 = v20;
        if ( v18 >= v16 )
          goto LABEL_16;
      }
      goto LABEL_22;
    }
  }
LABEL_16:
  if ( !v17 )
  {
LABEL_22:
    v6 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 336), a3);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x51u);
      return (unsigned int)v6;
    }
    v7 = 1;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v23 != a4 )
  {
    if ( v23 )
      CBaseObject::Release(v23);
    *((_QWORD *)this + 46) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v7 = 1;
  }
  if ( *((float *)this + 101) != a5 )
  {
    *((float *)this + 101) = a5;
    CButton::UpdateCurrentGlyphOpacity(this, v7);
  }
  if ( v7 )
  {
    v25 = *((_DWORD *)this + 20);
    if ( (v25 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 20) = v25 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return (unsigned int)v6;
}
