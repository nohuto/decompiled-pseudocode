/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00271BC
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C002CDEC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r10d
  __int64 v5; // rdi
  __int64 v6; // rbx
  char *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = *((_DWORD *)a1 + 1);
  v5 = a2;
  v6 = a3;
  v7 = (char *)a1 + v3 * ((8 * *((_DWORD *)a1 + 2) + 175) & 0xFFFFFFF8);
  v8 = (unsigned int)v5 + a3 * v3;
  v9 = *(_QWORD *)&v7[48 * v8 + 48];
  *(_QWORD *)&v7[48 * v8 + 40] = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  LODWORD(v7) = *((_DWORD *)a1 + 1);
  v10 = *(_QWORD *)(v9 + 96);
  v11 = (unsigned int)v7 * ((8 * *((_DWORD *)a1 + 2) + 175) & 0xFFFFFFF8);
  v12 = 6LL * (unsigned int)(v5 + v6 * (_DWORD)v7);
  *(_WORD *)((char *)a1 + 8 * v12 + v11 + 32) = *(_WORD *)(v10 + 6);
  v13 = *(unsigned int *)(*(_QWORD *)(v9 + 96) + 12LL);
  if ( !(_DWORD)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v10);
    v14[7] = 0LL;
    v14[3] = 281LL;
    v14[4] = 0x4000LL;
    v14[5] = v5;
    v14[6] = v6;
    WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
}
