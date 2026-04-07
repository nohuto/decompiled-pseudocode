/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180093210
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800078A0 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180010A44 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180026AE0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::CopyVisual(
        CAnimatedTransitionVisual *this,
        struct CAnimatedTransitionVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  float v16; // xmm1_4

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_DWORD *)a2 + 216) - *((_DWORD *)a2 + 214);
    v7 = *((_DWORD *)a2 + 217) - *((_DWORD *)a2 + 215);
    v8 = RoundToNearestInt((float)*((int *)a2 + 214) + *((float *)a2 + 188));
    *((_DWORD *)this + 214) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 215) + *((float *)a2 + 189));
    v11 = 0;
    *((_DWORD *)this + 215) = v10;
    v12 = v10;
    if ( v6 >= 0 )
      v11 = v6;
    *((_DWORD *)this + 216) = RoundToNearestInt((float)((float)v11 * *((float *)this + 191)) + (float)v9);
    v13 = 0;
    if ( v7 >= 0 )
      v13 = v7;
    v14 = RoundToNearestInt((float)((float)v13 * *((float *)this + 192)) + (float)v12);
    v15 = *((_BYTE *)this + 969) == 0;
    *((_DWORD *)this + 217) = v14;
    *((float *)this + 230) = *((float *)a2 + 230) + *((float *)a2 + 190);
    if ( v15 )
    {
      v16 = *((float *)a2 + 186);
      *((float *)this + 232) = v16;
    }
    else
    {
      v16 = *((float *)this + 232);
    }
    v15 = *((_BYTE *)this + 976) == 0;
    *((float *)this + 186) = v16;
    *(_OWORD *)((char *)this + 824) = *(_OWORD *)((char *)a2 + 824);
    *((_BYTE *)this + 986) = *((_BYTE *)a2 + 986);
    *((_BYTE *)this + 987) = *((_BYTE *)a2 + 987);
    *(_OWORD *)((char *)this + 888) = *(_OWORD *)((char *)a2 + 824);
    if ( v15 )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v16);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 968) = 1;
    v5 = 0;
    *((_DWORD *)this + 245) = *((_DWORD *)a2 + 245);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x284u);
  }
  return v5;
}
