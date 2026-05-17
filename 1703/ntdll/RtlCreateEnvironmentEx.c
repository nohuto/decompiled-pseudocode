/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180062AD0
 * Callers:
 *     RtlCreateEnvironment @ 0x180062470 (RtlCreateEnvironment.c)
 *     sub_180062A14 @ 0x180062A14 (sub_180062A14.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlMultiByteToUnicodeN @ 0x180043840 (RtlMultiByteToUnicodeN.c)
 *     sub_180063814 @ 0x180063814 (sub_180063814.c)
 *     sub_180063838 @ 0x180063838 (sub_180063838.c)
 *     RtlOemToUnicodeN @ 0x18007C840 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  char v4; // di
  void *Environment; // rsi
  int v7; // r12d
  BOOL v8; // r15d
  unsigned __int64 EnvironmentSize; // rbx
  _WORD *v10; // rbp
  int v11; // eax
  int v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  unsigned int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = a3;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 || (a3 & 3) == 2 )
    return 3221225713LL;
  if ( Src )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_6;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
  if ( (a3 & 4) != 0 )
  {
LABEL_22:
    v14 = (_DWORD *)sub_180063814(4LL);
    if ( !v14 )
      return 3221225626LL;
    *v14 = 0;
    *a2 = v14;
    return 0LL;
  }
LABEL_6:
  if ( Src )
  {
    v7 = 0;
    v8 = (a3 & 1) == 0;
    EnvironmentSize = sub_180063838(Src, (a3 & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = (_WORD *)sub_180063814(EnvironmentSize);
    if ( !v10 )
      return (unsigned int)-1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
  }
  if ( v8 )
  {
    memmove(v10, Environment, EnvironmentSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_18:
    *a2 = v10;
    return 0LL;
  }
  if ( EnvironmentSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    v16 = EnvironmentSize >> 1;
    if ( (v4 & 2) != 0 )
      v11 = RtlOemToUnicodeN((_DWORD)v10, EnvironmentSize, 0, (_DWORD)Environment, v16);
    else
      v11 = RtlMultiByteToUnicodeN(v10, EnvironmentSize, 0LL, (unsigned __int8 *)Environment, v16);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
  return (unsigned int)v12;
}
