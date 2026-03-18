/*
 * XREFs of RtlLookupFunctionEntry @ 0x1400D5980
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     RtlInitializeHistoryTable @ 0x1408524A4 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400D58A0 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned __int64 v9; // r9
  PRUNTIME_FUNCTION result; // rax
  char *v11; // r10
  struct _RUNTIME_FUNCTION *v12; // r11
  __int64 v13; // r9
  unsigned __int128 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  struct _RUNTIME_FUNCTION *v17; // rdx
  bool v18; // sf
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 Count; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  DWORD LocalHint; // edx
  DWORD v27; // r10d
  DWORD64 v28; // r9
  PRUNTIME_FUNCTION FunctionEntry; // r8
  __int64 UnwindData; // rax
  int *v31; // rdx
  unsigned __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = &RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140419915];
    result = (PRUNTIME_FUNCTION)*((_QWORD *)v31 + 4);
    if ( result )
    {
      v32 = *((_QWORD *)v31 + 3);
      if ( ControlPc >= v32 + result->BeginAddress && ControlPc < v32 + result->EndAddress )
      {
        *ImageBase = v32;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_10;
  if ( ControlPc >= qword_140419920
    || ControlPc < qword_140419918
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_37:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v27 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v28 = HistoryTable->Entry[v27].ImageBase;
          FunctionEntry = HistoryTable->Entry[v27].FunctionEntry;
          if ( ControlPc >= v28 + FunctionEntry->BeginAddress && ControlPc < v28 + FunctionEntry->EndAddress )
            break;
          if ( ++v27 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v28;
        UnwindData = FunctionEntry->UnwindData;
        if ( (UnwindData & 1) != 0 )
        {
          FunctionEntry = (PRUNTIME_FUNCTION)(v28 + UnwindData - 1);
          if ( v28 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)FunctionEntry & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
        return FunctionEntry;
      }
    }
LABEL_10:
    if ( ControlPc < *(&xmmword_140418020 + 1) || ControlPc >= *(&xmmword_140418020 + 1) + (unsigned int)qword_140418030 )
    {
      v11 = (char *)RtlpxLookupFunctionTable(ControlPc, (__int64 *)&v33);
    }
    else
    {
      v11 = (char *)xmmword_140418020;
      v33 = *(_OWORD *)&xmmword_140418020;
      v34 = qword_140418030;
    }
    v12 = 0LL;
    if ( v11 )
    {
      v13 = *((_QWORD *)&v33 + 1);
      v14 = HIDWORD(v34) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v33 + 1);
      v15 = *((_QWORD *)&v14 + 1) >> 3;
      if ( (unsigned int)(*((_QWORD *)&v14 + 1) >> 3) )
      {
        v16 = ControlPc - v13;
        v17 = (struct _RUNTIME_FUNCTION *)&v11[12 * (unsigned int)(v15 - 1)];
        if ( v16 < v17->BeginAddress )
        {
          v18 = (int)v15 - 2 < 0;
          v19 = v15 - 2;
          v20 = 0;
          if ( !v18 )
          {
            do
            {
              v21 = (v19 + v20) >> 1;
              v17 = (struct _RUNTIME_FUNCTION *)&v11[12 * v21];
              if ( v16 < v17->BeginAddress )
              {
                v19 = v21 - 1;
              }
              else
              {
                if ( v16 < v17[1].BeginAddress )
                  break;
                v20 = v21 + 1;
              }
            }
            while ( v19 >= v20 );
          }
        }
        if ( v16 >= v17->BeginAddress && v16 < v17->EndAddress )
          v12 = v17;
      }
      if ( !v12 )
        return v12;
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
            v23 = *ImageBase + v12->BeginAddress;
            v24 = *ImageBase + v12->EndAddress;
            if ( v23 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v23;
            if ( v24 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v24;
          }
        }
      }
    }
    if ( v12 )
    {
      v25 = v12->UnwindData;
      if ( (v25 & 1) != 0 )
      {
        v12 = (struct _RUNTIME_FUNCTION *)(v25 + *ImageBase - 1);
        if ( *ImageBase <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v12 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v12;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_37;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
