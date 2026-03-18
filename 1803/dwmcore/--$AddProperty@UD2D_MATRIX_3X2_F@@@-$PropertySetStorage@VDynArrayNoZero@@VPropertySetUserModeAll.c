/*
 * XREFs of ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x180037FF4
 * Callers:
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003898C (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016AB3C (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // edx
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v9 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  v10 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
  }
  else if ( v9 > *(_DWORD *)(a1 + 20) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, &v14);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
    *(_DWORD *)(a1 + 24) = v9;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  result = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 24, 1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 24;
    v12 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)(v5 + v12) = *(_OWORD *)a3;
    *(_QWORD *)(v5 + v12 + 16) = *(_QWORD *)(a3 + 16);
    result = 0LL;
    *a4 = v7;
  }
  return result;
}
