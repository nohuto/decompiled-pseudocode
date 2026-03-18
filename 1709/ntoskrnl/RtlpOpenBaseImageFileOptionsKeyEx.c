/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x1405EF09C
 * Callers:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x14057E428 (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_QWORD *a1)
{
  char PreviousMode; // dl
  ULONG v3; // eax
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v6; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 1600;
  v5.Length = 48;
  v5.RootDirectory = 0LL;
  if ( PreviousMode != 1 )
    v3 = 576;
  v5.Attributes = v3;
  v5.ObjectName = (PUNICODE_STRING)&unk_1402B94A0;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&v6, 9u, &v5);
  if ( result >= 0 )
  {
    *a1 = v6;
    return 0;
  }
  return result;
}
