/*
 * XREFs of MiInsertClone @ 0x1401426E0
 * Callers:
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiDeleteCloneZombies @ 0x1400C9564 (MiDeleteCloneZombies.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertClone(__int64 a1, _QWORD *a2, int a3)
{
  bool v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v8; // rax

  v3 = 0;
  if ( a3 )
    MiDeleteCloneZombies(a1, 1);
  v6 = *(_QWORD **)(a1 + 912);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2[3] > v6[4] || a2[4] >= v6[3] )
      {
        v8 = (_QWORD *)v6[1];
        if ( !v8 )
        {
          v3 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v6, v3, a2);
        }
      }
      else
      {
        v8 = (_QWORD *)*v6;
        if ( !*v6 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v6, v3, a2);
      }
      v6 = v8;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 912), (unsigned __int64)v6, v3, a2);
}
