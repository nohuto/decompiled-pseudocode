/*
 * XREFs of TpCallbackIndependent @ 0x1800675F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009BC10 (ZwAlpcSetInformation.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ecx
  signed __int32 v13; // eax
  int v14; // edx
  signed __int32 v15; // r8d
  __int64 v16; // rcx
  signed __int32 v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+18h]

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    sub_1801086C8(a1, a2, a1, a4);
    v10 = -1073741811;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
    v5 = *(_QWORD *)(v6 + 144);
  else
    v5 = *(_QWORD *)(a1 + 128);
  if ( !v5 )
  {
    v10 = -1073741811;
LABEL_18:
    v11 = v10;
    goto LABEL_19;
  }
  if ( qword_18015D3A8 == v5 )
  {
    v10 = -1073741637;
    goto LABEL_18;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 420));
  _m_prefetchw((const void *)(v5 + 8));
  v7 = *(_QWORD *)(v5 + 8);
  v19 = v7;
  do
  {
    LODWORD(v19) = v7 ^ (unsigned __int16)(v7 ^ (v7 + 1));
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v19, v7);
    v19 = v7;
  }
  while ( v8 != v7 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v9 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v9 && (*(_BYTE *)(v9 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v9 + 284);
      v14 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v9 + 216) + 420LL);
      v15 = v14 + MEMORY[0x7FFE03C0];
      if ( v13 >= v14 && v13 <= v15 + MEMORY[0x7FFE03C0] )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 284), v15, v13) )
      {
        v16 = *(_QWORD *)(v9 + 272);
        v17 = v15;
        ZwAlpcSetInformation(v16, 8LL, &v17);
      }
    }
  }
  v10 = 0;
LABEL_12:
  v11 = v10;
  if ( v10 >= 0 )
  {
    v18 = 2;
    return ZwSetInformationWorkerFactory(*(_QWORD *)(v5 + 56), 9LL, &v18);
  }
LABEL_19:
  if ( v10 != -1073741637 )
    return v11;
  return v4;
}
