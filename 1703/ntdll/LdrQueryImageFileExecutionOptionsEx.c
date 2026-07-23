/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18007C280 (LdrQueryImageFileExecutionOptions.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     sub_18007C40C @ 0x18007C40C (sub_18007C40C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
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
    v11 = sub_18007C34C(SubKey, 9LL, &KeyHandle);
  else
    v11 = sub_18007C40C(&KeyHandle);
  ImageFileKeyOption = v11;
  if ( v11 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(KeyHandle, ValueName, Type, Buffer, BufferSize, ReturnedLength);
    if ( SubKey )
      ZwClose(KeyHandle);
  }
  return ImageFileKeyOption;
}
