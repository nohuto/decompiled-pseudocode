/*
 * XREFs of ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C017605C
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00AEF74 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ReportDisplayState(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DXGK_DIAGNOSTICS *a2,
        int a3)
{
  unsigned int v5; // ebx
  size_t v6; // r8
  unsigned int v7; // r14d
  char *v8; // r12
  unsigned __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned int v14; // r12d
  unsigned int v15; // eax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned int i; // ebp
  DISPLAY_SOURCE *v24; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm1
  _BYTE v29[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp+10h]

  v5 = -1073741811;
  if ( *(_DWORD *)a2 < 0xFFFFFFFC && *(_DWORD *)a2 + 4 == a3 )
  {
    v6 = (unsigned int)(a3 - 4);
    v7 = 20;
    if ( (unsigned int)v6 >= 0x14 )
    {
      v8 = (char *)a2 + 4;
      v9 = (unsigned int)v6;
      v30 = (unsigned int)v6;
      v5 = 0;
      memset((char *)a2 + 4, 0, v6);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (ADAPTER_DISPLAY *)((char *)this + 400));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      v10 = 0;
      if ( *((_DWORD *)this + 20) )
      {
        do
        {
          v11 = 3760LL * v10;
          v12 = *((_QWORD *)this + 14);
          if ( *(_BYTE *)(v12 + v11 + 722) )
          {
            v13 = *(_DWORD *)(v12 + v11 + 3736);
            v14 = 0;
            v15 = *(_DWORD *)(v12 + v11 + 3740);
            if ( v15 > v13 )
              v13 = v15;
            if ( v13 )
            {
              do
              {
                LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                              (DISPLAY_SOURCE *)(v11 + *((_QWORD *)this + 14)),
                                              v14);
                v17 = LatestPlaneConfigInternal;
                if ( LatestPlaneConfigInternal )
                {
                  if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
                  {
                    v18 = v7;
                    if ( (unsigned __int64)v7 + 72 <= v30 )
                    {
                      *(_DWORD *)((char *)a2 + v7 + 12) = 0;
                      v7 += 72;
                      *(_DWORD *)((char *)a2 + v18 + 4) = v10;
                      *(_DWORD *)((char *)a2 + v18 + 8) = v14;
                      *(_OWORD *)((char *)a2 + v18 + 20) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
                      *(_OWORD *)((char *)a2 + v18 + 36) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
                      *(_OWORD *)((char *)a2 + v18 + 52) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
                      *(_DWORD *)((char *)a2 + v18 + 68) = *((_DWORD *)LatestPlaneConfigInternal + 15);
                      *(_DWORD *)((char *)a2 + v18 + 72) = *((_DWORD *)LatestPlaneConfigInternal + 16);
                      v19 = *((_DWORD *)LatestPlaneConfigInternal + 18);
                      *(_DWORD *)((char *)a2 + v18 + 16) = 0;
                      if ( !v19 )
                        v19 = 21;
                      *(_DWORD *)((char *)a2 + v18 + 12) = v19;
                      v20 = (*((_DWORD *)v17 + 2) >> 2) & 1;
                      *(_DWORD *)((char *)a2 + v18 + 16) = (*((_DWORD *)v17 + 2) & 4) != 0;
                      v21 = v20 | (*((_DWORD *)v17 + 2) >> 4) & 2;
                      *(_DWORD *)((char *)a2 + v18 + 16) = v21;
                      v22 = v21 | (*((_DWORD *)v17 + 2) >> 2) & 4;
                      *(_DWORD *)((char *)a2 + v18 + 16) = v22;
                      *(_DWORD *)((char *)a2 + v18 + 16) = v22 | (2 * (*((_DWORD *)v17 + 2) & 8 | 4));
                      ++*((_DWORD *)a2 + 1);
                    }
                  }
                }
                ++v14;
              }
              while ( v14 < v13 );
            }
          }
          ++v10;
        }
        while ( v10 < *((_DWORD *)this + 20) );
        v9 = v30;
        v8 = (char *)a2 + 4;
      }
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        v24 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * i);
        if ( *((_BYTE *)v24 + 722) )
        {
          LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v24);
          if ( LatestPostCompositionConfigInternal )
          {
            if ( *(_BYTE *)LatestPostCompositionConfigInternal )
            {
              v26 = v7;
              if ( (unsigned __int64)v7 + 44 <= v9 )
              {
                *(_DWORD *)((char *)a2 + v7 + 4) = i;
                v7 += 44;
                *(_OWORD *)((char *)a2 + v26 + 12) = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 4);
                v27 = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 20);
                *(_DWORD *)((char *)a2 + v26 + 8) = 0;
                *(_DWORD *)((char *)a2 + v26 + 44) = 1;
                *(_OWORD *)((char *)a2 + v26 + 28) = v27;
                ++*((_DWORD *)v8 + 1);
              }
            }
          }
        }
      }
      if ( v29[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    }
  }
  return v5;
}
