/*
 * XREFs of sub_18004AB20 @ 0x18004AB20
 * Callers:
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

NTSTATUS __fastcall sub_18004AB20(_UNICODE_STRING *a1, _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx
  _UNICODE_STRING v6; // xmm0
  _UNICODE_STRING *v7; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v8; // [rsp+48h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_18003E060(1, 0, a1, a2, &v8, &v7, 0LL, 0LL);
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
    if ( !byte_18015B2E8 )
      v4 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
