/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C01D0044
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01D1F50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a3)
{
  int v4; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int32 v9; // ecx
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // eax

  v4 = *((_DWORD *)a2 + 7);
  *(_WORD *)a2 = a3->SrcRect.left;
  *((_WORD *)a2 + 1) = a3->SrcRect.right;
  *((_WORD *)a2 + 2) = a3->SrcRect.top;
  *((_WORD *)a2 + 3) = a3->SrcRect.bottom;
  *((_WORD *)a2 + 4) = a3->DstRect.left;
  *((_WORD *)a2 + 5) = a3->DstRect.right;
  *((_WORD *)a2 + 6) = a3->DstRect.top;
  *((_WORD *)a2 + 7) = a3->DstRect.bottom;
  *((_WORD *)a2 + 8) = a3->ClipRect.left;
  *((_WORD *)a2 + 9) = a3->ClipRect.right;
  *((_WORD *)a2 + 10) = a3->ClipRect.top;
  *((_WORD *)a2 + 11) = a3->ClipRect.bottom;
  *((_DWORD *)a2 + 7) ^= (a3->Flags ^ v4) & 1;
  v6 = *((_DWORD *)a2 + 7) ^ (a3->Flags ^ *((_DWORD *)a2 + 7)) & 2;
  *((_DWORD *)a2 + 7) = v6;
  if ( !a3->Rotation )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 1958LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 1959LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (8 * a3->Rotation - 8)) & 0x18;
  v9 = *((_DWORD *)a2 + 7) & 0xFFFFFF9B | (4 * (a3->Blend & 1));
  *((_DWORD *)a2 + 7) = v9;
  ColorSpace = a3->ColorSpace;
  if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
    || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
  {
    *((_DWORD *)a2 + 7) = v9 | 0x80;
  }
  if ( (unsigned int)(a3->ColorSpace - 8) <= 1 )
    *((_DWORD *)a2 + 7) |= 0x100u;
  *((_DWORD *)a2 + 7) &= ~0x200u;
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFBFFFFF | ((a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH) << 22);
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
  *((_DWORD *)a2 + 8) = a3->SDRWhiteLevel;
}
