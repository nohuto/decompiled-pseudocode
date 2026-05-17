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

unsigned __int64 __fastcall sub_18007B108(char a1)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  int v5; // edi
  int v6; // eax
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  volatile signed __int32 *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  _BYTE v14[16]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&unk_18015AE60);
    v2 = qword_18015BAB0;
    if ( !qword_18015BAB0 )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)qword_18015BAB0);
    v3 = *(_DWORD *)(v2 + 16);
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    if ( !a1 )
      return v2;
    v5 = MEMORY[0x7FFE02DC];
    if ( (*(_BYTE *)(v2 + 40) & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v6 = ZwFsControlFile(*(_QWORD *)(v2 + 8), 0LL, 0LL, 0LL, v14, 589864, 0LL, 0, 0LL, 0);
    if ( v6 >= 0 )
    {
      if ( (*(_BYTE *)(v2 + 40) & 1) == 0 )
      {
        RtlEnterCriticalSection((__int64)&unk_18015AE60);
        *(_DWORD *)(v2 + 16) = v5;
        RtlLeaveCriticalSection((__int64)&unk_18015AE60);
      }
      return v2;
    }
    if ( v6 != -1073741806 && v6 != -1073741202 )
      return v2;
    v7 = 0;
    if ( (int)sub_18007B250(v2 + 24, *(unsigned __int16 *)(v2 + 26), &v15) < 0 )
    {
      v8 = *(unsigned __int16 *)(v2 + 26);
      v13 = *(_QWORD *)(v2 + 32);
      v12 = 6;
      if ( (int)sub_18007B250(&v12, v8, &v15) < 0 )
        return v2;
      v7 = 1;
    }
    v9 = v15;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)v15 = 2;
    RtlEnterCriticalSection((__int64)&unk_18015AE60);
    if ( qword_18015BAB0 == v2 )
      break;
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*(_QWORD *)(v2 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)v15;
    *(_DWORD *)v15 = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*(_QWORD *)(v15 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
  }
  qword_18015BAB0 = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v9 + 32);
  ProcessParameters->CurrentDirectory.Handle = *(void **)(v9 + 8);
  if ( v7 )
    sub_1800621E4(**(_WORD **)(v2 + 32));
  RtlLeaveCriticalSection((__int64)&unk_18015AE60);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*(_QWORD *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*(_QWORD *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return v15;
}
