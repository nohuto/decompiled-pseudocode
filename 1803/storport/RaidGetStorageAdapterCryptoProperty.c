/*
 * XREFs of RaidGetStorageAdapterCryptoProperty @ 0x1C002A158
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterCryptoProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8

  v3 = *(_QWORD *)(a1 + 5696);
  v4 = 0;
  v5 = *(_DWORD **)(a2 + 24);
  if ( v3 )
  {
    v6 = 24 * *(unsigned __int16 *)(v3 + 10) + 16;
    *a3 = v6;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= v6 )
    {
      *v5 = 1;
      v7 = 0;
      v5[1] = v6;
      v5[2] = *(unsigned __int16 *)(v3 + 8);
      for ( v5[3] = *(unsigned __int16 *)(v3 + 10);
            v7 < *(unsigned __int16 *)(v3 + 10);
            v5[2 * v9 + 9] = *(unsigned __int16 *)(v3 + 20 * v8 + 22) )
      {
        v8 = v7++;
        v9 = 3 * v8;
        v5[2 * v9 + 4] = 1;
        v5[2 * v9 + 5] = 24;
        v5[2 * v9 + 6] = *(unsigned __int16 *)(v3 + 20 * v8 + 20);
        v5[2 * v9 + 7] = *(_DWORD *)(v3 + 20 * v8 + 24);
        v5[2 * v9 + 8] = *(_DWORD *)(v3 + 20 * v8 + 28);
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v4;
}
