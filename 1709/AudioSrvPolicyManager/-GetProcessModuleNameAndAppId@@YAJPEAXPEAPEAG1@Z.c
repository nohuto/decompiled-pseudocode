/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180012248
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800116F8 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180020C40 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(__int64 ProcessHandle, __int64 a2, unsigned __int16 **a3)
{
  unsigned __int128 v3; // rax
  unsigned __int16 *v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 **v6; // r14
  HANDLE v7; // r12
  NTSTATUS v8; // ecx
  signed int LastError; // eax
  int v10; // ebx
  unsigned __int16 **v11; // r8
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-38h]
  unsigned __int16 *v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int16 *v21; // [rsp+48h] [rbp-10h]
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int16 **v23; // [rsp+A8h] [rbp+50h]
  unsigned __int16 **v24; // [rsp+B0h] [rbp+58h]
  unsigned __int16 *v25; // [rsp+B8h] [rbp+60h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  v24 = a3;
  v23 = (unsigned __int16 **)*((_QWORD *)&v3 + 1);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v7 = (HANDLE)ProcessHandle;
  if ( !ProcessHandle )
  {
LABEL_19:
    v14 = _AllocStringWorker<CTCoAllocPolicy>(
            ProcessHandle,
            *((__int64 *)&v3 + 1),
            (const unsigned __int16 *)&word_18002D708,
            0LL,
            (__int64)ReturnLength,
            &v25);
    v4 = v25;
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_24;
LABEL_20:
    CallerIdentity::GetProcessAppId(v7, &v20, v11);
    v17 = v20;
    if ( !v20 )
    {
      v10 = _AllocStringWorker<CTCoAllocPolicy>(
              v16,
              v15,
              (const unsigned __int16 *)&word_18002D708,
              0LL,
              (__int64)ReturnLength,
              &v20);
      if ( v10 < 0 )
      {
        v5 = v20;
        goto LABEL_24;
      }
      v17 = v20;
    }
    *v23 = v4;
    v4 = 0LL;
    *v24 = v17;
    goto LABEL_24;
  }
  v8 = NtQueryInformationProcess((HANDLE)ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741820 )
  {
LABEL_4:
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v8);
    LastError = GetLastError();
    v10 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v10 = LastError;
    goto LABEL_24;
  }
  v6 = (unsigned __int16 **)LocalAlloc(0x40u, ProcessInformationLength);
  v10 = v6 == 0LL ? 0x8007000E : 0;
  if ( !v6 )
    goto LABEL_24;
  LODWORD(v3) = NtQueryInformationProcess(
                  v7,
                  ProcessImageFileName,
                  v6,
                  ProcessInformationLength,
                  &ProcessInformationLength);
  if ( (v3 & 0x80000000) != 0LL )
  {
    v8 = v3;
    goto LABEL_4;
  }
  v12 = -1LL;
  ProcessHandle = 2147942934LL;
  v13 = (unsigned __int64)*((unsigned __int16 *)v6 + 1) >> 1;
  v21 = v6[1];
  v25 = 0LL;
  if ( v13 + 1 >= v13 )
    v12 = v13 + 1;
  v10 = v13 + 1 < v13 ? 0x80070216 : 0;
  if ( v13 + 1 >= v13 )
  {
    v25 = 0LL;
    v3 = v12 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v12, 2uLL) )
    {
      *(_QWORD *)&v3 = LocalAlloc(0, 2 * v12);
      v25 = (unsigned __int16 *)v3;
      ProcessHandle = -(__int64)v3;
      v4 = (unsigned __int16 *)v3;
      v10 = (_QWORD)v3 == 0LL ? 0x8007000E : 0;
      if ( (_QWORD)v3 )
        StringCchCopyNExW((char *)v3, v12, v21, v13);
    }
    else
    {
      v10 = -2147024362;
    }
  }
  if ( v10 >= 0 )
  {
    if ( v4 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_24:
  LocalFree(v4);
  LocalFree(v5);
  LocalFree(v6);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v10);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 351, v10);
  }
  return (unsigned int)v10;
}
