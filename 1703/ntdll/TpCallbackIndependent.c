/*
 * XREFs of TpCallbackIndependent @ 0x180067460
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x1800A6430 (ZwAlpcSetInformation.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rsi
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // r8d
  __int64 v14; // rcx
  unsigned int v15; // eax
  signed __int32 v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v18; // [rsp+50h] [rbp+18h]

  v4 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    sub_1801058B8(a1, a2, a1, a4);
LABEL_17:
    v15 = -1073741811;
    goto LABEL_18;
  }
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 144);
  else
    v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 )
    goto LABEL_17;
  if ( qword_18015C368 != v6 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 420));
    _m_prefetchw((const void *)(v6 + 8));
    v7 = *(_QWORD *)(v6 + 8);
    v18 = v7;
    do
    {
      LODWORD(v18) = (unsigned __int16)(v18 ^ (v18 + 1)) ^ (unsigned int)v18;
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v18, v7);
      v18 = v7;
    }
    while ( v8 != v7 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v9 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v9 && (*(_BYTE *)(v9 + 288) & 3) == 3 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 284);
        v11 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v9 + 216) + 420LL);
        v12 = v11 + MEMORY[0x7FFE03C0];
        if ( v10 >= v11 && v10 <= v12 + MEMORY[0x7FFE03C0] )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 284), v12, v10) )
        {
          v14 = *(_QWORD *)(v9 + 272);
          v16 = v12;
          ZwAlpcSetInformation(v14, 8LL, &v16);
        }
      }
    }
    v17 = 2;
    return ZwSetInformationWorkerFactory(*(_QWORD *)(v6 + 56), 9LL, &v17);
  }
  v15 = -1073741637;
LABEL_18:
  if ( v15 != -1073741637 )
    return v15;
  return v4;
}
