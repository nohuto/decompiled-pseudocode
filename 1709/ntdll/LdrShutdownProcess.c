/*
 * XREFs of LdrShutdownProcess @ 0x180076200
 * Callers:
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180031254 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     RtlProcessFlsData @ 0x180076430 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180076798 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180076800 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-A8h] BYREF
  int v9; // [rsp+58h] [rbp-A0h]
  _BYTE v10[56]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-58h] BYREF
  int v12; // [rsp+A8h] [rbp-50h]
  _BYTE v13[56]; // [rsp+B0h] [rbp-48h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_18015F3E8 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5890,
        (unsigned int)"LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_18015F3F0 = (__int64)v0->ClientId.UniqueThread;
    byte_18015F3E8 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = (__int64 *)qword_18015F3D8;
      while ( v4 != &qword_18015F3D0 )
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
            LdrpCallTlsInitializers(0, v5);
          LdrpCallInitRoutine(v6, *(_QWORD *)(v5 + 48), 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v11 = 72LL;
        v12 = 1;
        memset(v13, 0, sizeof(v13));
        RtlActivateActivationContextUnsafeFast((__int64)&v11, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
      }
      RtlDetectHeapLeaks();
    }
    SbCleanupTrace();
  }
}
