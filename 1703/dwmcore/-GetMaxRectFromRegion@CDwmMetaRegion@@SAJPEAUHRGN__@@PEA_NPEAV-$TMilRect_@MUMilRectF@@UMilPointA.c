/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015A56C
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  int v5; // eax
  void *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // r9d
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-18h]
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, (struct _RGNDATA **)&lpMem, (unsigned int *)a3);
  v6 = lpMem;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x292u);
  }
  else
  {
    if ( !lpMem )
      return v7;
    v8 = *((_DWORD *)lpMem + 2);
    if ( v8 )
    {
      v9 = 0;
      v13 = *((_OWORD *)lpMem + 2);
      v10 = (char *)lpMem + 36;
      v11 = v8;
      do
      {
        if ( (v10[1] - *(v10 - 1)) * (v10[2] - *v10) > v9 )
        {
          v9 = (v10[1] - *(v10 - 1)) * (v10[2] - *v10);
          v13 = *(_OWORD *)(v10 - 1);
        }
        v10 += 4;
        --v11;
      }
      while ( v11 );
      *a2 = 1;
      *(float *)a3 = (float)(int)v13;
      *(float *)(a3 + 4) = (float)SDWORD1(v13);
      *(float *)(a3 + 8) = (float)SDWORD2(v13);
      *(float *)(a3 + 12) = (float)SHIDWORD(v13);
    }
  }
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  return v7;
}
