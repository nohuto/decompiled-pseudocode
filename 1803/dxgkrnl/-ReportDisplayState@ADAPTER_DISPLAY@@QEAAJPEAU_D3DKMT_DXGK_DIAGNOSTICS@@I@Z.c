/*
 * XREFs of ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C0156B6C
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C010DCD8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C010DD10 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ReportDisplayState(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DXGK_DIAGNOSTICS *a2,
        int a3)
{
  unsigned int v5; // ebx
  size_t v6; // r8
  unsigned int v7; // r14d
  char *v8; // r15
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // ebp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  unsigned int v23; // ebp
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
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (ADAPTER_DISPLAY *)((char *)this + 400), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      v10 = *((_DWORD *)this + 20);
      v11 = 0;
      if ( v10 )
      {
        do
        {
          v12 = *((_QWORD *)this + 14);
          v13 = 3760LL * v11;
          if ( *(_BYTE *)(v12 + v13 + 722) )
          {
            v14 = 0;
            v15 = *(_DWORD *)(v12 + v13 + 3740);
            if ( v15 <= *(_DWORD *)(v12 + v13 + 3736) )
              v15 = *(_DWORD *)(v12 + v13 + 3736);
            if ( v15 )
            {
              do
              {
                LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                              (DISPLAY_SOURCE *)(v13 + *((_QWORD *)this + 14)),
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
                      *(_DWORD *)((char *)a2 + v18 + 4) = v11;
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
                      *(_DWORD *)((char *)a2 + v18 + 16) = v20;
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
              while ( v14 < v15 );
            }
          }
          v10 = *((_DWORD *)this + 20);
          ++v11;
        }
        while ( v11 < v10 );
        v9 = v30;
        v8 = (char *)a2 + 4;
      }
      v23 = 0;
      if ( v10 )
      {
        do
        {
          v24 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * v23);
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
                  *(_DWORD *)((char *)a2 + v7 + 4) = v23;
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
          ++v23;
        }
        while ( v23 < *((_DWORD *)this + 20) );
      }
      if ( v29[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    }
  }
  return v5;
}
