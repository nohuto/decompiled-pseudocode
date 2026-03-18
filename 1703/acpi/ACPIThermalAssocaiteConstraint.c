/*
 * XREFs of ACPIThermalAssocaiteConstraint @ 0x1C0028F58
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C001DB88 (ACPIThermalActivateConstraint.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0028FEC (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0041258 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00420D0 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalAssocaiteConstraint(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r8
  bool v9; // zf

  result = (__int64)a2;
  v3 = *(_QWORD *)(a1 + 608);
  if ( !a2[5] )
  {
    v5 = (_QWORD *)a2[3];
    v6 = a2 + 2;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v5 != v6 )
      __fastfail(3u);
    *v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    v8 = *(_QWORD **)(v3 + 24);
    if ( *v8 != v3 + 16 )
      __fastfail(3u);
    *v6 = v3 + 16;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(v3 + 24) = v6;
    v9 = *(_BYTE *)(result + 52) == 0;
    *(_QWORD *)(result + 40) = a1;
    if ( v9 )
    {
      LOBYTE(v3) = *(_BYTE *)(result + 55);
      if ( (_BYTE)v3 )
        AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL, v3);
    }
    else if ( *(_BYTE *)(result + 53) != 100 )
    {
      AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL);
    }
    return ACPIThermalReevaluateConstraints(*(PVOID *)(a1 + 608));
  }
  return result;
}
