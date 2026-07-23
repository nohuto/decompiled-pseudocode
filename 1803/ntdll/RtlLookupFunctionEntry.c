/*
 * XREFs of RtlLookupFunctionEntry @ 0x18000EBA0
 * Callers:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     sub_18007A78C @ 0x18007A78C (sub_18007A78C.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __report_gsfailure @ 0x18008B130 (__report_gsfailure.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_18006AC08 @ 0x18006AC08 (sub_18006AC08.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // ecx
  unsigned int v7; // r9d
  unsigned int *v8; // r8
  unsigned __int64 v9; // rdx
  PRUNTIME_FUNCTION result; // rax
  __int64 v11; // rsi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // rbp
  unsigned int v13; // edx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v16; // r10
  int v17; // r8d
  int i; // r9d
  int v19; // eax
  __int64 Count; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  DWORD LocalHint; // r8d
  DWORD v25; // edx
  DWORD64 v26; // r9
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+28h] [rbp-20h]
  unsigned int v31; // [rsp+34h] [rbp-14h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = (PRUNTIME_FUNCTION)*((_QWORD *)&LdrSystemDllInitBlock
                                + 2 * BYTE5(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction)
                                + 40);
    if ( result )
    {
      v29 = *((_QWORD *)&LdrSystemDllInitBlock + 2 * BYTE5(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction) + 39);
      if ( ControlPc >= v29 + result->BeginAddress && ControlPc < v29 + result->EndAddress )
      {
        *ImageBase = v29;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_10;
  if ( ControlPc < qword_18016F3F8
    || ControlPc >= qword_18016F400
    || (GlobalHint = HistoryTable->GlobalHint,
        v7 = GlobalHint,
        GlobalHint >= LODWORD(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction)) )
  {
LABEL_35:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v25 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v26 = HistoryTable->Entry[v25].ImageBase;
          FunctionEntry = HistoryTable->Entry[v25].FunctionEntry;
          if ( ControlPc >= v26 + FunctionEntry->BeginAddress && ControlPc < v26 + FunctionEntry->EndAddress )
            break;
          if ( ++v25 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v26;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v26 - 1);
        return FunctionEntry;
      }
    }
LABEL_10:
    if ( ControlPc < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
    {
      v11 = sub_18000EF10((PVOID)ControlPc);
    }
    else
    {
      v30 = *((_QWORD *)&xmmword_18016F4E0 + 1);
      v11 = xmmword_18016F4E0;
      v31 = HIDWORD(qword_18016F4F0);
    }
    if ( v11 )
    {
      v12 = 0LL;
      *ImageBase = v30;
      v13 = v31 / 0xC;
      if ( v31 / 0xC )
      {
        v14 = ControlPc - v30;
        v15 = *(unsigned int *)(v11 + 12LL * (v13 - 1));
        v16 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (v13 - 1));
        if ( v14 < v15 )
        {
          v17 = v13 - 2;
          for ( i = 0; v17 >= i; LODWORD(v15) = v16->BeginAddress )
          {
            v19 = (v17 + i) >> 1;
            v16 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * v19);
            if ( v14 >= v16->BeginAddress )
            {
              LODWORD(v15) = v16->BeginAddress;
              if ( v14 < v16[1].BeginAddress )
                break;
              i = v19 + 1;
            }
            else
            {
              v17 = v19 - 1;
            }
          }
        }
        if ( v14 >= (unsigned int)v15 && v14 < v16->EndAddress )
          v12 = v16;
      }
    }
    else
    {
      v12 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)sub_18006AC08(ControlPc, ImageBase);
    }
    if ( v12 )
    {
      if ( HistoryTable )
      {
        if ( !HistoryTable->Search )
        {
          Count = HistoryTable->Count;
          if ( (unsigned int)Count < 0xC )
          {
            HistoryTable->Count = Count + 1;
            HistoryTable->Entry[Count].ImageBase = *ImageBase;
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v12;
            v21 = *ImageBase + v12->BeginAddress;
            v22 = *ImageBase + v12->EndAddress;
            if ( v21 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v21;
            if ( v22 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v22;
          }
        }
      }
      v23 = v12->UnwindInfoAddress;
      if ( (v23 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v23 + *ImageBase - 1);
    }
    return v12;
  }
  while ( 1 )
  {
    v8 = (unsigned int *)*((_QWORD *)&LdrSystemDllInitBlock + 2 * v7 + 40);
    v9 = *((_QWORD *)&LdrSystemDllInitBlock + 2 * v7 + 39);
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= LODWORD(LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction) )
      goto LABEL_35;
  }
  result = (PRUNTIME_FUNCTION)*((_QWORD *)&LdrSystemDllInitBlock + 2 * v7 + 40);
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
