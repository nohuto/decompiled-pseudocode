/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0029CB8
 * Callers:
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     VidSchExitIndependentFlip @ 0x1C0029BA0 (VidSchExitIndependentFlip.c)
 * Callees:
 *     VidSchiCancelIndependentFlips @ 0x1C0025AB4 (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0026204 (VidSchiFlushPendingTokenList.c)
 *     Template_txqqqtxtx @ 0x1C00290D8 (Template_txqqqtxtx.c)
 */

void __fastcall VidSchExitIndependentFlipInternal(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7,
        char *a8,
        _QWORD *a9)
{
  __int64 v10; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r8

  v10 = (unsigned int)a2;
  v13 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
  v13[3] = *a3;
  v13[4] = a4;
  v13[5] = a5;
  v13[6] = a7;
  WdLogEvent5_WdPresentTokenEvent(v13);
  v14 = *(_QWORD *)(a1 + 8 * v10 + 2992);
  *a8 = 0;
  v15 = 272LL * a5 + v14;
  v16 = 5LL * *(unsigned int *)(v15 + 352);
  *(_QWORD *)(v15 + 8 * v16 + 224) = MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v15 + 8 * v16 + 192) = 0;
  *(_BYTE *)(v15 + 8 * v16 + 193) = a7;
  *(_QWORD *)(v15 + 8 * v16 + 196) = *a3;
  *(_QWORD *)(v15 + 8 * v16 + 208) = a4;
  *(_QWORD *)(v15 + 8 * v16 + 216) = *(_QWORD *)(v15 + 144);
  *(_DWORD *)(v15 + 352) = ((unsigned __int8)*(_DWORD *)(v15 + 352) + 1) & 3;
  v17 = *(_QWORD *)(v15 + 144);
  *a9 = v17;
  v18 = *(_DWORD *)(v15 + 156);
  *(_QWORD *)(v15 + 144) = v17 + 1;
  if ( (unsigned int)(v18 - 1) <= 1 )
  {
    if ( a7 || v18 != 1 )
      *(_DWORD *)(v15 + 156) = 0;
    else
      *(_DWORD *)(v15 + 156) = 3;
    VidSchiCancelIndependentFlips(a1, v10, a5, a8);
    *(_WORD *)(v15 + 152) = 0;
    *(_BYTE *)(v15 + 154) = 0;
    *(_QWORD *)(v15 + 120) = 0LL;
    VidSchiFlushPendingTokenList(a1, v10, a5);
  }
  else
  {
    VidSchiCancelIndependentFlips(a1, v10, a5, a8);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_txqqqtxtx(a7, (unsigned __int8)*a8, v19, 0, *a3, v10, a5, a6, *a8, a4, a7, *a9);
  }
}
