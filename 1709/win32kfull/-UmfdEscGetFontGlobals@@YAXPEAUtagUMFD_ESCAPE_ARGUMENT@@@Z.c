/*
 * XREFs of ?UmfdEscGetFontGlobals@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0144E04
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdEscGetFontGlobals(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  int v1; // [rsp+8h] [rbp+8h]

  *((_DWORD *)a1 + 2) = (gbJpn98FixPitch != 0) | v1 & 0xFFFFFFFE;
}
