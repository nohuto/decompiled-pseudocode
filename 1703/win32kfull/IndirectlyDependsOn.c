/*
 * XREFs of IndirectlyDependsOn @ 0x1C02CF3B4
 * Callers:
 *     AddDistance @ 0x1C02CEDAC (AddDistance.c)
 *     AddProportion @ 0x1C02CEEFC (AddProportion.c)
 *     IndirectlyDependsOn @ 0x1C02CF3B4 (IndirectlyDependsOn.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C02CF3B4 (IndirectlyDependsOn.c)
 */

__int64 __fastcall IndirectlyDependsOn(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // r9d
  unsigned int v5; // edi
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int16 v10; // ax
  __int16 v11; // cx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // [rsp+20h] [rbp-18h]
  unsigned int v16; // [rsp+58h] [rbp+20h]

  v4 = a4 - 1;
  v5 = a3;
  if ( v4 < 0 )
    return 1LL;
  v8 = *(_QWORD *)(a1 + 104);
  v15 = v8;
  v9 = 3LL * a2;
  v10 = *(_WORD *)(v8 + 12LL * a2);
  if ( v10 == -1 )
    return 0LL;
  v11 = *(_WORD *)(v8 + 12LL * a2 + 2);
  v12 = (unsigned int)v10;
  if ( v11 == -1 )
  {
    if ( (_DWORD)v12 == (_DWORD)a3 )
      return 1;
    v13 = IndirectlyDependsOn(a1, v12, a3, (unsigned int)(v4 - 1));
    v14 = 0;
  }
  else
  {
    if ( (_DWORD)v12 == (_DWORD)a3 )
      return 1;
    if ( v11 == (_DWORD)a3 )
      return 1;
    v16 = v4 - 1;
    v14 = 0;
    if ( (unsigned int)IndirectlyDependsOn(a1, v12, a3, (unsigned int)(v4 - 1)) )
      return 1;
    v13 = IndirectlyDependsOn(a1, (unsigned int)*(__int16 *)(v15 + 4 * v9 + 2), v5, v16);
  }
  if ( v13 )
    return 1;
  return v14;
}
