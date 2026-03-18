/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C000F690
 * Callers:
 *     InitFNTCache @ 0x1C000F2D0 (InitFNTCache.c)
 *     QueryFontReg @ 0x1C000F5E4 (QueryFontReg.c)
 *     vGetJpn98FixPitch @ 0x1C000F700 (vGetJpn98FixPitch.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03885F8 (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetGreRegKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, PCWSTR SourceString)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
