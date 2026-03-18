/*
 * XREFs of sub_1405E366C @ 0x1405E366C
 * Callers:
 *     ExpHwidProcessInterface @ 0x1405E34B0 (ExpHwidProcessInterface.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401A9980 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401A9F80 (ZwQuerySymbolicLinkObject.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1405E366C(UNICODE_STRING *a1, _DWORD *a2, _QWORD *a3)
{
  int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // rdi
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+2A0h] [rbp+1A0h] BYREF

  ObjectAttributes.ObjectName = a1;
  LinkHandle = 0LL;
  *(_DWORD *)&LinkTarget.Length = 34078720;
  ObjectAttributes.Length = 48;
  LinkTarget.Buffer = (wchar_t *)&v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    if ( v5 >= 0 )
    {
      v6 = 0;
      if ( *a2 )
      {
        while ( 1 )
        {
          v7 = v6;
          v10 = 0;
          v5 = ObQueryNameStringMode(*(char **)&a2[2 * v6 + 2], (__int64)&String2, 0x21Au, &v10, 0);
          if ( v5 < 0 )
            break;
          if ( RtlEqualUnicodeString(&LinkTarget, &String2, 1u) )
          {
            v8 = *(_QWORD *)&a2[2 * v6 + 2];
            ObfReferenceObject(*(PVOID *)&a2[2 * v7 + 2]);
            if ( !v8 )
              goto LABEL_7;
            *a3 = v8;
            break;
          }
          if ( ++v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v5 = -1073741772;
      }
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)v5;
}
