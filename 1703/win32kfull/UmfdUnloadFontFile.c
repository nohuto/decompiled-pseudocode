/*
 * XREFs of UmfdUnloadFontFile @ 0x1C01082C0
 * Callers:
 *     <none>
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C01082F0 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
