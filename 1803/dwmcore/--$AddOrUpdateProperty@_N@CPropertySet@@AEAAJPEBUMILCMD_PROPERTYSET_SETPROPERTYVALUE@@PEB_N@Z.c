/*
 * XREFs of ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801A2718
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180039F3C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A2878 (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A34E4 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801A3568 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( *(_DWORD *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(a1, *(_DWORD *)(a2 + 8), a3);
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
    updated = CPropertySet::UpdateProperty<bool>(v8, v6);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 329;
      goto LABEL_4;
    }
  }
  return 0;
}
