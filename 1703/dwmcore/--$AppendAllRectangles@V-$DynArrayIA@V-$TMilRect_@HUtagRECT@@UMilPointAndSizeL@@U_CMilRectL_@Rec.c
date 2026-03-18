/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x180074530
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        FastRegion::Internal::CRgnData **a1,
        __int64 a2)
{
  FastRegion::Internal::CRgnData *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // edi
  FastRegion::Internal::CRgnData *v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-48h]
  _BYTE v13[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]
  _DWORD *v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]

  v2 = *a1;
  if ( *(_DWORD *)*a1 )
  {
    v5 = (__int64)v2 + 8 * *(_DWORD *)v2 + 4;
    v6 = (v5 + *(int *)(v5 + 4) - (__int64)*((int *)v2 + 4) - ((__int64)v2 + 12)) >> 3;
  }
  else
  {
    LODWORD(v6) = 0;
  }
  v7 = *(_DWORD *)(a2 + 24);
  v8 = DynArrayImpl<0>::Grow(a2, 0x10u, v6, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1A7u);
  else
    *(_DWORD *)(a2 + 24) += v6;
  if ( v9 >= 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v13);
    while ( (unsigned __int64)v15 < v14 )
    {
      DWORD1(v12) = *v15;
      HIDWORD(v12) = v15[2];
      LODWORD(v12) = *(_DWORD *)(v16 + 8LL * v17);
      DWORD2(v12) = *(_DWORD *)(v16 + 4LL * (2 * v17 + 1));
      v10 = (FastRegion::Internal::CRgnData *)(2LL * v7);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v10) = v12;
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v13);
      ++v7;
    }
  }
  return (unsigned int)v9;
}
