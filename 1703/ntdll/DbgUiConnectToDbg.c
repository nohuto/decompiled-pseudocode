/*
 * XREFs of DbgUiConnectToDbg @ 0x1800D4D40
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateDebugObject @ 0x1800A66B0 (ZwCreateDebugObject.c)
 */

NTSTATUS DbgUiConnectToDbg(void)
{
  NTSTATUS v0; // ecx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    return ZwCreateDebugObject(&NtCurrentTeb()->DbgSsReserved[1], 0x1F000Fu, &ObjectAttributes, 1u);
  }
  return v0;
}
