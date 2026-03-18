/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C009522C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C008B850 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0028CA4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0088988 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C00893E8 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C008B6E0 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     AcpiCheckExternalConnection @ 0x1C008D4D4 (AcpiCheckExternalConnection.c)
 *     IcIsInputValid @ 0x1C0095428 (IcIsInputValid.c)
 *     IcGetPossibleInput @ 0x1C009545C (IcGetPossibleInput.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  ULONG Flags; // r13d
  __int64 v5; // rax
  __int16 v6; // si
  unsigned int v7; // r12d
  __int64 v8; // rdx
  unsigned __int8 v9; // bl
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  char result; // al
  bool v21; // bl
  int v22; // esi
  _BYTE v23[4]; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+54h] [rbp-15h]
  int i; // [rsp+58h] [rbp-11h] BYREF
  int v26; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v27; // [rsp+60h] [rbp-9h]
  _BYTE v28[32]; // [rsp+68h] [rbp-1h] BYREF

  v2 = *(_DWORD *)a2;
  v27 = a1;
  Flags = 0;
  for ( i = 0; v2 <= *(_DWORD *)(a2 + 8); ++v2 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    v24 = 0;
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &i) && (v9 = byte_1C0078394[8 * i], v9 != 0xFF) )
    {
      if ( (v9 & 1) != 0 )
      {
        if ( v6 == 1 )
          continue;
      }
      else if ( !v6 )
      {
        continue;
      }
    }
    else if ( IcIsInterruptTypeSecondary(v7) )
    {
      v21 = v6 != 1;
      AcpiCheckExternalConnection();
      v22 = -1073741822;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
      if ( ExternalTranslationInterface )
        v22 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v7, 0LL, v28);
      ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
      KeLeaveCriticalRegion();
      if ( v22 < 0 )
        continue;
      v9 = v28[16] | v21;
    }
    else if ( ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v26) )
    {
      v9 = v26 | (v6 != 1);
    }
    else
    {
      v9 = v6 != 1 ? 3 : 0;
    }
    if ( ((int)IcGetPossibleInput(v7, v8, v23) < 0 || v9 == v23[0]) && (unsigned __int8)IcIsInputValid(v7) )
    {
      v11 = *(_QWORD *)(a2 + 40);
      if ( (*(_DWORD *)(v11 + 36) & 1) != 0 )
      {
        Flags |= 1u;
        v10 = 1;
      }
      v12 = *(_QWORD *)(a2 + 72);
      v13 = *(_QWORD *)(v11 + 40);
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL);
      v24 = 0;
      v15 = *(_WORD *)(v14 + 4);
      v16 = *(_QWORD *)(a2 + 32);
      v17 = v10 | 2;
      v24 = v15 & 1 | (v9 >> 2) & 2;
      v18 = *(_QWORD *)(v16 + 32);
      if ( (v15 & 8) == 0 )
        v17 = v10;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
                  v18,
                  v13,
                  v12,
                  1LL,
                  v7,
                  v24,
                  v17,
                  1) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(v27 + 48),
             v2,
             v2,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        v19 = *(_QWORD *)(a2 + 40);
        result = 1;
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(v19 + 16) = 1LL;
        return result;
      }
    }
  }
  return 0;
}
