/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x180076860
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     WerpPathTail @ 0x180076ADC (WerpPathTail.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  _WORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edi
  HANDLE v8; // rbx
  _DWORD *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned int v12; // r14d
  void *ProcessHeap; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 Heap; // [rsp+58h] [rbp-B0h]
  unsigned __int16 v23[4]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v24; // [rsp+68h] [rbp-A0h]
  _QWORD v25[3]; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-78h]
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v29[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  Handle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v19 = 0;
  v21 = 0LL;
  Heap = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      while ( *(_WORD *)(v3 + 2 * v5++ + 2) != 0 )
        ;
      v7 = 2 * v5 + 202;
      LOWORD(v21) = 0;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( Heap )
      {
        WORD1(v21) = v7;
        if ( (int)RtlAppendUnicodeToString(
                    (unsigned __int16 *)&v21,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v21, v4) >= 0 )
        {
          LODWORD(v25[0]) = 48;
          v25[2] = &v21;
          v25[1] = 0LL;
          v26 = 64;
          v27 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, v25) >= 0 )
          {
            v8 = Handle;
            if ( (int)RtlInitUnicodeStringEx((__int64)v23, (__int64)L"GlobalFlag") >= 0 )
            {
              v9 = v29;
              v10 = NtQueryValueKey(v8, v23, 2LL, v29, 1024, &v18);
              if ( v10 >= 0 )
              {
                v11 = 0LL;
LABEL_25:
                v16 = v9[1];
                if ( ((v16 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v16 == 4 )
                  {
                    if ( v9[2] == 4 )
                    {
                      v18 = 4;
                      v19 = v9[3];
                    }
                  }
                  else if ( v16 == 1 && ((unsigned __int8)&v19 & 3) == 0 )
                  {
                    v18 = 4;
                    v24 = v9 + 3;
                    v23[0] = *((_WORD *)v9 + 4);
                    v23[1] = *((_WORD *)v9 + 4);
                    RtlUnicodeStringToInteger(v23, 0, (int *)&v19);
                  }
                }
                else if ( v16 == 4 )
                {
                  v18 = v9[2];
                  v17 = v9[2];
                  if ( v17 <= 4 )
                    memmove(&v19, v9 + 3, v17);
                }
LABEL_35:
                if ( v11 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
              }
              else if ( v10 == -2147483643 )
              {
                while ( 1 )
                {
                  v12 = v18;
                  ProcessHeap = NtCurrentPeb()->ProcessHeap;
                  if ( !ProcessHeap )
                    break;
                  v14 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v18);
                  v11 = v14;
                  if ( !v14 )
                    break;
                  v9 = (_DWORD *)v14;
                  v15 = NtQueryValueKey(v8, v23, 2LL, v14, v12, &v18);
                  if ( v15 >= 0 )
                    goto LABEL_25;
                  if ( v15 != -2147483643 )
                    goto LABEL_35;
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v19;
}
