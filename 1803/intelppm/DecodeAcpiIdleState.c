/*
 * XREFs of DecodeAcpiIdleState @ 0x1C0002420
 * Callers:
 *     DecodeAcpi2CState @ 0x1C00203D0 (DecodeAcpi2CState.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B0F4 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterKernelLpiStates @ 0x1C003124C (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00350D8 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000374C (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0022A14 (AcpiTranslateAccessSize.c)
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
  void (__fastcall *v8)(_QWORD *, __int64, _QWORD *); // r14
  char v9; // r12
  __int64 v12; // r10
  unsigned int v13; // r15d
  char v15; // cl
  const char *v16; // rdx
  char v17; // r11
  int v18; // r9d
  int v19; // edx
  __int64 v20; // xmm1_8
  void (__fastcall __noreturn *v21)(); // rcx
  int v22; // eax
  __int64 (__fastcall *v23)(); // r8
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+68h] [rbp-8h]

  v8 = 0LL;
  v26 = 0LL;
  v9 = 0;
  v12 = a1;
  v13 = -1073741823;
  if ( qword_1C001A718 )
  {
    v13 = qword_1C001A718(a1);
    if ( (v13 & 0x80000000) == 0 )
      return v13;
    v12 = a1;
  }
  v15 = *a2;
  v16 = "LPI";
  v17 = 1;
  if ( a3 != -1 )
    v16 = "C";
  if ( v15 == 127 )
  {
    if ( a2[1] == 1 )
    {
      if ( a2[2] != 1 )
      {
        v18 = 13;
LABEL_37:
        v25 = (__int64)v16;
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v16,
          1,
          v18,
          (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
          v25);
        return v13;
      }
      v19 = *((_DWORD *)a2 + 2);
      v20 = *(_QWORD *)a2;
      v27 = *(_QWORD *)a2;
      if ( HIDWORD(v27) )
      {
        LODWORD(v27) = 134219777;
        v19 = 0;
        v20 = v27;
      }
      v21 = IoHaltC1Idle;
      v26 = 0x10000000000000LL;
      v8 = DecodeRegisterContext;
      LOWORD(v26) = WORD2(v27);
    }
    else
    {
      if ( a3 != 1 && (a3 != -1 || (*(_QWORD *)(v12 + 264) & 0xE0000000000LL) == 0) )
      {
        v18 = 14;
        goto LABEL_37;
      }
      v19 = *((_DWORD *)a2 + 2);
      v21 = C1Idle;
      v20 = *(_QWORD *)a2;
    }
    v9 = 1;
    goto LABEL_26;
  }
  if ( v15 != 1 )
  {
    v18 = 16;
    goto LABEL_37;
  }
  if ( a3 <= 1 )
  {
    v18 = 15;
    goto LABEL_37;
  }
  if ( a3 == 2 || a3 == -1 )
  {
    v24 = *((_DWORD *)a2 + 2);
    v27 = *(_QWORD *)a2;
    v28 = v24;
    AcpiTranslateAccessSize(&v27, v16);
    v19 = v28;
    v21 = (void (__fastcall __noreturn *)())C2Idle;
    v20 = v27;
    v8 = DecodeRegisterContext;
    v26 = 0x420000000000000LL;
    LOWORD(v26) = WORD2(v27);
LABEL_26:
    v23 = 0LL;
    goto LABEL_27;
  }
  v22 = *((_DWORD *)a2 + 2);
  v27 = *(_QWORD *)a2;
  v28 = v22;
  AcpiTranslateAccessSize(&v27, v16);
  v19 = v28;
  v23 = C3IdleCheck;
  v20 = v27;
  v21 = (void (__fastcall __noreturn *)())C3Idle;
  v8 = DecodeRegisterContext;
  v26 = 0xB20000000000000LL;
  LOWORD(v26) = WORD2(v27);
LABEL_27:
  v13 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 32) = v20;
    *(_DWORD *)(a8 + 40) = v19;
    *(_BYTE *)(a8 + 80) = v17;
    *(_QWORD *)(a8 + 16) = v23;
    *(_QWORD *)(a8 + 24) = v21;
    *(_QWORD *)(a8 + 64) = v8;
  }
  if ( a6 )
    *a6 = v9;
  if ( a7 )
    *a7 = v17;
  if ( a5 )
    *a5 = v26;
  return v13;
}
