/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18004BA60
 * Callers:
 *     RtlCreateEnvironment @ 0x18004B3D0 (RtlCreateEnvironment.c)
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004C724 @ 0x18004C724 (sub_18004C724.c)
 *     sub_18004C748 @ 0x18004C748 (sub_18004C748.c)
 *     RtlMultiByteToUnicodeN @ 0x18004C7B0 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x1800797A0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rsi
  int v6; // r12d
  int v7; // ebp
  int v8; // r8d
  unsigned int v9; // ebp
  int v10; // r15d
  size_t EnvironmentSize; // rbx
  void *v12; // rdi
  int v13; // eax
  int v14; // ebx
  _DWORD *v16; // rax
  bool v17; // cc
  int v18; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    v7 = a3 & 1;
    goto LABEL_5;
  }
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    return 3221225713LL;
LABEL_5:
  if ( !Src )
  {
    v7 = a3 & 1;
    if ( (a3 & 1) == 0 )
    {
      v8 = a3 & 4;
      goto LABEL_7;
    }
    return 3221225520LL;
  }
  v8 = a3 & 4;
  if ( v8 )
    return 3221225520LL;
LABEL_7:
  if ( v8 )
    goto LABEL_25;
  if ( Src )
  {
    v9 = v7 ^ 1;
    v10 = 0;
    EnvironmentSize = sub_18004C748(Src, v9);
    goto LABEL_10;
  }
  v9 = 1;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_25;
  while ( 1 )
  {
LABEL_10:
    v12 = (void *)sub_18004C724(EnvironmentSize);
    if ( !v12 )
      return (unsigned int)-1073741670;
    if ( v10 != 1 )
      goto LABEL_12;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v17 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v17 )
    {
LABEL_12:
      if ( v9 == 1 )
      {
        memmove(v12, Environment, EnvironmentSize);
        if ( v10 == 1 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_20:
        *a2 = v12;
        return 0LL;
      }
      if ( EnvironmentSize > 0xFFFFFFFF )
      {
        v14 = -2147483643;
      }
      else
      {
        v18 = EnvironmentSize >> 1;
        if ( v6 )
          v13 = RtlOemToUnicodeN((_DWORD)v12, EnvironmentSize, 0, (_DWORD)Environment, v18);
        else
          v13 = RtlMultiByteToUnicodeN((_DWORD)v12, EnvironmentSize, 0, (_DWORD)Environment, v18);
        v14 = v13;
      }
      if ( v14 >= 0 )
        goto LABEL_20;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
      return (unsigned int)v14;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
LABEL_25:
  v16 = (_DWORD *)sub_18004C724(4LL);
  if ( !v16 )
    return 3221225626LL;
  *v16 = 0;
  *a2 = v16;
  return 0LL;
}
