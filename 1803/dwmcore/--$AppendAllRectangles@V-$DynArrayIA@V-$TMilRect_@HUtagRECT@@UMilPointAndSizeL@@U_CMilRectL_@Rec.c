/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18007D87C
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
        FastRegion::Internal::CRgnData **a1,
        __int64 a2)
{
  FastRegion::Internal::CRgnData *v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // edi
  __int64 v11; // r8
  _DWORD *v12; // r9
  int v13; // r11d
  char *v14; // rbx
  int v15; // edx
  _DWORD *v16; // r10
  __int64 v17; // r8
  __int128 v19; // [rsp+30h] [rbp-48h]
  char v20[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]
  _DWORD *v22; // [rsp+50h] [rbp-28h]
  char *v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+60h] [rbp-18h]
  int v25; // [rsp+64h] [rbp-14h]

  v2 = *a1;
  v5 = *(_DWORD *)*a1;
  if ( v5 )
  {
    v6 = (__int64)v2 + 8 * v5 + 4;
    v7 = (v6 + *(int *)(v6 + 4) - (__int64)*((int *)v2 + 4) - ((__int64)v2 + 12)) >> 3;
  }
  else
  {
    LODWORD(v7) = 0;
  }
  v8 = *(_DWORD *)(a2 + 24);
  v9 = DynArrayImpl<0>::Grow(a2, 0x10u, v7, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1A7u);
  else
    *(_DWORD *)(a2 + 24) += v7;
  if ( v10 >= 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v20);
    LODWORD(v11) = v25;
    v12 = v22;
    v13 = v24;
    v14 = v23;
    while ( (unsigned __int64)v12 < v21 )
    {
      v15 = 2 * v13;
      DWORD1(v19) = *v12;
      v16 = v12 + 2;
      ++v13;
      HIDWORD(v19) = v12[2];
      LODWORD(v19) = *(_DWORD *)&v14[4 * v15];
      DWORD2(v19) = *(_DWORD *)&v14[4 * v15 + 4];
      *(_OWORD *)(*(_QWORD *)a2 + 16LL * v8) = v19;
      if ( v13 >= (int)v11 )
      {
        while ( 1 )
        {
          v12 = v16;
          v17 = (int)v16[3];
          v14 = (char *)v16 + (int)v16[1];
          v16 += 2;
          v11 = ((__int64)v16 + v17 - (__int64)v14) >> 3;
          if ( (_DWORD)v11 )
            break;
          if ( (unsigned __int64)v12 >= v21 )
            goto LABEL_11;
        }
        v13 = 0;
      }
LABEL_11:
      ++v8;
    }
  }
  return (unsigned int)v10;
}
