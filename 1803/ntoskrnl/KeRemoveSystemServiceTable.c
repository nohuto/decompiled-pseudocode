/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140741870
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_1404648A0 || (_QWORD)xmmword_14044C8E0 || (_QWORD)xmmword_14044C920) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_14044C8E0 = 0LL;
      LODWORD(xmmword_14044C8F0) = 0;
      *((_QWORD *)&xmmword_14044C8F0 + 1) = 0LL;
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
