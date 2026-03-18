/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801793E4
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18007FCC8 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  int v5; // eax
  void *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // r8d
  _DWORD *v10; // rdx
  __int64 v11; // r9
  int v12; // ecx
  __int128 v14; // [rsp+30h] [rbp-18h]
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, (struct _RGNDATA **)&lpMem, (unsigned int *)a3);
  v6 = lpMem;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x292u);
  }
  else
  {
    if ( !lpMem )
      return v7;
    v8 = *((_DWORD *)lpMem + 2);
    if ( v8 )
    {
      v9 = 0;
      v14 = *((_OWORD *)lpMem + 2);
      v10 = (char *)lpMem + 36;
      v11 = v8;
      do
      {
        v12 = (v10[1] - *(v10 - 1)) * (v10[2] - *v10);
        if ( v12 > v9 )
          v14 = *(_OWORD *)(v10 - 1);
        v10 += 4;
        if ( v12 <= v9 )
          v12 = v9;
        v9 = v12;
        --v11;
      }
      while ( v11 );
      *a2 = 1;
      *(float *)a3 = (float)(int)v14;
      *(float *)(a3 + 4) = (float)SDWORD1(v14);
      *(float *)(a3 + 8) = (float)SDWORD2(v14);
      *(float *)(a3 + 12) = (float)SHIDWORD(v14);
    }
  }
  if ( v6 )
    operator delete(v6);
  return v7;
}
