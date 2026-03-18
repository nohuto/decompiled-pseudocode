/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180079390
 * Callers:
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180019690 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180079294 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180134910 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z @ 0x180147AD0 (-SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180031AAC (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18007468C (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  CMILRefCountBase **v2; // r14
  unsigned int v3; // esi
  __int64 v4; // r8
  unsigned int v7; // edx
  char *v8; // r10
  __int64 v9; // r9
  __int64 i; // rcx
  signed int v11; // eax
  __int64 v13; // rdx

  v2 = (CMILRefCountBase **)((char *)this + 80);
  v3 = 0;
  v4 = *((_QWORD *)this + 10);
  if ( a2 != (struct CVisualTree *)v4 )
  {
    if ( v4 )
    {
      if ( *((_BYTE *)this + 88) )
      {
        v7 = *(_DWORD *)(v4 + 1104);
        v8 = (char *)this + 72;
        v9 = *(_QWORD *)(v4 + 1080);
        for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
        {
          if ( v8 == *(char **)(v9 + 8 * i) )
            break;
        }
        if ( (unsigned int)i < v7 )
        {
          if ( (unsigned int)i < v7 - 1 )
          {
            do
            {
              v13 = (unsigned int)(i + 1);
              *(_QWORD *)(v9 + 8 * i) = *(_QWORD *)(v9 + 8 * v13);
              i = v13;
            }
            while ( (unsigned int)v13 < *(_DWORD *)(v4 + 1104) - 1 );
          }
          --*(_DWORD *)(v4 + 1104);
        }
        *((_BYTE *)this + 88) = 0;
      }
      ReleaseInterface<CVisualTree>(v2);
    }
    if ( a2 )
    {
      v11 = CVisualTree::AddTreeClient(a2, (CRenderTarget *)((char *)this + 72));
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC4u);
      }
      else
      {
        *((_BYTE *)this + 88) = 1;
        *v2 = a2;
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
      }
    }
  }
  return v3;
}
