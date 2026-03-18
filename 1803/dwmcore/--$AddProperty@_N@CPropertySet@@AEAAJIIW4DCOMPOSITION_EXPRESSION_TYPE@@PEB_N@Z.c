/*
 * XREFs of ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A2878
 * Callers:
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801A2718 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x18016A324 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801A331C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::AddProperty<bool>(CResource *this, unsigned int a2, int a3, int a4, _BYTE *a5)
{
  __int64 v5; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
         (__int64)this + 80,
         a4,
         a5,
         &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 359;
    goto LABEL_9;
  }
  if ( v12 != (_DWORD)v5 || (*(_DWORD *)(*((_QWORD *)this + 10) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x16Eu);
    return v9;
  }
  v8 = CPropertySet::PropertyUpdated<D2DVector4>(this, v5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 370;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v11);
    return v9;
  }
  return 0;
}
