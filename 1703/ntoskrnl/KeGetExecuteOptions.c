/*
 * XREFs of KeGetExecuteOptions @ 0x140457964
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetExecuteOptions(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int16 v4; // ax
  char v5; // al
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1064);
  if ( !v2 )
    return 3221225485LL;
  v4 = *(_WORD *)(v2 + 8);
  if ( v4 != 332 && v4 != 452 )
    return 3221225485LL;
  v5 = *(_BYTE *)(a1 + 447);
  v6 = v5 & 1 | 2;
  if ( (v5 & 2) == 0 )
    v6 = v5 & 1;
  v7 = v6 | 4;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  v8 = v7 | 8;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x10;
  if ( (v5 & 0x10) == 0 )
    v9 = v8;
  v10 = v9 | 0x20;
  if ( (v5 & 0x20) == 0 )
    v10 = v9;
  v11 = v10 | 0x40;
  if ( (v5 & 0x40) == 0 )
    v11 = v10;
  result = 0LL;
  *a2 = v11;
  return result;
}
