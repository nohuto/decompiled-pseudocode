/*
 * XREFs of sub_1800704C0 @ 0x1800704C0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_18007073C @ 0x18007073C (sub_18007073C.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800704C0(__int64 a1)
{
  __int64 v3; // rax
  _WORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  _DWORD *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rsi
  int v12; // ecx
  unsigned int v13; // r14d
  void *ProcessHeap; // rcx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 Heap; // [rsp+50h] [rbp-B8h]
  _WORD v23[4]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-A8h]
  _QWORD v25[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v26; // [rsp+80h] [rbp-88h]
  __int128 v27; // [rsp+88h] [rbp-80h]
  _QWORD v28[68]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v29[1024]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v20 = 0LL;
  memset(v28, 0, sizeof(v28));
  v19 = 0;
  v21 = 0LL;
  Heap = 0LL;
  if ( (ZwQueryInformationProcess(a1, 43LL, v28, 536LL, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = sub_18007073C(v28[1]);
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
          if ( (int)ZwOpenKey(&v20, 1LL, v25) >= 0 )
          {
            v8 = v20;
            if ( (int)RtlInitUnicodeStringEx((__int64)v23, (__int64)L"GlobalFlag") >= 0 )
            {
              v9 = v29;
              v10 = ZwQueryValueKey(v8, v23, 2LL, v29, 1024, &v18);
              if ( v10 < 0 )
              {
                if ( v10 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v13 = v18;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    v15 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v18);
                    v11 = v15;
                    if ( !v15 )
                      break;
                    v9 = (_DWORD *)v15;
                    v16 = ZwQueryValueKey(v8, v23, 2LL, v15, v13, &v18);
                    if ( v16 >= 0 )
                      goto LABEL_18;
                    if ( v16 != -2147483643 )
                      goto LABEL_34;
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
                  }
                }
              }
              else
              {
                v11 = 0LL;
LABEL_18:
                v12 = v9[1];
                if ( ((v12 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v12 == 4 )
                  {
                    if ( v9[2] == 4 )
                    {
                      v18 = 4;
                      v19 = v9[3];
                    }
                  }
                  else if ( v12 == 1 && ((unsigned __int8)&v19 & 3) == 0 )
                  {
                    v18 = 4;
                    v24 = v9 + 3;
                    v23[0] = *((_WORD *)v9 + 4);
                    v23[1] = *((_WORD *)v9 + 4);
                    RtlUnicodeStringToInteger(v23, 0LL, &v19);
                  }
                }
                else if ( v12 == 4 )
                {
                  v18 = v9[2];
                  v17 = v9[2];
                  if ( v17 <= 4 )
                    memmove(&v19, v9 + 3, v17);
                }
LABEL_34:
                if ( v11 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
              }
            }
          }
        }
      }
    }
  }
  if ( v20 )
  {
    ZwClose(v20);
    v20 = 0LL;
  }
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v19;
}
