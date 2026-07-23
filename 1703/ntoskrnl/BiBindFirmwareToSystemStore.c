/*
 * XREFs of BiBindFirmwareToSystemStore @ 0x140735468
 * Callers:
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14058BE44 (BiGetFirmwareType.c)
 *     BiBindEfiNamespaceObjects @ 0x1407364EC (BiBindEfiNamespaceObjects.c)
 */

__int64 __fastcall BiBindFirmwareToSystemStore(HANDLE BcdStoreHandle)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax

  v1 = 0;
  byte_1407AC01E = 0;
  v3 = BiGetFirmwareType() - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return (unsigned int)-1073741637;
    }
    else
    {
      return (unsigned int)BiBindEfiNamespaceObjects(BcdStoreHandle);
    }
  }
  return v1;
}
