/*
 * XREFs of bConvertExtras @ 0x1C0226D68
 * Callers:
 *     bComputeIFISIZE @ 0x1C0226660 (bComputeIFISIZE.c)
 *     vFill_IFIMETRICS @ 0x1C022A32C (vFill_IFIMETRICS.c)
 * Callees:
 *     GetCodePageFromSpecId @ 0x1C0225EF8 (GetCodePageFromSpecId.c)
 *     bConvertMBCS @ 0x1C0226FD0 (bConvertMBCS.c)
 *     bConvertMac @ 0x1C022711C (bConvertMac.c)
 *     bConvertSwap @ 0x1C0227164 (bConvertSwap.c)
 */

_BOOL8 __fastcall bConvertExtras(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // cx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int CodePageFromSpecId; // ebp
  __int64 v13; // r8

  if ( *(_WORD *)(a2 + 132) != 3 )
  {
    if ( !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 92),
                          a2 + 112,
                          *(_QWORD *)(a2 + 8),
                          *(unsigned int *)(a2 + 16))
      || !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 108),
                          a2 + 128,
                          *(_QWORD *)(a2 + 72),
                          *(unsigned int *)(a2 + 80))
      || !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 104),
                          a2 + 124,
                          *(_QWORD *)(a2 + 56),
                          *(unsigned int *)(a2 + 64)) )
    {
      return 0LL;
    }
    v10 = bConvertMac(a1 + *(unsigned int *)(a2 + 100), a2 + 120, *(_QWORD *)(a2 + 40), *(unsigned int *)(a2 + 48));
    return v10 != 0;
  }
  v4 = *(_WORD *)(a2 + 134);
  if ( (unsigned __int16)(v4 - 3) > 2u )
  {
    if ( !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 92),
                          a2 + 112,
                          *(_QWORD *)(a2 + 8),
                          *(unsigned int *)(a2 + 16)) )
      return 0LL;
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 )
    {
      if ( !(unsigned int)bConvertSwap(a1 + *(unsigned int *)(a2 + 96), a2 + 116, v5, *(unsigned int *)(a2 + 32)) )
        return 0LL;
      if ( a1 )
        *(_WORD *)(*(unsigned int *)(a2 + 116) + a1 + *(unsigned int *)(a2 + 96)) = 0;
    }
    if ( !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 108),
                          a2 + 128,
                          *(_QWORD *)(a2 + 72),
                          *(unsigned int *)(a2 + 80))
      || !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 104),
                          a2 + 124,
                          *(_QWORD *)(a2 + 56),
                          *(unsigned int *)(a2 + 64)) )
    {
      return 0LL;
    }
    v6 = a2 + 120;
    v7 = *(unsigned int *)(a2 + 48);
    v8 = a1 + *(unsigned int *)(a2 + 100);
    v9 = *(_QWORD *)(a2 + 40);
    goto LABEL_11;
  }
  CodePageFromSpecId = GetCodePageFromSpecId(v4);
  if ( !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 92),
                        (int)a2 + 112,
                        *(_QWORD *)(a2 + 8),
                        *(_DWORD *)(a2 + 16),
                        CodePageFromSpecId) )
    return 0LL;
  v13 = *(_QWORD *)(a2 + 24);
  if ( v13 )
  {
    if ( !(unsigned int)bConvertMBCS(
                          (int)a1 + *(_DWORD *)(a2 + 96),
                          (int)a2 + 116,
                          v13,
                          *(_DWORD *)(a2 + 32),
                          CodePageFromSpecId) )
      return 0LL;
    if ( a1 )
      *(_WORD *)(*(unsigned int *)(a2 + 116) + a1 + *(unsigned int *)(a2 + 96)) = 0;
  }
  if ( !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 108),
                        (int)a2 + 128,
                        *(_QWORD *)(a2 + 72),
                        *(_DWORD *)(a2 + 80),
                        CodePageFromSpecId)
    || !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 104),
                        (int)a2 + 124,
                        *(_QWORD *)(a2 + 56),
                        *(_DWORD *)(a2 + 64),
                        CodePageFromSpecId) )
  {
    return 0LL;
  }
  v6 = a2 + 120;
  v7 = *(unsigned int *)(a2 + 48);
  v8 = a1 + *(unsigned int *)(a2 + 100);
  v9 = *(_QWORD *)(a2 + 40);
  if ( (unsigned __int16)(*(_WORD *)(a2 + 134) - 4) <= 1u )
  {
LABEL_11:
    v10 = bConvertSwap(v8, v6, v9, v7);
    return v10 != 0;
  }
  v10 = bConvertMBCS(v8, v6, v9, v7, CodePageFromSpecId);
  return v10 != 0;
}
