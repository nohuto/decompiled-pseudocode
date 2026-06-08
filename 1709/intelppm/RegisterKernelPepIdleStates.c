/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C003037C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002DA0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     DecodeAcpiIdleState @ 0x1C0003868 (DecodeAcpiIdleState.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     PepRegisterSpmSettings @ 0x1C0023338 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  SIZE_T v11; // r15
  PVOID PoolWithTag; // rax
  int *v13; // rdi
  char **v14; // r15
  _DWORD *v15; // rbx
  char *v16; // rcx
  unsigned int v17; // r8d
  _BYTE *v18; // r10
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  char v27[4]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-75h]
  unsigned int v29; // [rsp+48h] [rbp-71h]
  _QWORD v30[14]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v31[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v32; // [rsp+D0h] [rbp+17h]

  v6 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  if ( !dword_1C0019B08 || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    memset(v30, 0, 0x68uLL);
    LODWORD(v30[0]) = 52;
    v30[5] = PepQueryPlatformStateResidency;
    HIDWORD(v30[0]) = dword_1C0019B08;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0019808)(v30);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  if ( v7 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x10u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
      v7);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1112);
  v9 = *(unsigned int **)(a1 + 496);
  v29 = *v8;
  v10 = v8[1];
  if ( v10 )
  {
    v11 = 16 * v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
  }
  *(_BYTE *)(a2 + 18) = 0;
  *(_QWORD *)(a2 + 24) = PepIdlePrepare;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleComplete;
  *(_QWORD *)(a2 + 32) = PepIdleCancel;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = v8[1];
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)(a3 + 40) = v8[1];
  v31[1] = 0x100000000LL;
  v31[0] = 127LL;
  v32 = 0;
  v28 = 0;
  if ( !v29 )
  {
LABEL_28:
    *(_QWORD *)(a3 + 48) = v6;
    v7 = 0;
    v6 = 0LL;
    goto LABEL_29;
  }
  v13 = (int *)(a2 + 120);
  v14 = (char **)(a3 + 64);
  v15 = v8 + 2;
  while ( 1 )
  {
    v27[0] = 0;
    if ( ((*v15 >> 3) & 0xF) != 0 )
      break;
LABEL_27:
    v14 += 11;
    *v13 ^= (*v15 ^ *v13) & 0x78;
    v19 = *v13 ^ (*v15 ^ *v13) & 1;
    *v13 = v19;
    v20 = v19 ^ (*v15 ^ v19) & 2;
    v21 = (unsigned __int8)v27[0];
    *v13 = v20;
    v22 = v20 & 0x7FFFFFFB | (v21 << 31);
    v23 = *v15++ & 4;
    v24 = v23 | v22;
    v25 = v28 + 1;
    *v13 = v24;
    v13 += 8;
    v28 = v25;
    if ( v25 >= v29 )
      goto LABEL_28;
  }
  if ( !v9 || !*v9 )
    goto LABEL_33;
  v16 = (char *)v31;
  v17 = 0;
  v18 = v9 + 4;
  do
  {
    if ( *v18 == ((*v15 >> 3) & 0xF) )
      v16 = (char *)&v9[4 * v17 + 1 + v17];
    ++v17;
    v18 += 20;
  }
  while ( v17 < *v9 );
  if ( v16 != (char *)v31 )
    *v14 = v16;
  if ( (int)DecodeAcpiIdleState(a1, v16, (unsigned __int8)v16[12], 0LL, 0LL, v27, 0LL, (__int64)v14) >= 0 )
  {
    if ( !*v14 && (*v15 & 0x78u) > 8 )
    {
      *v13 |= 0x40000000u;
      v14[2] = 0LL;
      v14[3] = 0LL;
    }
    goto LABEL_27;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
LABEL_33:
  v7 = -1073741823;
LABEL_29:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
