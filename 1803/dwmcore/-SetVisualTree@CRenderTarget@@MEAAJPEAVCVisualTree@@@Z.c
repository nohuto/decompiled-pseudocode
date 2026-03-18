/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800423A0
 * Callers:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180042294 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180044550 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180061BB0 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180042184 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // edi
  __int64 v4; // r8
  int v7; // eax
  __int64 v9; // rdx
  char *v10; // r10
  __int64 v11; // r9
  __int64 i; // rcx

  v2 = (_QWORD *)((char *)this + 120);
  v3 = 0;
  v4 = *((_QWORD *)this + 15);
  if ( a2 != (struct CVisualTree *)v4 )
  {
    if ( v4 )
    {
      v9 = *(unsigned int *)(v4 + 1200);
      v10 = (char *)this + 72;
      v11 = *(_QWORD *)(v4 + 1176);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
      {
        if ( v10 == *(char **)(v11 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < (unsigned int)v9 )
      {
        while ( (unsigned int)i < (int)v9 - 1 )
        {
          *(_QWORD *)(v11 + 8 * i) = *(_QWORD *)(v11 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
          v9 = *(unsigned int *)(v4 + 1200);
        }
        *(_DWORD *)(v4 + 1200) = v9 - 1;
      }
      ReleaseInterface<CVisualTree>(v2, v9, v4, v11);
    }
    if ( a2 )
    {
      v7 = CVisualTree::AddTreeClient(a2, (CRenderTarget *)((char *)this + 72));
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x97u);
        return v3;
      }
      *v2 = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    *((_BYTE *)this + 161) = 1;
  }
  return v3;
}
