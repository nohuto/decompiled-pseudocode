/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B9A00
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  DXGCONTEXT *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  UINT PresentPlaneCount; // r8d
  _QWORD *v23; // r15
  char *v24; // r14
  D3DKMT_HANDLE **v25; // rsi
  __int64 v26; // r13
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  D3DKMT_HANDLE *p_hAllocation; // rdi
  int v29; // eax
  BOOL v30; // ecx
  D3DKMT_HANDLE v31; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v35; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v36[88]; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+E8h] [rbp-18h] BYREF
  char v38; // [rsp+290h] [rbp+190h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 626LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)v4 + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1800) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11, v8, v9);
    *(_QWORD *)(v13 + 24) = 627LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)v4 + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = v4;
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)v4 + 2) + 1800LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v35, 0, sizeof(v35));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v35.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v35.VidPnSourceId = VidPnSourceId;
  v35.PresentCount = a2->PresentCount;
  v35.Duration = a2->Duration;
  v35.ContextCount = a2->BroadcastContextCount + 1;
  v35.PresentPlaneCount = PresentPlaneCount;
  v35.Flags.Value = v35.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v23 = v36;
    v24 = &v38;
    v25 = (D3DKMT_HANDLE **)&v37;
    v26 = PresentPlaneCount;
    FlipInterval = a2->FlipInterval;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    do
    {
      memset(v25 - 3, 0, 0x38uLL);
      *((_DWORD *)v25 - 6) = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v25 - 2) = 1;
        *v25 = p_hAllocation;
      }
      *((_DWORD *)v25 - 3) = -1;
      *((_DWORD *)v25 - 4) = FlipInterval;
      v29 = *((_DWORD *)v25 - 5);
      v30 = *(p_hAllocation - 1) != 0;
      v25[3] = (D3DKMT_HANDLE *)v24;
      *((_DWORD *)v25 - 5) = v29 & 0xFFFFFFFE | v30;
      memset(v24, 0, 0x50uLL);
      *(_DWORD *)v24 = p_hAllocation[2];
      *(_OWORD *)(v24 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v24 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v24 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v24 + 13) = p_hAllocation[15];
      *((_DWORD *)v24 + 14) = p_hAllocation[16];
      *((_DWORD *)v24 + 19) = p_hAllocation[26];
      v31 = p_hAllocation[21];
      if ( v31 )
      {
        if ( (v31 & 1) != 0 )
          *((_DWORD *)v24 + 18) = (v31 & 2) != 0 ? 8 : 6;
      }
      else
      {
        *((_DWORD *)v24 + 18) = 0;
      }
      *v23 = v25 - 3;
      v25 += 7;
      ++v23;
      p_hAllocation += 30;
      v24 += 80;
      --v26;
    }
    while ( v26 );
    v4 = this;
  }
  v35.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v36;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(v4, &v35, a3, a4);
}
