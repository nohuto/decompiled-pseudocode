/*
 * XREFs of LdrShutdownProcess @ 0x18006FA10
 * Callers:
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     RtlProcessFlsData @ 0x180070090 (RtlProcessFlsData.c)
 *     sub_1800703F8 @ 0x1800703F8 (sub_1800703F8.c)
 *     RtlDetectHeapLeaks @ 0x180070460 (RtlDetectHeapLeaks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rbx
  PPEB ProcessEnvironmentBlock; // rdi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  PVOID FlsData; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rbx
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
  if ( !byte_18015B388 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (PWCH)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5921,
        (unsigned int)"LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_18015B390 = (__int64)v0->ClientId.UniqueThread;
    byte_18015B388 = 1;
    if ( byte_18015BF54 )
      ((void (*)(void))(__ROR8__(qword_18016B1F0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( (dword_180158674 & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v4 = (__int64 *)qword_18015B378;
      while ( v4 != &qword_18015B370 )
      {
        v5 = v4 - 4;
        v4 = (__int64 *)v4[1];
        v6 = v5[7];
        if ( v6 && (v5[13] & 0x80000) != 0 )
        {
          v8 = 72LL;
          v9 = 1;
          memset(v10, 0, sizeof(v10));
          RtlActivateActivationContextUnsafeFast((__int64)&v8, v5[17]);
          if ( *((_WORD *)v5 + 55) )
            sub_18006FF7C(0LL, v5);
          sub_180043C64(v6, v5[6], 0);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
        }
      }
      if ( *(_WORD *)(qword_18015AE50 + 110) )
      {
        v11 = 72LL;
        v12 = 1;
        memset(v13, 0, sizeof(v13));
        RtlActivateActivationContextUnsafeFast((__int64)&v11, *(_QWORD *)(qword_18015AE50 + 136));
        sub_18006FF7C(0LL, qword_18015AE50);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
      }
      RtlDetectHeapLeaks();
    }
    sub_1800703F8();
  }
}
