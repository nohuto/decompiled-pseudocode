/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140265E54
 * Callers:
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x140265D40 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x140265E08 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v1 = BiOpenStoreKeyFromObject(a1, &Handle);
  if ( v1 >= 0 )
    BiSetFirmwareModified((__int64)Handle, 1);
  if ( Handle )
    BiCloseKey(Handle);
  return (unsigned int)v1;
}
