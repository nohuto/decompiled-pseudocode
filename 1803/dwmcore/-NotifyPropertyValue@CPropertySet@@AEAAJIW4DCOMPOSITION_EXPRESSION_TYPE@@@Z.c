/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800387CC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180038858 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801A331C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801A3570 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x18002AEE0 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18002AF20 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18002B158 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A25A4 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v3 = a2;
  if ( a3 != 104 )
  {
    switch ( a3 )
    {
      case 18:
        v12 = CPropertyChangeResource::NotifyScalarPropertyChanged(
                (CPropertyChangeResource *)a1,
                a2,
                *(float *)((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 112)));
        v10 = v12;
        if ( v12 >= 0 )
          return 0;
        v17 = 545;
        break;
      case 52:
        v12 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                (CPropertyChangeResource *)a1,
                a2,
                (const struct D2DVector3 *)(*(_QWORD *)(a1 + 112)
                                          + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
        v10 = v12;
        if ( v12 >= 0 )
          return 0;
        v17 = 551;
        break;
      case 35:
        v12 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                (CPropertyChangeResource *)a1,
                a2,
                (const struct D2DVector2 *)(*(_QWORD *)(a1 + 112)
                                          + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
        v10 = v12;
        if ( v12 >= 0 )
          return 0;
        v17 = 548;
        break;
      case 69:
        v12 = CPropertyChangeResource::NotifyVector4PropertyChanged(
                (CPropertyChangeResource *)a1,
                a2,
                (const struct D2DVector4 *)(*(_QWORD *)(a1 + 112)
                                          + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
        v10 = v12;
        if ( v12 >= 0 )
          return 0;
        v17 = 554;
        break;
      case 265:
        v12 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
                (CPropertyChangeResource *)a1,
                a2,
                (const struct D2DMatrix *)(*(_QWORD *)(a1 + 112)
                                         + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
        v10 = v12;
        if ( v12 >= 0 )
          return 0;
        v17 = 564;
        break;
      default:
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v17);
    return (unsigned int)v10;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v3 + 4) & 0x1FFFFFFF;
  if ( v5 )
    v8 = *(_DWORD *)(v5 + 68);
  else
    v8 = 0;
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 56) )
    {
      v9 = *(_DWORD *)(a1 + 64);
      if ( _bittest(&v9, v3) )
      {
        v13 = *(_QWORD *)(a1 + 16);
        v20 = *(_QWORD *)(v7 + v6 + 16);
        v14 = *(_QWORD *)(v13 + 1312);
        v19 = *(_OWORD *)(v7 + v6);
        v15 = v5 ? *(unsigned int *)(v5 + 68) : 0LL;
        v16 = *(_QWORD *)(v14 + 56);
        v18[0] = v15;
        v18[1] = *(unsigned int *)(a1 + 56);
        v10 = CoreUICallSend(v16, v18, 2LL, 12LL, 6, &unk_180239D02);
        if ( v10 == -2018375675 )
          v10 = 0;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1D0u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x231u);
          return (unsigned int)v10;
        }
      }
    }
  }
  return 0;
}
