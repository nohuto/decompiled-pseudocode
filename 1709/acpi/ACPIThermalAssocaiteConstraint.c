/*
 * XREFs of ACPIThermalAssocaiteConstraint @ 0x1C0029BF8
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0001F68 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C002339C (ACPIThermalActivateConstraint.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0029C8C (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0040CD8 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0041A90 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalAssocaiteConstraint(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  bool v9; // zf

  result = a2;
  v3 = *(_QWORD *)(a1 + 608);
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v5 = (_QWORD *)(a2 + 16);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD **)(v3 + 24);
    if ( *v8 != v3 + 16 )
      __fastfail(3u);
    *v5 = v3 + 16;
    v5[1] = v8;
    *v8 = v5;
    *(_QWORD *)(v3 + 24) = v5;
    v9 = *(_BYTE *)(result + 52) == 0;
    *(_QWORD *)(result + 40) = a1;
    if ( v9 )
    {
      LOBYTE(v3) = *(_BYTE *)(result + 55);
      if ( (_BYTE)v3 )
        AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL, v3);
    }
    else
    {
      LOBYTE(v3) = *(_BYTE *)(result + 53);
      if ( (_BYTE)v3 != 100 )
        AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL, v3);
    }
    return ACPIThermalReevaluateConstraints(*(PVOID *)(a1 + 608));
  }
  return result;
}
