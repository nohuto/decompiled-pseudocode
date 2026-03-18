/*
 * XREFs of HvWriteLogFile @ 0x1404E3F18
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1404E409C (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     HvpGenerateLogEntry @ 0x140513CAC (HvpGenerateLogEntry.c)
 */

__int64 __fastcall HvWriteLogFile(ULONG_PTR a1, char a2, unsigned int a3, unsigned int *a4)
{
  void *v4; // rsi
  __int64 v8; // rax
  unsigned int v9; // edi
  signed __int64 *v10; // rdx
  signed __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 (__fastcall *v13)(ULONG_PTR, __int64, int *, __int64, char *, _DWORD); // rax
  unsigned int v14; // eax
  int LogEntry; // edi
  int v17; // [rsp+48h] [rbp-30h] BYREF
  void *v18; // [rsp+50h] [rbp-28h]
  unsigned int v19; // [rsp+58h] [rbp-20h]
  char v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h]

  v21 = a3;
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 )
  {
    v8 = *(unsigned int *)(a1 + 148);
    if ( !(_DWORD)v8 || !*(_QWORD *)(a1 + 8 * v8 + 2664) )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      v4 = *(void **)(a1 + 2880);
      v9 = *(_DWORD *)(a1 + 2888);
    }
    else
    {
      v4 = 0LL;
      LogEntry = HvpGenerateLogEntry(a1);
      if ( LogEntry < 0 )
        goto LABEL_15;
      v9 = v21;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 || *(_DWORD *)(a1 + 148) == 4 )
    {
      v10 = (signed __int64 *)(a1 + 2976);
    }
    else if ( *(_DWORD *)(a1 + 148) == 5 )
    {
      v10 = (signed __int64 *)(a1 + 2984);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = v9 + (unsigned __int64)*(unsigned int *)(a1 + 160);
    if ( v11 > *v10 )
      CmpDoFileSetSizeEx(a1, *(unsigned int *)(a1 + 148), v11, 1LL);
    v12 = *(unsigned int *)(a1 + 148);
    v17 = *(_DWORD *)(a1 + 160);
    v13 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, int *, __int64, char *, _DWORD))(a1 + 40);
    v18 = v4;
    v19 = v9;
    if ( !v13(a1, v12, &v17, 1LL, &v20, 0) )
    {
      LogEntry = -1073741491;
      goto LABEL_15;
    }
    if ( !(unsigned __int8)CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 148)) )
    {
      LogEntry = -1073741823;
      goto LABEL_15;
    }
    ++*(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 160) += v9;
    v14 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 148));
    *(_BYTE *)(v14 + a1 + 172) = 1;
    CmpTraceHiveFlushWroteLogFile(v14, v9);
    *a4 = v9;
  }
  LogEntry = 0;
LABEL_15:
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)LogEntry;
}
