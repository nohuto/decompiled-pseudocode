/*
 * XREFs of ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C001D9F8
 * Callers:
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01EF670 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(
        DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  return (struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 5);
}
