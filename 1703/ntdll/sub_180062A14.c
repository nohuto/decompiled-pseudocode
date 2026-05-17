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

__int64 sub_180062A14()
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  size_t v2; // rdi
  void *v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    v2 = sub_180063838(ProcessParameters->Environment, 1LL);
    v3 = (void *)sub_180063814(v2);
    v4 = v3;
    if ( !v3 )
      return 3221225626LL;
    memmove(v3, Environment, v2);
    goto LABEL_4;
  }
  v2 = 4LL;
  result = RtlCreateEnvironmentEx(0LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = v2;
    memset(dword_18015BAC0, 0, 0x468uLL);
    sub_180062CC4();
    return 0LL;
  }
  return result;
}
