/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00246C0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0029EDC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBindFlipPhysicalAddress(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1, int a2, int a3)
{
  int v3; // r10d
  char *v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r8

  v3 = *((_DWORD *)a1 + 1);
  v6 = (char *)a1 + v3 * ((8 * *((_DWORD *)a1 + 2) + 175) & 0xFFFFFFF8);
  v7 = 6LL * (unsigned int)(a2 + a3 * v3);
  v8 = *(_QWORD *)&v6[8 * v7 + 48];
  *(_QWORD *)&v6[8 * v7 + 40] = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 24LL);
  *(_WORD *)((char *)a1
           + 48 * (a2 + a3 * *((_DWORD *)a1 + 1))
           + *((_DWORD *)a1 + 1) * ((8 * *((_DWORD *)a1 + 2) + 175) & 0xFFFFFFF8)
           + 32) = *(_WORD *)(*(_QWORD *)(v8 + 96) + 6LL);
}
