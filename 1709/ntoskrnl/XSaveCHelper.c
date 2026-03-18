/*
 * XREFs of XSaveCHelper @ 0x140189C00
 * Callers:
 *     RtlXSave @ 0x14012EAA8 (RtlXSave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveCHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsavec  byte ptr [rcx] }
  return result;
}
