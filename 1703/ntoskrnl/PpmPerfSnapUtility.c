/*
 * XREFs of PpmPerfSnapUtility @ 0x140046E20
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140046D70 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmPerfSnapUtility(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // r11
  char *v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  char *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // r15d
  unsigned int v12; // r12d
  _BYTE *v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v20; // [rsp+30h] [rbp+8h]

  result = (unsigned __int64)&retaddr;
  v2 = *(_QWORD **)(a1 + 24296);
  if ( v2 )
  {
    v4 = (char *)(v2 + 3);
    v5 = v2[14] - v2[4];
    v6 = v5;
    v7 = (char *)(v2 + 13);
    v8 = v2[19] - v2[9];
    v20 = v2[13] - v2[3];
    if ( !v5 )
      v6 = 1LL;
    v9 = (v2[17] - v2[7]) / v6;
    v10 = v2[19] - v2[9];
    v11 = v9;
    if ( !v8 )
      v10 = 1LL;
    v12 = (unsigned __int8)(100LL * (v2[20] - v2[10]) / v10);
    if ( v12 > 0x64 )
      v12 = 100;
    if ( !(_DWORD)v9 )
      v11 = *(_DWORD *)(a1 + 24356);
    v13 = v2 + 34;
    v14 = v2 + 11;
    v15 = 2LL;
    do
    {
      v16 = v8;
      if ( !v8 )
        v16 = 1LL;
      result = 100LL * (*(_QWORD *)((char *)v14 + v7 - v4) - *v14) / v16;
      if ( (unsigned __int8)result > 0x64u )
        result = 100LL;
      else
        result = (unsigned __int8)result;
      *v13 = result;
      ++v14;
      ++v13;
      --v15;
    }
    while ( v15 );
    v17 = *(_QWORD *)(a1 + 24312);
    *(_DWORD *)(a1 + 24356) = v11;
    *(_DWORD *)(a1 + 24364) = v12;
    if ( v17 )
    {
      v18 = v5;
      if ( !v5 )
        v18 = 1LL;
      result = (*((_QWORD *)v7 + 3) - *((_QWORD *)v4 + 3)) / v18;
      if ( !(_DWORD)result )
        result = *(unsigned int *)(v17 + 140);
      *(_DWORD *)(v17 + 140) = result;
    }
    *(_OWORD *)v4 = *(_OWORD *)v7;
    *((_OWORD *)v4 + 1) = *((_OWORD *)v7 + 1);
    *((_OWORD *)v4 + 2) = *((_OWORD *)v7 + 2);
    *((_OWORD *)v4 + 3) = *((_OWORD *)v7 + 3);
    *((_OWORD *)v4 + 4) = *((_OWORD *)v7 + 4);
    *(_QWORD *)(a1 + 24392) += v5;
    *(_QWORD *)(a1 + 24400) += v20;
  }
  return result;
}
