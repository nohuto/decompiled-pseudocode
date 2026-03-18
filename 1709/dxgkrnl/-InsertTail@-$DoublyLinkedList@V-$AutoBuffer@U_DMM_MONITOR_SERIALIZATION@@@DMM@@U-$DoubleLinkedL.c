/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C001D908
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z @ 0x1C001E0F4 (-Add@-$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00364C8 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::InsertTail(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  char result; // al
  _QWORD *v6; // rdx
  _QWORD *v7; // r8

  if ( a2 )
  {
    v2 = (_QWORD *)a1[2];
    if ( v2 != a1 + 2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        do
        {
          if ( v3 == a2 )
            break;
          v4 = (_QWORD *)v3[1];
          v3 = v4 - 1;
          if ( v4 == a1 + 2 )
            v3 = 0LL;
        }
        while ( v3 );
        if ( v3 )
          return 0;
      }
    }
  }
  v6 = a2 + 1;
  v7 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v7 != a1 + 2 )
    __fastfail(3u);
  *v6 = a1 + 2;
  v6[1] = v7;
  *v7 = v6;
  a1[3] = v6;
  result = 1;
  ++a1[4];
  return result;
}
