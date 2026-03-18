/*
 * XREFs of AcpiGetFullyQualifiedBiosName @ 0x1C00A19A0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0002A1C (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000D35C (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     ACPIInitUnicodeString @ 0x1C0087D3C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall AcpiGetFullyQualifiedBiosName(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 *v7; // rax
  int v8; // ebx
  unsigned __int16 Length; // cx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+48h] BYREF

  v13 = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  P = 0LL;
  *a4 = 0;
  v7 = (__int64 *)OSConvertDeviceHandleToNSHANDLE(a1);
  v8 = AMLIGetNameSpaceObject(*(_BYTE **)(a2 + 8), v7, (__int64 *)&v13, 0);
  if ( v8 >= 0 )
  {
    v8 = ACPIAmliBuildObjectPathname(v13, &P, 1);
    if ( v8 >= 0 )
    {
      v8 = ACPIInitUnicodeString(&SourceString, (const char *)P);
      if ( v8 >= 0 )
      {
        Length = SourceString.Length;
        *a4 = SourceString.Length + 2;
        if ( Length <= a3->MaximumLength )
        {
          RtlCopyUnicodeString(a3, &SourceString);
          v8 = 0;
          a3->Buffer[(unsigned __int16)((a3->MaximumLength >> 1) - 1)] = 0;
        }
        else
        {
          v8 = -1073741789;
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x53706341u);
  if ( v13 )
    AMLIDereferenceHandleEx((__int64)v13);
  return (unsigned int)v8;
}
