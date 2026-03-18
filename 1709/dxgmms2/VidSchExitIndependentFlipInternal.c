/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0014E08
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C0014CF0 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x1C00150F0 (VidSchiFlushPendingTokenList.c)
 *     VidSchiCancelIndependentFlips @ 0x1C001514C (VidSchiCancelIndependentFlips.c)
 *     McTemplateK0txqqqtxtx @ 0x1C002AFB8 (McTemplateK0txqqqtxtx.c)
 */

__int64 __fastcall VidSchExitIndependentFlipInternal(
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
  __int64 result; // rax
  int v20; // r8d

  v10 = (unsigned int)a2;
  v13 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
  v13[3] = *a3;
  v13[4] = a4;
  v13[5] = a5;
  v13[6] = a7;
  WdLogEvent5_WdPresentTokenEvent(v13);
  v14 = *(_QWORD *)(a1 + 8 * v10 + 3008);
  *a8 = 0;
  v15 = 280LL * a5 + v14;
  v16 = 5LL * *(unsigned int *)(v15 + 376);
  *(_QWORD *)(v15 + 8 * v16 + 248) = MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v15 + 8 * v16 + 216) = 0;
  *(_BYTE *)(v15 + 8 * v16 + 217) = a7;
  *(_QWORD *)(v15 + 8 * v16 + 220) = *a3;
  *(_QWORD *)(v15 + 8 * v16 + 232) = a4;
  *(_QWORD *)(v15 + 8 * v16 + 240) = *(_QWORD *)(v15 + 168);
  *(_DWORD *)(v15 + 376) = ((unsigned __int8)*(_DWORD *)(v15 + 376) + 1) & 3;
  v17 = *(_QWORD *)(v15 + 168);
  *a9 = v17;
  v18 = *(_DWORD *)(v15 + 180);
  *(_QWORD *)(v15 + 168) = v17 + 1;
  if ( (unsigned int)(v18 - 1) > 1 )
  {
    result = VidSchiCancelIndependentFlips(a1, (unsigned int)v10, a5, a8);
  }
  else
  {
    if ( a7 || v18 != 1 )
      *(_DWORD *)(v15 + 180) = 0;
    else
      *(_DWORD *)(v15 + 180) = 3;
    VidSchiCancelIndependentFlips(a1, (unsigned int)v10, a5, a8);
    *(_WORD *)(v15 + 176) = 0;
    *(_BYTE *)(v15 + 178) = 0;
    *(_QWORD *)(v15 + 140) = 0LL;
    result = VidSchiFlushPendingTokenList(a1, (unsigned int)v10, a5);
  }
  if ( bTracingEnabled )
  {
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      return McTemplateK0txqqqtxtx(a7, (unsigned __int8)*a8, v20, 0, *a3, v10, a5, a6, *a8, a4, a7, *a9);
  }
  return result;
}
