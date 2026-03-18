/*
 * XREFs of IsCurrentCodePageDBCS @ 0x1C0226058
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C022A32C (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentCodePageDBCS()
{
  unsigned int v0; // eax
  int v1; // ecx
  _BOOL8 result; // rax
  USHORT AnsiCodePage; // [rsp+30h] [rbp+8h] BYREF
  USHORT OemCodePage; // [rsp+38h] [rbp+10h] BYREF

  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  v0 = AnsiCodePage;
  result = (unsigned __int16)(AnsiCodePage - 932) <= 0x12u
        && (v1 = 393233, LOWORD(v0) = AnsiCodePage - 932, _bittest(&v1, v0))
        || AnsiCodePage == 1361;
  return result;
}
