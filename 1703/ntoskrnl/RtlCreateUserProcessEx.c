/*
 * XREFs of RtlCreateUserProcessEx @ 0x140810324
 * Callers:
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x14081038C (RtlpCreateUserProcess.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  int v5; // r8d
  unsigned int v6; // eax
  int v7; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a2 + 8);
  if ( (v5 & 1) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    if ( v9 )
      *(_QWORD *)(a2 + 64) = a2 + v9;
    v10 = *(_QWORD *)(a2 + 88);
    if ( v10 )
      *(_QWORD *)(a2 + 88) = a2 + v10;
    v11 = *(_QWORD *)(a2 + 104);
    if ( v11 )
      *(_QWORD *)(a2 + 104) = a2 + v11;
    v12 = *(_QWORD *)(a2 + 120);
    if ( v12 )
      *(_QWORD *)(a2 + 120) = a2 + v12;
    v13 = *(_QWORD *)(a2 + 184);
    if ( v13 )
      *(_QWORD *)(a2 + 184) = a2 + v13;
    v14 = *(_QWORD *)(a2 + 200);
    if ( v14 )
      *(_QWORD *)(a2 + 200) = a2 + v14;
    v15 = *(_QWORD *)(a2 + 216);
    if ( v15 )
      *(_QWORD *)(a2 + 216) = a2 + v15;
    v16 = *(_QWORD *)(a2 + 232);
    if ( v16 )
      *(_QWORD *)(a2 + 232) = a2 + v16;
    *(_DWORD *)(a2 + 8) = v5 | 1;
  }
  v6 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 72) = 0LL;
  v7 = (v6 >> 11) & 0x80 | 0x40;
  if ( (v6 & 0x400000) == 0 )
    v7 = (v6 >> 11) & 0x80;
  return RtlpCreateUserProcess(a1, a2, v7, a1, v17, a5);
}
