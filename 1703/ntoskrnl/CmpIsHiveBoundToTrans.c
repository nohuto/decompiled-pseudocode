/*
 * XREFs of CmpIsHiveBoundToTrans @ 0x14042E8A4
 * Callers:
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsHiveBoundToTrans(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  _QWORD *i; // rcx

  v2 = *(_DWORD *)(a2 + 112);
  v3 = 0;
  if ( v2 )
  {
    for ( i = (_QWORD *)(a2 + 120); a1 != *i; ++i )
    {
      if ( ++v3 >= v2 )
        return 0;
    }
  }
  return 1;
}
