/*
 * XREFs of ?GetFirstTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@XZ @ 0x1C0004510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetFirstTarget(DMMVIDEOPRESENTTARGETSET *this)
{
  struct DMMVIDEOPRESENTTARGET *result; // rax
  DMMVIDEOPRESENTTARGETSET *v2; // rdx

  result = 0LL;
  v2 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v2 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    return (DMMVIDEOPRESENTTARGETSET *)((char *)v2 - 8);
  return result;
}
