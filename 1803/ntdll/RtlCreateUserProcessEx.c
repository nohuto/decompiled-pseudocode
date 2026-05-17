/*
 * XREFs of RtlCreateUserProcessEx @ 0x180086EE0
 * Callers:
 *     RtlCreateUserProcess @ 0x1800DBDA0 (RtlCreateUserProcess.c)
 * Callees:
 *     sub_180086FA0 @ 0x180086FA0 (sub_180086FA0.c)
 *     RtlNormalizeProcessParams @ 0x180087260 (RtlNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, char a3, __int64 a4, void *a5)
{
  int v7; // edi
  __int64 v8; // r10
  int v9; // eax
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v7 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v8 = RtlNormalizeProcessParams(a2);
  if ( !v8 )
    return 3221225485LL;
  v9 = 0;
  if ( a3 )
  {
    v9 = 4;
    v10 = 132;
  }
  else
  {
    *(_QWORD *)(v8 + 72) = 0LL;
    v10 = 128;
  }
  v11 = *(_DWORD *)(v8 + 8);
  if ( (v11 & 0x40000) == 0 )
    v10 = v9;
  v12 = v10 | 0x40;
  if ( (v11 & 0x400000) == 0 )
    v12 = v10;
  v13 = v12 | 0x40000;
  if ( (v11 & 0x800000) == 0 )
    v13 = v12;
  return sub_180086FA0(v7, v8, v13, 1, a4, a5);
}
