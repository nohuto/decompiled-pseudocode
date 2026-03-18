/*
 * XREFs of vRestoreRegion @ 0x1C007C950
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  bool v4; // zf

  v2 = *(REGION **)(*(_QWORD *)a1 + 232LL);
  if ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 8))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v2);
  }
  v3 = *(REGION **)(*(_QWORD *)a1 + 224LL);
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 8))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v3);
  }
}
