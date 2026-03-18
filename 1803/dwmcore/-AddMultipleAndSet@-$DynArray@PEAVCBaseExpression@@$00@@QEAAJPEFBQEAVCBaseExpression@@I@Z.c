/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800CCA74
 * Callers:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v6 = DynArrayImpl<1>::AddMultipleAndSet(a1, 8LL, a1, a2);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v4;
}
