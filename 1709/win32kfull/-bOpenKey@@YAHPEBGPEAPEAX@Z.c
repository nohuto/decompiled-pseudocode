/*
 * XREFs of ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00C0834
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00C0450 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitStockFontsInternal @ 0x1C038220C (bInitStockFontsInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C038287C (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bOpenKey(PCWSTR SourceString, PHANDLE KeyHandle)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0, &ObjectAttributes) >= 0;
}
