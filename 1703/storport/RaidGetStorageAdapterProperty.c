/*
 * XREFs of RaidGetStorageAdapterProperty @ 0x1C005D620
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005D1E8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterProperty(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r11
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v3 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 32LL;
    return 3221225507LL;
  }
  else
  {
    if ( v3 < 0x1E )
    {
      *(_DWORD *)a2 = 32;
      *(_DWORD *)(a2 + 4) = 32;
      *a3 = 8LL;
    }
    else
    {
      if ( v3 < 0x20 )
      {
        *(_DWORD *)a2 = 30;
        *(_DWORD *)(a2 + 4) = 30;
      }
      else
      {
        *(_DWORD *)a2 = 32;
        *(_DWORD *)(a2 + 4) = 32;
      }
      v5 = *(_DWORD *)(a1 + 332);
      if ( *(_BYTE *)(a1 + 4450) )
      {
        v6 = *(_DWORD *)(a1 + 704);
        if ( v5 < v6 )
          v6 = v5;
        *(_DWORD *)(a2 + 12) = v6;
      }
      else
      {
        *(_DWORD *)(a2 + 12) = v5;
      }
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 328);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 352);
      *(_BYTE *)(a2 + 20) = *(_BYTE *)(a1 + 393);
      *(_BYTE *)(a2 + 21) = *(_BYTE *)(a1 + 388);
      *(_BYTE *)(a2 + 22) = *(_BYTE *)(a1 + 395);
      *(_BYTE *)(a2 + 23) = 1;
      *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 4356);
      *(_DWORD *)(a2 + 26) = 2;
      if ( v3 < 0x20 )
      {
        *a3 = 30LL;
      }
      else
      {
        *(_BYTE *)(a2 + 30) = *(_BYTE *)(a1 + 402);
        *(_BYTE *)(a2 + 31) = *(_BYTE *)(a1 + 403);
        *a3 = 32LL;
      }
    }
    return 0LL;
  }
}
