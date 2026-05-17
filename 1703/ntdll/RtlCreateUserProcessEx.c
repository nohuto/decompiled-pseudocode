/*
 * XREFs of RtlCreateUserProcessEx @ 0x18008D480
 * Callers:
 *     RtlCreateUserProcess @ 0x1800E2110 (RtlCreateUserProcess.c)
 * Callees:
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 *     RtlNormalizeProcessParams @ 0x18008D7E0 (RtlNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, char a3, __int64 a4, void *a5)
{
  int v7; // edi
  __int64 v8; // rax
  int v9; // r9d
  int v10; // edx
  int v11; // r8d

  v7 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v8 = RtlNormalizeProcessParams(a2);
  if ( !v8 )
    return 3221225485LL;
  if ( !a3 )
    *(_QWORD *)(v8 + 72) = 0LL;
  v9 = *(_DWORD *)(v8 + 8);
  v10 = (a3 != 0 ? 4 : 0) | 0x80;
  if ( (v9 & 0x40000) == 0 )
    v10 = a3 != 0 ? 4 : 0;
  v11 = v10 | 0x40;
  if ( (v9 & 0x400000) == 0 )
    v11 = v10;
  return sub_18008D520(v7, v8, v11, 1, a4, a5);
}
