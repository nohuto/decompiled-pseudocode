/*
 * XREFs of KiEmulateAtlThunk @ 0x14024CBB8
 * Callers:
 *     KiCheckForAtlThunk @ 0x14024B574 (KiCheckForAtlThunk.c)
 * Callees:
 *     MmCheckForSafeExecution @ 0x14074F190 (MmCheckForSafeExecution.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v9; // rbx
  _WORD *v10; // rax
  char v11; // r15
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rax
  unsigned int *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned int v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]

  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v9 = *a1;
  v20 = (unsigned int)*a2;
  v19 = 0;
  v10 = (_WORD *)&KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self[218].SubSystemTib
      + 1;
  v11 = *v10 & 1;
  if ( v11 )
    *v10 &= ~1u;
  v12 = *(_DWORD *)v9;
  v13 = HIBYTE(*(_DWORD *)v9);
  if ( *(_DWORD *)v9 == 69485767 && *(_BYTE *)(v9 + 8) == 0xE9 )
  {
    v14 = *(_DWORD *)(v9 + 9) + v9 + 13;
    LOBYTE(v13) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v20, v14, v13) || !v11 )
      return v19;
    v15 = v20 + 4;
    if ( v20 + 4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)(v9 + 4);
    goto LABEL_30;
  }
  if ( (_BYTE)v12 == 0xB9 && *(_BYTE *)(v9 + 5) == 0xE9 )
  {
    v14 = *(_DWORD *)(v9 + 6) + v9 + 10;
    LOBYTE(v13) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v9, v20, v14, v13) || !v11 )
      return v19;
    *a4 = *(_DWORD *)(v9 + 1);
    goto LABEL_30;
  }
  if ( (_BYTE)v12 == 0xBA && *(_BYTE *)(v9 + 5) == 0xB9 && *(_WORD *)(v9 + 10) == 0xE1FF )
  {
    v14 = *(_DWORD *)(v9 + 6);
    if ( (unsigned __int8)MmCheckForSafeExecution(v9, v20, v14, 0LL) )
    {
      *a5 = *(_DWORD *)(v9 + 1);
      *a4 = v14;
LABEL_30:
      *a1 = v14;
      return 1;
    }
  }
  else
  {
    if ( (_BYTE)v12 != 0xB9 || *(_BYTE *)(v9 + 5) != 0xB8 || *(_WORD *)(v9 + 10) != 0xE0FF )
    {
      if ( (_BYTE)v12 == 89
        && BYTE1(*(_DWORD *)v9) == 88
        && (unsigned __int8)BYTE2(*(_DWORD *)v9) == 81
        && __PAIR16__(*(_BYTE *)(v9 + 4), HIBYTE(*(_DWORD *)v9)) == 24831
        && *(_BYTE *)(v9 + 5) == 4 )
      {
        v16 = (unsigned int *)(v20 + 4);
        v17 = v20 + 4;
        if ( v20 + 4 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        v18 = *(unsigned int *)(unsigned int)(*(_DWORD *)v17 + 4);
        if ( (unsigned __int8)MmCheckForSafeExecution(v9, v20, v18, 0LL) )
        {
          *a4 = *(_DWORD *)v20;
          *a3 = *v16;
          *v16 = *a4;
          *a1 = v18;
          *a2 = (_DWORD)v16;
          return 1;
        }
      }
      return v19;
    }
    v14 = *(_DWORD *)(v9 + 6);
    LOBYTE(v13) = 1;
    if ( (unsigned __int8)MmCheckForSafeExecution(v9, v20, v14, v13) && v11 )
    {
      *a4 = *(_DWORD *)(v9 + 1);
      *a3 = v14;
      goto LABEL_30;
    }
  }
  return v19;
}
