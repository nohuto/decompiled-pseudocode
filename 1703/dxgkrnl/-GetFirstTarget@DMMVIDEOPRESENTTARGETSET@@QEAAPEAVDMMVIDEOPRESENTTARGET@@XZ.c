/*
 * XREFs of ?GetFirstTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@XZ @ 0x1C0044FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetFirstTarget(DMMVIDEOPRESENTTARGETSET *this)
{
  char *v1; // rax
  char *v2; // rcx

  v1 = (char *)this + 24;
  v2 = (char *)*((_QWORD *)this + 3);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct DMMVIDEOPRESENTTARGET *)(v2 - 8);
}
