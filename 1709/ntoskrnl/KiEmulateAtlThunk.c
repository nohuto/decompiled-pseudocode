/*
 * XREFs of KiEmulateAtlThunk @ 0x14020E968
 * Callers:
 *     KiCheckForAtlThunk @ 0x14020D1E4 (KiCheckForAtlThunk.c)
 * Callees:
 *     MmCheckForSafeExecution @ 0x1406E4D70 (MmCheckForSafeExecution.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int *v5; // rsi
  __int64 v10; // rbx
  _WORD *v11; // rcx
  char v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rax
  char v15; // al
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned int *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned __int64 v22; // [rsp+30h] [rbp-28h]

  v5 = a4;
  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v10 = *a1;
  v22 = (unsigned int)*a2;
  v21 = 0;
  v11 = (_WORD *)&KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self[218].SubSystemTib
      + 1;
  v12 = *v11 & 1;
  if ( v12 )
    *v11 &= ~1u;
  if ( *(_DWORD *)v10 == 69485767 && *(_BYTE *)(v10 + 8) == 0xE9 )
  {
    v13 = *(_DWORD *)(v10 + 9) + v10 + 13;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v22, v13, a4) || !v12 )
      return v21;
    v14 = v22 + 4;
    if ( v22 + 4 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)(v10 + 4);
    *a1 = v13;
    return 1;
  }
  v15 = *(_BYTE *)v10;
  if ( *(_BYTE *)v10 == 0xB9 && *(_BYTE *)(v10 + 5) == 0xE9 )
  {
    v16 = *(_DWORD *)(v10 + 6) + v10 + 10;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v22, v16, a4) || !v12 )
      return v21;
    *v5 = *(_DWORD *)(v10 + 1);
    goto LABEL_30;
  }
  if ( v15 == -70 && *(_BYTE *)(v10 + 5) == 0xB9 && *(_WORD *)(v10 + 10) == 0xE1FF )
  {
    v17 = *(_DWORD *)(v10 + 6);
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v17, 0LL) )
    {
      *a5 = *(_DWORD *)(v10 + 1);
      *v5 = v17;
      *a1 = v17;
      return 1;
    }
  }
  else
  {
    if ( v15 != -71 || *(_BYTE *)(v10 + 5) != 0xB8 || *(_WORD *)(v10 + 10) != 0xE0FF )
    {
      if ( v15 == 89
        && *(_BYTE *)(v10 + 1) == 88
        && *(_BYTE *)(v10 + 2) == 81
        && *(_BYTE *)(v10 + 3) == 0xFF
        && *(_BYTE *)(v10 + 4) == 96
        && *(_BYTE *)(v10 + 5) == 4 )
      {
        v18 = (unsigned int *)(v22 + 4);
        v19 = v22 + 4;
        if ( v22 + 4 >= 0x7FFFFFFF0000LL )
          v19 = 0x7FFFFFFF0000LL;
        v20 = *(unsigned int *)(unsigned int)(*(_DWORD *)v19 + 4);
        if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v20, 0LL) )
        {
          *v5 = *(_DWORD *)v22;
          *a3 = *v18;
          *v18 = *v5;
          *a1 = v20;
          *a2 = (_DWORD)v18;
          return 1;
        }
      }
      return v21;
    }
    v16 = *(_DWORD *)(v10 + 6);
    LOBYTE(a4) = 1;
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v16, a4) && v12 )
    {
      *v5 = *(_DWORD *)(v10 + 1);
      *a3 = v16;
LABEL_30:
      *a1 = v16;
      return 1;
    }
  }
  return v21;
}
