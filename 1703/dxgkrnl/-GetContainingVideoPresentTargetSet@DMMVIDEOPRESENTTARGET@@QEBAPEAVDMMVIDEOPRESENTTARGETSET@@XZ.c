/*
 * XREFs of ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C0021068
 * Callers:
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01D3F98 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  return (struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 5);
}
