/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1402C5DB8
 * Callers:
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1407E1868 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401642D0 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1402C5CF0 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v1 = BiOpenStoreKeyFromObject(a1, &v3);
  if ( v1 >= 0 )
    BiSetFirmwareModified(v3, 1);
  if ( v3 )
    BiCloseKey(v3);
  return (unsigned int)v1;
}
