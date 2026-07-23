/*
 * XREFs of sub_18003FC1C @ 0x18003FC1C
 * Callers:
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 */

NTSTATUS __fastcall sub_18003FC1C(_UNICODE_STRING *a1, _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx
  _UNICODE_STRING v6; // xmm0
  _UNICODE_STRING *v7; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v8; // [rsp+48h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_18003D190(1, a1, &a2->Length, &v8.Length, &v7, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( v7 == &v8 )
    {
      Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)a2->Buffer;
      if ( &a2[1] != (_UNICODE_STRING *)Buffer )
        RtlDeleteBoundaryDescriptor(Buffer);
      v6 = v8;
      *(_DWORD *)&a2->Length = 0x1000000;
      a2[1].Length = 0;
      *a2 = v6;
    }
    v4 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !byte_18015C318 )
      v4 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
