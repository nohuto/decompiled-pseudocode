/*
 * XREFs of HvWriteLogFile @ 0x140499A0C
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x14049999C (CmpTraceHiveFlushWroteLogFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140499C3C (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64, int *, __int64, _DWORD); // rax
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 164);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1536) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1704);
  v8 = *(unsigned int *)(a1 + 1712);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v9 = (_QWORD *)(a1 + 1800);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v9 = (_QWORD *)(a1 + 1808);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *(unsigned int *)(a1 + 176);
  if ( v10 + v8 > *v9 )
  {
    CmpDoFileSetSizeEx(a1, v6, v10 + v8, 1LL);
    LODWORD(v10) = *(_DWORD *)(a1 + 176);
    v6 = *(unsigned int *)(a1 + 164);
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64, _DWORD))(a1 + 40);
  v15 = v10;
  v16 = v7;
  v17 = v8;
  result = v11(a1, v6, &v15, 1LL, 0);
  if ( (int)result >= 0 )
  {
    result = CmpFileFlushAndPurge(a1, *(_DWORD *)(a1 + 164));
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 176) += v8;
      v14 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 164), v13);
      *(_BYTE *)(v14 + a1 + 188) = 1;
      CmpTraceHiveFlushWroteLogFile(v14, v8);
      *a4 = v8;
      return 0LL;
    }
  }
  return result;
}
