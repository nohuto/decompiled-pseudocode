/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D1BBC
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01D3010 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  DXGCONTEXT *v4; // rbx
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
  _QWORD *v19; // r15
  char *v20; // r14
  D3DKMT_HANDLE **v21; // rsi
  __int64 v22; // r13
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  D3DKMT_HANDLE *p_hAllocation; // rdi
  int v25; // eax
  bool v26; // zf
  D3DKMT_HANDLE v27; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v31; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v32[88]; // [rsp+90h] [rbp-70h] BYREF
  char v33; // [rsp+E8h] [rbp-18h] BYREF
  char v34; // [rsp+290h] [rbp+190h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 661LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)v4 + 2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
  if ( *(_QWORD *)(v8 + 1672) != v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 662LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)v4 + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = v4;
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)v4 + 2) + 1672LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v31, 0, sizeof(v31));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v31.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v31.VidPnSourceId = VidPnSourceId;
  v31.PresentCount = a2->PresentCount;
  v31.Duration = a2->Duration;
  v31.ContextCount = a2->BroadcastContextCount + 1;
  v31.PresentPlaneCount = PresentPlaneCount;
  v31.Flags.Value = v31.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v19 = v32;
    v20 = &v34;
    v21 = (D3DKMT_HANDLE **)&v33;
    v22 = PresentPlaneCount;
    FlipInterval = a2->FlipInterval;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    do
    {
      memset(v21 - 3, 0, 0x38uLL);
      *((_DWORD *)v21 - 6) = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v21 - 2) = 1;
        *v21 = p_hAllocation;
      }
      v25 = *((_DWORD *)v21 - 5);
      *((_DWORD *)v21 - 3) = -1;
      *((_DWORD *)v21 - 4) = FlipInterval;
      v26 = *(p_hAllocation - 1) == 0;
      v21[3] = (D3DKMT_HANDLE *)v20;
      *((_DWORD *)v21 - 5) = v25 & 0xFFFFFFFE | !v26;
      memset(v20, 0, 0x58uLL);
      *(_DWORD *)v20 = p_hAllocation[2];
      *(_OWORD *)(v20 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v20 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v20 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v20 + 13) = p_hAllocation[15];
      *((_DWORD *)v20 + 14) = p_hAllocation[16];
      *((_DWORD *)v20 + 19) = p_hAllocation[26];
      v27 = p_hAllocation[21];
      if ( v27 )
      {
        if ( (v27 & 1) != 0 )
          *((_DWORD *)v20 + 18) = (v27 & 2) != 0 ? 8 : 6;
      }
      else
      {
        *((_DWORD *)v20 + 18) = 0;
      }
      *v19 = v21 - 3;
      v21 += 7;
      ++v19;
      p_hAllocation += 30;
      v20 += 88;
      --v22;
    }
    while ( v22 );
    v4 = this;
  }
  v31.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v32;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(v4, &v31, a3, a4);
}
