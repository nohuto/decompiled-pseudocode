/*
 * XREFs of IopAddPageDumpRange @ 0x1401F7254
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1401F7784 (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     IoSetDumpRange @ 0x1401F6880 (IoSetDumpRange.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  char v7; // si
  int v8; // edx
  unsigned __int64 v9; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, 0x30uLL);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8) & 0xFF0;
  v5 = v4 ^ *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v5;
  if ( (v5 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v5 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    *(_DWORD *)(a1 + 8) = v5 & 0x7FFFFFFF;
  }
  v8 = *(_DWORD *)(a1 + 8);
  if ( ((v8 - 1) & v8) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
    return 0LL;
  v11[3] = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v10[0] = *(_QWORD *)(v11[3] + 48LL);
  v10[1] = v11[3] + 56LL;
  v11[2] = v10;
  if ( (v8 & 1) == 0 )
    v4 |= 2u;
  result = IoSetDumpRange((__int64)v11, *(char **)(a1 + 16), v9, v4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v7;
  }
  return result;
}
