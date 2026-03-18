/*
 * XREFs of MiInsertClone @ 0x14000163C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertClone(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v5; // rdx
  char v6; // cl
  _QWORD *v7; // rax

  v3 = a1 + 912;
  v5 = *(_QWORD **)(a1 + 912);
  v6 = 0;
  if ( v5 )
  {
    a3 = *(_QWORD *)(a2 + 24);
    while ( 1 )
    {
      if ( a3 <= v5[4] && *(_QWORD *)(a2 + 32) < v5[3] )
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v6 = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  LOBYTE(a3) = v6;
  return RtlAvlInsertNodeEx(v3, v5, a3, a2);
}
