/*
 * XREFs of RaidGetStorageMiniportProperty @ 0x1C0064474
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005F458 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidGetStorageMiniportProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v3; // rsi
  __int64 v8; // r14
  bool v9; // al

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
        v9 = (*(_DWORD *)(v8 + 184) & 0x80) != 0;
        *a3 = 24LL;
        *((_BYTE *)a2 + 16) = v9;
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
