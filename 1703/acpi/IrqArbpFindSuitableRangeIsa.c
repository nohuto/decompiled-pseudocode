/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C00898E8
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0088E70 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00060C4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0085FE0 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0086A70 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C0088600 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcGetPossibleInput @ 0x1C0089220 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0089B00 (IcIsInputValid.c)
 *     AcpiCheckExternalConnection @ 0x1C008C8D4 (AcpiCheckExternalConnection.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  int v3; // r10d
  bool v4; // cc
  ULONG Flags; // r12d
  __int64 v7; // rax
  __int16 v8; // di
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int16 v11; // r9
  unsigned __int8 v12; // si
  int PossibleInput; // eax
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r11d
  __int16 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  NTSTATUS Range; // eax
  char result; // al
  bool v25; // si
  int v26; // edi
  char v27[4]; // [rsp+50h] [rbp-19h] BYREF
  int v28; // [rsp+54h] [rbp-15h]
  int v29; // [rsp+58h] [rbp-11h] BYREF
  int v30; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v31; // [rsp+60h] [rbp-9h]
  _BYTE v32[32]; // [rsp+68h] [rbp-1h] BYREF

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v4 = *(_DWORD *)a2 <= *(_DWORD *)(a2 + 8);
  Flags = 0;
  v29 = 0;
  v31 = a1;
  while ( v4 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v28 = v3;
    v8 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 4LL) & 1;
    v9 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &v29) && (v12 = byte_1C0076334[8 * v29], v12 != 0xFF) )
    {
      if ( (v12 & (unsigned __int8)v11) != 0 )
      {
        if ( v8 == v11 )
          goto LABEL_20;
      }
      else if ( !v8 )
      {
        goto LABEL_20;
      }
    }
    else if ( IcIsInterruptTypeSecondary(v9) )
    {
      v25 = v8 != 1;
      AcpiCheckExternalConnection();
      v26 = -1073741822;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
      if ( ExternalTranslationInterface )
        v26 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v9, 0LL, v32);
      ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
      KeLeaveCriticalRegion();
      v3 = 0;
      if ( v26 < 0 )
        goto LABEL_20;
      v12 = v32[16] | v25;
    }
    else if ( ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v30) )
    {
      v12 = v30 | (v8 != 1);
    }
    else
    {
      v12 = v8 != 1 ? 3 : 0;
    }
    PossibleInput = IcGetPossibleInput(v9, v10, v27);
    v3 = 0;
    if ( PossibleInput < 0 || v12 == v27[0] )
    {
      if ( (unsigned __int8)IcIsInputValid(v9) )
      {
        v14 = *(_QWORD *)(a2 + 40);
        if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
        {
          Flags |= 1u;
          v15 = 1;
        }
        else
        {
          v15 = v28;
        }
        v16 = *(_QWORD *)(a2 + 56);
        v17 = *(_QWORD *)(v14 + 40);
        v18 = v15 | 2;
        v28 = v3;
        v19 = *(_WORD *)(*(_QWORD *)(v16 + 40) + 4LL);
        if ( (v19 & 8) == 0 )
          v18 = v15;
        v20 = *(_QWORD *)(a2 + 72);
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
        LOBYTE(v28) = (v19 & 1 ^ (2 * ((v12 & 8) != 0))) & 2 ^ v19 & 1;
        v22 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
                v21,
                v17,
                v20,
                1LL,
                v9,
                v28,
                v18,
                1);
        v3 = 0;
        if ( v22 >= 0 )
        {
          Range = RtlFindRange(
                    *(PRTL_RANGE_LIST *)(v31 + 48),
                    v2,
                    v2,
                    1u,
                    1u,
                    Flags,
                    *(_BYTE *)(a2 + 67),
                    0LL,
                    0LL,
                    (PULONGLONG)a2);
          v3 = 0;
          if ( Range >= 0 )
          {
            result = 1;
            *(_QWORD *)a2 = v2;
            *(_QWORD *)(a2 + 8) = v2;
            *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) = 1LL;
            return result;
          }
        }
      }
    }
LABEL_20:
    v4 = ++v2 <= *(_DWORD *)(a2 + 8);
  }
  return 0;
}
