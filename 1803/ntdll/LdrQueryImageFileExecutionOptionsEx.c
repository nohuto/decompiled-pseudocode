/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18004AF80 (LdrQueryImageFileExecutionOptions.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_1800763CC @ 0x1800763CC (sub_1800763CC.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptionsEx(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG Type,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength,
        BOOLEAN Wow64)
{
  int v11; // eax
  NTSTATUS ImageFileKeyOption; // ebx
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( SubKey )
    v11 = sub_180076270(SubKey, 9LL, 0LL, &KeyHandle);
  else
    v11 = sub_1800763CC(&KeyHandle);
  ImageFileKeyOption = v11;
  if ( v11 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(KeyHandle, ValueName, Type, Buffer, BufferSize, ReturnedLength);
    if ( SubKey )
      ZwClose(KeyHandle);
  }
  return ImageFileKeyOption;
}
