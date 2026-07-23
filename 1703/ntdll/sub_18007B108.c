/*
 * XREFs of sub_18007B108 @ 0x18007B108
 * Callers:
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18007AF78 @ 0x18007AF78 (sub_18007AF78.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B030 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800621E4 @ 0x1800621E4 (sub_1800621E4.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1800A5A20 (ZwFsControlFile.c)
 */

unsigned __int16 *__fastcall sub_18007B108(char a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // esi
  int v5; // edi
  NTSTATUS v6; // eax
  char v7; // bp
  __int64 v8; // rdx
  PVOID v9; // rdi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rsi
  volatile signed __int32 *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection(&stru_18015AE60);
    v2 = (unsigned __int16 *)qword_18015BAB0;
    if ( !qword_18015BAB0 )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)qword_18015BAB0);
    v3 = *((_DWORD *)v2 + 4);
    RtlLeaveCriticalSection(&stru_18015AE60);
    if ( !a1 )
      return v2;
    v5 = MEMORY[0x7FFE02DC];
    if ( (v2[20] & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v6 = ZwFsControlFile(*((HANDLE *)v2 + 1), 0LL, 0LL, 0LL, &IoStatusBlock, 0x90028u, 0LL, 0, 0LL, 0);
    if ( v6 >= 0 )
    {
      if ( (v2[20] & 1) == 0 )
      {
        RtlEnterCriticalSection(&stru_18015AE60);
        *((_DWORD *)v2 + 4) = v5;
        RtlLeaveCriticalSection(&stru_18015AE60);
      }
      return v2;
    }
    if ( v6 != -1073741806 && v6 != -1073741202 )
      return v2;
    v7 = 0;
    if ( (int)sub_18007B250(v2 + 12, v2[13], &BaseAddress) < 0 )
    {
      v8 = v2[13];
      v13 = *((_QWORD *)v2 + 4);
      v12 = 6;
      if ( (int)sub_18007B250(&v12, v8, &BaseAddress) < 0 )
        return v2;
      v7 = 1;
    }
    v9 = BaseAddress;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)BaseAddress = 2;
    RtlEnterCriticalSection(&stru_18015AE60);
    if ( qword_18015BAB0 == v2 )
      break;
    RtlLeaveCriticalSection(&stru_18015AE60);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*((HANDLE *)v2 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)BaseAddress;
    *(_DWORD *)BaseAddress = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*((HANDLE *)BaseAddress + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  qword_18015BAB0 = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v9 + 12);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = (PWCH)*((_QWORD *)v9 + 4);
  ProcessParameters->CurrentDirectory.Handle = (HANDLE)*((_QWORD *)v9 + 1);
  if ( v7 )
    sub_1800621E4(**((_WORD **)v2 + 4));
  RtlLeaveCriticalSection(&stru_18015AE60);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return (unsigned __int16 *)BaseAddress;
}
