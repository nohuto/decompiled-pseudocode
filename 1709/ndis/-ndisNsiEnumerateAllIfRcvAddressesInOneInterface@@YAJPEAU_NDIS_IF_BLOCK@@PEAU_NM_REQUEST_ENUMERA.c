/*
 * XREFs of ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003E788
 * Callers:
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003E690 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddressesInOneInterface(
        struct _NDIS_IF_BLOCK *a1,
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a2)
{
  __int64 v5; // rdx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned int ifRcvAddressCount; // r9d
  __int64 v9; // r11
  __int64 v10; // r8
  unsigned int v11; // ecx
  _NDIS_NSI_IF_RCV_ADDRESS_ROD *v12; // r14
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // r10
  unsigned int v14; // ebx

  if ( !a1->ifRcvAddressCount )
  {
    *((_DWORD *)a2 + 22) = 0;
    return 0LL;
  }
  if ( !ndisIfReferenceMiniport((__int64)a1) )
  {
    *((_DWORD *)a2 + 22) = 0;
    return 0LL;
  }
  v6 = *((_DWORD *)a2 + 12) == 0;
  v7 = *((_DWORD *)a2 + 22);
  ifRcvAddressCount = a1->ifRcvAddressCount;
  v9 = *((unsigned int *)a2 + 16);
  *((_DWORD *)a2 + 22) = ifRcvAddressCount;
  if ( !v6 || *((_DWORD *)a2 + 20) || (unsigned int)v9 < 6 )
  {
    v14 = -1073741306;
  }
  else
  {
    v10 = *((_QWORD *)a2 + 2);
    v11 = 0;
    v12 = (_NDIS_NSI_IF_RCV_ADDRESS_ROD *)*((_QWORD *)a2 + 7);
    if ( v7 )
    {
      v5 = 0LL;
      do
      {
        if ( v11 >= a1->ifRcvAddressCount )
          break;
        ifRcvAddressTable = a1->ifRcvAddressTable;
        if ( *((_QWORD *)a2 + 2) )
        {
          *(_QWORD *)v10 = a1->NetLuid.Value;
          *(_OWORD *)(v10 + 8) = *(_OWORD *)ifRcvAddressTable[v5].ifRcvAddress;
          *(_OWORD *)(v10 + 24) = *(_OWORD *)&ifRcvAddressTable[v5].ifRcvAddress[16];
          v10 += 40LL;
        }
        if ( *((_QWORD *)a2 + 7) )
        {
          *v12 = ifRcvAddressTable[v5]._NDIS_NSI_IF_RCV_ADDRESS_ROD;
          v12 = (_NDIS_NSI_IF_RCV_ADDRESS_ROD *)((char *)v12 + v9);
        }
        ++v11;
        ++v5;
      }
      while ( v11 < v7 );
    }
    *((_DWORD *)a2 + 22) = v11;
    v14 = v11 < ifRcvAddressCount ? 0x105 : 0;
  }
  ndisIfDereferenceMiniport((__int64)a1, v5 * 40, 9u);
  return v14;
}
