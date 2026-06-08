/*
 * XREFs of DecodeAcpiIdleState @ 0x1C00045E0
 * Callers:
 *     RegisterKernelLpiStates @ 0x1C001C6CC (RegisterKernelLpiStates.c)
 *     DecodeAcpi2CState @ 0x1C0022CE8 (DecodeAcpi2CState.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002DE9C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0003994 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0026A10 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        char *a6,
        char *a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(); // r14
  char v9; // r12
  __int64 v12; // r10
  unsigned int v13; // r15d
  char v14; // cl
  const char *v15; // rdx
  char v16; // r11
  unsigned __int16 v17; // r9
  int v18; // edx
  __int64 v19; // xmm1_8
  void (__fastcall __noreturn *v20)(); // rcx
  int v21; // eax
  __int64 (__fastcall *v22)(); // r8
  int v23; // eax
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+68h] [rbp-8h]

  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v12 = a1;
  v13 = -1073741823;
  if ( qword_1C0011558 )
  {
    v13 = qword_1C0011558(a1);
    if ( (v13 & 0x80000000) == 0 )
      return v13;
    v12 = a1;
  }
  v14 = *a2;
  v15 = "C";
  v16 = 1;
  if ( a3 == -1 )
    v15 = "LPI";
  if ( v14 == 127 )
  {
    if ( a2[1] == 1 )
    {
      if ( a2[2] != 1 )
      {
        v17 = 13;
LABEL_36:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v17,
          (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
          v15);
        return v13;
      }
      v18 = *((_DWORD *)a2 + 2);
      v19 = *(_QWORD *)a2;
      v26 = *(_QWORD *)a2;
      if ( HIDWORD(v26) )
      {
        LODWORD(v26) = 134219777;
        v18 = 0;
        v19 = v26;
      }
      v20 = IoHaltC1Idle;
      v25 = 0x10000000000000LL;
      v8 = DecodeRegisterContext;
      LOWORD(v25) = WORD2(v26);
    }
    else
    {
      if ( a3 != 1 && (a3 != -1 || (*(_QWORD *)(v12 + 264) & 0xE0000000000LL) == 0) )
      {
        v17 = 14;
        goto LABEL_36;
      }
      v18 = *((_DWORD *)a2 + 2);
      v20 = C1Idle;
      v19 = *(_QWORD *)a2;
    }
    v9 = 1;
    goto LABEL_25;
  }
  if ( v14 != 1 )
  {
    v17 = 16;
    goto LABEL_36;
  }
  if ( a3 <= 1 )
  {
    v17 = 15;
    goto LABEL_36;
  }
  if ( a3 == 2 || a3 == -1 )
  {
    v23 = *((_DWORD *)a2 + 2);
    v26 = *(_QWORD *)a2;
    v27 = v23;
    AcpiTranslateAccessSize(&v26, v15);
    v18 = v27;
    v20 = (void (__fastcall __noreturn *)())C2Idle;
    v19 = v26;
    v8 = DecodeRegisterContext;
    v25 = 0x420000000000000LL;
    LOWORD(v25) = WORD2(v26);
LABEL_25:
    v22 = 0LL;
    goto LABEL_26;
  }
  v21 = *((_DWORD *)a2 + 2);
  v26 = *(_QWORD *)a2;
  v27 = v21;
  AcpiTranslateAccessSize(&v26, v15);
  v18 = v27;
  v22 = C3IdleCheck;
  v19 = v26;
  v20 = (void (__fastcall __noreturn *)())C3Idle;
  v8 = DecodeRegisterContext;
  v25 = 0xB20000000000000LL;
  LOWORD(v25) = WORD2(v26);
LABEL_26:
  v13 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 32) = v19;
    *(_DWORD *)(a8 + 40) = v18;
    *(_BYTE *)(a8 + 80) = v16;
    *(_QWORD *)(a8 + 16) = v22;
    *(_QWORD *)(a8 + 24) = v20;
    *(_QWORD *)(a8 + 64) = v8;
  }
  if ( a6 )
    *a6 = v9;
  if ( a7 )
    *a7 = v16;
  if ( a5 )
    *a5 = v25;
  return v13;
}
