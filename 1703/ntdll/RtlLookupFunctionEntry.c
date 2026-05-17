/*
 * XREFs of RtlLookupFunctionEntry @ 0x180034710
 * Callers:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     sub_18007DCD4 @ 0x18007DCD4 (sub_18007DCD4.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     __report_gsfailure @ 0x180095EF0 (__report_gsfailure.c)
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_1800749F4 @ 0x1800749F4 (sub_1800749F4.c)
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
  unsigned __int64 v21; // rbx
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
    v31 = *(_QWORD *)&dword_18016B3D0[4 * (unsigned __int8)byte_18016B3D5 + 6];
    result = *(PRUNTIME_FUNCTION *)&dword_18016B3D0[4 * (unsigned __int8)byte_18016B3D5 + 8];
    if ( result )
    {
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_18;
  if ( ControlPc < qword_18016B3D8
    || ControlPc >= qword_18016B3E0
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= dword_18016B3D0[0]) )
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
    if ( ControlPc < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      v16 = sub_180034A40(ControlPc, &v32);
    }
    else
    {
      v16 = xmmword_18016B4C0;
      v32 = xmmword_18016B4C0;
      v33 = qword_18016B4D0;
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
              if ( v21 < v22->BeginAddress )
              {
                v24 = v26 - 1;
              }
              else
              {
                if ( v21 < v22[1].BeginAddress )
                  break;
                v25 = v26 + 1;
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
      v18 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)sub_1800749F4(ControlPc, ImageBase);
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
    v8 = *(unsigned int **)&dword_18016B3D0[4 * v7 + 8];
    v9 = *(_QWORD *)&dword_18016B3D0[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= dword_18016B3D0[0] )
      goto LABEL_10;
  }
  result = *(PRUNTIME_FUNCTION *)&dword_18016B3D0[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
