/*
 * XREFs of sub_140463398 @ 0x140463398
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404631DC (ExpHwidProcessInterface.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x140180380 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x140180960 (ZwQuerySymbolicLinkObject.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 */

__int64 __fastcall sub_140463398(UNICODE_STRING *a1, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS NameStringMode; // ebx
  int v6; // edi
  void *v7; // rdi
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  char v14; // [rsp+2A0h] [rbp+1A0h] BYREF

  ObjectAttributes.ObjectName = a1;
  LinkHandle = 0LL;
  *(_DWORD *)&LinkTarget.Length = 34078720;
  ObjectAttributes.Length = 48;
  LinkTarget.Buffer = (wchar_t *)&v14;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  NameStringMode = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( NameStringMode >= 0 )
  {
    NameStringMode = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    if ( NameStringMode >= 0 )
    {
      v6 = 0;
      if ( *a2 )
      {
        while ( 1 )
        {
          v9 = 0;
          NameStringMode = ObQueryNameStringMode(
                             *(_QWORD *)&a2[2 * v6 + 2],
                             (unsigned int)&String2,
                             538,
                             (unsigned int)&v9,
                             0);
          if ( NameStringMode < 0 )
            break;
          if ( RtlEqualUnicodeString(&LinkTarget, &String2, 1u) )
          {
            v7 = *(void **)&a2[2 * v6 + 2];
            ObfReferenceObject(v7);
            if ( !v7 )
              goto LABEL_7;
            *a3 = v7;
            break;
          }
          if ( (unsigned int)++v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        NameStringMode = -1073741772;
      }
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)NameStringMode;
}
