/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00E2240
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E1990 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01D8060 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C01DB240 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C010DD80 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  __int64 v16; // rbp
  __int64 v18; // rbx
  const struct tagRECT *v19; // r8
  const struct tagRECT *v20; // r9
  const struct tagRECT *v21; // r10
  unsigned int v22; // r12d
  __int64 v23; // rcx
  char *v24; // rbx
  unsigned __int8 v25; // di
  bool v26; // al
  unsigned int v27; // ecx
  enum _D3DDDIFORMAT v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v16 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v29 + 24) = 8290LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( a4 && !a3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v30 + 24) = 8291LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (unsigned int)v16 >= *((_DWORD *)this + 934)
    || (v18 = 168 * v16, *((_DWORD *)this + 42 * v16 + 280) == -1)
    && (*(_DWORD *)((char *)this + v18 + 1124) == -1
     || (v31 = WdLogNewEntry5_WdAssertion(this),
         *(_QWORD *)(v31 + 24) = 8042LL,
         WdLogEvent5_WdAssertion(v31),
         *(_DWORD *)((char *)this + v18 + 1120) == -1)) )
  {
    v19 = a8;
    v20 = a7;
    v24 = 0LL;
    v21 = a6;
    v22 = a5;
  }
  else
  {
    _mm_lfence();
    v19 = a8;
    v20 = a7;
    v21 = a6;
    v22 = a5;
    v23 = v18 + 80LL * *(int *)((char *)this + v18 + 1120);
    v24 = (char *)this + v23 + 1128;
    if ( v24 )
    {
      v25 = 0;
      if ( a4 )
      {
        v23 = *((unsigned int *)v24 + 2);
        v26 = 0;
        if ( ((*((_DWORD *)v24 + 2) >> 4) & 1) == ((a5 & 1) != 0)
          && (((unsigned int)v23 >> 5) & 1) == ((a5 & 2) != 0)
          && *((_DWORD *)v24 + 3) == a6->left
          && *((_DWORD *)v24 + 5) == a6->right
          && *((_DWORD *)v24 + 4) == a6->top
          && *((_DWORD *)v24 + 6) == a6->bottom
          && *((_DWORD *)v24 + 7) == a7->left
          && *((_DWORD *)v24 + 9) == a7->right
          && *((_DWORD *)v24 + 8) == a7->top
          && *((_DWORD *)v24 + 10) == a7->bottom
          && *((_DWORD *)v24 + 11) == a8->left
          && *((_DWORD *)v24 + 13) == a8->right
          && *((_DWORD *)v24 + 12) == a8->top
          && *((_DWORD *)v24 + 14) == a8->bottom
          && *((_DWORD *)v24 + 15) == a9 )
        {
          v23 = ((unsigned int)v23 >> 2) & 1;
          if ( (_DWORD)v23 == (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
            && *((_DWORD *)v24 + 16) == a11
            && *((_DWORD *)v24 + 17) == a12 )
          {
            v26 = 1;
          }
        }
        v25 = a4;
      }
      else
      {
        v26 = (v24[8] & 1) == 0;
      }
      if ( v26 )
      {
        if ( *((_DWORD *)this + 934) <= (unsigned int)v16 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v32 + 24) = 8299LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v27 = *((_DWORD *)v24 + 2) & 0xFFFFFFFE;
        *(_QWORD *)v24 = a3;
        *((_DWORD *)v24 + 2) = (2 * (v25 & 1)) | v25 & 1 | v27 & 0xFFFFFFFD;
        return;
      }
    }
  }
  v28 = a13;
  if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v24 )
    v28 = *((_DWORD *)v24 + 18);
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, v16, a3, a4, v22, v21, v20, v19, a9, a10, a11, a12, v28, a14);
  if ( (unsigned int)v16 >= *((_DWORD *)this + 934) )
    *((_DWORD *)this + 934) = v16 + 1;
  if ( (_DWORD)v16 && a4 )
    *((_BYTE *)this + 3744) = 1;
}
