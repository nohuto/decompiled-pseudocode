/*
 * XREFs of lGetGlyphBitmap @ 0x1C022D6AC
 * Callers:
 *     lGetGlyphBitmapVertical @ 0x1C022DAE8 (lGetGlyphBitmapVertical.c)
 *     ttfdQueryFontData @ 0x1C022E854 (ttfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CJGD @ 0x1C022C564 (CJGD.c)
 *     bGetGlyphMetrics @ 0x1C022C7EC (bGetGlyphMetrics.c)
 *     pvSetMemoryBases @ 0x1C022E4E8 (pvSetMemoryBases.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C022EEA0 (vCopyAndZeroOutPaddingBits.c)
 *     vCopyClearTypeBits @ 0x1C022F054 (vCopyClearTypeBits.c)
 *     vFillGLYPHDATA @ 0x1C022F244 (vFillGLYPHDATA.c)
 *     vGCGB @ 0x1C022FD5C (vGCGB.c)
 *     vShiftBitmapInfo @ 0x1C0232408 (vShiftBitmapInfo.c)
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 */

__int64 __fastcall lGetGlyphBitmap(__int64 a1, int a2, char *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int16 *v11; // r9
  int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // r14d
  char *v15; // rsi
  int v16; // r12d
  unsigned int v17; // r15d
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r8
  int v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+64h] [rbp-9Ch]
  char v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[240]; // [rsp+B0h] [rbp-50h] BYREF

  v22 = 0;
  *a6 = 0;
  if ( *(_DWORD *)(a1 + 16) != a2 && !(unsigned int)bGetGlyphMetrics(a1, a2, (int)a3, a6) )
    return 0xFFFFFFFFLL;
  v11 = *(__int16 **)(a1 + 184);
  v12 = v11[51] - v11[49];
  if ( v11[52] == v11[50] || !v12 )
  {
    v22 = 1;
    v14 = CJGD(1u, 1, a1);
  }
  else
  {
    v14 = CJGD(v11[52] - v11[50], v12, a1);
    if ( v14 > *(_DWORD *)(a1 + 172) )
      v14 = *(_DWORD *)(a1 + 172);
  }
  if ( a3 || a4 )
  {
    v15 = &v27;
    if ( a3 )
      v15 = a3;
    if ( *(_DWORD *)(a1 + 308) && (*(_DWORD *)(a1 + 304) & 2) != 0 )
    {
      vShiftBitmapInfo(a1, v28, v13);
      vFillGLYPHDATA(
        *(_DWORD *)(a1 + 312),
        *(_DWORD *)(a1 + 20),
        a1,
        (unsigned int)v28,
        (__int64)v15,
        (__int64)v24,
        (__int64)&v23);
    }
    else
    {
      vFillGLYPHDATA(a2, *(_DWORD *)(a1 + 20), a1, v13, (__int64)v15, (__int64)v24, (__int64)&v23);
    }
    if ( a4 )
    {
      v16 = v26;
      v17 = v25;
      v18 = CJGD(v25, v26, a1);
      if ( v18 < 0 )
        return 0xFFFFFFFFLL;
      if ( a5 < v18 )
        return 0xFFFFFFFFLL;
      v19 = pvSetMemoryBases(*(_QWORD *)(a1 + 184), *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 40) & 0x10000);
      *(_QWORD *)(a1 + 24) = v19;
      if ( !v19 )
        return 0xFFFFFFFFLL;
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 98LL);
      *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) = *(_WORD *)(*(_QWORD *)(a1 + 184) + 102LL);
      if ( (*(_DWORD *)(a1 + 40) & 0x30010000) == 0x30010000 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 176) + 104LL) *= 5;
        *(_WORD *)(*(_QWORD *)(a1 + 176) + 106LL) *= 5;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 0LL;
      *a6 = fs_ContourScan(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
      *(_DWORD *)(a1 + 16) = -1;
      if ( *a6 )
      {
        EngFreeMem(*(PVOID *)(a1 + 24));
        *(_QWORD *)(a1 + 24) = 0LL;
        return 0xFFFFFFFFLL;
      }
      if ( !v22 && v17 && v16 )
      {
        v20 = *(_DWORD *)(a1 + 40);
        v21 = *(_QWORD *)(a1 + 184);
        if ( (v20 & 0x10000) != 0 )
        {
          if ( (v20 & 0x10000000) != 0 )
            vCopyClearTypeBits(
              a1,
              a4,
              *(_QWORD *)(v21 + 88),
              (unsigned int)v24,
              *(_WORD *)(v21 + 232),
              *(_WORD *)(v21 + 234));
          else
            vGCGB(a1, a4, *(_QWORD *)(v21 + 88), v24);
        }
        else
        {
          vCopyAndZeroOutPaddingBits(a1, a4, *(_QWORD *)(v21 + 88), v24);
        }
        if ( (*(_DWORD *)(a1 + 116) & 3) != 0 )
        {
          *(_DWORD *)a4 = *((_DWORD *)v15 + 8);
          *(_DWORD *)(a4 + 4) = *((_DWORD *)v15 + 9);
        }
        else
        {
          *(_QWORD *)a4 = v23;
        }
      }
      else
      {
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 200);
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(a4 + 8) = 1;
        *(_DWORD *)(a4 + 12) = 1;
        *(_BYTE *)(a4 + 16) = 0;
      }
      *(_QWORD *)v15 = a4;
      EngFreeMem(*(PVOID *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  return v14;
}
