/*
 * XREFs of HvWriteLogFile @ 0x1404D3CF0
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     HvpGenerateLogEntry @ 0x1404B7770 (HvpGenerateLogEntry.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1404D3C7C (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, char a2, unsigned int a3, unsigned int *a4)
{
  void *v4; // rsi
  bool v6; // zf
  __int64 v9; // rax
  unsigned int v10; // edi
  signed __int64 *v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 (__fastcall *v14)(__int64, __int64, int *, __int64, char *, _DWORD); // rax
  unsigned int v15; // eax
  unsigned int v16; // edi
  int v18; // eax
  void *v19; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h] BYREF
  void *v21; // [rsp+50h] [rbp-28h]
  unsigned int v22; // [rsp+58h] [rbp-20h]
  char v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = a3;
  v4 = 0LL;
  v6 = (*(_DWORD *)(a1 + 144) & 0x8001) == 0;
  v19 = 0LL;
  if ( v6 )
  {
    v9 = *(unsigned int *)(a1 + 148);
    if ( !(_DWORD)v9 || !*(_QWORD *)(a1 + 8 * v9 + 2664) )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      v4 = *(void **)(a1 + 2880);
      v10 = *(_DWORD *)(a1 + 2888);
    }
    else
    {
      v18 = HvpGenerateLogEntry(a1, &v19, &v24);
      v4 = v19;
      v16 = v18;
      if ( v18 < 0 )
        goto LABEL_15;
      v10 = v24;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 || *(_DWORD *)(a1 + 148) == 4 )
    {
      v11 = (signed __int64 *)(a1 + 2976);
    }
    else if ( *(_DWORD *)(a1 + 148) == 5 )
    {
      v11 = (signed __int64 *)(a1 + 2984);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = v10 + (unsigned __int64)*(unsigned int *)(a1 + 160);
    if ( v12 > *v11 )
      CmpDoFileSetSizeEx(a1, *(unsigned int *)(a1 + 148), v12, 1);
    v13 = *(unsigned int *)(a1 + 148);
    v20 = *(_DWORD *)(a1 + 160);
    v14 = *(unsigned __int8 (__fastcall **)(__int64, __int64, int *, __int64, char *, _DWORD))(a1 + 40);
    v21 = v4;
    v22 = v10;
    if ( !v14(a1, v13, &v20, 1LL, &v23, 0) )
    {
      v16 = -1073741491;
      goto LABEL_15;
    }
    if ( !(unsigned __int8)CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 148)) )
    {
      v16 = -1073741823;
      goto LABEL_15;
    }
    ++*(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 160) += v10;
    v15 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 148));
    *(_BYTE *)(v15 + a1 + 172) = 1;
    CmpTraceHiveFlushWroteLogFile(v15, v10);
    *a4 = v10;
  }
  v16 = 0;
LABEL_15:
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return v16;
}
