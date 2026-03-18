/*
 * XREFs of ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AD4B0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C01BC220 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogScaleFactor(struct _LUID a1, int a2, unsigned int a3, struct _DPI_INFORMATION *a4)
{
  int v8; // ecx
  _QWORD v9[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v9, 0, 0x48uLL);
  v9[0] = 0x480000001ELL;
  HIDWORD(v9[6]) = a2;
  v9[8] = a1;
  memset(&v9[1], 0, 36);
  if ( a3 )
  {
    LODWORD(v9[6]) = 78;
    v9[7] = a3;
  }
  else
  {
    v8 = *((unsigned __int16 *)a4 + 18) | (*((unsigned __int16 *)a4 + 16) << 16);
    LODWORD(v9[6]) = 79;
    v9[7] = __PAIR64__(*((_DWORD *)a4 + 2), v8);
  }
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
}
