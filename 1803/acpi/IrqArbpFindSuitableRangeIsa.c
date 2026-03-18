/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C00910D4
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C0090610 (IrqArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0029EF4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     AcpiCheckExternalConnection @ 0x1C007A724 (AcpiCheckExternalConnection.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00917A4 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcGetPossibleInput @ 0x1C0092504 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0092604 (IcIsInputValid.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0092638 (IcIsInterruptTypeSecondary.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  int v4; // r13d
  unsigned int v5; // r11d
  __int16 v6; // di
  unsigned int v7; // r12d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // bl
  bool v12; // bl
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  int v17; // r10d
  __int64 v18; // rdx
  int v19; // r10d
  ULONG Flags; // edi
  __int16 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char result; // al
  __int64 v26; // rcx
  _BYTE v27[4]; // [rsp+50h] [rbp-19h] BYREF
  int v28; // [rsp+54h] [rbp-15h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v31; // [rsp+60h] [rbp-9h]
  _BYTE v32[32]; // [rsp+68h] [rbp-1h] BYREF

  v2 = *(_DWORD *)a2;
  v31 = a1;
  v4 = 0;
  v28 = 0;
  if ( v2 > *(_DWORD *)(a2 + 8) )
    return 0;
  LOWORD(v5) = 1;
  while ( 1 )
  {
    v6 = v5 & *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL);
    v7 = IrqArbGsivFromIrq(v2);
    if ( !(unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v2, &v28, v8, v9)
      || (v11 = byte_1C00664C4[8 * v28], v11 == 0xFF) )
    {
      if ( (unsigned __int8)IcIsInterruptTypeSecondary(v7) )
      {
        v12 = v6 != 1;
        AcpiCheckExternalConnection();
        v13 = -1073741822;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
        if ( ExternalTranslationInterface )
          v13 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v7, 0LL, v32);
        ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
        KeLeaveCriticalRegion();
        v5 = 1;
        if ( v13 < 0 )
          goto LABEL_28;
        v11 = v32[16] | v12;
      }
      else if ( ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v30) )
      {
        v11 = v30 | (v6 != 1);
      }
      else
      {
        v11 = v6 != 1 ? 3 : 0;
      }
      goto LABEL_18;
    }
    if ( (v11 & (unsigned __int8)v5) != 0 )
      break;
    if ( v6 )
      goto LABEL_18;
LABEL_28:
    v2 += v5;
    if ( v2 > *(_DWORD *)(a2 + 8) )
      return 0;
  }
  if ( v6 == (_WORD)v5 )
    goto LABEL_28;
LABEL_18:
  if ( (int)IcGetPossibleInput(v7, v10, v27) >= 0 && v11 != v27[0] || !(unsigned __int8)IcIsInputValid(v7) )
    goto LABEL_28;
  v14 = *(_QWORD *)(a2 + 40);
  v15 = *(_QWORD *)(a2 + 72);
  v16 = v5 | v4;
  v17 = *(_DWORD *)(v14 + 36);
  v18 = *(_QWORD *)(v14 + 40);
  v19 = v5 & v17;
  if ( !v19 )
    v16 = v4;
  v29 = 0;
  v4 = v16;
  Flags = v16;
  v21 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL);
  v22 = *(_QWORD *)(a2 + 32);
  v23 = v19 | 2;
  v29 = v5 & (unsigned __int8)v21 | (v11 >> 2) & 2;
  v24 = *(_QWORD *)(v22 + 32);
  if ( (v21 & 8) == 0 )
    v23 = v19;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int, unsigned int, int, unsigned int))ProcessorFindIdtEntries)(
              v24,
              v18,
              v15,
              v5,
              v7,
              v29,
              v23,
              v5) < 0 )
  {
    v5 = 1;
    goto LABEL_28;
  }
  if ( RtlFindRange(
         *(PRTL_RANGE_LIST *)(v31 + 48),
         v2,
         v2,
         1u,
         1u,
         Flags,
         *(_BYTE *)(a2 + 67),
         0LL,
         0LL,
         (PULONGLONG)a2) < 0 )
  {
    v5 = 1;
    goto LABEL_28;
  }
  v26 = *(_QWORD *)(a2 + 40);
  result = 1;
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(v26 + 16) = 1LL;
  return result;
}
