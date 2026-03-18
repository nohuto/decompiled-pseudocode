/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D9FF4
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01DB5A0 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00A6160 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  DXGCONTEXT *v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  UINT PresentPlaneCount; // r8d
  char **v20; // r15
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ecx
  char *v22; // r14
  D3DKMT_HANDLE *p_hAllocation; // rdi
  char *v24; // rbx
  __int64 v25; // r12
  D3DDDI_FLIPINTERVAL_TYPE v26; // esi
  int v27; // eax
  bool v28; // zf
  D3DKMT_HANDLE v29; // eax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v32; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[64]; // [rsp+90h] [rbp-70h] BYREF
  char v34; // [rsp+D0h] [rbp-30h] BYREF
  char v35; // [rsp+290h] [rbp+190h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 661LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)v4 + 2);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( *(_QWORD *)(v9 + 1688) != v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 662LL;
    WdLogEvent5_WdAssertion(v11);
    v9 = *((_QWORD *)v4 + 2);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v9 + 16)) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = v4;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)v4 + 2) + 1688LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL) )
    return 3221225485LL;
  memset(&v32, 0, sizeof(v32));
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  PresentPlaneCount = a2->PresentPlaneCount;
  v32.HDRMetaDataType = D3DDDI_HDR_METADATA_TYPE_NONE;
  v32.VidPnSourceId = VidPnSourceId;
  v32.PresentCount = a2->PresentCount;
  v32.Duration = a2->Duration;
  v32.ContextCount = a2->BroadcastContextCount + 1;
  v32.PresentPlaneCount = PresentPlaneCount;
  v32.Flags.Value = v32.Flags.Value & 0xFFFFFF87 | *(_BYTE *)&Value & 0x20 | (2 * (*(_BYTE *)&Value & 8)) | ((*(_BYTE *)&Value & 0x10 | (*(unsigned int *)&Value >> 20) & 0x80) >> 1);
  if ( PresentPlaneCount )
  {
    v20 = (char **)v33;
    FlipInterval = a2->FlipInterval;
    v22 = &v35;
    p_hAllocation = &a2->pPresentPlanes->hAllocation;
    v24 = &v34;
    v25 = PresentPlaneCount;
    v26 = FlipInterval;
    do
    {
      memset(v24, 0, 0x38uLL);
      *(_DWORD *)v24 = *(p_hAllocation - 2);
      if ( *p_hAllocation )
      {
        *((_DWORD *)v24 + 4) = 1;
        *((_QWORD *)v24 + 3) = p_hAllocation;
      }
      v27 = *((_DWORD *)v24 + 1);
      *((_DWORD *)v24 + 3) = -1;
      *((_DWORD *)v24 + 2) = v26;
      v28 = *(p_hAllocation - 1) == 0;
      *((_QWORD *)v24 + 6) = v22;
      *((_DWORD *)v24 + 1) = v27 & 0xFFFFFFFE | !v28;
      memset(v22, 0, 0x58uLL);
      *(_DWORD *)v22 = p_hAllocation[2];
      *(_OWORD *)(v22 + 4) = *(_OWORD *)(p_hAllocation + 3);
      *(_OWORD *)(v22 + 20) = *(_OWORD *)(p_hAllocation + 7);
      *(_OWORD *)(v22 + 36) = *(_OWORD *)(p_hAllocation + 11);
      *((_DWORD *)v22 + 13) = p_hAllocation[15];
      *((_DWORD *)v22 + 14) = p_hAllocation[16];
      *((_DWORD *)v22 + 19) = p_hAllocation[26];
      v29 = p_hAllocation[21];
      if ( v29 )
      {
        if ( (v29 & 1) != 0 )
          *((_DWORD *)v22 + 18) = (v29 & 2) != 0 ? 8 : 6;
      }
      else
      {
        *((_DWORD *)v22 + 18) = 0;
      }
      *v20 = v24;
      p_hAllocation += 30;
      v24 += 56;
      ++v20;
      v22 += 88;
      --v25;
    }
    while ( v25 );
    v4 = this;
  }
  v32.ppPresentPlanes = (D3DKMT_MULTIPLANE_OVERLAY3 **)v33;
  return DXGCONTEXT::PresentMultiPlaneOverlay3(v4, &v32, a3, a4);
}
