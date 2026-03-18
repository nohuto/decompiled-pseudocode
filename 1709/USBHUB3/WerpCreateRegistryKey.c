/*
 * XREFs of WerpCreateRegistryKey @ 0x1C0037A18
 * Callers:
 *     WerKernelCreateReport @ 0x1C0037F10 (WerKernelCreateReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpCreateRegistryKey(
        void *a1,
        const WCHAR *a2,
        ACCESS_MASK a3,
        char a4,
        void **KeyHandle,
        bool *a6)
{
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-40h] BYREF

  Disposition = 0;
  if ( KeyHandle )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateKey(KeyHandle, a3, &ObjectAttributes, 0, 0LL, a4 != 0, &Disposition);
    v11 = v10;
    if ( v10 >= 0 )
    {
      if ( a6 )
        *a6 = Disposition == 1;
      return 0;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x\n", 107, v10);
    }
    return v11;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 84);
    return 3221225485LL;
  }
}
