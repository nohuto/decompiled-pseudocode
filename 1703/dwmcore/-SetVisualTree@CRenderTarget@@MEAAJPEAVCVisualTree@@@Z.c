/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B4D20
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180069FC0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18006E2A0 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B4C74 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z @ 0x180155DD0 (-SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800B6FC4 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  CMILRefCountBase **v2; // r14
  unsigned int v3; // esi
  __int64 v4; // r8
  int v7; // eax
  unsigned int v9; // edx
  char *v10; // r10
  __int64 v11; // r9
  __int64 i; // rcx
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
        v9 = *(_DWORD *)(v4 + 856);
        v10 = (char *)this + 72;
        v11 = *(_QWORD *)(v4 + 832);
        for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
        {
          if ( v10 == *(char **)(v11 + 8 * i) )
            break;
        }
        if ( (unsigned int)i < v9 )
        {
          if ( (unsigned int)i < v9 - 1 )
          {
            do
            {
              v13 = (unsigned int)(i + 1);
              *(_QWORD *)(v11 + 8 * i) = *(_QWORD *)(v11 + 8 * v13);
              i = v13;
            }
            while ( (unsigned int)v13 < *(_DWORD *)(v4 + 856) - 1 );
          }
          --*(_DWORD *)(v4 + 856);
        }
        *((_BYTE *)this + 88) = 0;
      }
      ReleaseInterface<CVisualTree>(v2);
    }
    if ( a2 )
    {
      v7 = CVisualTree::AddTreeClient(a2, (CRenderTarget *)((char *)this + 72));
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC4u);
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
