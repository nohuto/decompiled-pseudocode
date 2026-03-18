/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C00229B0
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00224E8 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_pqqqdddddddd @ 0x1C0024A68 (Template_pqqqdddddddd.c)
 *     Template_pqqxpxqqqddddddddddddqqt @ 0x1C0024D18 (Template_pqqxpxqqqddddddddddddqqt.c)
 */

__int64 __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 i; // rdi
  int *v15; // rdx
  int v16; // r8d
  __int64 v17; // r9
  int v18; // [rsp+E0h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h] BYREF

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
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      result = Template_pqqqdddddddd(
                 HIDWORD(v10),
                 HIDWORD(v13),
                 HIDWORD(v12),
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
                 SBYTE4(v13));
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 20); i = (unsigned int)(i + 1) )
    {
      v15 = *(int **)(*(_QWORD *)(a3 + 24) + 8 * i);
      result = (unsigned int)v15[4];
      v16 = *v15;
      v18 = *v15;
      if ( (result & 1) != 0 )
      {
        if ( v15[7] )
        {
          result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v17 = **((_QWORD **)v15 + 4);
            result = Template_pqqxpxqqqddddddddddddqqt(
                       *(unsigned __int16 *)(v17 + 16),
                       (_DWORD)v15,
                       v16,
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a3 + 8),
                       v16,
                       v18,
                       *(_QWORD *)(v17 + 8),
                       *(_QWORD *)(v17 + 24),
                       *(_WORD *)(v17 + 16),
                       *(_DWORD *)(a2 + 1048),
                       *(_DWORD *)(a2 + 1060),
                       v15[15],
                       v15[17],
                       v15[16],
                       v15[18],
                       v15[19],
                       v15[21],
                       v15[20],
                       v15[22],
                       v15[23],
                       v15[25],
                       v15[24],
                       v15[26],
                       v15[29],
                       a4,
                       1);
          }
        }
      }
      else
      {
        result = 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          result = Template_pqqxpxqqqddddddddddddqqt(
                     *(_DWORD *)(a2 + 1048),
                     (unsigned __int128)0LL >> 96,
                     v16,
                     *(_QWORD *)(a1 + 16),
                     *(_DWORD *)(a3 + 8),
                     v16,
                     v18,
                     0,
                     0,
                     0,
                     *(_DWORD *)(a2 + 1048),
                     *(_DWORD *)(a2 + 1060),
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
                     0);
      }
    }
  }
  return result;
}
