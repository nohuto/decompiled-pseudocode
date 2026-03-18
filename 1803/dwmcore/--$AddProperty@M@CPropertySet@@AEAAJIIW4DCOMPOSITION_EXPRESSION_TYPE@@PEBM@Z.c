/*
 * XREFs of ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x180038BCC
 * Callers:
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180039158 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 * Callees:
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1800383A4 (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180038858 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertySet::AddProperty<float>(
        CResource *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<float>(
         (__int64)this + 80,
         a4,
         a5,
         &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 359;
    goto LABEL_10;
  }
  if ( v12 != (_DWORD)v5 || (*(_DWORD *)(*((_QWORD *)this + 10) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x16Eu);
    return v9;
  }
  v8 = CPropertySet::PropertyUpdated<float>(this, v5, 0, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 370;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v11);
    return v9;
  }
  return 0;
}
