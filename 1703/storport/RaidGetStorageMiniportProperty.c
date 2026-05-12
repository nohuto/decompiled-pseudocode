/*
 * XREFs of RaidGetStorageMiniportProperty @ 0x1C0062084
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005D1E8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidGetStorageMiniportProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v3; // rsi
  __int64 v8; // r14

  v3 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 24LL;
    return 3221225507LL;
  }
  else
  {
    if ( v3 >= 0x10 )
    {
      v8 = *(_QWORD *)(a1 + 528);
      memset(a2, 0, *a3);
      a2[2] = 1;
      *((_WORD *)a2 + 6) = 257;
      *((_WORD *)a2 + 7) = *(_WORD *)(a1 + 4204);
      if ( v3 < 0x18 )
      {
        *a2 = 16;
        a2[1] = 16;
        *a3 = 16LL;
      }
      else
      {
        *a2 = 24;
        a2[1] = 24;
        *((_BYTE *)a2 + 16) = *(_BYTE *)(v8 + 184) >> 7;
        *a3 = 24LL;
      }
    }
    else
    {
      *a2 = 24;
      a2[1] = 24;
      *a3 = 8LL;
    }
    return 0LL;
  }
}
