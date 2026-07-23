/*
 * XREFs of LdrShutdownProcess @ 0x180047E60
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     RtlProcessFlsData @ 0x180048090 (RtlProcessFlsData.c)
 *     sub_1800483F8 @ 0x1800483F8 (sub_1800483F8.c)
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rbx
  PPEB ProcessEnvironmentBlock; // rdi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  PVOID FlsData; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-A8h] BYREF
  int v9; // [rsp+58h] [rbp-A0h]
  _BYTE v10[56]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-58h] BYREF
  int v12; // [rsp+A8h] [rbp-50h]
  _BYTE v13[56]; // [rsp+B0h] [rbp-48h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_18015C3A8 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (PWCH)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5915,
        (unsigned int)"LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_18015C3B0 = (__int64)v0->ClientId.UniqueThread;
    byte_18015C3A8 = 1;
    if ( byte_18015CFB4 )
      _guard_dispatch_icall_fptr();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( (dword_1801596D4 & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (dword_18016F29C & 1) != 0 )
    {
      v4 = (__int64 *)qword_18015C398;
      while ( v4 != &qword_18015C390 )
      {
        v5 = (__int64)(v4 - 4);
        v4 = (__int64 *)v4[1];
        v6 = *(_QWORD *)(v5 + 56);
        if ( v6 && (*(_DWORD *)(v5 + 104) & 0x80000) != 0 )
        {
          v8 = 72LL;
          v9 = 1;
          memset(v10, 0, sizeof(v10));
          RtlActivateActivationContextUnsafeFast((__int64)&v8, *(_QWORD *)(v5 + 136));
          if ( *(_WORD *)(v5 + 110) )
            sub_18003B5F8(0, v5);
          sub_18003B518(v6, *(_QWORD *)(v5 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
        }
      }
      if ( *(_WORD *)(qword_18015BF88 + 110) )
      {
        v11 = 72LL;
        v12 = 1;
        memset(v13, 0, sizeof(v13));
        RtlActivateActivationContextUnsafeFast((__int64)&v11, *(_QWORD *)(qword_18015BF88 + 136));
        sub_18003B5F8(0, qword_18015BF88);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
      }
      RtlDetectHeapLeaks();
    }
    sub_1800483F8();
  }
}
