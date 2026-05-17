/*
 * XREFs of TpCallbackIndependent @ 0x18006CA50
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A11F0 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rsi
  unsigned int v11; // eax
  signed __int32 v12; // eax
  int v13; // edx
  signed __int32 v14; // r8d
  __int64 v15; // rcx
  signed __int32 v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v18; // [rsp+50h] [rbp+18h]

  v4 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1, a4);
LABEL_14:
    v11 = -1073741811;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 144);
  else
    v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 )
    goto LABEL_14;
  if ( TppPoolpSerializedPool != v6 )
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
        v12 = *(_DWORD *)(v9 + 284);
        v13 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v9 + 216) + 420LL);
        v14 = v13 + MEMORY[0x7FFE03C0];
        if ( v12 >= v13 && v12 <= v14 + MEMORY[0x7FFE03C0] )
          break;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 284), v14, v12) )
        {
          v15 = *(_QWORD *)(v9 + 272);
          v16 = v14;
          NtAlpcSetInformation(v15, 8LL, &v16);
        }
      }
    }
    v17 = 2;
    return NtSetInformationWorkerFactory(*(_QWORD *)(v6 + 56), 9LL, &v17);
  }
  v11 = -1073741637;
LABEL_15:
  if ( v11 != -1073741637 )
    return v11;
  return v4;
}
