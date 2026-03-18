/*
 * XREFs of DpiUnmapIommuContiguous @ 0x1C01F0370
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C00408A4 (DpiUnmapIommuContiguousInternal.c)
 */

void __fastcall DpiUnmapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  DpiUnmapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3);
}
