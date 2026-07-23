/*
 * XREFs of sub_180062A14 @ 0x180062A14
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x180062AD0 (RtlCreateEnvironmentEx.c)
 *     sub_180062CC4 @ 0x180062CC4 (sub_180062CC4.c)
 *     sub_180063814 @ 0x180063814 (sub_180063814.c)
 *     sub_180063838 @ 0x180063838 (sub_180063838.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS sub_180062A14()
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
  PVOID v1; // rbp
  size_t v2; // rdi
  void *v3; // rax
  PVOID v4; // rsi
  NTSTATUS result; // eax
  PVOID Environment; // [rsp+30h] [rbp+8h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  if ( v1 )
  {
    v2 = sub_180063838(ProcessParameters->Environment, 1LL);
    v3 = (void *)sub_180063814(v2);
    v4 = v3;
    if ( !v3 )
      return -1073741670;
    memmove(v3, v1, v2);
    goto LABEL_4;
  }
  v2 = 4LL;
  result = RtlCreateEnvironmentEx(0LL, &Environment, 4u);
  if ( result >= 0 )
  {
    v4 = Environment;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = v2;
    memset(dword_18015BAC0, 0, 0x468uLL);
    sub_180062CC4();
    return 0;
  }
  return result;
}
