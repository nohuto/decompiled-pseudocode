/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01D4F84
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C01D44F4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01DFD0C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // r15
  UINT DirtyRectCount; // r14d
  UINT MoveRectCount; // esi
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  struct DXGSWAPCHAIN *v12; // rcx
  int SetMetaDataInternal; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  D3DKMT_PRESENT_RGNS *v19; // rax
  UINT v20; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // rax
  UINT PresentCount; // eax
  struct DXGSWAPCHAIN **v30; // rcx
  struct DXGSWAPCHAIN *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v40; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v41[3]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+5Ch] [rbp-14h]

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v6 )
  {
    memset(&v40, 0, sizeof(v40));
    v40.bGlobalMetaData = 0;
    DirtyRectCount = 0;
    v40.bProducer = 1;
    MoveRectCount = 0;
    v40.bSetMetaData = 1;
    if ( (a3->Flags.Value & 0x400000) != 0 )
    {
      pPresentRegions = a3->pPresentRegions;
      if ( pPresentRegions )
      {
        MoveRectCount = pPresentRegions->MoveRectCount;
        DirtyRectCount = pPresentRegions->DirtyRectCount;
        if ( MoveRectCount )
        {
          v12 = *v6;
          v40.pBuffer = (PVOID)pPresentRegions->pMoveRects;
          v40.BufferSize = 24 * MoveRectCount;
          SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v12, &v40, 16 * DirtyRectCount + 28, 0);
          v17 = SetMetaDataInternal;
          if ( SetMetaDataInternal < 0 )
          {
            v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
            *(_QWORD *)(v18 + 24) = v17;
            WdLogEvent5_WdWarning(v18);
          }
        }
        v19 = a3->pPresentRegions;
        v20 = v19->DirtyRectCount;
        if ( v19->DirtyRectCount )
        {
          pDirtyRects = (RECT *)v19->pDirtyRects;
          v40.BufferSize = 16 * v20;
          v22 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
          v40.pBuffer = pDirtyRects;
          v23 = SwapChainGetSetMetaDataInternal(*v22, &v40, 0x1Cu, 0);
          v27 = v23;
          if ( v23 < 0 )
          {
            v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
            *(_QWORD *)(v28 + 24) = v27;
            WdLogEvent5_WdWarning(v28);
          }
        }
      }
    }
    PresentCount = a3->PresentCount;
    v30 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v42 = 0LL;
    v41[0] = PresentCount;
    v41[1] = DirtyRectCount;
    v41[2] = MoveRectCount;
    v31 = *v30;
    v40.pBuffer = v41;
    v40.BufferSize = 20;
    v32 = SwapChainGetSetMetaDataInternal(v31, &v40, 8u, 0);
    v36 = v32;
    if ( v32 < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v37 + 24) = v36;
      WdLogEvent5_WdWarning(v37);
      LODWORD(v36) = 0;
    }
    if ( *((_DWORD *)this + 656) )
      LODWORD(v36) = BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v38 + 24) = 1249LL;
    WdLogEvent5_WdError(v38);
    LODWORD(v36) = -1073741823;
  }
  return (unsigned int)v36;
}
