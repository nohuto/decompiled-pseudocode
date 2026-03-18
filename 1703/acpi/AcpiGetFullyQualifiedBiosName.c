/*
 * XREFs of AcpiGetFullyQualifiedBiosName @ 0x1C009E9B0
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0009384 (OSConvertDeviceHandleToNSHANDLE.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001447C (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIInitUnicodeString @ 0x1C008E350 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall AcpiGetFullyQualifiedBiosName(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  unsigned __int16 Length; // cx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int32 *v14; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  P = 0LL;
  *a4 = 0;
  v7 = OSConvertDeviceHandleToNSHANDLE(a1);
  v9 = AMLIGetNameSpaceObject(*(_BYTE **)(a2 + 8), v7, &v14);
  if ( v9 >= 0 )
  {
    v9 = ACPIAmliBuildObjectPathname((__int64)v14, &P, 1);
    if ( v9 >= 0 )
    {
      v9 = ACPIInitUnicodeString(&SourceString, (const char *)P);
      if ( v9 >= 0 )
      {
        Length = SourceString.Length;
        *a4 = SourceString.Length + 2;
        if ( Length <= a3->MaximumLength )
        {
          RtlCopyUnicodeString(a3, &SourceString);
          v9 = 0;
          v8 = (unsigned __int16)((a3->MaximumLength >> 1) - 1);
          a3->Buffer[v8] = 0;
        }
        else
        {
          v9 = -1073741789;
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x53706341u);
  if ( v14 )
    AMLIDereferenceHandleEx(v14, v8);
  return (unsigned int)v9;
}
