/*
 * XREFs of ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00DAEF8
 * Callers:
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 *     ndisIfDeletePersistedInterface @ 0x1C00416D8 (ndisIfDeletePersistedInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0041CD8 (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DBE44 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisIfUpdatePersistedInterfaceInfo(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  unsigned int v7; // r15d
  _QWORD v10[10]; // [rsp+20h] [rbp-50h] BYREF

  v7 = 0;
  memset(v10, 0, sizeof(v10));
  v10[0] = 0LL;
  v10[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v10[1]) = 0;
  LODWORD(v10[3]) = 10;
  v10[4] = 0LL;
  v10[5] = a1;
  LODWORD(v10[6]) = 8;
  LODWORD(v10[7]) = 0;
  v10[9] = __PAIR64__(a3, a2);
  v10[8] = a4;
  if ( (int)NsiSetParameterEx(v10) < 0 )
    return (unsigned int)-1073741823;
  return v7;
}
