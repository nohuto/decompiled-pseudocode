/*
 * XREFs of RaidGetStorageAdapterCryptoProperty @ 0x1C000FDBC
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005D1E8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterCryptoProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8

  v3 = *(_QWORD *)(a1 + 5696);
  v4 = 0;
  v5 = *(_DWORD **)(a2 + 24);
  if ( v3 )
  {
    v7 = 24 * *(unsigned __int16 *)(v3 + 10) + 16;
    *a3 = v7;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= v7 )
    {
      *v5 = 1;
      v8 = 0;
      v5[1] = v7;
      v5[2] = *(unsigned __int16 *)(v3 + 8);
      for ( v5[3] = *(unsigned __int16 *)(v3 + 10);
            v8 < *(unsigned __int16 *)(v3 + 10);
            v5[2 * v10 + 9] = *(unsigned __int16 *)(v3 + 20 * v9 + 22) )
      {
        v9 = v8++;
        v10 = 3 * v9;
        v5[2 * v10 + 4] = 1;
        v5[2 * v10 + 5] = 24;
        v5[2 * v10 + 6] = *(unsigned __int16 *)(v3 + 20 * v9 + 20);
        v5[2 * v10 + 7] = *(_DWORD *)(v3 + 20 * v9 + 24);
        v5[2 * v10 + 8] = *(_DWORD *)(v3 + 20 * v9 + 28);
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
