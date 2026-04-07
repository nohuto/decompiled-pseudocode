/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800163AC
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x180015FE4 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180019170 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025588 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        struct CBitmapSource *a4,
        float a5)
{
  CBitmapSourceArray *v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // r10d
  char v8; // si
  bool v12; // cl
  unsigned int v13; // r13d
  __int64 v14; // r15
  bool v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  unsigned int v18; // r10d
  bool v19; // cl
  unsigned int v20; // r15d
  __int64 v21; // r14
  bool v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // r9
  CBaseObject *v25; // rcx
  int v26; // eax
  int v28; // eax
  int v29; // eax

  v5 = (CButton *)((char *)this + 304);
  v6 = 0;
  v7 = *((_DWORD *)this + 82);
  v8 = 0;
  v12 = v7 == *((_DWORD *)a2 + 6);
  if ( v7 == *((_DWORD *)a2 + 6) && (v13 = 0, v7) )
  {
    v14 = 0LL;
    while ( v12 )
    {
      v15 = 0;
      v16 = (_QWORD *)(v14 + *(_QWORD *)a2);
      v17 = (_QWORD *)(v14 + *(_QWORD *)v5);
      ++v13;
      v14 += 8LL;
      if ( *v17 == *v16 )
        v15 = v12;
      v12 = v15;
      if ( v13 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v12 )
      goto LABEL_9;
  }
  v29 = CBitmapSourceArray::CopyAndAddRef(v5, a2);
  v6 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x4Bu);
    return v6;
  }
  v8 = 1;
LABEL_9:
  v18 = *((_DWORD *)this + 90);
  v19 = v18 == *((_DWORD *)a3 + 6);
  if ( v18 == *((_DWORD *)a3 + 6) )
  {
    v20 = 0;
    if ( v18 )
    {
      v21 = 0LL;
      while ( v19 )
      {
        v22 = 0;
        v23 = (_QWORD *)(v21 + *(_QWORD *)a3);
        v24 = (_QWORD *)(v21 + *((_QWORD *)this + 42));
        ++v20;
        v21 += 8LL;
        if ( *v24 == *v23 )
          v22 = v19;
        v19 = v22;
        if ( v20 >= v18 )
          goto LABEL_16;
      }
      goto LABEL_24;
    }
  }
LABEL_16:
  if ( !v19 )
  {
LABEL_24:
    v28 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 336), a3);
    v6 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x51u);
      return v6;
    }
    v8 = 1;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v25 != a4 )
  {
    if ( v25 )
      CBaseObject::Release(v25);
    *((_QWORD *)this + 46) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v8 = 1;
  }
  if ( *((float *)this + 101) != a5 )
  {
    *((float *)this + 101) = a5;
    CButton::UpdateCurrentGlyphOpacity(this, v8);
  }
  if ( v8 )
  {
    v26 = *((_DWORD *)this + 20);
    if ( (v26 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 20) = v26 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return v6;
}
