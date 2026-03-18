/*
 * XREFs of PciGetRootBusCapability @ 0x1C007F850
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C007F340 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiUpdatePciRootFromDsmEvaluation @ 0x1C007F64C (AcpiUpdatePciRootFromDsmEvaluation.c)
 */

char __fastcall PciGetRootBusCapability(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // bl
  int v6; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 24) = PciRootBusFeaturesSupported;
  *(_DWORD *)(a2 + 28) = PciRootBusFeaturesControlRequest;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 304);
  v4 = AcpiEvaluateDsmMethodOnPciRootBus(a1, &v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0;
  AcpiUpdatePciRootFromDsmEvaluation(a1);
  v6 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)a2 = v6;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 231);
    *(_DWORD *)(a2 + 12) = *(unsigned __int16 *)(a1 + 232);
    LOBYTE(v6) = *(_BYTE *)(a1 + 230);
    if ( (v6 & 4) != 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
      LOBYTE(v6) = *(_BYTE *)(a1 + 230);
    }
    if ( (v6 & 1) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return v6;
}
