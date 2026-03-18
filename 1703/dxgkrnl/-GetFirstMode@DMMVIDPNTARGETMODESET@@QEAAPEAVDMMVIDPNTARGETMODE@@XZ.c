/*
 * XREFs of ?GetFirstMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C0008880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetFirstMode(DMMVIDPNTARGETMODESET *this)
{
  char *v1; // rax
  char *v2; // rcx

  v1 = (char *)this + 48;
  v2 = (char *)*((_QWORD *)this + 6);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNTARGETMODE *)(v2 - 8);
}
