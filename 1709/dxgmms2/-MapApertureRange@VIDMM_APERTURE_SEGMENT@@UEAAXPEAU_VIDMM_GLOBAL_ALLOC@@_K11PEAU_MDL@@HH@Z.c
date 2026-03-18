/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C007B970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppxt @ 0x1C0023660 (McTemplateK0ppxt.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C009B9D4 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7,
        int a8)
{
  VIDMM_GLOBAL *v9; // rcx
  char v11; // si
  unsigned int v12; // r8d
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v11 = (char)a2;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 3) + 300LL) & 4) == 0 )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v12 = 0;
    else
      v12 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::MapVideoApertureSegment(v9, a2, v12, a3, a4, v13, a6, a8, a7);
  }
  if ( bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0ppxt((__int64)v9, &EventApertureMapping, a3, a4, v11, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7512LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40144LL) += a3;
}
