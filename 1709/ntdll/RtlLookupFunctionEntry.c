/*
 * XREFs of RtlLookupFunctionEntry @ 0x180027C80
 * Callers:
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     RtlInitializeHistoryTable @ 0x18007C980 (RtlInitializeHistoryTable.c)
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180090CD0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180073AF4 (RtlpLookupDynamicFunctionEntry.c)
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
  DWORD LocalHint; // edx
  DWORD v12; // r9d
  DWORD64 v13; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  __int64 v16; // r10
  __int64 v17; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v18; // r11
  unsigned __int128 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v22; // rdx
  bool v23; // sf
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  __int64 Count; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_18;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18016F3E5 + 8];
    if ( result )
    {
      v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18016F3E5 + 6];
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_18;
  if ( ControlPc < qword_18016F3E8
    || ControlPc >= qword_18016F3F0
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_10:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v12 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v13 = HistoryTable->Entry[v12].ImageBase;
          FunctionEntry = HistoryTable->Entry[v12].FunctionEntry;
          if ( ControlPc >= v13 + FunctionEntry->BeginAddress && ControlPc < v13 + FunctionEntry->EndAddress )
            break;
          if ( ++v12 >= HistoryTable->Count )
            goto LABEL_18;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v13;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v13 - 1);
        return FunctionEntry;
      }
    }
LABEL_18:
    if ( ControlPc < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      v16 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v16 = xmmword_18016F4D0;
      v32 = xmmword_18016F4D0;
      v33 = qword_18016F4E0;
    }
    if ( v16 )
    {
      v17 = *((_QWORD *)&v32 + 1);
      v18 = 0LL;
      v19 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v20 = *((_QWORD *)&v19 + 1) >> 3;
      if ( (unsigned int)(*((_QWORD *)&v19 + 1) >> 3) )
      {
        v21 = ControlPc - v17;
        v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v16 + 12LL * (unsigned int)(v20 - 1));
        if ( v21 < v22->BeginAddress )
        {
          v23 = (int)v20 - 2 < 0;
          v24 = v20 - 2;
          v25 = 0;
          if ( !v23 )
          {
            do
            {
              v26 = (v24 + v25) >> 1;
              v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v16 + 12LL * v26);
              if ( v21 >= v22->BeginAddress )
              {
                if ( v21 < v22[1].BeginAddress )
                  break;
                v25 = v26 + 1;
              }
              else
              {
                v24 = v26 - 1;
              }
            }
            while ( v24 >= v25 );
          }
        }
        if ( v21 >= v22->BeginAddress && v21 < v22->EndAddress )
          v18 = v22;
      }
    }
    else
    {
      v18 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v18 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v18;
            v28 = *ImageBase + v18->BeginAddress;
            v29 = *ImageBase + v18->EndAddress;
            if ( v28 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v28;
            if ( v29 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v29;
          }
        }
      }
      v30 = v18->UnwindInfoAddress;
      if ( (v30 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v30 + *ImageBase - 1);
    }
    return v18;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_10;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
