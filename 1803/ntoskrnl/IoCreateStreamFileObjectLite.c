/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x140592DB0
 * Callers:
 *     RawMountVolume @ 0x140495738 (RawMountVolume.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]
  struct _FILE_OBJECT *v5; // [rsp+60h] [rbp+18h] BYREF

  v3[1] = 0;
  v4 = 0LL;
  v3[0] = 196624;
  IoCreateStreamFileObjectEx2(v3, FileObject, DeviceObject, &v5, 0LL);
  return v5;
}
