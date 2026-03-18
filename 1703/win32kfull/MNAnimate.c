/*
 * XREFs of MNAnimate @ 0x1C0215560
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C01EACE8 (MNDestroyAnimationBitmap.c)
 */

signed int __fastcall MNAnimate(__int64 a1, int a2)
{
  signed int result; // eax
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // kr00_8
  int v12; // r9d
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  bool v16; // cf
  int v17; // ecx
  int v18; // r8d
  unsigned int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h]

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return result;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2 || v4 > 0xA5 || ExGetExclusiveWaiterCount(gpresUser) || (result = ExGetSharedWaiterCount(gpresUser)) != 0 )
  {
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(HDC *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_29:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v20 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v20 + 56), 65531LL, 0, 1, 0LL);
  }
  v9 = *(_DWORD *)(a1 + 108);
  v10 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    v11 = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5, v7, v8, v21) + 8) + 4);
    v5 = HIDWORD(v11);
    result = v11 / 8;
    LODWORD(v5) = v11 % 8;
    if ( result > *(_DWORD *)(a1 + 116) )
      result = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 108) = result;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    result = (int)(v4 * *(_DWORD *)(GetDPIMetrics(v6, v5, v7, v8, v21) + 12) + 8) / 16;
    if ( result > *(_DWORD *)(a1 + 120) )
      result = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = result;
  }
  v12 = *(_DWORD *)(a1 + 108);
  if ( v12 != v9 || *(_DWORD *)(a1 + 112) != v10 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    if ( (v13 & 0x100000) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 116) - v12;
      v15 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 116) - v12;
      v14 = 0;
    }
    v16 = (v13 & 0x400000) != 0;
    v17 = *(_DWORD *)(a1 + 112);
    if ( v16 )
    {
      v18 = *(_DWORD *)(a1 + 120) - v17;
      v19 = 0;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 120) - v17;
      v18 = 0;
    }
    NtGdiBitBltInternal(*(HDC *)(a1 + 96), v14, v18, v12, v17, *(HDC *)(a1 + 136), v15, v19, -2134114272, 0xFFFFFF, 0);
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == result )
    {
      result = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == result )
        goto LABEL_29;
    }
  }
  return result;
}
