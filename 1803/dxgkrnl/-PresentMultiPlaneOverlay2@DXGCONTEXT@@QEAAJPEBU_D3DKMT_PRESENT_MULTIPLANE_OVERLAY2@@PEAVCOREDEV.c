/*
 * XREFs of ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8988
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  UINT PresentPlaneCount; // r8d
  char **v19; // r15
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // r13d
  char *v21; // r14
  D3DKMT_HANDLE *p_hAllocation; // rsi
  char *v23; // rdi
  __int64 v24; // r12
  int v25; // eax
  bool v26; // zf
  D3DKMT_HANDLE v27; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v30; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v31[64]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+C0h] [rbp-40h] BYREF
  char v33; // [rsp+280h] [rbp+180h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 1116LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
  if ( *(_QWORD *)(v8 + 1688) != v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 1117LL;
    WdLogEvent5_WdAssertion(v10);
    v8 = *((_QWORD *)this + 2);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v8 + 16)) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v30, 0, sizeof(v30));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v30.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v30.VidPnSourceId = VidPnSourceId;
  v30.PresentCount = a2->PresentCount;
  v30.Duration = a2->Duration;
  v30.ContextCount = a2->BroadcastContextCount + 1;
  v30.PresentPlaneCount = PresentPlaneCount;
  v30.Flags.Value = v30.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v19 = (char **)v31;
    FlipInterval = a2->FlipInterval;
    v21 = &v33;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    v23 = &v32;
    v24 = PresentPlaneCount;
    do
    {
      memset(v23, 0, 0x38uLL);
      *(_DWORD *)v23 = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v23 + 4) = 1;
        *((_QWORD *)v23 + 3) = p_hAllocation;
      }
      v25 = *((_DWORD *)v23 + 1);
      *((_DWORD *)v23 + 3) = -1;
      *((_DWORD *)v23 + 2) = FlipInterval;
      v26 = *(p_hAllocation - 1) == 0;
      *((_QWORD *)v23 + 6) = v21;
      *((_DWORD *)v23 + 1) = v25 & 0xFFFFFFFE | !v26;
      memset(v21, 0, 0x58uLL);
      *(_DWORD *)v21 = p_hAllocation[2];
      *(_OWORD *)(v21 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v21 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v21 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v21 + 13) = p_hAllocation[15];
      *((_DWORD *)v21 + 14) = p_hAllocation[16];
      *((_DWORD *)v21 + 19) = p_hAllocation[26];
      v27 = p_hAllocation[21];
      p_hAllocation += 30;
      *v19 = v23;
      v23 += 56;
      *((_DWORD *)v21 + 18) = v27;
      ++v19;
      v21 += 88;
      --v24;
    }
    while ( v24 );
  }
  v30.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v31;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(this, &v30, a3, a4);
}
