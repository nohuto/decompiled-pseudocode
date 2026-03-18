/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140443C40
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x140443B68 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1405A5544 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  NTSTATUS result; // eax
  char PreviousMode; // dl
  ULONG v5; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_14036F528;
  KeyHandle = (HANDLE)qword_14036F528;
  if ( qword_14036F528 )
    goto LABEL_2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( PreviousMode != 1 )
    v5 = 576;
  ObjectAttributes.Attributes = v5;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140288948;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_14036F528, (signed __int64)KeyHandle, 0LL) )
    {
      ZwClose(KeyHandle);
      v1 = (HANDLE)qword_14036F528;
    }
    else
    {
      v1 = KeyHandle;
    }
LABEL_2:
    *a1 = v1;
    return 0;
  }
  return result;
}
