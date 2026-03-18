/*
 * XREFs of ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C017219C
 * Callers:
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0170090 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall PlaneConfigsMatch(
        struct _DISPLAY_PLANE_CONFIG *a1,
        char a2,
        int a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        enum _D3DDDI_ROTATION a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a8,
        enum D3DDDI_COLOR_SPACE_TYPE a9)
{
  char v9; // r10

  v9 = 0;
  if ( !a2 )
    return *((_BYTE *)a1 + 12) == 0;
  if ( *((_DWORD *)a1 + 2) == a3
    && *((_DWORD *)a1 + 4) == a4->left
    && *((_DWORD *)a1 + 6) == a4->right
    && *((_DWORD *)a1 + 5) == a4->top
    && *((_DWORD *)a1 + 7) == a4->bottom
    && *((_DWORD *)a1 + 8) == a5->left
    && *((_DWORD *)a1 + 10) == a5->right
    && *((_DWORD *)a1 + 9) == a5->top
    && *((_DWORD *)a1 + 11) == a5->bottom
    && *((_DWORD *)a1 + 12) == a6->left
    && *((_DWORD *)a1 + 14) == a6->right
    && *((_DWORD *)a1 + 13) == a6->top
    && *((_DWORD *)a1 + 15) == a6->bottom
    && *((_DWORD *)a1 + 16) == a7
    && *((_DWORD *)a1 + 17) == a8 )
  {
    return *((_DWORD *)a1 + 18) == a9;
  }
  return v9;
}
