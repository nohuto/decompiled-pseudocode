/*
 * XREFs of ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x18001BB9C
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x1800390B0 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800387CC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801A3568 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector2>(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  _QWORD *v3; // r9
  CResource *v4; // r11
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
    && (v5 = *((_QWORD *)v4 + 10), *(_DWORD *)(v5 + 8LL * v1) == v2) )
  {
    *(_QWORD *)((*(_DWORD *)(v5 + 8LL * v1 + 4) & 0x1FFFFFFF) + *((_QWORD *)v4 + 14)) = *v3;
    v6 = CPropertySet::PropertyUpdated<D2DMatrix>(v4, v1);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x197u);
    else
      return 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x190u);
  }
  return v7;
}
