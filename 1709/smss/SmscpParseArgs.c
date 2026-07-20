/*
 * XREFs of SmscpParseArgs @ 0x140003174
 * Callers:
 *     SmscMain @ 0x140002038 (SmscMain.c)
 * Callees:
 *     SmpGetFirstSessionId @ 0x1400033EC (SmpGetFirstSessionId.c)
 *     SmscpSetupSharedSpace @ 0x140003414 (SmscpSetupSharedSpace.c)
 *     SmscpIsDebuggerPresent @ 0x1400134C8 (SmscpIsDebuggerPresent.c)
 */

__int64 __fastcall SmscpParseArgs(unsigned int a1, __int64 a2, int *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v4; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 result; // rax
  int FirstSessionId; // eax
  int v13; // edx
  ULONG v14; // ecx
  int v15; // eax
  int Length; // ecx
  WCHAR *Heap; // rax
  NTSTATUS v18; // eax
  const UNICODE_STRING *v19; // rdx
  struct _UNICODE_STRING *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  PCWSTR *v25; // rsi
  __int64 v26; // r14
  ULONG BufferSize; // ebx
  unsigned __int64 v28; // rcx
  WCHAR *v29; // rax
  int IsDebuggerPresent; // eax
  int v31; // eax
  ULONG v32; // r8d
  int SystemInformation[4]; // [rsp+30h] [rbp-10h] BYREF
  ULONG RetunedLength; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( a1 <= 2 )
    return 3221225711LL;
  *a3 = 0;
  v9 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v10 = wcstoul(*(const wchar_t **)(a2 + 16), 0LL, 16);
  result = SmscpSetupSharedSpace(v10, v9);
  if ( (int)result >= 0 )
  {
    FirstSessionId = SmpGetFirstSessionId();
    v13 = 0;
    if ( *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == FirstSessionId )
      v13 = 8;
    *a3 &= ~8u;
    *a3 |= v13;
    *a3 ^= (*a3 ^ (4 * *(_DWORD *)SmpMappedView)) & 4;
    v14 = 0;
    RetunedLength = 0;
    if ( a1 > 3 )
    {
      v21 = (_QWORD *)(a2 + 24);
      v22 = a1 - 3;
      do
      {
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(*v21 + 2 * v23) );
        ++v21;
        v14 += 2 * v23 + 2;
        RetunedLength = v14;
        --v22;
      }
      while ( v22 );
      if ( v14 )
      {
LABEL_11:
        Heap = (WCHAR *)RtlAllocateHeap(
                          *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                          SmBaseTag + 786432,
                          v14);
        a4->Buffer = Heap;
        if ( Heap )
        {
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          if ( (*(_BYTE *)a3 & 2) == 0 )
          {
            v24 = a1 - 1;
            if ( (unsigned int)v24 > 3 )
            {
              v25 = (PCWSTR *)(a2 + 24);
              v26 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v25);
                RtlAppendUnicodeToString(a4, L" ");
                ++v25;
                --v26;
              }
              while ( v26 );
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v24));
            return 0LL;
          }
          if ( (*(_BYTE *)a3 & 1) == 0 )
          {
            v19 = &SmpS0InitCmd;
            v20 = a4;
            if ( (*(_BYTE *)a3 & 8) == 0 )
              v19 = (const UNICODE_STRING *)&SmscpInitExecuteCmd;
            goto LABEL_18;
          }
          v18 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v18 != -2147483643 )
          {
LABEL_15:
            if ( v18 >= 0 )
            {
              v32 = RetunedLength & 0xFFFFFFFE;
              RetunedLength = v32;
              if ( v32 > 2 && !a4->Buffer[((unsigned __int64)v32 >> 1) - 1] )
              {
                v32 -= 2;
                RetunedLength = v32;
              }
              a4->Length = v32;
              RtlAppendUnicodeToString(a4, L" ");
              goto LABEL_17;
            }
LABEL_16:
            if ( (*(_BYTE *)a3 & 8) != 0
              && NtQuerySystemInformation(SystemFlagsInformation, SystemInformation, 4u, 0LL) >= 0
              && (SystemInformation[0] & 0x4000004) != 0 )
            {
              IsDebuggerPresent = SmscpIsDebuggerPresent();
              if ( IsDebuggerPresent >= 0 )
              {
                RtlAppendUnicodeStringToString(a4, &stru_140014C00);
                v31 = SystemInformation[0];
                if ( (SystemInformation[0] & 0x20000) != 0 )
                {
                  RtlAppendUnicodeStringToString(a4, &stru_140014BF0);
                  v31 = SystemInformation[0];
                }
                if ( (v31 & 0x4000000) != 0 )
                  RtlAppendUnicodeStringToString(a4, &stru_140014BE0);
              }
            }
LABEL_17:
            v19 = v4;
            v20 = a4;
LABEL_18:
            RtlAppendUnicodeStringToString(v20, v19);
            return 0LL;
          }
          BufferSize = RetunedLength;
          v28 = RetunedLength + v4->MaximumLength + 2LL;
          if ( v28 <= RetunedLength || v28 > 0xFFFE )
            goto LABEL_16;
          RetunedLength += v4->MaximumLength + 2;
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
          v29 = (WCHAR *)RtlAllocateHeap(
                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                           SmBaseTag + 786432,
                           RetunedLength);
          a4->Buffer = v29;
          if ( v29 )
          {
            a4->MaximumLength = RetunedLength;
            v18 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, v29, BufferSize, &RetunedLength);
            goto LABEL_15;
          }
        }
        return 3221225495LL;
      }
    }
    v15 = *a3;
    if ( (*a3 & 8) != 0 )
    {
      Length = SmpS0InitCmd.Length;
      if ( (v15 & 4) != 0 )
        goto LABEL_10;
      Length = SmpS0InitCmd.Length + 50;
      v4 = &SmpS0InitCmd;
    }
    else
    {
      if ( SmscpInitExecuteCmd )
      {
        Length = (unsigned __int16)SmscpInitExecuteCmd;
        goto LABEL_10;
      }
      Length = 74;
      v4 = (UNICODE_STRING *)&SmscpDefaultCmd;
    }
    *a3 = v15 | 1;
LABEL_10:
    *a3 |= 2u;
    v14 = Length + 2;
    RetunedLength = v14;
    goto LABEL_11;
  }
  return result;
}
