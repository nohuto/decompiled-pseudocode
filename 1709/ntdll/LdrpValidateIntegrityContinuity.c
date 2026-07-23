/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180088068
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180089C58 (LdrpSetModuleSigningLevel.c)
 *     NtCompareSigningLevels @ 0x1800A13D0 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3)
{
  NTSTATUS v3; // esi
  __int64 v6; // rax
  int v7; // ebx
  bool v8; // al
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h]

  v11 = a3;
  v3 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v6 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v6 + 280) & 0x8000) != 0 || NtCompareSigningLevels(*(_BYTE *)(v6 + 284), 0xCu) >= 0) )
  {
    v7 = LdrpSetModuleSigningLevel(a2, *(_QWORD *)(a1 + 56), &v10);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741701
        || v7 == -1073740760
        || v7 == -1073740285
        || v7 == -1058471934
        || LdrpEnforceIntegrityContinuity )
      {
        v3 = v7;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
      }
      v8 = 1;
    }
    else
    {
      v3 = NtCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      v8 = v3 < 0;
    }
    if ( v8 )
      LdrpLogIntegrityContinuityTelemetry(a1, v7, v10, v3, v11);
  }
  return (unsigned int)v3;
}
