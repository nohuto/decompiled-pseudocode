/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1404DF8A0
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140533A0C (DrvDbGetObjectDatabaseNode.c)
 *     PipAddBindingId @ 0x1405D23B4 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x1406BE7C0 (PipAddRequestToEdge.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14075F0F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x14075FE64 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x14075FEEC (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140760074 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x14084FEA0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x1400AEE30 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // si
  unsigned __int16 Length; // di
  wchar_t *v7; // r14
  ULONG v8; // r12d
  NTSTATUS result; // eax
  int v10; // esi
  unsigned __int16 v11; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  v10 = v5 & 1;
  if ( v10 && Length == 0xFFFE )
    return -1073741562;
  if ( v10 )
    v11 = Length + 2;
  else
    v11 = Length;
  if ( !v8 && !Length )
    v11 = 0;
  if ( !v11 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v11);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( v10 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v11;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
