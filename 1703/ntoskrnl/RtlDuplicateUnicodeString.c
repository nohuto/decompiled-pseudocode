/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1404C17D0
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x140486E48 (DrvDbGetObjectDatabaseNode.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     PipAddBindingId @ 0x1405BF184 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140692B10 (PipAddRequestToEdge.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14071F280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x14071FFF4 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x14072007C (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140720204 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x14081F560 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14006EE50 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 v9; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
