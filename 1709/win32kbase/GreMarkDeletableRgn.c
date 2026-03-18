/*
 * XREFs of GreMarkDeletableRgn @ 0x1C00801C0
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkDeletable @ 0x1C00801F0 (HmgMarkDeletable.c)
 */

__int64 __fastcall GreMarkDeletableRgn(struct HOBJ__ *a1)
{
  PsGetCurrentProcessId();
  return HmgMarkDeletable(a1);
}
