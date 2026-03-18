/*
 * XREFs of ?push_back@?$vector@EV?$allocator@E@std@@@std@@QEAAX$$QEAE@Z @ 0x180006488
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x180006374 (-_Reserve@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 */

char __fastcall std::vector<unsigned char>::push_back(unsigned __int64 *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rdi
  _BYTE *v7; // rdx

  v2 = a1[1];
  if ( (unsigned __int64)a2 < v2 && *a1 <= (unsigned __int64)a2 )
  {
    v6 = &a2[-*a1];
    if ( v2 == a1[2] )
      LOBYTE(v2) = (unsigned __int8)std::vector<unsigned char>::_Reserve((__int64)a1, 1uLL);
    v7 = (_BYTE *)a1[1];
    if ( v7 )
    {
      v2 = *a1;
      *v7 = v6[*a1];
    }
  }
  else
  {
    if ( v2 == a1[2] )
      LOBYTE(v2) = (unsigned __int8)std::vector<unsigned char>::_Reserve((__int64)a1, 1uLL);
    v5 = (_BYTE *)a1[1];
    if ( v5 )
    {
      LOBYTE(v2) = *a2;
      *v5 = *a2;
    }
  }
  ++a1[1];
  return v2;
}
