/*
 * XREFs of sub_18004B9A4 @ 0x18004B9A4
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     sub_18004BC58 @ 0x18004BC58 (sub_18004BC58.c)
 *     sub_18004C724 @ 0x18004C724 (sub_18004C724.c)
 *     sub_18004C748 @ 0x18004C748 (sub_18004C748.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 sub_18004B9A4()
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
    v2 = sub_18004C748(ProcessParameters->Environment, 1LL);
    v3 = (void *)sub_18004C724(v2);
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
    memset(&unk_18015CB20, 0, 0x468uLL);
    sub_18004BC58();
    return 0LL;
  }
  return result;
}
