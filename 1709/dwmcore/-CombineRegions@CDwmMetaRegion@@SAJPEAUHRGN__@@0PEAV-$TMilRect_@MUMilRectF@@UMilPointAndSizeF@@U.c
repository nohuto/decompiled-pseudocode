/*
 * XREFs of ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F7D4
 * Callers:
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013C240 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CombineRegions(HRGN hrgnSrc1, HRGN hrgnSrc2, float *a3)
{
  struct _RGNDATA *v4; // rdi
  signed int v7; // ebx
  HRGN RectRgn; // rsi
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  int v13; // eax
  unsigned int *v14; // r8
  signed int LastError; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // r8d
  signed int v19; // eax
  DWORD nCount; // eax
  int v21; // edx
  struct _RGNDATA *v22; // rcx
  __int64 v23; // r9
  int v24; // r11d
  int v25; // r10d
  int v26; // r8d
  __int128 v28; // [rsp+30h] [rbp-28h]
  struct _RGNDATA *v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v29 = 0LL;
  v7 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v13 = CombineRgn(RectRgn, hrgnSrc1, hrgnSrc2, 2);
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v19 = HrgnToRgnData(RectRgn, &v29, v14);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x3A5u);
          v4 = v29;
        }
        else
        {
          v4 = v29;
          if ( v29 )
          {
            nCount = v29->rdh.nCount;
            if ( nCount )
            {
              v21 = 0;
              v28 = *(_OWORD *)v29->Buffer;
              v22 = v29 + 1;
              v23 = nCount;
              do
              {
                v24 = v21;
                v25 = v21;
                v26 = (v22->rdh.iType - *(_DWORD *)v22[-1].Buffer) * (v22->rdh.nCount - v22->rdh.dwSize);
                if ( v26 > v21 )
                  v28 = *(_OWORD *)v22[-1].Buffer;
                v22 = (struct _RGNDATA *)((char *)v22 + 16);
                v21 = v26;
                if ( v26 <= v25 )
                  v21 = v24;
                --v23;
              }
              while ( v23 );
              *a3 = (float)(int)v28;
              a3[1] = (float)SDWORD1(v28);
              a3[2] = (float)SDWORD2(v28);
              a3[3] = (float)SHIDWORD(v28);
            }
          }
        }
      }
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 >= 0 )
        v7 = CheckGUIHandleQuota(v17, v16, v18);
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x39Du);
    }
    DeleteObject(RectRgn);
    if ( v4 )
      WPF::ProcessHeapImpl::Free(v4);
  }
  else
  {
    v9 = GetLastError();
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v7 >= 0 )
      v7 = CheckGUIHandleQuota(v11, v10, v12);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x398u);
  }
  return (unsigned int)v7;
}
