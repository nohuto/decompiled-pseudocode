/*
 * XREFs of ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180039008
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180039F3C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPER.c)
 * Callees:
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001BB0C (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180038AAC (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801A3568 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DVector3>(CResource *a1, _DWORD *a2, unsigned __int8 *a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( a2[5] )
  {
    updated = CPropertySet::AddProperty<D2DVector3>(a1, a2[2], a2[3], a2[4], a3);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 318;
LABEL_4:
      v5 = updated;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v10);
      return v4;
    }
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80)
      || *(_DWORD *)(v7 + 12) != (*(_DWORD *)(*(_QWORD *)(v8 + 80) + 8 * v6 + 4) & 0x1FFFFFFF) )
    {
      v4 = -2003303421;
      v10 = 326;
      v5 = -2003303421;
      goto LABEL_11;
    }
    updated = CPropertySet::UpdateProperty<D2DVector3>(v8);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 329;
      goto LABEL_4;
    }
  }
  return 0;
}
