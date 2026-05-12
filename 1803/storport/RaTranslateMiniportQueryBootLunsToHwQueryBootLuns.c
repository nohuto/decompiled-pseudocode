/*
 * XREFs of RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0039288
 * Callers:
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0026E58 (RaidAdapterQueryBootLunsIoctl.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaTranslateMiniportQueryBootLunsToHwQueryBootLuns(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 Unit; // rax
  unsigned int v14; // [rsp+58h] [rbp+20h]

  v4 = *(_DWORD **)(a2 + 24);
  HIBYTE(v14) = 0;
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v9 = *(_DWORD *)(a3 + 36);
  if ( v9 )
    v10 = 16 * ((unsigned int)(v9 - 1) + 2LL);
  else
    v10 = 32LL;
  *v4 = 1;
  v4[1] = v10;
  if ( *(unsigned int *)(v6 + 8) >= v10 )
  {
    v11 = 0;
    v4[2] = *(_DWORD *)(a3 + 36);
    for ( v4[3] = *(_DWORD *)(a3 + 40); v11 < *(_DWORD *)(a3 + 36); ++v11 )
    {
      BYTE2(v14) = *(_BYTE *)(a3 + 8LL * v11 + 51);
      LOWORD(v14) = *(_WORD *)(a3 + 8LL * v11 + 49);
      Unit = RaidAdapterFindUnit(a1, v14, v6, a4);
      if ( Unit )
        *(_OWORD *)&v4[4 * v11 + 4] = *(_OWORD *)(Unit + 1720);
    }
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v7;
}
