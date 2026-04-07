/*
 * XREFs of ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800362AC
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180035EBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800369B4 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 * Callees:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800361B0 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowData::GetIdealWindowRepresentationType(CWindowData *a1)
{
  if ( *((_QWORD *)a1 + 53) )
    return 2;
  else
    return CWindowData::HasNonTrivialRepresentation(a1);
}
