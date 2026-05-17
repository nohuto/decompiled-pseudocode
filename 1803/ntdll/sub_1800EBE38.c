/*
 * XREFs of sub_1800EBE38 @ 0x1800EBE38
 * Callers:
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 * Callees:
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_1800EBE38(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v6; // bp
  __int16 v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int16 v12; // r8
  __int16 v13; // ax
  __int64 v14; // [rsp+80h] [rbp+18h]

  v2 = qword_18015D750;
  v4 = a1;
  if ( !qword_18015D750 )
    return 0LL;
  if ( a1 )
  {
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(qword_18015D750 + 152) = -285217025;
    v6 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v7 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v7 = sub_1800244C4(1u);
  v8 = (__int64 *)(v4 + 232);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    if ( (int)ZwAllocateVirtualMemory() < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v9 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v9 )
    return 0LL;
  v10 = *v8;
  v11 = *v8 + 72 * v9;
  v14 = v11;
  if ( (unsigned int)v9 < (unsigned int)v9 + a2 )
  {
    v12 = v11;
    do
    {
      if ( ((v12 + 72) & 0xFFFu) <= 0x48uLL )
      {
        if ( (int)ZwAllocateVirtualMemory() < 0 )
          return 0LL;
        v11 = v14;
      }
      v13 = v9;
      LODWORD(v9) = v9 + 1;
      *(_WORD *)(v11 + 16) = v6 | v13;
      *(_WORD *)(v14 + 18) = v7;
      v11 = v14 + 72;
      v14 = v11;
      v12 = v11;
    }
    while ( (unsigned int)v9 < a2 + *(unsigned __int16 *)(v4 + 224) );
    v10 = *v8;
    LOWORD(v9) = *(_WORD *)(v4 + 224);
  }
  *(_WORD *)(v4 + 224) = a2 + v9;
  return v10 + 72LL * (unsigned __int16)v9;
}
