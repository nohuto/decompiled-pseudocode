/*
 * XREFs of ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x14005D6A0
 * Callers:
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005D970 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001E2C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

const void *__fastcall ATL::CSimpleStringT<unsigned short,0>::GetBuffer(const void **a1)
{
  if ( *((int *)*a1 - 2) > 1 )
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, *((_DWORD *)*a1 - 4));
  return *a1;
}
