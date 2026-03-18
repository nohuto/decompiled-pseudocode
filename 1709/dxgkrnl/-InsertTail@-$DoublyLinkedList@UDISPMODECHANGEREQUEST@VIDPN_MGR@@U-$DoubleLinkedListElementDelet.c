/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000A804
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000A7A4 (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C000A870 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000EBF0 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // r8
  char result; // al

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
  v5 = a2 + 1;
  v6 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v6 != a1 + 2 )
    __fastfail(3u);
  *v5 = a1 + 2;
  v5[1] = v6;
  *v6 = v5;
  a1[3] = v5;
  result = 1;
  ++a1[4];
  return result;
}
