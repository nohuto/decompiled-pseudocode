/*
 * XREFs of ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800161E0
 * Callers:
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001571C (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800160D0 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowData::GetIdealWindowRepresentationType(CWindowData *a1)
{
  if ( *((_QWORD *)a1 + 53) )
    return 2;
  else
    return CWindowData::HasNonTrivialRepresentation(a1);
}
