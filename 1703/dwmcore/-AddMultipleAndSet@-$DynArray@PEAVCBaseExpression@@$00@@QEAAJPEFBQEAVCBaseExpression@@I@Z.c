/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800B1A3C
 * Callers:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180033430 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::AddMultipleAndSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  int v9; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<1>::AddMultipleAndSet(a1, 8LL, a1, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
