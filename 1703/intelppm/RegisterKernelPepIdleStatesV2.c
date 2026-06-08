/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C002CE28
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002FA0 (RegisterKernelIdleStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C00017F0 (DecodeAcpiIdleState.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0001BC0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r15
  unsigned int *v5; // r12
  bool IsAnyHypervisorPresent; // al
  unsigned int v9; // ebx
  void *v10; // rcx
  PWDF_DRIVER_GLOBALS v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  int *v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // r15
  __int128 v17; // xmm0
  char *v18; // rsi
  _BYTE *v19; // r10
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  char v31[4]; // [rsp+40h] [rbp-40h] BYREF
  int v32; // [rsp+44h] [rbp-3Ch]
  unsigned int v33; // [rsp+48h] [rbp-38h]
  __int64 v34; // [rsp+50h] [rbp-30h]
  _QWORD v35[2]; // [rsp+58h] [rbp-28h] BYREF
  int v36; // [rsp+68h] [rbp-18h]

  v3 = *(unsigned int **)(a1 + 1120);
  v5 = *(unsigned int **)(a1 + 496);
  v33 = *v3;
  *(_QWORD *)(a2 + 40) = PepIdlePreselect;
  *(_BYTE *)(a2 + 18) = 1;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  *(_BYTE *)(a2 + 16) = 1;
  v9 = 0;
  v10 = PepIdleTest;
  *(_DWORD *)(a2 + 112) = 0;
  *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
  if ( IsAnyHypervisorPresent )
    v10 = PepIdleVmTest;
  *(_QWORD *)(a2 + 48) = v10;
  v11 = WdfDriverGlobals;
  *(_QWORD *)(a2 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleCompleteV2;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  v12 = WdfFunctions_01015;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v12 + 2504))(v11, qword_1C0015DA0, 0LL);
  *(_BYTE *)(a1 + 1145) = 0;
  v35[1] = 0x100000000LL;
  v35[0] = 127LL;
  v36 = 0;
  v32 = 0;
  if ( !v33 )
    goto LABEL_26;
  v13 = a3 + 64;
  v34 = 0LL;
  v14 = (int *)(a2 + 120);
  v15 = 0LL;
  v16 = v3 + 1;
  while ( 1 )
  {
    v17 = *(_OWORD *)(v15 + *(_QWORD *)(a1 + 1128));
    v31[0] = 0;
    *((_OWORD *)v14 + 1) = v17;
    if ( (*v16 & 0x78) == 0 )
    {
      v21 = v16[1];
LABEL_21:
      v14[1] = v21;
      goto LABEL_22;
    }
    if ( !v5 || !*v5 )
      goto LABEL_25;
    v18 = (char *)v35;
    v19 = v5 + 4;
    v20 = 0;
    do
    {
      if ( *v19 == ((*v16 >> 3) & 0xF) )
        v18 = (char *)&v5[4 * v20 + 1 + v20];
      ++v20;
      v19 += 20;
    }
    while ( v20 < *v5 );
    if ( v18 != (char *)v35 )
      *(_QWORD *)v13 = v18;
    if ( (int)DecodeAcpiIdleState(a1, v18, (unsigned __int8)v18[12], 0LL, 0LL, v31, 0LL, v13) < 0 )
      break;
    if ( !*(_QWORD *)v13 && (*v16 & 0x78u) > 8 )
    {
      *v14 |= 0x40000000u;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    v21 = v16[1];
    if ( v21 != -1 )
      goto LABEL_21;
    v14[1] = 10 * *((unsigned __int16 *)v18 + 7);
LABEL_22:
    *(_BYTE *)(v13 + 81) = (*v16 & 0x200) != 0;
    v13 += 88LL;
    *v14 ^= (*v16 ^ *v14) & 0x78;
    v22 = *v14;
    v14[2] = v16[2];
    *v14 ^= (*v16 ^ v22) & 0x80;
    v23 = *v14 ^ (*v16 ^ *v14) & 0x100;
    *v14 = v23;
    v24 = v23 ^ (*v16 ^ v23) & 1;
    v25 = (unsigned __int8)v31[0];
    *v14 = v24;
    v26 = v24 ^ (*v16 ^ v24) & 2;
    *v14 = v26;
    v27 = *v16 & 4;
    v16 += 3;
    v28 = v27 | v26 & 0x7FFFFFFB | (v25 << 31);
    v29 = v32;
    *v14 = v28;
    v14 += 8;
    v15 = v34 + 16;
    v32 = v29 + 1;
    v34 += 16LL;
    if ( v29 + 1 >= v33 )
      goto LABEL_26;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
LABEL_25:
  v9 = -1073741823;
LABEL_26:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015DA0);
  return v9;
}
