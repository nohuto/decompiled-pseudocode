/*
 * XREFs of ndisFIndicateOffloadChange @ 0x1C0013AA8
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisFAllocateFilterOffload @ 0x1C001A068 (ndisFAllocateFilterOffload.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

char __fastcall ndisFIndicateOffloadChange(__int64 a1, _WORD *a2, unsigned int a3)
{
  char v5; // bl
  void *v6; // rcx
  size_t v7; // rsi
  unsigned __int16 v8; // ax

  v5 = 1;
  if ( a3 < 0x70 || *(_BYTE *)a2 != 0xA7 || a2[1] < 0x70u || !*((_BYTE *)a2 + 1) )
    return 0;
  v6 = *(void **)(a1 + 808);
  v7 = 188LL;
  if ( !v6 )
  {
    if ( !(unsigned int)ndisFAllocateFilterOffload(a1) )
      goto LABEL_7;
    return 0;
  }
  memset(v6, 0, 0xBCuLL);
LABEL_7:
  v8 = a2[1];
  if ( v8 < 0xBCu )
    v7 = v8;
  memmove(*(void **)(a1 + 808), a2, v7);
  return v5;
}
