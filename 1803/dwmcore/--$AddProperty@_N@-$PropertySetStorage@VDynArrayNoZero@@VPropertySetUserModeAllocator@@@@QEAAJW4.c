/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x18016A324
 * Callers:
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016AD94 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A2878 (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        _BYTE *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v13) = a2;
  v10 = v7 + 1;
  HIDWORD(v13) = v5 & 0x1FFFFFFF;
  v11 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
  }
  else if ( v10 > *(_DWORD *)(a1 + 20) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8u, 1, &v13);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v13;
    *(_DWORD *)(a1 + 24) = v10;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  result = DynArrayImpl<0>::Grow(a1 + 32, 1u, 1, 1, 0LL);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a1 + 56);
    *(_BYTE *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
    result = 0LL;
    *a4 = v7;
  }
  return result;
}
