/*
 * XREFs of ndisMIndicateReceiveFilterCapsChange @ 0x1C0013610
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

char __fastcall ndisMIndicateReceiveFilterCapsChange(__int64 a1, int a2, _BYTE *a3, unsigned int a4, char a5)
{
  char result; // al
  unsigned __int16 v9; // r9
  void *v10; // rcx
  size_t v11; // r8

  result = 0;
  if ( a4 >= 0x38 && *a3 == 0x80 )
  {
    v9 = *((_WORD *)a3 + 1);
    if ( v9 >= 0x38u )
    {
      if ( a3[1] )
      {
        if ( a5 )
          v10 = *(void **)(a1 + 3568);
        else
          v10 = a2 == 1073872912 ? *(void **)(a1 + 3560) : *(void **)(a1 + 3552);
        if ( v10 )
        {
          v11 = 84LL;
          if ( v9 < 0x54u )
            v11 = v9;
          memmove(v10, a3, v11);
          if ( a2 == 1073872912 )
          {
            *(_DWORD *)(a1 + 3548) = *((_DWORD *)a3 + 3);
            *(_DWORD *)(a1 + 3544) = *((_DWORD *)a3 + 2);
          }
          return 1;
        }
      }
    }
  }
  return result;
}
