/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0027964
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0027464 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0pqqqddddddddtqt @ 0x1C00296F4 (McTemplateK0pqqqddddddddtqt.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C00299F0 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r14
  int *v13; // rcx
  int v14; // r15d
  __int64 i; // rdi
  int *v16; // rdx
  int v17; // r8d
  __int64 v18; // r9
  int v19; // [rsp+E0h] [rbp-58h]

  if ( bTracingEnabled )
  {
    v8 = *(_QWORD *)(a3 + 32);
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 12);
      v9 = *(_QWORD *)(v8 + 4);
      v12 = *(_QWORD *)(v8 + 28);
      v10 = *(_QWORD *)(v8 + 20);
    }
    v13 = *(int **)(a3 + 48);
    LOBYTE(v14) = 0;
    if ( v13 )
      v14 = *v13;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqqddddddddtqt(
        HIDWORD(v9),
        HIDWORD(v12),
        HIDWORD(v11),
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16),
        v9,
        v11,
        SBYTE4(v9),
        SBYTE4(v11),
        v10,
        v12,
        SBYTE4(v10),
        SBYTE4(v12),
        v13 != 0LL,
        v14,
        (a2[280] & 0x800) != 0);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 20); i = (unsigned int)(i + 1) )
    {
      v16 = *(int **)(*(_QWORD *)(a3 + 24) + 8 * i);
      v17 = *v16;
      v19 = *v16;
      if ( (v16[4] & 1) != 0 )
      {
        if ( v16[7] && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v18 = **((_QWORD **)v16 + 4);
          McTemplateK0pqqxpxqqqddddddddddddqqtq(
            *(unsigned __int16 *)(v18 + 16),
            (_DWORD)v16,
            v17,
            *(_QWORD *)(a1 + 16),
            *(_DWORD *)(a3 + 8),
            v17,
            v19,
            *(_QWORD *)(v18 + 8),
            *(_QWORD *)(v18 + 24),
            *(_WORD *)(v18 + 16),
            a2[264],
            a2[267],
            v16[15],
            v16[17],
            v16[16],
            v16[18],
            v16[19],
            v16[21],
            v16[20],
            v16[22],
            v16[23],
            v16[25],
            v16[24],
            v16[26],
            v16[29],
            a4,
            1,
            v16[31]);
        }
      }
      else if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqqxpxqqqddddddddddddqqtq(
          a2[264],
          (unsigned __int128)0LL >> 96,
          v17,
          *(_QWORD *)(a1 + 16),
          *(_DWORD *)(a3 + 8),
          v17,
          v19,
          0,
          0,
          0,
          a2[264],
          a2[267],
          0,
          0,
          0,
          (unsigned __int128)0LL >> 96,
          0,
          0,
          0,
          (unsigned __int128)0LL >> 96,
          0,
          0,
          0,
          (unsigned __int128)0LL >> 96,
          0,
          a4,
          0,
          0);
      }
    }
  }
}
