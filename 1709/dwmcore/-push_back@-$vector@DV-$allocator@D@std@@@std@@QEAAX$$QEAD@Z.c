/*
 * XREFs of ?push_back@?$vector@DV?$allocator@D@std@@@std@@QEAAX$$QEAD@Z @ 0x1800060BC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Reserve@?$vector@DV?$allocator@D@std@@@std@@IEAAX_K@Z @ 0x180006258 (-_Reserve@-$vector@DV-$allocator@D@std@@@std@@IEAAX_K@Z.c)
 */

char __fastcall std::vector<char>::push_back(unsigned __int64 *a1, _BYTE *a2)
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
      LOBYTE(v2) = std::vector<char>::_Reserve();
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
      LOBYTE(v2) = std::vector<char>::_Reserve();
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
