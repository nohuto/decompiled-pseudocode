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
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v17; // r11
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v20; // rdx
  bool v21; // sf
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int64 Count; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+28h] [rbp-20h]
  unsigned int v31; // [rsp+34h] [rbp-14h]

  if ( !HistoryTable )
    goto LABEL_18;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18016F3E5 + 8];
    if ( result )
    {
      v29 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18016F3E5 + 6];
      if ( ControlPc >= v29 + result->BeginAddress && ControlPc < v29 + result->EndAddress )
      {
        *ImageBase = v29;
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
      v16 = RtlpxLookupFunctionTable((PVOID)ControlPc);
    }
    else
    {
      v30 = *((_QWORD *)&xmmword_18016F4D0 + 1);
      v16 = xmmword_18016F4D0;
      v31 = HIDWORD(qword_18016F4E0);
    }
    if ( v16 )
    {
      v17 = 0LL;
      *ImageBase = v30;
      v18 = v31 / 0xC;
      if ( v31 / 0xC )
      {
        v19 = ControlPc - v30;
        v20 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v16 + 12LL * (v18 - 1));
        if ( v19 < v20->BeginAddress )
        {
          v21 = (int)(v18 - 2) < 0;
          v22 = v18 - 2;
          v23 = 0;
          if ( !v21 )
          {
            do
            {
              v24 = (v22 + v23) >> 1;
              v20 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v16 + 12LL * v24);
              if ( v19 >= v20->BeginAddress )
              {
                if ( v19 < v20[1].BeginAddress )
                  break;
                v23 = v24 + 1;
              }
              else
              {
                v22 = v24 - 1;
              }
            }
            while ( v22 >= v23 );
          }
        }
        if ( v19 >= v20->BeginAddress && v19 < v20->EndAddress )
          v17 = v20;
      }
    }
    else
    {
      v17 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v17 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v17;
            v26 = *ImageBase + v17->BeginAddress;
            v27 = *ImageBase + v17->EndAddress;
            if ( v26 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v26;
            if ( v27 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v27;
          }
        }
      }
      v28 = v17->UnwindInfoAddress;
      if ( (v28 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v28 + *ImageBase - 1);
    }
    return v17;
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
