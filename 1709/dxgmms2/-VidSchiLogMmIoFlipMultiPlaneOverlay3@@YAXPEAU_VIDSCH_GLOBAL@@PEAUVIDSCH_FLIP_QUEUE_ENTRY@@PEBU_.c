/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0024E4C
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0024934 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0pqqqddddddddtq @ 0x1C0026A94 (McTemplateK0pqqqddddddddtq.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C0026D64 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 */

__int64 __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rsi
  int *v14; // rax
  int v15; // r14d
  unsigned __int8 v16; // cl
  __int64 i; // rdi
  int *v18; // rdx
  int v19; // r8d
  __int64 v20; // r9
  int v21; // [rsp+E0h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a3 + 32);
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 12);
      v10 = *(_QWORD *)(v9 + 4);
      v13 = *(_QWORD *)(v9 + 28);
      v11 = *(_QWORD *)(v9 + 20);
    }
    v14 = *(int **)(a3 + 48);
    LOBYTE(v15) = 0;
    v16 = 0;
    if ( v14 )
    {
      v15 = *v14;
      v16 = 1;
    }
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      result = McTemplateK0pqqqddddddddtq(
                 HIDWORD(v10),
                 v16,
                 HIDWORD(v13),
                 *(_QWORD *)(a1 + 16),
                 *(_DWORD *)(a3 + 8),
                 *(_DWORD *)(a3 + 12),
                 *(_DWORD *)(a3 + 16),
                 v10,
                 v12,
                 SBYTE4(v10),
                 SBYTE4(v12),
                 v11,
                 v13,
                 SBYTE4(v11),
                 SBYTE4(v13),
                 v16,
                 v15);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 20); i = (unsigned int)(i + 1) )
    {
      v18 = *(int **)(*(_QWORD *)(a3 + 24) + 8 * i);
      result = (unsigned int)v18[4];
      v19 = *v18;
      v21 = *v18;
      if ( (result & 1) != 0 )
      {
        if ( v18[7] )
        {
          result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v20 = **((_QWORD **)v18 + 4);
            result = McTemplateK0pqqxpxqqqddddddddddddqqtq(
                       *(unsigned __int16 *)(v20 + 16),
                       (_DWORD)v18,
                       v19,
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a3 + 8),
                       v19,
                       v21,
                       *(_QWORD *)(v20 + 8),
                       *(_QWORD *)(v20 + 24),
                       *(_WORD *)(v20 + 16),
                       *(_DWORD *)(a2 + 1056),
                       *(_DWORD *)(a2 + 1068),
                       v18[15],
                       v18[17],
                       v18[16],
                       v18[18],
                       v18[19],
                       v18[21],
                       v18[20],
                       v18[22],
                       v18[23],
                       v18[25],
                       v18[24],
                       v18[26],
                       v18[29],
                       a4,
                       1,
                       v18[31]);
          }
        }
      }
      else
      {
        result = 0LL;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          result = McTemplateK0pqqxpxqqqddddddddddddqqtq(
                     *(_DWORD *)(a2 + 1056),
                     (unsigned __int128)0LL >> 96,
                     v19,
                     *(_QWORD *)(a1 + 16),
                     *(_DWORD *)(a3 + 8),
                     v19,
                     v21,
                     0,
                     0,
                     0,
                     *(_DWORD *)(a2 + 1056),
                     *(_DWORD *)(a2 + 1068),
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
  return result;
}
