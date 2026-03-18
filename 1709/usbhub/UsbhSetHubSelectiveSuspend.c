/*
 * XREFs of UsbhSetHubSelectiveSuspend @ 0x1C004D130
 * Callers:
 *     UsbhSetWmiDataBlock @ 0x1C004F740 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C001FFA8 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetHubSelectiveSuspend(__int64 a1, char a2)
{
  PDEVICE_OBJECT *v2; // rax
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2 != 0;
  v2 = (PDEVICE_OBJECT *)FdoExt(a1);
  return UsbhSetPdoRegistryParameter(v2[149], L"EnableSelectiveSuspend", 4u, &Data, 4u);
}
