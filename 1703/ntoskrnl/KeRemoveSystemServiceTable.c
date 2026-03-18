/*
 * XREFs of KeRemoveSystemServiceTable @ 0x1406AC690
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_1403F88A0 || (_QWORD)xmmword_1403E4560 || (_QWORD)xmmword_1403E45A0) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_1403E4560 = 0LL;
      LODWORD(xmmword_1403E4570) = 0;
      *((_QWORD *)&xmmword_1403E4570 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v3] = 0LL;
      LODWORD(KeServiceDescriptorTableFilter[v3 + 1]) = 0;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
