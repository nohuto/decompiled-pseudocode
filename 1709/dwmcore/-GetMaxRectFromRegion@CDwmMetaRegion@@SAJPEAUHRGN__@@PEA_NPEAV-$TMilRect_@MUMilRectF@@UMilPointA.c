/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FBA0
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003B1F4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  signed int v5; // eax
  void *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // r8d
  _DWORD *v10; // rdx
  __int64 v11; // r9
  int v12; // r11d
  int v13; // r10d
  int v14; // ecx
  __int128 v16; // [rsp+30h] [rbp-18h]
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, (struct _RGNDATA **)&lpMem, (unsigned int *)a3);
  v6 = lpMem;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x292u);
  }
  else
  {
    if ( !lpMem )
      return v7;
    v8 = *((_DWORD *)lpMem + 2);
    if ( v8 )
    {
      v9 = 0;
      v16 = *((_OWORD *)lpMem + 2);
      v10 = (char *)lpMem + 36;
      v11 = v8;
      do
      {
        v12 = v9;
        v13 = v9;
        v14 = (v10[1] - *(v10 - 1)) * (v10[2] - *v10);
        if ( v14 > v9 )
          v16 = *(_OWORD *)(v10 - 1);
        v10 += 4;
        v9 = v14;
        if ( v14 <= v13 )
          v9 = v12;
        --v11;
      }
      while ( v11 );
      *a2 = 1;
      *(float *)a3 = (float)(int)v16;
      *(float *)(a3 + 4) = (float)SDWORD1(v16);
      *(float *)(a3 + 8) = (float)SDWORD2(v16);
      *(float *)(a3 + 12) = (float)SHIDWORD(v16);
    }
  }
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  return v7;
}
