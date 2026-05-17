/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180088068
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180089C58 (LdrpSetModuleSigningLevel.c)
 *     NtCompareSigningLevels @ 0x1800A13D0 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  bool v11; // al
  int v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v4 = 0;
  v5 = a2;
  v13 = 0;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0
     || (LOBYTE(a1) = *(_BYTE *)(v7 + 284), LOBYTE(a2) = 12, (int)NtCompareSigningLevels(a1, a2) >= 0)) )
  {
    v9 = LdrpSetModuleSigningLevel(v5, *(_QWORD *)(v6 + 56), (unsigned int)&v13, a4, (__int64)&v14);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741701
        || v9 == -1073740760
        || v9 == -1073740285
        || v9 == -1058471934
        || LdrpEnforceIntegrityContinuity )
      {
        v4 = v9;
        *(_BYTE *)(*(_QWORD *)(v6 + 56) + 284LL) = 1;
      }
      v11 = 1;
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 56);
      LOBYTE(v8) = 12;
      LOBYTE(v10) = *(_BYTE *)(v10 + 284);
      v4 = NtCompareSigningLevels(v10, v8);
      v11 = v4 < 0;
    }
    if ( v11 )
      LdrpLogIntegrityContinuityTelemetry(v6, v9, v13, v4, v14);
  }
  return (unsigned int)v4;
}
