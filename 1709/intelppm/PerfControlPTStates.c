/*
 * XREFs of PerfControlPTStates @ 0x1C0003920
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C00039C0 (InvokePTStateChange.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, unsigned __int64 *a2, char a3, char a4)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // [rsp+40h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *a2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = v8 + 32LL * (unsigned int)*a2;
  v15 = *a2;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 8) == v10 )
    goto LABEL_6;
  if ( v10 == 1 )
  {
    if ( !*(_DWORD *)(v6 + 64) )
      goto LABEL_6;
    v11 = *(_DWORD *)(v6 + 60);
  }
  else
  {
    v12 = *(_DWORD *)(v6 + 60);
    if ( !v12 )
      goto LABEL_6;
    v11 = v12 - 1;
  }
  v13 = v8 + 32LL * v11;
  if ( !v13 )
  {
LABEL_6:
    if ( a3 )
    {
      LOBYTE(v8) = BYTE4(v15) & 1;
      InvokePTStateChange(v6, v9, v8);
    }
    goto LABEL_8;
  }
  if ( a3 )
  {
    v14 = HIDWORD(v7);
    LOBYTE(v14) = BYTE4(v7) & 1;
    InvokePTStateChange(v6, v13, v14);
    goto LABEL_6;
  }
LABEL_8:
  *(_DWORD *)(a1 + 16) = v7;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
}
