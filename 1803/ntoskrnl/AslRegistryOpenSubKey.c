/*
 * XREFs of AslRegistryOpenSubKey @ 0x1407D95F8
 * Callers:
 *     AslpProcessMatchRegNode @ 0x1407DBB08 (AslpProcessMatchRegNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslRegistryOpenSubKey(PHANDLE KeyHandle, void *a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  NTSTATUS v6; // ebx
  NTSTATUS v8; // [rsp+20h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *KeyHandle = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  v6 = inited;
  if ( inited >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    v8 = inited;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslRegistryOpenSubKey",
      706,
      (unsigned int)"AslRegistryOpenSubKey passed bad Path [%x]",
      v8);
    return v6;
  }
}
