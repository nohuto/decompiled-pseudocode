/*
 * XREFs of RegisterKernelLpiStates @ 0x1C0022808
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0007190 (DecodeAcpiIdleState.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterKernelLpiStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r12
  void *v8; // rax
  PWDF_DRIVER_GLOBALS v9; // rcx
  unsigned int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // eax
  int v15; // r8d
  char v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h]
  unsigned __int8 v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = a3;
  v3 = *(_QWORD *)(a1 + 512);
  v4 = 0;
  v5 = a3;
  if ( v3 && *(_DWORD *)(v3 + 16) )
  {
    *(_BYTE *)(a2 + 18) = 1;
    *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
    *(_QWORD *)(a2 + 80) = LpiIdleExecute;
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
    {
      *(_QWORD *)(a2 + 64) = PepNotifyLpiPreExecute;
      v8 = PepNotifyLpiComplete;
    }
    else
    {
      v8 = AcpiCStateIdleCancel;
    }
    v9 = WdfDriverGlobals;
    *(_QWORD *)(a2 + 88) = v8;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(v9, qword_1C00113F0, 0LL);
    *(_BYTE *)(a1 + 1145) = 0;
    *(_QWORD *)(a2 + 96) = AcpiCStateIsHalted;
    v10 = 0;
    *(_DWORD *)(a2 + 112) = 0;
    *(_QWORD *)(a2 + 104) = AcpiCStateIsHalted;
    *(_BYTE *)(a2 + 16) = 1;
    for ( *(_QWORD *)(a2 + 72) = *(_QWORD *)(v3 + 8); v10 < *(_DWORD *)(v3 + 16); ++v10 )
    {
      v11 = 32LL * v10;
      v12 = 88LL * v10 + v5 + 64;
      v13 = 80LL * v10;
      *(_DWORD *)(v11 + a2 + 124) = 10 * *(_DWORD *)(v13 + v3 + 28);
      v14 = *(_DWORD *)(v13 + v3 + 24);
      *(_DWORD *)(v11 + a2 + 120) |= 0x81u;
      *(_DWORD *)(v11 + a2 + 128) = 10 * v14;
      *(_OWORD *)(v11 + a2 + 136) = *(_OWORD *)(v13 + v3 + 88);
      v15 = DecodeAcpiIdleState(
              a1,
              (char *)(v13 + v3 + 48),
              0xFFFFFFFF,
              *(unsigned int *)(v13 + v3 + 36),
              0LL,
              (char *)&v19,
              &v17,
              v12);
      if ( v15 < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x80000u);
      else
        *(_DWORD *)(v11 + a2 + 120) = (4 * (v17 & 1)) | *(_DWORD *)(v11 + a2 + 120) & 0x7FFFFFF9 | (2
                                                                                                  * (v17 & 1 | (v19 << 30))) & 0xFFFFFFFB;
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v13 + v3 + 52);
      if ( v15 < 0 || (*(_DWORD *)(v13 + v3 + 32) & 1) == 0 )
        *(_DWORD *)(v11 + a2 + 120) |= 0x40000000u;
      v5 = v18;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113F0);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
